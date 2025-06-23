/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/HostnameTypeEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkspacesInstances
  {
    namespace Model
    {
      namespace HostnameTypeEnumMapper
      {

        static const int ip_name_HASH = HashingUtils::HashString("ip-name");
        static const int resource_name_HASH = HashingUtils::HashString("resource-name");


        HostnameTypeEnum GetHostnameTypeEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ip_name_HASH)
          {
            return HostnameTypeEnum::ip_name;
          }
          else if (hashCode == resource_name_HASH)
          {
            return HostnameTypeEnum::resource_name;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HostnameTypeEnum>(hashCode);
          }

          return HostnameTypeEnum::NOT_SET;
        }

        Aws::String GetNameForHostnameTypeEnum(HostnameTypeEnum enumValue)
        {
          switch(enumValue)
          {
          case HostnameTypeEnum::NOT_SET:
            return {};
          case HostnameTypeEnum::ip_name:
            return "ip-name";
          case HostnameTypeEnum::resource_name:
            return "resource-name";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HostnameTypeEnumMapper
    } // namespace Model
  } // namespace WorkspacesInstances
} // namespace Aws
