/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/RobotSoftwareSuiteType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RoboMaker
  {
    namespace Model
    {
      namespace RobotSoftwareSuiteTypeMapper
      {

        static constexpr uint32_t ROS_HASH = ConstExprHashingUtils::HashString("ROS");
        static constexpr uint32_t ROS2_HASH = ConstExprHashingUtils::HashString("ROS2");
        static constexpr uint32_t General_HASH = ConstExprHashingUtils::HashString("General");


        RobotSoftwareSuiteType GetRobotSoftwareSuiteTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ROS_HASH)
          {
            return RobotSoftwareSuiteType::ROS;
          }
          else if (hashCode == ROS2_HASH)
          {
            return RobotSoftwareSuiteType::ROS2;
          }
          else if (hashCode == General_HASH)
          {
            return RobotSoftwareSuiteType::General;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RobotSoftwareSuiteType>(hashCode);
          }

          return RobotSoftwareSuiteType::NOT_SET;
        }

        Aws::String GetNameForRobotSoftwareSuiteType(RobotSoftwareSuiteType enumValue)
        {
          switch(enumValue)
          {
          case RobotSoftwareSuiteType::NOT_SET:
            return {};
          case RobotSoftwareSuiteType::ROS:
            return "ROS";
          case RobotSoftwareSuiteType::ROS2:
            return "ROS2";
          case RobotSoftwareSuiteType::General:
            return "General";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RobotSoftwareSuiteTypeMapper
    } // namespace Model
  } // namespace RoboMaker
} // namespace Aws
