/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/ApplicationVisibility.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSOAdmin
  {
    namespace Model
    {
      namespace ApplicationVisibilityMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        ApplicationVisibility GetApplicationVisibilityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return ApplicationVisibility::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ApplicationVisibility::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationVisibility>(hashCode);
          }

          return ApplicationVisibility::NOT_SET;
        }

        Aws::String GetNameForApplicationVisibility(ApplicationVisibility enumValue)
        {
          switch(enumValue)
          {
          case ApplicationVisibility::NOT_SET:
            return {};
          case ApplicationVisibility::ENABLED:
            return "ENABLED";
          case ApplicationVisibility::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationVisibilityMapper
    } // namespace Model
  } // namespace SSOAdmin
} // namespace Aws
