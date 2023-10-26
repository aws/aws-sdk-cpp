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

        static const int CONTINUE_HASH = HashingUtils::HashString("CONTINUE");
        static const int MATCH_HASH = HashingUtils::HashString("MATCH");
        static const int NO_MATCH_HASH = HashingUtils::HashString("NO_MATCH");


        OversizeHandling GetOversizeHandlingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
