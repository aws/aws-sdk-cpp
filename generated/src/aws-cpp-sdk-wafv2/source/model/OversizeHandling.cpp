/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/OversizeHandling.h>
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
      namespace OversizeHandlingMapper
      {

        static constexpr uint32_t CONTINUE_HASH = ConstExprHashingUtils::HashString("CONTINUE");
        static constexpr uint32_t MATCH_HASH = ConstExprHashingUtils::HashString("MATCH");
        static constexpr uint32_t NO_MATCH_HASH = ConstExprHashingUtils::HashString("NO_MATCH");


        OversizeHandling GetOversizeHandlingForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONTINUE_HASH)
          {
            return OversizeHandling::CONTINUE;
          }
          else if (hashCode == MATCH_HASH)
          {
            return OversizeHandling::MATCH;
          }
          else if (hashCode == NO_MATCH_HASH)
          {
            return OversizeHandling::NO_MATCH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OversizeHandling>(hashCode);
          }

          return OversizeHandling::NOT_SET;
        }

        Aws::String GetNameForOversizeHandling(OversizeHandling enumValue)
        {
          switch(enumValue)
          {
          case OversizeHandling::NOT_SET:
            return {};
          case OversizeHandling::CONTINUE:
            return "CONTINUE";
          case OversizeHandling::MATCH:
            return "MATCH";
          case OversizeHandling::NO_MATCH:
            return "NO_MATCH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OversizeHandlingMapper
    } // namespace Model
  } // namespace WAFV2
} // namespace Aws
