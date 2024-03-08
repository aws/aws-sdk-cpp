/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/BootMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace mgn
  {
    namespace Model
    {
      namespace BootModeMapper
      {

        static const int LEGACY_BIOS_HASH = HashingUtils::HashString("LEGACY_BIOS");
        static const int UEFI_HASH = HashingUtils::HashString("UEFI");


        BootMode GetBootModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LEGACY_BIOS_HASH)
          {
            return BootMode::LEGACY_BIOS;
          }
          else if (hashCode == UEFI_HASH)
          {
            return BootMode::UEFI;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BootMode>(hashCode);
          }

          return BootMode::NOT_SET;
        }

        Aws::String GetNameForBootMode(BootMode enumValue)
        {
          switch(enumValue)
          {
          case BootMode::NOT_SET:
            return {};
          case BootMode::LEGACY_BIOS:
            return "LEGACY_BIOS";
          case BootMode::UEFI:
            return "UEFI";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BootModeMapper
    } // namespace Model
  } // namespace mgn
} // namespace Aws
