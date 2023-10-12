/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/RobotSoftwareSuiteVersionType.h>
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
      namespace RobotSoftwareSuiteVersionTypeMapper
      {

        static constexpr uint32_t Kinetic_HASH = ConstExprHashingUtils::HashString("Kinetic");
        static constexpr uint32_t Melodic_HASH = ConstExprHashingUtils::HashString("Melodic");
        static constexpr uint32_t Dashing_HASH = ConstExprHashingUtils::HashString("Dashing");
        static constexpr uint32_t Foxy_HASH = ConstExprHashingUtils::HashString("Foxy");


        RobotSoftwareSuiteVersionType GetRobotSoftwareSuiteVersionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Kinetic_HASH)
          {
            return RobotSoftwareSuiteVersionType::Kinetic;
          }
          else if (hashCode == Melodic_HASH)
          {
            return RobotSoftwareSuiteVersionType::Melodic;
          }
          else if (hashCode == Dashing_HASH)
          {
            return RobotSoftwareSuiteVersionType::Dashing;
          }
          else if (hashCode == Foxy_HASH)
          {
            return RobotSoftwareSuiteVersionType::Foxy;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RobotSoftwareSuiteVersionType>(hashCode);
          }

          return RobotSoftwareSuiteVersionType::NOT_SET;
        }

        Aws::String GetNameForRobotSoftwareSuiteVersionType(RobotSoftwareSuiteVersionType enumValue)
        {
          switch(enumValue)
          {
          case RobotSoftwareSuiteVersionType::NOT_SET:
            return {};
          case RobotSoftwareSuiteVersionType::Kinetic:
            return "Kinetic";
          case RobotSoftwareSuiteVersionType::Melodic:
            return "Melodic";
          case RobotSoftwareSuiteVersionType::Dashing:
            return "Dashing";
          case RobotSoftwareSuiteVersionType::Foxy:
            return "Foxy";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RobotSoftwareSuiteVersionTypeMapper
    } // namespace Model
  } // namespace RoboMaker
} // namespace Aws
