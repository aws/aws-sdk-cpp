/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DedicatedTenancySupportEnum.h>
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
      namespace DedicatedTenancySupportEnumMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        DedicatedTenancySupportEnum GetDedicatedTenancySupportEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return DedicatedTenancySupportEnum::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DedicatedTenancySupportEnum>(hashCode);
          }

          return DedicatedTenancySupportEnum::NOT_SET;
        }

        Aws::String GetNameForDedicatedTenancySupportEnum(DedicatedTenancySupportEnum enumValue)
        {
          switch(enumValue)
          {
          case DedicatedTenancySupportEnum::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DedicatedTenancySupportEnumMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
