/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/RevocationCheckAction.h>
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
      namespace RevocationCheckActionMapper
      {

        static const int PASS_HASH = HashingUtils::HashString("PASS");
        static const int DROP_HASH = HashingUtils::HashString("DROP");
        static const int REJECT_HASH = HashingUtils::HashString("REJECT");


        RevocationCheckAction GetRevocationCheckActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASS_HASH)
          {
            return RevocationCheckAction::PASS;
          }
          else if (hashCode == DROP_HASH)
          {
            return RevocationCheckAction::DROP;
          }
          else if (hashCode == REJECT_HASH)
          {
            return RevocationCheckAction::REJECT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RevocationCheckAction>(hashCode);
          }

          return RevocationCheckAction::NOT_SET;
        }

        Aws::String GetNameForRevocationCheckAction(RevocationCheckAction enumValue)
        {
          switch(enumValue)
          {
          case RevocationCheckAction::NOT_SET:
            return {};
          case RevocationCheckAction::PASS:
            return "PASS";
          case RevocationCheckAction::DROP:
            return "DROP";
          case RevocationCheckAction::REJECT:
            return "REJECT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RevocationCheckActionMapper
    } // namespace Model
  } // namespace NetworkFirewall
} // namespace Aws
