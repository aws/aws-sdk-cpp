/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/Permission.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Control
  {
    namespace Model
    {
      namespace PermissionMapper
      {

        static const int READ_HASH = HashingUtils::HashString("READ");
        static const int WRITE_HASH = HashingUtils::HashString("WRITE");
        static const int READWRITE_HASH = HashingUtils::HashString("READWRITE");


        Permission GetPermissionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READ_HASH)
          {
            return Permission::READ;
          }
          else if (hashCode == WRITE_HASH)
          {
            return Permission::WRITE;
          }
          else if (hashCode == READWRITE_HASH)
          {
            return Permission::READWRITE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Permission>(hashCode);
          }

          return Permission::NOT_SET;
        }

        Aws::String GetNameForPermission(Permission enumValue)
        {
          switch(enumValue)
          {
          case Permission::NOT_SET:
            return {};
          case Permission::READ:
            return "READ";
          case Permission::WRITE:
            return "WRITE";
          case Permission::READWRITE:
            return "READWRITE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PermissionMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws
