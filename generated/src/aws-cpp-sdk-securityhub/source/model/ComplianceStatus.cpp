/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ComplianceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace ComplianceStatusMapper
      {

        static constexpr uint32_t PASSED_HASH = ConstExprHashingUtils::HashString("PASSED");
        static constexpr uint32_t WARNING_HASH = ConstExprHashingUtils::HashString("WARNING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t NOT_AVAILABLE_HASH = ConstExprHashingUtils::HashString("NOT_AVAILABLE");


        ComplianceStatus GetComplianceStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASSED_HASH)
          {
            return ComplianceStatus::PASSED;
          }
          else if (hashCode == WARNING_HASH)
          {
            return ComplianceStatus::WARNING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ComplianceStatus::FAILED;
          }
          else if (hashCode == NOT_AVAILABLE_HASH)
          {
            return ComplianceStatus::NOT_AVAILABLE;
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
          case ComplianceStatus::PASSED:
            return "PASSED";
          case ComplianceStatus::WARNING:
            return "WARNING";
          case ComplianceStatus::FAILED:
            return "FAILED";
          case ComplianceStatus::NOT_AVAILABLE:
            return "NOT_AVAILABLE";
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
  } // namespace SecurityHub
} // namespace Aws
