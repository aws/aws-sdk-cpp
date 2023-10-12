/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage-vod/model/SegmentTemplateFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaPackageVod
  {
    namespace Model
    {
      namespace SegmentTemplateFormatMapper
      {

        static constexpr uint32_t NUMBER_WITH_TIMELINE_HASH = ConstExprHashingUtils::HashString("NUMBER_WITH_TIMELINE");
        static constexpr uint32_t TIME_WITH_TIMELINE_HASH = ConstExprHashingUtils::HashString("TIME_WITH_TIMELINE");
        static constexpr uint32_t NUMBER_WITH_DURATION_HASH = ConstExprHashingUtils::HashString("NUMBER_WITH_DURATION");


        SegmentTemplateFormat GetSegmentTemplateFormatForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NUMBER_WITH_TIMELINE_HASH)
          {
            return SegmentTemplateFormat::NUMBER_WITH_TIMELINE;
          }
          else if (hashCode == TIME_WITH_TIMELINE_HASH)
          {
            return SegmentTemplateFormat::TIME_WITH_TIMELINE;
          }
          else if (hashCode == NUMBER_WITH_DURATION_HASH)
          {
            return SegmentTemplateFormat::NUMBER_WITH_DURATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SegmentTemplateFormat>(hashCode);
          }

          return SegmentTemplateFormat::NOT_SET;
        }

        Aws::String GetNameForSegmentTemplateFormat(SegmentTemplateFormat enumValue)
        {
          switch(enumValue)
          {
          case SegmentTemplateFormat::NOT_SET:
            return {};
          case SegmentTemplateFormat::NUMBER_WITH_TIMELINE:
            return "NUMBER_WITH_TIMELINE";
          case SegmentTemplateFormat::TIME_WITH_TIMELINE:
            return "TIME_WITH_TIMELINE";
          case SegmentTemplateFormat::NUMBER_WITH_DURATION:
            return "NUMBER_WITH_DURATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SegmentTemplateFormatMapper
    } // namespace Model
  } // namespace MediaPackageVod
} // namespace Aws
