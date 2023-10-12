/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/JsonMatchScope.h>
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
      namespace JsonMatchScopeMapper
      {

        static constexpr uint32_t ALL_HASH = ConstExprHashingUtils::HashString("ALL");
        static constexpr uint32_t KEY_HASH = ConstExprHashingUtils::HashString("KEY");
        static constexpr uint32_t VALUE_HASH = ConstExprHashingUtils::HashString("VALUE");


        JsonMatchScope GetJsonMatchScopeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return JsonMatchScope::ALL;
          }
          else if (hashCode == KEY_HASH)
          {
            return JsonMatchScope::KEY;
          }
          else if (hashCode == VALUE_HASH)
          {
            return JsonMatchScope::VALUE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JsonMatchScope>(hashCode);
          }

          return JsonMatchScope::NOT_SET;
        }

        Aws::String GetNameForJsonMatchScope(JsonMatchScope enumValue)
        {
          switch(enumValue)
          {
          case JsonMatchScope::NOT_SET:
            return {};
          case JsonMatchScope::ALL:
            return "ALL";
          case JsonMatchScope::KEY:
            return "KEY";
          case JsonMatchScope::VALUE:
            return "VALUE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JsonMatchScopeMapper
    } // namespace Model
  } // namespace WAFV2
} // namespace Aws
