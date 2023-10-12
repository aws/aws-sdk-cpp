/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/PermissionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkMail
  {
    namespace Model
    {
      namespace PermissionTypeMapper
      {

        static constexpr uint32_t FULL_ACCESS_HASH = ConstExprHashingUtils::HashString("FULL_ACCESS");
        static constexpr uint32_t SEND_AS_HASH = ConstExprHashingUtils::HashString("SEND_AS");
        static constexpr uint32_t SEND_ON_BEHALF_HASH = ConstExprHashingUtils::HashString("SEND_ON_BEHALF");


        PermissionType GetPermissionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FULL_ACCESS_HASH)
          {
            return PermissionType::FULL_ACCESS;
          }
          else if (hashCode == SEND_AS_HASH)
          {
            return PermissionType::SEND_AS;
          }
          else if (hashCode == SEND_ON_BEHALF_HASH)
          {
            return PermissionType::SEND_ON_BEHALF;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PermissionType>(hashCode);
          }

          return PermissionType::NOT_SET;
        }

        Aws::String GetNameForPermissionType(PermissionType enumValue)
        {
          switch(enumValue)
          {
          case PermissionType::NOT_SET:
            return {};
          case PermissionType::FULL_ACCESS:
            return "FULL_ACCESS";
          case PermissionType::SEND_AS:
            return "SEND_AS";
          case PermissionType::SEND_ON_BEHALF:
            return "SEND_ON_BEHALF";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PermissionTypeMapper
    } // namespace Model
  } // namespace WorkMail
} // namespace Aws
