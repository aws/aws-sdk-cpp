/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/OverrideAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkFirewall
  {
    namespace Model
    {
      namespace OverrideActionMapper
      {

        static const int DROP_TO_ALERT_HASH = HashingUtils::HashString("DROP_TO_ALERT");


        OverrideAction GetOverrideActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DROP_TO_ALERT_HASH)
          {
            return OverrideAction::DROP_TO_ALERT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OverrideAction>(hashCode);
          }

          return OverrideAction::NOT_SET;
        }

        Aws::String GetNameForOverrideAction(OverrideAction enumValue)
        {
          switch(enumValue)
          {
          case OverrideAction::NOT_SET:
            return {};
          case OverrideAction::DROP_TO_ALERT:
            return "DROP_TO_ALERT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OverrideActionMapper
    } // namespace Model
  } // namespace NetworkFirewall
} // namespace Aws
