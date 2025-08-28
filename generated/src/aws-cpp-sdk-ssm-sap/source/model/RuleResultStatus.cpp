/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/RuleResultStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SsmSap
  {
    namespace Model
    {
      namespace RuleResultStatusMapper
      {

        static const int PASSED_HASH = HashingUtils::HashString("PASSED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int WARNING_HASH = HashingUtils::HashString("WARNING");
        static const int INFO_HASH = HashingUtils::HashString("INFO");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");


        RuleResultStatus GetRuleResultStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASSED_HASH)
          {
            return RuleResultStatus::PASSED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return RuleResultStatus::FAILED;
          }
          else if (hashCode == WARNING_HASH)
          {
            return RuleResultStatus::WARNING;
          }
          else if (hashCode == INFO_HASH)
          {
            return RuleResultStatus::INFO;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return RuleResultStatus::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleResultStatus>(hashCode);
          }

          return RuleResultStatus::NOT_SET;
        }

        Aws::String GetNameForRuleResultStatus(RuleResultStatus enumValue)
        {
          switch(enumValue)
          {
          case RuleResultStatus::NOT_SET:
            return {};
          case RuleResultStatus::PASSED:
            return "PASSED";
          case RuleResultStatus::FAILED:
            return "FAILED";
          case RuleResultStatus::WARNING:
            return "WARNING";
          case RuleResultStatus::INFO:
            return "INFO";
          case RuleResultStatus::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleResultStatusMapper
    } // namespace Model
  } // namespace SsmSap
} // namespace Aws
