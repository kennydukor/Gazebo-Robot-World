#include <gazebo/gazebo.hh>

namespace gazebo
{
	//inherit from WorldPlugin class
	class WorldPluginWheeledRobot: public WorldPlugin
	{
		public: WorldPluginWheeledRobot(): WorldPlugin()
		{
			printf("Hello Kenechi!\n");
		}		
		
		// This is mandatory to recieve information from the world file
		public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
		{
		
		}
	};
	GZ_REGISTER_WORLD_PLUGIN(WorldPluginWheeledRobot)
}

// Note: this should be build with cmake
// Dont forget to export this -> export GAZEBO_PLUGIN_PATH=${GAZEBO_PLUGIN_PATH}:/home/robond/Documents/Robot_Project/build
