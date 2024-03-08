/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/SamlStatusEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace SamlStatusEnumMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int ENABLED_WITH_DIRECTORY_LOGIN_FALLBACK_HASH = HashingUtils::HashString("ENABLED_WITH_DIRECTORY_LOGIN_FALLBACK");


        SamlStatusEnum GetSamlStatusEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return SamlStatusEnum::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return SamlStatusEnum::ENABLED;
          }
          else if (hashCode == ENABLED_WITH_DIRECTORY_LOGIN_FALLBACK_HASH)
          {
            return SamlStatusEnum::ENABLED_WITH_DIRECTORY_LOGIN_FALLBACK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SamlStatusEnum>(hashCode);
          }

          return SamlStatusEnum::NOT_SET;
        }

        Aws::String GetNameForSamlStatusEnum(SamlStatusEnum enumValue)
        {
          switch(enumValue)
          {
          case SamlStatusEnum::NOT_SET:
            return {};
          case SamlStatusEnum::DISABLED:
            return "DISABLED";
          case SamlStatusEnum::ENABLED:
            return "ENABLED";
          case SamlStatusEnum::ENABLED_WITH_DIRECTORY_LOGIN_FALLBACK:
            return "ENABLED_WITH_DIRECTORY_LOGIN_FALLBACK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SamlStatusEnumMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
