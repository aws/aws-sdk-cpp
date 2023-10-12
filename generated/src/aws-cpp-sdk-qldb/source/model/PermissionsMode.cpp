/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb/model/PermissionsMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QLDB
  {
    namespace Model
    {
      namespace PermissionsModeMapper
      {

        static constexpr uint32_t ALLOW_ALL_HASH = ConstExprHashingUtils::HashString("ALLOW_ALL");
        static constexpr uint32_t STANDARD_HASH = ConstExprHashingUtils::HashString("STANDARD");


        PermissionsMode GetPermissionsModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALLOW_ALL_HASH)
          {
            return PermissionsMode::ALLOW_ALL;
          }
          else if (hashCode == STANDARD_HASH)
          {
            return PermissionsMode::STANDARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PermissionsMode>(hashCode);
          }

          return PermissionsMode::NOT_SET;
        }

        Aws::String GetNameForPermissionsMode(PermissionsMode enumValue)
        {
          switch(enumValue)
          {
          case PermissionsMode::NOT_SET:
            return {};
          case PermissionsMode::ALLOW_ALL:
            return "ALLOW_ALL";
          case PermissionsMode::STANDARD:
            return "STANDARD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PermissionsModeMapper
    } // namespace Model
  } // namespace QLDB
} // namespace Aws
