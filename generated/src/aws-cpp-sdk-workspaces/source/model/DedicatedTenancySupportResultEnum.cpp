/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DedicatedTenancySupportResultEnum.h>
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
      namespace DedicatedTenancySupportResultEnumMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        DedicatedTenancySupportResultEnum GetDedicatedTenancySupportResultEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return DedicatedTenancySupportResultEnum::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return DedicatedTenancySupportResultEnum::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DedicatedTenancySupportResultEnum>(hashCode);
          }

          return DedicatedTenancySupportResultEnum::NOT_SET;
        }

        Aws::String GetNameForDedicatedTenancySupportResultEnum(DedicatedTenancySupportResultEnum enumValue)
        {
          switch(enumValue)
          {
          case DedicatedTenancySupportResultEnum::ENABLED:
            return "ENABLED";
          case DedicatedTenancySupportResultEnum::DISABLED:
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

      } // namespace DedicatedTenancySupportResultEnumMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
