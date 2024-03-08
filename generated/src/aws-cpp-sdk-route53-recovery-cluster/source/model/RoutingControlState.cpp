/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-cluster/model/RoutingControlState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53RecoveryCluster
  {
    namespace Model
    {
      namespace RoutingControlStateMapper
      {

        static const int On_HASH = HashingUtils::HashString("On");
        static const int Off_HASH = HashingUtils::HashString("Off");


        RoutingControlState GetRoutingControlStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == On_HASH)
          {
            return RoutingControlState::On;
          }
          else if (hashCode == Off_HASH)
          {
            return RoutingControlState::Off;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RoutingControlState>(hashCode);
          }

          return RoutingControlState::NOT_SET;
        }

        Aws::String GetNameForRoutingControlState(RoutingControlState enumValue)
        {
          switch(enumValue)
          {
          case RoutingControlState::NOT_SET:
            return {};
          case RoutingControlState::On:
            return "On";
          case RoutingControlState::Off:
            return "Off";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RoutingControlStateMapper
    } // namespace Model
  } // namespace Route53RecoveryCluster
} // namespace Aws
