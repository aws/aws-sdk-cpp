/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ResourcesStringField.h>
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
      namespace ResourcesStringFieldMapper
      {

        static const int resource_arn_HASH = HashingUtils::HashString("resource_arn");
        static const int resource_id_HASH = HashingUtils::HashString("resource_id");
        static const int account_id_HASH = HashingUtils::HashString("account_id");
        static const int region_HASH = HashingUtils::HashString("region");
        static const int resource_category_HASH = HashingUtils::HashString("resource_category");
        static const int resource_type_HASH = HashingUtils::HashString("resource_type");
        static const int resource_name_HASH = HashingUtils::HashString("resource_name");
        static const int findings_summary_finding_type_HASH = HashingUtils::HashString("findings_summary.finding_type");
        static const int findings_summary_product_name_HASH = HashingUtils::HashString("findings_summary.product_name");


        ResourcesStringField GetResourcesStringFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == resource_arn_HASH)
          {
            return ResourcesStringField::resource_arn;
          }
          else if (hashCode == resource_id_HASH)
          {
            return ResourcesStringField::resource_id;
          }
          else if (hashCode == account_id_HASH)
          {
            return ResourcesStringField::account_id;
          }
          else if (hashCode == region_HASH)
          {
            return ResourcesStringField::region;
          }
          else if (hashCode == resource_category_HASH)
          {
            return ResourcesStringField::resource_category;
          }
          else if (hashCode == resource_type_HASH)
          {
            return ResourcesStringField::resource_type;
          }
          else if (hashCode == resource_name_HASH)
          {
            return ResourcesStringField::resource_name;
          }
          else if (hashCode == findings_summary_finding_type_HASH)
          {
            return ResourcesStringField::findings_summary_finding_type;
          }
          else if (hashCode == findings_summary_product_name_HASH)
          {
            return ResourcesStringField::findings_summary_product_name;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourcesStringField>(hashCode);
          }

          return ResourcesStringField::NOT_SET;
        }

        Aws::String GetNameForResourcesStringField(ResourcesStringField enumValue)
        {
          switch(enumValue)
          {
          case ResourcesStringField::NOT_SET:
            return {};
          case ResourcesStringField::resource_arn:
            return "resource_arn";
          case ResourcesStringField::resource_id:
            return "resource_id";
          case ResourcesStringField::account_id:
            return "account_id";
          case ResourcesStringField::region:
            return "region";
          case ResourcesStringField::resource_category:
            return "resource_category";
          case ResourcesStringField::resource_type:
            return "resource_type";
          case ResourcesStringField::resource_name:
            return "resource_name";
          case ResourcesStringField::findings_summary_finding_type:
            return "findings_summary.finding_type";
          case ResourcesStringField::findings_summary_product_name:
            return "findings_summary.product_name";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourcesStringFieldMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
