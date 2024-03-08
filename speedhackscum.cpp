if (g.find(xor ("BP_Prisoner_C")) != std::string::npos)
				{
					tslEntity.Mesh = read<uint64_t>(actor + 0x280);
					tslEntity.PlayerState = playerstate;
					tmpList.push_back(tslEntity);

					if (visuals::speedhackbool) 
						write<float>(actor + 0x98, visuals::speedhack);
					else 
						write<float>(actor + 0x98, 1.f); //speedoffset
        }
}
					
