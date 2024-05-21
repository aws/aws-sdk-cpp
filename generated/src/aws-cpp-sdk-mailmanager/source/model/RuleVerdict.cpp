/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/RuleVerdict.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MailManager
  {
    namespace Model
    {
      namespace RuleVerdictMapper
      {

        static const int PASS_HASH = HashingUtils::HashString("PASS");
        static const int FAIL_HASH = HashingUtils::HashString("FAIL");
        static const int GRAY_HASH = HashingUtils::HashString("GRAY");
        static const int PROCESSING_FAILED_HASH = HashingUtils::HashString("PROCESSING_FAILED");


        RuleVerdict GetRuleVerdictForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASS_HASH)
          {
            return RuleVerdict::PASS;
          }
          else if (hashCode == FAIL_HASH)
          {
            return RuleVerdict::FAIL;
          }
          else if (hashCode == GRAY_HASH)
          {
            return RuleVerdict::GRAY;
          }
          else if (hashCode == PROCESSING_FAILED_HASH)
          {
            return RuleVerdict::PROCESSING_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleVerdict>(hashCode);
          }

          return RuleVerdict::NOT_SET;
        }

        Aws::String GetNameForRuleVerdict(RuleVerdict enumValue)
        {
          switch(enumValue)
          {
          case RuleVerdict::NOT_SET:
            return {};
          case RuleVerdict::PASS:
            return "PASS";
          case RuleVerdict::FAIL:
            return "FAIL";
          case RuleVerdict::GRAY:
            return "GRAY";
          case RuleVerdict::PROCESSING_FAILED:
            return "PROCESSING_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleVerdictMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
