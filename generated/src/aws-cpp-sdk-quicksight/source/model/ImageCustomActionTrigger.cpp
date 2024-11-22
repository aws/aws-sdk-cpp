/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ImageCustomActionTrigger.h>
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
      namespace ImageCustomActionTriggerMapper
      {

        static const int CLICK_HASH = HashingUtils::HashString("CLICK");
        static const int MENU_HASH = HashingUtils::HashString("MENU");


        ImageCustomActionTrigger GetImageCustomActionTriggerForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLICK_HASH)
          {
            return ImageCustomActionTrigger::CLICK;
          }
          else if (hashCode == MENU_HASH)
          {
            return ImageCustomActionTrigger::MENU;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageCustomActionTrigger>(hashCode);
          }

          return ImageCustomActionTrigger::NOT_SET;
        }

        Aws::String GetNameForImageCustomActionTrigger(ImageCustomActionTrigger enumValue)
        {
          switch(enumValue)
          {
          case ImageCustomActionTrigger::NOT_SET:
            return {};
          case ImageCustomActionTrigger::CLICK:
            return "CLICK";
          case ImageCustomActionTrigger::MENU:
            return "MENU";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageCustomActionTriggerMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
