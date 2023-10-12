/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/RolePermissionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkDocs
  {
    namespace Model
    {
      namespace RolePermissionTypeMapper
      {

        static constexpr uint32_t DIRECT_HASH = ConstExprHashingUtils::HashString("DIRECT");
        static constexpr uint32_t INHERITED_HASH = ConstExprHashingUtils::HashString("INHERITED");


        RolePermissionType GetRolePermissionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DIRECT_HASH)
          {
            return RolePermissionType::DIRECT;
          }
          else if (hashCode == INHERITED_HASH)
          {
            return RolePermissionType::INHERITED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RolePermissionType>(hashCode);
          }

          return RolePermissionType::NOT_SET;
        }

        Aws::String GetNameForRolePermissionType(RolePermissionType enumValue)
        {
          switch(enumValue)
          {
          case RolePermissionType::NOT_SET:
            return {};
          case RolePermissionType::DIRECT:
            return "DIRECT";
          case RolePermissionType::INHERITED:
            return "INHERITED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RolePermissionTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
