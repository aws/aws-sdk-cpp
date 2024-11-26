/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/PermissionInputActionEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QApps
  {
    namespace Model
    {
      namespace PermissionInputActionEnumMapper
      {

        static const int read_HASH = HashingUtils::HashString("read");
        static const int write_HASH = HashingUtils::HashString("write");


        PermissionInputActionEnum GetPermissionInputActionEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == read_HASH)
          {
            return PermissionInputActionEnum::read;
          }
          else if (hashCode == write_HASH)
          {
            return PermissionInputActionEnum::write;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PermissionInputActionEnum>(hashCode);
          }

          return PermissionInputActionEnum::NOT_SET;
        }

        Aws::String GetNameForPermissionInputActionEnum(PermissionInputActionEnum enumValue)
        {
          switch(enumValue)
          {
          case PermissionInputActionEnum::NOT_SET:
            return {};
          case PermissionInputActionEnum::read:
            return "read";
          case PermissionInputActionEnum::write:
            return "write";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PermissionInputActionEnumMapper
    } // namespace Model
  } // namespace QApps
} // namespace Aws
