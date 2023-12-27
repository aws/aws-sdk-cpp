/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-thin-client/model/DesktopType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpacesThinClient
  {
    namespace Model
    {
      namespace DesktopTypeMapper
      {

        static const int workspaces_HASH = HashingUtils::HashString("workspaces");
        static const int appstream_HASH = HashingUtils::HashString("appstream");
        static const int workspaces_web_HASH = HashingUtils::HashString("workspaces-web");


        DesktopType GetDesktopTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == workspaces_HASH)
          {
            return DesktopType::workspaces;
          }
          else if (hashCode == appstream_HASH)
          {
            return DesktopType::appstream;
          }
          else if (hashCode == workspaces_web_HASH)
          {
            return DesktopType::workspaces_web;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DesktopType>(hashCode);
          }

          return DesktopType::NOT_SET;
        }

        Aws::String GetNameForDesktopType(DesktopType enumValue)
        {
          switch(enumValue)
          {
          case DesktopType::NOT_SET:
            return {};
          case DesktopType::workspaces:
            return "workspaces";
          case DesktopType::appstream:
            return "appstream";
          case DesktopType::workspaces_web:
            return "workspaces-web";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DesktopTypeMapper
    } // namespace Model
  } // namespace WorkSpacesThinClient
} // namespace Aws
