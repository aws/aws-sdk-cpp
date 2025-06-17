/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/RuleStatusV2.h>
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
      namespace RuleStatusV2Mapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        RuleStatusV2 GetRuleStatusV2ForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return RuleStatusV2::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return RuleStatusV2::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleStatusV2>(hashCode);
          }

          return RuleStatusV2::NOT_SET;
        }

        Aws::String GetNameForRuleStatusV2(RuleStatusV2 enumValue)
        {
          switch(enumValue)
          {
          case RuleStatusV2::NOT_SET:
            return {};
          case RuleStatusV2::ENABLED:
            return "ENABLED";
          case RuleStatusV2::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleStatusV2Mapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
