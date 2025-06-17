/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ResourceGroupByField.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace ResourceGroupByFieldMapper
      {

        static const int account_id_HASH = HashingUtils::HashString("account_id");
        static const int region_HASH = HashingUtils::HashString("region");
        static const int resource_category_HASH = HashingUtils::HashString("resource_category");
        static const int resource_type_HASH = HashingUtils::HashString("resource_type");
        static const int resource_name_HASH = HashingUtils::HashString("resource_name");
        static const int findings_summary_finding_type_HASH = HashingUtils::HashString("findings_summary.finding_type");


        ResourceGroupByField GetResourceGroupByFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == account_id_HASH)
          {
            return ResourceGroupByField::account_id;
          }
          else if (hashCode == region_HASH)
          {
            return ResourceGroupByField::region;
          }
          else if (hashCode == resource_category_HASH)
          {
            return ResourceGroupByField::resource_category;
          }
          else if (hashCode == resource_type_HASH)
          {
            return ResourceGroupByField::resource_type;
          }
          else if (hashCode == resource_name_HASH)
          {
            return ResourceGroupByField::resource_name;
          }
          else if (hashCode == findings_summary_finding_type_HASH)
          {
            return ResourceGroupByField::findings_summary_finding_type;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceGroupByField>(hashCode);
          }

          return ResourceGroupByField::NOT_SET;
        }

        Aws::String GetNameForResourceGroupByField(ResourceGroupByField enumValue)
        {
          switch(enumValue)
          {
          case ResourceGroupByField::NOT_SET:
            return {};
          case ResourceGroupByField::account_id:
            return "account_id";
          case ResourceGroupByField::region:
            return "region";
          case ResourceGroupByField::resource_category:
            return "resource_category";
          case ResourceGroupByField::resource_type:
            return "resource_type";
          case ResourceGroupByField::resource_name:
            return "resource_name";
          case ResourceGroupByField::findings_summary_finding_type:
            return "findings_summary.finding_type";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceGroupByFieldMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
