/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/SummaryRuleOption.h>
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
      namespace SummaryRuleOptionMapper
      {

        static const int SID_HASH = HashingUtils::HashString("SID");
        static const int MSG_HASH = HashingUtils::HashString("MSG");
        static const int METADATA_HASH = HashingUtils::HashString("METADATA");


        SummaryRuleOption GetSummaryRuleOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SID_HASH)
          {
            return SummaryRuleOption::SID;
          }
          else if (hashCode == MSG_HASH)
          {
            return SummaryRuleOption::MSG;
          }
          else if (hashCode == METADATA_HASH)
          {
            return SummaryRuleOption::METADATA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SummaryRuleOption>(hashCode);
          }

          return SummaryRuleOption::NOT_SET;
        }

        Aws::String GetNameForSummaryRuleOption(SummaryRuleOption enumValue)
        {
          switch(enumValue)
          {
          case SummaryRuleOption::NOT_SET:
            return {};
          case SummaryRuleOption::SID:
            return "SID";
          case SummaryRuleOption::MSG:
            return "MSG";
          case SummaryRuleOption::METADATA:
            return "METADATA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SummaryRuleOptionMapper
    } // namespace Model
  } // namespace NetworkFirewall
} // namespace Aws
