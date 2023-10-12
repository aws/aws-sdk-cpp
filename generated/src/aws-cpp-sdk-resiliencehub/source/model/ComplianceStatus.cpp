/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ComplianceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResilienceHub
  {
    namespace Model
    {
      namespace ComplianceStatusMapper
      {

        static constexpr uint32_t PolicyBreached_HASH = ConstExprHashingUtils::HashString("PolicyBreached");
        static constexpr uint32_t PolicyMet_HASH = ConstExprHashingUtils::HashString("PolicyMet");


        ComplianceStatus GetComplianceStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PolicyBreached_HASH)
          {
            return ComplianceStatus::PolicyBreached;
          }
          else if (hashCode == PolicyMet_HASH)
          {
            return ComplianceStatus::PolicyMet;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComplianceStatus>(hashCode);
          }

          return ComplianceStatus::NOT_SET;
        }

        Aws::String GetNameForComplianceStatus(ComplianceStatus enumValue)
        {
          switch(enumValue)
          {
          case ComplianceStatus::NOT_SET:
            return {};
          case ComplianceStatus::PolicyBreached:
            return "PolicyBreached";
          case ComplianceStatus::PolicyMet:
            return "PolicyMet";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComplianceStatusMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
