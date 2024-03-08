/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/PermissionTypeFilter.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RAM
  {
    namespace Model
    {
      namespace PermissionTypeFilterMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int AWS_MANAGED_HASH = HashingUtils::HashString("AWS_MANAGED");
        static const int CUSTOMER_MANAGED_HASH = HashingUtils::HashString("CUSTOMER_MANAGED");


        PermissionTypeFilter GetPermissionTypeFilterForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return PermissionTypeFilter::ALL;
          }
          else if (hashCode == AWS_MANAGED_HASH)
          {
            return PermissionTypeFilter::AWS_MANAGED;
          }
          else if (hashCode == CUSTOMER_MANAGED_HASH)
          {
            return PermissionTypeFilter::CUSTOMER_MANAGED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PermissionTypeFilter>(hashCode);
          }

          return PermissionTypeFilter::NOT_SET;
        }

        Aws::String GetNameForPermissionTypeFilter(PermissionTypeFilter enumValue)
        {
          switch(enumValue)
          {
          case PermissionTypeFilter::NOT_SET:
            return {};
          case PermissionTypeFilter::ALL:
            return "ALL";
          case PermissionTypeFilter::AWS_MANAGED:
            return "AWS_MANAGED";
          case PermissionTypeFilter::CUSTOMER_MANAGED:
            return "CUSTOMER_MANAGED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PermissionTypeFilterMapper
    } // namespace Model
  } // namespace RAM
} // namespace Aws
