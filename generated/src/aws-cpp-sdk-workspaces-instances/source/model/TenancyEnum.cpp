/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/TenancyEnum.h>
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
      namespace TenancyEnumMapper
      {

        static const int default__HASH = HashingUtils::HashString("default");
        static const int dedicated_HASH = HashingUtils::HashString("dedicated");
        static const int host_HASH = HashingUtils::HashString("host");


        TenancyEnum GetTenancyEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == default__HASH)
          {
            return TenancyEnum::default_;
          }
          else if (hashCode == dedicated_HASH)
          {
            return TenancyEnum::dedicated;
          }
          else if (hashCode == host_HASH)
          {
            return TenancyEnum::host;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TenancyEnum>(hashCode);
          }

          return TenancyEnum::NOT_SET;
        }

        Aws::String GetNameForTenancyEnum(TenancyEnum enumValue)
        {
          switch(enumValue)
          {
          case TenancyEnum::NOT_SET:
            return {};
          case TenancyEnum::default_:
            return "default";
          case TenancyEnum::dedicated:
            return "dedicated";
          case TenancyEnum::host:
            return "host";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TenancyEnumMapper
    } // namespace Model
  } // namespace WorkspacesInstances
} // namespace Aws
