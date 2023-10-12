/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/Layout.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pinpoint
  {
    namespace Model
    {
      namespace LayoutMapper
      {

        static constexpr uint32_t BOTTOM_BANNER_HASH = ConstExprHashingUtils::HashString("BOTTOM_BANNER");
        static constexpr uint32_t TOP_BANNER_HASH = ConstExprHashingUtils::HashString("TOP_BANNER");
        static constexpr uint32_t OVERLAYS_HASH = ConstExprHashingUtils::HashString("OVERLAYS");
        static constexpr uint32_t MOBILE_FEED_HASH = ConstExprHashingUtils::HashString("MOBILE_FEED");
        static constexpr uint32_t MIDDLE_BANNER_HASH = ConstExprHashingUtils::HashString("MIDDLE_BANNER");
        static constexpr uint32_t CAROUSEL_HASH = ConstExprHashingUtils::HashString("CAROUSEL");


        Layout GetLayoutForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BOTTOM_BANNER_HASH)
          {
            return Layout::BOTTOM_BANNER;
          }
          else if (hashCode == TOP_BANNER_HASH)
          {
            return Layout::TOP_BANNER;
          }
          else if (hashCode == OVERLAYS_HASH)
          {
            return Layout::OVERLAYS;
          }
          else if (hashCode == MOBILE_FEED_HASH)
          {
            return Layout::MOBILE_FEED;
          }
          else if (hashCode == MIDDLE_BANNER_HASH)
          {
            return Layout::MIDDLE_BANNER;
          }
          else if (hashCode == CAROUSEL_HASH)
          {
            return Layout::CAROUSEL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Layout>(hashCode);
          }

          return Layout::NOT_SET;
        }

        Aws::String GetNameForLayout(Layout enumValue)
        {
          switch(enumValue)
          {
          case Layout::NOT_SET:
            return {};
          case Layout::BOTTOM_BANNER:
            return "BOTTOM_BANNER";
          case Layout::TOP_BANNER:
            return "TOP_BANNER";
          case Layout::OVERLAYS:
            return "OVERLAYS";
          case Layout::MOBILE_FEED:
            return "MOBILE_FEED";
          case Layout::MIDDLE_BANNER:
            return "MIDDLE_BANNER";
          case Layout::CAROUSEL:
            return "CAROUSEL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LayoutMapper
    } // namespace Model
  } // namespace Pinpoint
} // namespace Aws
