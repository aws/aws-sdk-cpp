/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ListTenantResourcesFilterKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SESV2
  {
    namespace Model
    {
      namespace ListTenantResourcesFilterKeyMapper
      {

        static const int RESOURCE_TYPE_HASH = HashingUtils::HashString("RESOURCE_TYPE");


        ListTenantResourcesFilterKey GetListTenantResourcesFilterKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RESOURCE_TYPE_HASH)
          {
            return ListTenantResourcesFilterKey::RESOURCE_TYPE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListTenantResourcesFilterKey>(hashCode);
          }

          return ListTenantResourcesFilterKey::NOT_SET;
        }

        Aws::String GetNameForListTenantResourcesFilterKey(ListTenantResourcesFilterKey enumValue)
        {
          switch(enumValue)
          {
          case ListTenantResourcesFilterKey::NOT_SET:
            return {};
          case ListTenantResourcesFilterKey::RESOURCE_TYPE:
            return "RESOURCE_TYPE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListTenantResourcesFilterKeyMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws
