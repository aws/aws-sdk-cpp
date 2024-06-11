/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/SendViaMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkManager
  {
    namespace Model
    {
      namespace SendViaModeMapper
      {

        static const int dual_hop_HASH = HashingUtils::HashString("dual-hop");
        static const int single_hop_HASH = HashingUtils::HashString("single-hop");


        SendViaMode GetSendViaModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == dual_hop_HASH)
          {
            return SendViaMode::dual_hop;
          }
          else if (hashCode == single_hop_HASH)
          {
            return SendViaMode::single_hop;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SendViaMode>(hashCode);
          }

          return SendViaMode::NOT_SET;
        }

        Aws::String GetNameForSendViaMode(SendViaMode enumValue)
        {
          switch(enumValue)
          {
          case SendViaMode::NOT_SET:
            return {};
          case SendViaMode::dual_hop:
            return "dual-hop";
          case SendViaMode::single_hop:
            return "single-hop";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SendViaModeMapper
    } // namespace Model
  } // namespace NetworkManager
} // namespace Aws
