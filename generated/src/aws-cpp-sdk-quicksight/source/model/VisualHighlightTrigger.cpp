/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/VisualHighlightTrigger.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace VisualHighlightTriggerMapper
      {

        static const int DATA_POINT_CLICK_HASH = HashingUtils::HashString("DATA_POINT_CLICK");
        static const int DATA_POINT_HOVER_HASH = HashingUtils::HashString("DATA_POINT_HOVER");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        VisualHighlightTrigger GetVisualHighlightTriggerForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DATA_POINT_CLICK_HASH)
          {
            return VisualHighlightTrigger::DATA_POINT_CLICK;
          }
          else if (hashCode == DATA_POINT_HOVER_HASH)
          {
            return VisualHighlightTrigger::DATA_POINT_HOVER;
          }
          else if (hashCode == NONE_HASH)
          {
            return VisualHighlightTrigger::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VisualHighlightTrigger>(hashCode);
          }

          return VisualHighlightTrigger::NOT_SET;
        }

        Aws::String GetNameForVisualHighlightTrigger(VisualHighlightTrigger enumValue)
        {
          switch(enumValue)
          {
          case VisualHighlightTrigger::NOT_SET:
            return {};
          case VisualHighlightTrigger::DATA_POINT_CLICK:
            return "DATA_POINT_CLICK";
          case VisualHighlightTrigger::DATA_POINT_HOVER:
            return "DATA_POINT_HOVER";
          case VisualHighlightTrigger::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VisualHighlightTriggerMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
