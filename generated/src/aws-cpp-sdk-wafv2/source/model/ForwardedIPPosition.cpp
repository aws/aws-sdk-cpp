/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/ForwardedIPPosition.h>
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
      namespace ForwardedIPPositionMapper
      {

        static const int FIRST_HASH = HashingUtils::HashString("FIRST");
        static const int LAST_HASH = HashingUtils::HashString("LAST");
        static const int ANY_HASH = HashingUtils::HashString("ANY");


        ForwardedIPPosition GetForwardedIPPositionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FIRST_HASH)
          {
            return ForwardedIPPosition::FIRST;
          }
          else if (hashCode == LAST_HASH)
          {
            return ForwardedIPPosition::LAST;
          }
          else if (hashCode == ANY_HASH)
          {
            return ForwardedIPPosition::ANY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ForwardedIPPosition>(hashCode);
          }

          return ForwardedIPPosition::NOT_SET;
        }

        Aws::String GetNameForForwardedIPPosition(ForwardedIPPosition enumValue)
        {
          switch(enumValue)
          {
          case ForwardedIPPosition::FIRST:
            return "FIRST";
          case ForwardedIPPosition::LAST:
            return "LAST";
          case ForwardedIPPosition::ANY:
            return "ANY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ForwardedIPPositionMapper
    } // namespace Model
  } // namespace WAFV2
} // namespace Aws
