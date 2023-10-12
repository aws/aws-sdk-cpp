/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/PermissionModelType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResilienceHub
  {
    namespace Model
    {
      namespace PermissionModelTypeMapper
      {

        static constexpr uint32_t LegacyIAMUser_HASH = ConstExprHashingUtils::HashString("LegacyIAMUser");
        static constexpr uint32_t RoleBased_HASH = ConstExprHashingUtils::HashString("RoleBased");


        PermissionModelType GetPermissionModelTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LegacyIAMUser_HASH)
          {
            return PermissionModelType::LegacyIAMUser;
          }
          else if (hashCode == RoleBased_HASH)
          {
            return PermissionModelType::RoleBased;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PermissionModelType>(hashCode);
          }

          return PermissionModelType::NOT_SET;
        }

        Aws::String GetNameForPermissionModelType(PermissionModelType enumValue)
        {
          switch(enumValue)
          {
          case PermissionModelType::NOT_SET:
            return {};
          case PermissionModelType::LegacyIAMUser:
            return "LegacyIAMUser";
          case PermissionModelType::RoleBased:
            return "RoleBased";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PermissionModelTypeMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
