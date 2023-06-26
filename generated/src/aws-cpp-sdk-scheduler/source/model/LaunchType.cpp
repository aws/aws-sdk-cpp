/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/scheduler/model/LaunchType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Scheduler
  {
    namespace Model
    {
      namespace LaunchTypeMapper
      {

        static const int EC2_HASH = HashingUtils::HashString("EC2");
        static const int FARGATE_HASH = HashingUtils::HashString("FARGATE");
        static const int EXTERNAL_HASH = HashingUtils::HashString("EXTERNAL");


        LaunchType GetLaunchTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EC2_HASH)
          {
            return LaunchType::EC2;
          }
          else if (hashCode == FARGATE_HASH)
          {
            return LaunchType::FARGATE;
          }
          else if (hashCode == EXTERNAL_HASH)
          {
            return LaunchType::EXTERNAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LaunchType>(hashCode);
          }

          return LaunchType::NOT_SET;
        }

        Aws::String GetNameForLaunchType(LaunchType enumValue)
        {
          switch(enumValue)
          {
          case LaunchType::EC2:
            return "EC2";
          case LaunchType::FARGATE:
            return "FARGATE";
          case LaunchType::EXTERNAL:
            return "EXTERNAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LaunchTypeMapper
    } // namespace Model
  } // namespace Scheduler
} // namespace Aws
