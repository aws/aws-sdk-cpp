/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/PermissionOutputActionEnum.h>
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
      namespace PermissionOutputActionEnumMapper
      {

        static const int read_HASH = HashingUtils::HashString("read");
        static const int write_HASH = HashingUtils::HashString("write");


        PermissionOutputActionEnum GetPermissionOutputActionEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == read_HASH)
          {
            return PermissionOutputActionEnum::read;
          }
          else if (hashCode == write_HASH)
          {
            return PermissionOutputActionEnum::write;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PermissionOutputActionEnum>(hashCode);
          }

          return PermissionOutputActionEnum::NOT_SET;
        }

        Aws::String GetNameForPermissionOutputActionEnum(PermissionOutputActionEnum enumValue)
        {
          switch(enumValue)
          {
          case PermissionOutputActionEnum::NOT_SET:
            return {};
          case PermissionOutputActionEnum::read:
            return "read";
          case PermissionOutputActionEnum::write:
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

      } // namespace PermissionOutputActionEnumMapper
    } // namespace Model
  } // namespace QApps
} // namespace Aws
