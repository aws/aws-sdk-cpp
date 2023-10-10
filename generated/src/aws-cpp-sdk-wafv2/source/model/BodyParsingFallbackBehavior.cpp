/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/BodyParsingFallbackBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAFV2
  {
    namespace Model
    {
      namespace BodyParsingFallbackBehaviorMapper
      {

        static const int MATCH_HASH = HashingUtils::HashString("MATCH");
        static const int NO_MATCH_HASH = HashingUtils::HashString("NO_MATCH");
        static const int EVALUATE_AS_STRING_HASH = HashingUtils::HashString("EVALUATE_AS_STRING");


        BodyParsingFallbackBehavior GetBodyParsingFallbackBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MATCH_HASH)
          {
            return BodyParsingFallbackBehavior::MATCH;
          }
          else if (hashCode == NO_MATCH_HASH)
          {
            return BodyParsingFallbackBehavior::NO_MATCH;
          }
          else if (hashCode == EVALUATE_AS_STRING_HASH)
          {
            return BodyParsingFallbackBehavior::EVALUATE_AS_STRING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BodyParsingFallbackBehavior>(hashCode);
          }

          return BodyParsingFallbackBehavior::NOT_SET;
        }

        Aws::String GetNameForBodyParsingFallbackBehavior(BodyParsingFallbackBehavior enumValue)
        {
          switch(enumValue)
          {
          case BodyParsingFallbackBehavior::NOT_SET:
            return {};
          case BodyParsingFallbackBehavior::MATCH:
            return "MATCH";
          case BodyParsingFallbackBehavior::NO_MATCH:
            return "NO_MATCH";
          case BodyParsingFallbackBehavior::EVALUATE_AS_STRING:
            return "EVALUATE_AS_STRING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BodyParsingFallbackBehaviorMapper
    } // namespace Model
  } // namespace WAFV2
} // namespace Aws
