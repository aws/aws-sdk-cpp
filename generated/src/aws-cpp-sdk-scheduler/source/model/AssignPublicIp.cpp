/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/scheduler/model/AssignPublicIp.h>
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
      namespace AssignPublicIpMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        AssignPublicIp GetAssignPublicIpForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return AssignPublicIp::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return AssignPublicIp::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssignPublicIp>(hashCode);
          }

          return AssignPublicIp::NOT_SET;
        }

        Aws::String GetNameForAssignPublicIp(AssignPublicIp enumValue)
        {
          switch(enumValue)
          {
          case AssignPublicIp::ENABLED:
            return "ENABLED";
          case AssignPublicIp::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssignPublicIpMapper
    } // namespace Model
  } // namespace Scheduler
} // namespace Aws
