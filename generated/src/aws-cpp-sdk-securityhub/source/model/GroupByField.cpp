/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/GroupByField.h>
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
      namespace GroupByFieldMapper
      {

        static const int activity_name_HASH = HashingUtils::HashString("activity_name");
        static const int cloud_account_uid_HASH = HashingUtils::HashString("cloud.account.uid");
        static const int cloud_provider_HASH = HashingUtils::HashString("cloud.provider");
        static const int cloud_region_HASH = HashingUtils::HashString("cloud.region");
        static const int compliance_assessments_name_HASH = HashingUtils::HashString("compliance.assessments.name");
        static const int compliance_status_HASH = HashingUtils::HashString("compliance.status");
        static const int compliance_control_HASH = HashingUtils::HashString("compliance.control");
        static const int finding_info_title_HASH = HashingUtils::HashString("finding_info.title");
        static const int finding_info_types_HASH = HashingUtils::HashString("finding_info.types");
        static const int metadata_product_name_HASH = HashingUtils::HashString("metadata.product.name");
        static const int metadata_product_uid_HASH = HashingUtils::HashString("metadata.product.uid");
        static const int resources_type_HASH = HashingUtils::HashString("resources.type");
        static const int resources_uid_HASH = HashingUtils::HashString("resources.uid");
        static const int severity_HASH = HashingUtils::HashString("severity");
        static const int status_HASH = HashingUtils::HashString("status");
        static const int vulnerabilities_fix_coverage_HASH = HashingUtils::HashString("vulnerabilities.fix_coverage");
        static const int class_name_HASH = HashingUtils::HashString("class_name");


        GroupByField GetGroupByFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == activity_name_HASH)
          {
            return GroupByField::activity_name;
          }
          else if (hashCode == cloud_account_uid_HASH)
          {
            return GroupByField::cloud_account_uid;
          }
          else if (hashCode == cloud_provider_HASH)
          {
            return GroupByField::cloud_provider;
          }
          else if (hashCode == cloud_region_HASH)
          {
            return GroupByField::cloud_region;
          }
          else if (hashCode == compliance_assessments_name_HASH)
          {
            return GroupByField::compliance_assessments_name;
          }
          else if (hashCode == compliance_status_HASH)
          {
            return GroupByField::compliance_status;
          }
          else if (hashCode == compliance_control_HASH)
          {
            return GroupByField::compliance_control;
          }
          else if (hashCode == finding_info_title_HASH)
          {
            return GroupByField::finding_info_title;
          }
          else if (hashCode == finding_info_types_HASH)
          {
            return GroupByField::finding_info_types;
          }
          else if (hashCode == metadata_product_name_HASH)
          {
            return GroupByField::metadata_product_name;
          }
          else if (hashCode == metadata_product_uid_HASH)
          {
            return GroupByField::metadata_product_uid;
          }
          else if (hashCode == resources_type_HASH)
          {
            return GroupByField::resources_type;
          }
          else if (hashCode == resources_uid_HASH)
          {
            return GroupByField::resources_uid;
          }
          else if (hashCode == severity_HASH)
          {
            return GroupByField::severity;
          }
          else if (hashCode == status_HASH)
          {
            return GroupByField::status;
          }
          else if (hashCode == vulnerabilities_fix_coverage_HASH)
          {
            return GroupByField::vulnerabilities_fix_coverage;
          }
          else if (hashCode == class_name_HASH)
          {
            return GroupByField::class_name;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GroupByField>(hashCode);
          }

          return GroupByField::NOT_SET;
        }

        Aws::String GetNameForGroupByField(GroupByField enumValue)
        {
          switch(enumValue)
          {
          case GroupByField::NOT_SET:
            return {};
          case GroupByField::activity_name:
            return "activity_name";
          case GroupByField::cloud_account_uid:
            return "cloud.account.uid";
          case GroupByField::cloud_provider:
            return "cloud.provider";
          case GroupByField::cloud_region:
            return "cloud.region";
          case GroupByField::compliance_assessments_name:
            return "compliance.assessments.name";
          case GroupByField::compliance_status:
            return "compliance.status";
          case GroupByField::compliance_control:
            return "compliance.control";
          case GroupByField::finding_info_title:
            return "finding_info.title";
          case GroupByField::finding_info_types:
            return "finding_info.types";
          case GroupByField::metadata_product_name:
            return "metadata.product.name";
          case GroupByField::metadata_product_uid:
            return "metadata.product.uid";
          case GroupByField::resources_type:
            return "resources.type";
          case GroupByField::resources_uid:
            return "resources.uid";
          case GroupByField::severity:
            return "severity";
          case GroupByField::status:
            return "status";
          case GroupByField::vulnerabilities_fix_coverage:
            return "vulnerabilities.fix_coverage";
          case GroupByField::class_name:
            return "class_name";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GroupByFieldMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
