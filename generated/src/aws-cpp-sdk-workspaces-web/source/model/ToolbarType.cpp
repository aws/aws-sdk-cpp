/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/ToolbarType.h>
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
      namespace ToolbarTypeMapper
      {

        static const int Floating_HASH = HashingUtils::HashString("Floating");
        static const int Docked_HASH = HashingUtils::HashString("Docked");


        ToolbarType GetToolbarTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Floating_HASH)
          {
            return ToolbarType::Floating;
          }
          else if (hashCode == Docked_HASH)
          {
            return ToolbarType::Docked;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ToolbarType>(hashCode);
          }

          return ToolbarType::NOT_SET;
        }

        Aws::String GetNameForToolbarType(ToolbarType enumValue)
        {
          switch(enumValue)
          {
          case ToolbarType::NOT_SET:
            return {};
          case ToolbarType::Floating:
            return "Floating";
          case ToolbarType::Docked:
            return "Docked";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ToolbarTypeMapper
    } // namespace Model
  } // namespace WorkSpacesWeb
} // namespace Aws
