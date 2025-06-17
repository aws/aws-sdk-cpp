/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/OcsfStringField.h>
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
      namespace OcsfStringFieldMapper
      {

        static const int metadata_uid_HASH = HashingUtils::HashString("metadata.uid");
        static const int activity_name_HASH = HashingUtils::HashString("activity_name");
        static const int cloud_account_uid_HASH = HashingUtils::HashString("cloud.account.uid");
        static const int cloud_provider_HASH = HashingUtils::HashString("cloud.provider");
        static const int cloud_region_HASH = HashingUtils::HashString("cloud.region");
        static const int compliance_assessments_category_HASH = HashingUtils::HashString("compliance.assessments.category");
        static const int compliance_assessments_name_HASH = HashingUtils::HashString("compliance.assessments.name");
        static const int compliance_control_HASH = HashingUtils::HashString("compliance.control");
        static const int compliance_status_HASH = HashingUtils::HashString("compliance.status");
        static const int compliance_standards_HASH = HashingUtils::HashString("compliance.standards");
        static const int finding_info_desc_HASH = HashingUtils::HashString("finding_info.desc");
        static const int finding_info_src_url_HASH = HashingUtils::HashString("finding_info.src_url");
        static const int finding_info_title_HASH = HashingUtils::HashString("finding_info.title");
        static const int finding_info_types_HASH = HashingUtils::HashString("finding_info.types");
        static const int finding_info_uid_HASH = HashingUtils::HashString("finding_info.uid");
        static const int finding_info_related_events_uid_HASH = HashingUtils::HashString("finding_info.related_events.uid");
        static const int finding_info_related_events_product_uid_HASH = HashingUtils::HashString("finding_info.related_events.product.uid");
        static const int finding_info_related_events_title_HASH = HashingUtils::HashString("finding_info.related_events.title");
        static const int metadata_product_name_HASH = HashingUtils::HashString("metadata.product.name");
        static const int metadata_product_uid_HASH = HashingUtils::HashString("metadata.product.uid");
        static const int metadata_product_vendor_name_HASH = HashingUtils::HashString("metadata.product.vendor_name");
        static const int remediation_desc_HASH = HashingUtils::HashString("remediation.desc");
        static const int remediation_references_HASH = HashingUtils::HashString("remediation.references");
        static const int resources_cloud_partition_HASH = HashingUtils::HashString("resources.cloud_partition");
        static const int resources_region_HASH = HashingUtils::HashString("resources.region");
        static const int resources_type_HASH = HashingUtils::HashString("resources.type");
        static const int resources_uid_HASH = HashingUtils::HashString("resources.uid");
        static const int severity_HASH = HashingUtils::HashString("severity");
        static const int status_HASH = HashingUtils::HashString("status");
        static const int comment_HASH = HashingUtils::HashString("comment");
        static const int vulnerabilities_fix_coverage_HASH = HashingUtils::HashString("vulnerabilities.fix_coverage");
        static const int class_name_HASH = HashingUtils::HashString("class_name");


        OcsfStringField GetOcsfStringFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == metadata_uid_HASH)
          {
            return OcsfStringField::metadata_uid;
          }
          else if (hashCode == activity_name_HASH)
          {
            return OcsfStringField::activity_name;
          }
          else if (hashCode == cloud_account_uid_HASH)
          {
            return OcsfStringField::cloud_account_uid;
          }
          else if (hashCode == cloud_provider_HASH)
          {
            return OcsfStringField::cloud_provider;
          }
          else if (hashCode == cloud_region_HASH)
          {
            return OcsfStringField::cloud_region;
          }
          else if (hashCode == compliance_assessments_category_HASH)
          {
            return OcsfStringField::compliance_assessments_category;
          }
          else if (hashCode == compliance_assessments_name_HASH)
          {
            return OcsfStringField::compliance_assessments_name;
          }
          else if (hashCode == compliance_control_HASH)
          {
            return OcsfStringField::compliance_control;
          }
          else if (hashCode == compliance_status_HASH)
          {
            return OcsfStringField::compliance_status;
          }
          else if (hashCode == compliance_standards_HASH)
          {
            return OcsfStringField::compliance_standards;
          }
          else if (hashCode == finding_info_desc_HASH)
          {
            return OcsfStringField::finding_info_desc;
          }
          else if (hashCode == finding_info_src_url_HASH)
          {
            return OcsfStringField::finding_info_src_url;
          }
          else if (hashCode == finding_info_title_HASH)
          {
            return OcsfStringField::finding_info_title;
          }
          else if (hashCode == finding_info_types_HASH)
          {
            return OcsfStringField::finding_info_types;
          }
          else if (hashCode == finding_info_uid_HASH)
          {
            return OcsfStringField::finding_info_uid;
          }
          else if (hashCode == finding_info_related_events_uid_HASH)
          {
            return OcsfStringField::finding_info_related_events_uid;
          }
          else if (hashCode == finding_info_related_events_product_uid_HASH)
          {
            return OcsfStringField::finding_info_related_events_product_uid;
          }
          else if (hashCode == finding_info_related_events_title_HASH)
          {
            return OcsfStringField::finding_info_related_events_title;
          }
          else if (hashCode == metadata_product_name_HASH)
          {
            return OcsfStringField::metadata_product_name;
          }
          else if (hashCode == metadata_product_uid_HASH)
          {
            return OcsfStringField::metadata_product_uid;
          }
          else if (hashCode == metadata_product_vendor_name_HASH)
          {
            return OcsfStringField::metadata_product_vendor_name;
          }
          else if (hashCode == remediation_desc_HASH)
          {
            return OcsfStringField::remediation_desc;
          }
          else if (hashCode == remediation_references_HASH)
          {
            return OcsfStringField::remediation_references;
          }
          else if (hashCode == resources_cloud_partition_HASH)
          {
            return OcsfStringField::resources_cloud_partition;
          }
          else if (hashCode == resources_region_HASH)
          {
            return OcsfStringField::resources_region;
          }
          else if (hashCode == resources_type_HASH)
          {
            return OcsfStringField::resources_type;
          }
          else if (hashCode == resources_uid_HASH)
          {
            return OcsfStringField::resources_uid;
          }
          else if (hashCode == severity_HASH)
          {
            return OcsfStringField::severity;
          }
          else if (hashCode == status_HASH)
          {
            return OcsfStringField::status;
          }
          else if (hashCode == comment_HASH)
          {
            return OcsfStringField::comment;
          }
          else if (hashCode == vulnerabilities_fix_coverage_HASH)
          {
            return OcsfStringField::vulnerabilities_fix_coverage;
          }
          else if (hashCode == class_name_HASH)
          {
            return OcsfStringField::class_name;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OcsfStringField>(hashCode);
          }

          return OcsfStringField::NOT_SET;
        }

        Aws::String GetNameForOcsfStringField(OcsfStringField enumValue)
        {
          switch(enumValue)
          {
          case OcsfStringField::NOT_SET:
            return {};
          case OcsfStringField::metadata_uid:
            return "metadata.uid";
          case OcsfStringField::activity_name:
            return "activity_name";
          case OcsfStringField::cloud_account_uid:
            return "cloud.account.uid";
          case OcsfStringField::cloud_provider:
            return "cloud.provider";
          case OcsfStringField::cloud_region:
            return "cloud.region";
          case OcsfStringField::compliance_assessments_category:
            return "compliance.assessments.category";
          case OcsfStringField::compliance_assessments_name:
            return "compliance.assessments.name";
          case OcsfStringField::compliance_control:
            return "compliance.control";
          case OcsfStringField::compliance_status:
            return "compliance.status";
          case OcsfStringField::compliance_standards:
            return "compliance.standards";
          case OcsfStringField::finding_info_desc:
            return "finding_info.desc";
          case OcsfStringField::finding_info_src_url:
            return "finding_info.src_url";
          case OcsfStringField::finding_info_title:
            return "finding_info.title";
          case OcsfStringField::finding_info_types:
            return "finding_info.types";
          case OcsfStringField::finding_info_uid:
            return "finding_info.uid";
          case OcsfStringField::finding_info_related_events_uid:
            return "finding_info.related_events.uid";
          case OcsfStringField::finding_info_related_events_product_uid:
            return "finding_info.related_events.product.uid";
          case OcsfStringField::finding_info_related_events_title:
            return "finding_info.related_events.title";
          case OcsfStringField::metadata_product_name:
            return "metadata.product.name";
          case OcsfStringField::metadata_product_uid:
            return "metadata.product.uid";
          case OcsfStringField::metadata_product_vendor_name:
            return "metadata.product.vendor_name";
          case OcsfStringField::remediation_desc:
            return "remediation.desc";
          case OcsfStringField::remediation_references:
            return "remediation.references";
          case OcsfStringField::resources_cloud_partition:
            return "resources.cloud_partition";
          case OcsfStringField::resources_region:
            return "resources.region";
          case OcsfStringField::resources_type:
            return "resources.type";
          case OcsfStringField::resources_uid:
            return "resources.uid";
          case OcsfStringField::severity:
            return "severity";
          case OcsfStringField::status:
            return "status";
          case OcsfStringField::comment:
            return "comment";
          case OcsfStringField::vulnerabilities_fix_coverage:
            return "vulnerabilities.fix_coverage";
          case OcsfStringField::class_name:
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

      } // namespace OcsfStringFieldMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
