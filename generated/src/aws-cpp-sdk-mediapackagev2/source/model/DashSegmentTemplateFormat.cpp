/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/DashSegmentTemplateFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace mediapackagev2
  {
    namespace Model
    {
      namespace DashSegmentTemplateFormatMapper
      {

        static const int NUMBER_WITH_TIMELINE_HASH = HashingUtils::HashString("NUMBER_WITH_TIMELINE");


        DashSegmentTemplateFormat GetDashSegmentTemplateFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NUMBER_WITH_TIMELINE_HASH)
          {
            return DashSegmentTemplateFormat::NUMBER_WITH_TIMELINE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DashSegmentTemplateFormat>(hashCode);
          }

          return DashSegmentTemplateFormat::NOT_SET;
        }

        Aws::String GetNameForDashSegmentTemplateFormat(DashSegmentTemplateFormat enumValue)
        {
          switch(enumValue)
          {
          case DashSegmentTemplateFormat::NOT_SET:
            return {};
          case DashSegmentTemplateFormat::NUMBER_WITH_TIMELINE:
            return "NUMBER_WITH_TIMELINE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DashSegmentTemplateFormatMapper
    } // namespace Model
  } // namespace mediapackagev2
} // namespace Aws
