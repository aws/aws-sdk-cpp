/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/LayerCustomActionTrigger.h>
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
      namespace LayerCustomActionTriggerMapper
      {

        static const int DATA_POINT_CLICK_HASH = HashingUtils::HashString("DATA_POINT_CLICK");
        static const int DATA_POINT_MENU_HASH = HashingUtils::HashString("DATA_POINT_MENU");


        LayerCustomActionTrigger GetLayerCustomActionTriggerForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DATA_POINT_CLICK_HASH)
          {
            return LayerCustomActionTrigger::DATA_POINT_CLICK;
          }
          else if (hashCode == DATA_POINT_MENU_HASH)
          {
            return LayerCustomActionTrigger::DATA_POINT_MENU;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LayerCustomActionTrigger>(hashCode);
          }

          return LayerCustomActionTrigger::NOT_SET;
        }

        Aws::String GetNameForLayerCustomActionTrigger(LayerCustomActionTrigger enumValue)
        {
          switch(enumValue)
          {
          case LayerCustomActionTrigger::NOT_SET:
            return {};
          case LayerCustomActionTrigger::DATA_POINT_CLICK:
            return "DATA_POINT_CLICK";
          case LayerCustomActionTrigger::DATA_POINT_MENU:
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

      } // namespace LayerCustomActionTriggerMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
