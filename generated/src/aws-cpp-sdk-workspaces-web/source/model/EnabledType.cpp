/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/EnabledType.h>
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
      namespace EnabledTypeMapper
      {

        static const int Disabled_HASH = HashingUtils::HashString("Disabled");
        static const int Enabled_HASH = HashingUtils::HashString("Enabled");


        EnabledType GetEnabledTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Disabled_HASH)
          {
            return EnabledType::Disabled;
          }
          else if (hashCode == Enabled_HASH)
          {
            return EnabledType::Enabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnabledType>(hashCode);
          }

          return EnabledType::NOT_SET;
        }

        Aws::String GetNameForEnabledType(EnabledType enumValue)
        {
          switch(enumValue)
          {
          case EnabledType::NOT_SET:
            return {};
          case EnabledType::Disabled:
            return "Disabled";
          case EnabledType::Enabled:
            return "Enabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnabledTypeMapper
    } // namespace Model
  } // namespace WorkSpacesWeb
} // namespace Aws
