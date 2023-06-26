﻿/**
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

        static const int PASSED_HASH = HashingUtils::HashString("PASSED");
        static const int WARNING_HASH = HashingUtils::HashString("WARNING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int NOT_AVAILABLE_HASH = HashingUtils::HashString("NOT_AVAILABLE");


        ComplianceStatus GetComplianceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
