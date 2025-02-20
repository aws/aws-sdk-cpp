/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/ToolbarItem.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpacesWeb
  {
    namespace Model
    {
      namespace ToolbarItemMapper
      {

        static const int Windows_HASH = HashingUtils::HashString("Windows");
        static const int DualMonitor_HASH = HashingUtils::HashString("DualMonitor");
        static const int FullScreen_HASH = HashingUtils::HashString("FullScreen");
        static const int Webcam_HASH = HashingUtils::HashString("Webcam");
        static const int Microphone_HASH = HashingUtils::HashString("Microphone");


        ToolbarItem GetToolbarItemForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Windows_HASH)
          {
            return ToolbarItem::Windows;
          }
          else if (hashCode == DualMonitor_HASH)
          {
            return ToolbarItem::DualMonitor;
          }
          else if (hashCode == FullScreen_HASH)
          {
            return ToolbarItem::FullScreen;
          }
          else if (hashCode == Webcam_HASH)
          {
            return ToolbarItem::Webcam;
          }
          else if (hashCode == Microphone_HASH)
          {
            return ToolbarItem::Microphone;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ToolbarItem>(hashCode);
          }

          return ToolbarItem::NOT_SET;
        }

        Aws::String GetNameForToolbarItem(ToolbarItem enumValue)
        {
          switch(enumValue)
          {
          case ToolbarItem::NOT_SET:
            return {};
          case ToolbarItem::Windows:
            return "Windows";
          case ToolbarItem::DualMonitor:
            return "DualMonitor";
          case ToolbarItem::FullScreen:
            return "FullScreen";
          case ToolbarItem::Webcam:
            return "Webcam";
          case ToolbarItem::Microphone:
            return "Microphone";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ToolbarItemMapper
    } // namespace Model
  } // namespace WorkSpacesWeb
} // namespace Aws
