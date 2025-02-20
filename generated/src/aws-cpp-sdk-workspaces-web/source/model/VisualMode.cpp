/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/VisualMode.h>
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
      namespace VisualModeMapper
      {

        static const int Dark_HASH = HashingUtils::HashString("Dark");
        static const int Light_HASH = HashingUtils::HashString("Light");


        VisualMode GetVisualModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Dark_HASH)
          {
            return VisualMode::Dark;
          }
          else if (hashCode == Light_HASH)
          {
            return VisualMode::Light;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VisualMode>(hashCode);
          }

          return VisualMode::NOT_SET;
        }

        Aws::String GetNameForVisualMode(VisualMode enumValue)
        {
          switch(enumValue)
          {
          case VisualMode::NOT_SET:
            return {};
          case VisualMode::Dark:
            return "Dark";
          case VisualMode::Light:
            return "Light";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VisualModeMapper
    } // namespace Model
  } // namespace WorkSpacesWeb
} // namespace Aws
