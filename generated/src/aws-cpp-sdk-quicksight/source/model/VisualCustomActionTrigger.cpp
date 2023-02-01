/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/VisualCustomActionTrigger.h>
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
      namespace VisualCustomActionTriggerMapper
      {

        static const int DATA_POINT_CLICK_HASH = HashingUtils::HashString("DATA_POINT_CLICK");
        static const int DATA_POINT_MENU_HASH = HashingUtils::HashString("DATA_POINT_MENU");


        VisualCustomActionTrigger GetVisualCustomActionTriggerForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DATA_POINT_CLICK_HASH)
          {
            return VisualCustomActionTrigger::DATA_POINT_CLICK;
          }
          else if (hashCode == DATA_POINT_MENU_HASH)
          {
            return VisualCustomActionTrigger::DATA_POINT_MENU;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VisualCustomActionTrigger>(hashCode);
          }

          return VisualCustomActionTrigger::NOT_SET;
        }

        Aws::String GetNameForVisualCustomActionTrigger(VisualCustomActionTrigger enumValue)
        {
          switch(enumValue)
          {
          case VisualCustomActionTrigger::DATA_POINT_CLICK:
            return "DATA_POINT_CLICK";
          case VisualCustomActionTrigger::DATA_POINT_MENU:
            return "DATA_POINT_MENU";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VisualCustomActionTriggerMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
