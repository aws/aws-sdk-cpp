/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/OcsfStringField.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace OcsfStringFieldMapper {

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
static const int databucket_encryption_details_algorithm_HASH = HashingUtils::HashString("databucket.encryption_details.algorithm");
static const int databucket_encryption_details_key_uid_HASH = HashingUtils::HashString("databucket.encryption_details.key_uid");
static const int databucket_file_data_classifications_classifier_details_type_HASH =
    HashingUtils::HashString("databucket.file.data_classifications.classifier_details.type");
static const int evidences_actor_user_account_uid_HASH = HashingUtils::HashString("evidences.actor.user.account.uid");
static const int evidences_api_operation_HASH = HashingUtils::HashString("evidences.api.operation");
static const int evidences_api_response_error_message_HASH = HashingUtils::HashString("evidences.api.response.error_message");
static const int evidences_api_service_name_HASH = HashingUtils::HashString("evidences.api.service.name");
static const int evidences_connection_info_direction_HASH = HashingUtils::HashString("evidences.connection_info.direction");
static const int evidences_connection_info_protocol_name_HASH = HashingUtils::HashString("evidences.connection_info.protocol_name");
static const int evidences_dst_endpoint_autonomous_system_name_HASH =
    HashingUtils::HashString("evidences.dst_endpoint.autonomous_system.name");
static const int evidences_dst_endpoint_location_city_HASH = HashingUtils::HashString("evidences.dst_endpoint.location.city");
static const int evidences_dst_endpoint_location_country_HASH = HashingUtils::HashString("evidences.dst_endpoint.location.country");
static const int evidences_src_endpoint_autonomous_system_name_HASH =
    HashingUtils::HashString("evidences.src_endpoint.autonomous_system.name");
static const int evidences_src_endpoint_hostname_HASH = HashingUtils::HashString("evidences.src_endpoint.hostname");
static const int evidences_src_endpoint_location_city_HASH = HashingUtils::HashString("evidences.src_endpoint.location.city");
static const int evidences_src_endpoint_location_country_HASH = HashingUtils::HashString("evidences.src_endpoint.location.country");
static const int finding_info_analytic_name_HASH = HashingUtils::HashString("finding_info.analytic.name");
static const int malware_name_HASH = HashingUtils::HashString("malware.name");
static const int malware_scan_info_uid_HASH = HashingUtils::HashString("malware_scan_info.uid");
static const int malware_severity_HASH = HashingUtils::HashString("malware.severity");
static const int resources_cloud_function_layers_uid_alt_HASH = HashingUtils::HashString("resources.cloud_function.layers.uid_alt");
static const int resources_cloud_function_runtime_HASH = HashingUtils::HashString("resources.cloud_function.runtime");
static const int resources_cloud_function_user_uid_HASH = HashingUtils::HashString("resources.cloud_function.user.uid");
static const int resources_device_encryption_details_key_uid_HASH = HashingUtils::HashString("resources.device.encryption_details.key_uid");
static const int resources_device_image_uid_HASH = HashingUtils::HashString("resources.device.image.uid");
static const int resources_image_architecture_HASH = HashingUtils::HashString("resources.image.architecture");
static const int resources_image_registry_uid_HASH = HashingUtils::HashString("resources.image.registry_uid");
static const int resources_image_repository_name_HASH = HashingUtils::HashString("resources.image.repository_name");
static const int resources_image_uid_HASH = HashingUtils::HashString("resources.image.uid");
static const int resources_subnet_info_uid_HASH = HashingUtils::HashString("resources.subnet_info.uid");
static const int resources_vpc_uid_HASH = HashingUtils::HashString("resources.vpc_uid");
static const int vulnerabilities_affected_code_file_path_HASH = HashingUtils::HashString("vulnerabilities.affected_code.file.path");
static const int vulnerabilities_affected_packages_name_HASH = HashingUtils::HashString("vulnerabilities.affected_packages.name");
static const int vulnerabilities_cve_epss_score_HASH = HashingUtils::HashString("vulnerabilities.cve.epss.score");
static const int vulnerabilities_cve_uid_HASH = HashingUtils::HashString("vulnerabilities.cve.uid");
static const int vulnerabilities_related_vulnerabilities_HASH = HashingUtils::HashString("vulnerabilities.related_vulnerabilities");
static const int cloud_account_name_HASH = HashingUtils::HashString("cloud.account.name");

OcsfStringField GetOcsfStringFieldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == metadata_uid_HASH) {
    return OcsfStringField::metadata_uid;
  } else if (hashCode == activity_name_HASH) {
    return OcsfStringField::activity_name;
  } else if (hashCode == cloud_account_uid_HASH) {
    return OcsfStringField::cloud_account_uid;
  } else if (hashCode == cloud_provider_HASH) {
    return OcsfStringField::cloud_provider;
  } else if (hashCode == cloud_region_HASH) {
    return OcsfStringField::cloud_region;
  } else if (hashCode == compliance_assessments_category_HASH) {
    return OcsfStringField::compliance_assessments_category;
  } else if (hashCode == compliance_assessments_name_HASH) {
    return OcsfStringField::compliance_assessments_name;
  } else if (hashCode == compliance_control_HASH) {
    return OcsfStringField::compliance_control;
  } else if (hashCode == compliance_status_HASH) {
    return OcsfStringField::compliance_status;
  } else if (hashCode == compliance_standards_HASH) {
    return OcsfStringField::compliance_standards;
  } else if (hashCode == finding_info_desc_HASH) {
    return OcsfStringField::finding_info_desc;
  } else if (hashCode == finding_info_src_url_HASH) {
    return OcsfStringField::finding_info_src_url;
  } else if (hashCode == finding_info_title_HASH) {
    return OcsfStringField::finding_info_title;
  } else if (hashCode == finding_info_types_HASH) {
    return OcsfStringField::finding_info_types;
  } else if (hashCode == finding_info_uid_HASH) {
    return OcsfStringField::finding_info_uid;
  } else if (hashCode == finding_info_related_events_uid_HASH) {
    return OcsfStringField::finding_info_related_events_uid;
  } else if (hashCode == finding_info_related_events_product_uid_HASH) {
    return OcsfStringField::finding_info_related_events_product_uid;
  } else if (hashCode == finding_info_related_events_title_HASH) {
    return OcsfStringField::finding_info_related_events_title;
  } else if (hashCode == metadata_product_name_HASH) {
    return OcsfStringField::metadata_product_name;
  } else if (hashCode == metadata_product_uid_HASH) {
    return OcsfStringField::metadata_product_uid;
  } else if (hashCode == metadata_product_vendor_name_HASH) {
    return OcsfStringField::metadata_product_vendor_name;
  } else if (hashCode == remediation_desc_HASH) {
    return OcsfStringField::remediation_desc;
  } else if (hashCode == remediation_references_HASH) {
    return OcsfStringField::remediation_references;
  } else if (hashCode == resources_cloud_partition_HASH) {
    return OcsfStringField::resources_cloud_partition;
  } else if (hashCode == resources_region_HASH) {
    return OcsfStringField::resources_region;
  } else if (hashCode == resources_type_HASH) {
    return OcsfStringField::resources_type;
  } else if (hashCode == resources_uid_HASH) {
    return OcsfStringField::resources_uid;
  } else if (hashCode == severity_HASH) {
    return OcsfStringField::severity;
  } else if (hashCode == status_HASH) {
    return OcsfStringField::status;
  } else if (hashCode == comment_HASH) {
    return OcsfStringField::comment;
  } else if (hashCode == vulnerabilities_fix_coverage_HASH) {
    return OcsfStringField::vulnerabilities_fix_coverage;
  } else if (hashCode == class_name_HASH) {
    return OcsfStringField::class_name;
  } else if (hashCode == databucket_encryption_details_algorithm_HASH) {
    return OcsfStringField::databucket_encryption_details_algorithm;
  } else if (hashCode == databucket_encryption_details_key_uid_HASH) {
    return OcsfStringField::databucket_encryption_details_key_uid;
  } else if (hashCode == databucket_file_data_classifications_classifier_details_type_HASH) {
    return OcsfStringField::databucket_file_data_classifications_classifier_details_type;
  } else if (hashCode == evidences_actor_user_account_uid_HASH) {
    return OcsfStringField::evidences_actor_user_account_uid;
  } else if (hashCode == evidences_api_operation_HASH) {
    return OcsfStringField::evidences_api_operation;
  } else if (hashCode == evidences_api_response_error_message_HASH) {
    return OcsfStringField::evidences_api_response_error_message;
  } else if (hashCode == evidences_api_service_name_HASH) {
    return OcsfStringField::evidences_api_service_name;
  } else if (hashCode == evidences_connection_info_direction_HASH) {
    return OcsfStringField::evidences_connection_info_direction;
  } else if (hashCode == evidences_connection_info_protocol_name_HASH) {
    return OcsfStringField::evidences_connection_info_protocol_name;
  } else if (hashCode == evidences_dst_endpoint_autonomous_system_name_HASH) {
    return OcsfStringField::evidences_dst_endpoint_autonomous_system_name;
  } else if (hashCode == evidences_dst_endpoint_location_city_HASH) {
    return OcsfStringField::evidences_dst_endpoint_location_city;
  } else if (hashCode == evidences_dst_endpoint_location_country_HASH) {
    return OcsfStringField::evidences_dst_endpoint_location_country;
  } else if (hashCode == evidences_src_endpoint_autonomous_system_name_HASH) {
    return OcsfStringField::evidences_src_endpoint_autonomous_system_name;
  } else if (hashCode == evidences_src_endpoint_hostname_HASH) {
    return OcsfStringField::evidences_src_endpoint_hostname;
  } else if (hashCode == evidences_src_endpoint_location_city_HASH) {
    return OcsfStringField::evidences_src_endpoint_location_city;
  } else if (hashCode == evidences_src_endpoint_location_country_HASH) {
    return OcsfStringField::evidences_src_endpoint_location_country;
  } else if (hashCode == finding_info_analytic_name_HASH) {
    return OcsfStringField::finding_info_analytic_name;
  } else if (hashCode == malware_name_HASH) {
    return OcsfStringField::malware_name;
  } else if (hashCode == malware_scan_info_uid_HASH) {
    return OcsfStringField::malware_scan_info_uid;
  } else if (hashCode == malware_severity_HASH) {
    return OcsfStringField::malware_severity;
  } else if (hashCode == resources_cloud_function_layers_uid_alt_HASH) {
    return OcsfStringField::resources_cloud_function_layers_uid_alt;
  } else if (hashCode == resources_cloud_function_runtime_HASH) {
    return OcsfStringField::resources_cloud_function_runtime;
  } else if (hashCode == resources_cloud_function_user_uid_HASH) {
    return OcsfStringField::resources_cloud_function_user_uid;
  } else if (hashCode == resources_device_encryption_details_key_uid_HASH) {
    return OcsfStringField::resources_device_encryption_details_key_uid;
  } else if (hashCode == resources_device_image_uid_HASH) {
    return OcsfStringField::resources_device_image_uid;
  } else if (hashCode == resources_image_architecture_HASH) {
    return OcsfStringField::resources_image_architecture;
  } else if (hashCode == resources_image_registry_uid_HASH) {
    return OcsfStringField::resources_image_registry_uid;
  } else if (hashCode == resources_image_repository_name_HASH) {
    return OcsfStringField::resources_image_repository_name;
  } else if (hashCode == resources_image_uid_HASH) {
    return OcsfStringField::resources_image_uid;
  } else if (hashCode == resources_subnet_info_uid_HASH) {
    return OcsfStringField::resources_subnet_info_uid;
  } else if (hashCode == resources_vpc_uid_HASH) {
    return OcsfStringField::resources_vpc_uid;
  } else if (hashCode == vulnerabilities_affected_code_file_path_HASH) {
    return OcsfStringField::vulnerabilities_affected_code_file_path;
  } else if (hashCode == vulnerabilities_affected_packages_name_HASH) {
    return OcsfStringField::vulnerabilities_affected_packages_name;
  } else if (hashCode == vulnerabilities_cve_epss_score_HASH) {
    return OcsfStringField::vulnerabilities_cve_epss_score;
  } else if (hashCode == vulnerabilities_cve_uid_HASH) {
    return OcsfStringField::vulnerabilities_cve_uid;
  } else if (hashCode == vulnerabilities_related_vulnerabilities_HASH) {
    return OcsfStringField::vulnerabilities_related_vulnerabilities;
  } else if (hashCode == cloud_account_name_HASH) {
    return OcsfStringField::cloud_account_name;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OcsfStringField>(hashCode);
  }

  return OcsfStringField::NOT_SET;
}

Aws::String GetNameForOcsfStringField(OcsfStringField enumValue) {
  switch (enumValue) {
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
    case OcsfStringField::databucket_encryption_details_algorithm:
      return "databucket.encryption_details.algorithm";
    case OcsfStringField::databucket_encryption_details_key_uid:
      return "databucket.encryption_details.key_uid";
    case OcsfStringField::databucket_file_data_classifications_classifier_details_type:
      return "databucket.file.data_classifications.classifier_details.type";
    case OcsfStringField::evidences_actor_user_account_uid:
      return "evidences.actor.user.account.uid";
    case OcsfStringField::evidences_api_operation:
      return "evidences.api.operation";
    case OcsfStringField::evidences_api_response_error_message:
      return "evidences.api.response.error_message";
    case OcsfStringField::evidences_api_service_name:
      return "evidences.api.service.name";
    case OcsfStringField::evidences_connection_info_direction:
      return "evidences.connection_info.direction";
    case OcsfStringField::evidences_connection_info_protocol_name:
      return "evidences.connection_info.protocol_name";
    case OcsfStringField::evidences_dst_endpoint_autonomous_system_name:
      return "evidences.dst_endpoint.autonomous_system.name";
    case OcsfStringField::evidences_dst_endpoint_location_city:
      return "evidences.dst_endpoint.location.city";
    case OcsfStringField::evidences_dst_endpoint_location_country:
      return "evidences.dst_endpoint.location.country";
    case OcsfStringField::evidences_src_endpoint_autonomous_system_name:
      return "evidences.src_endpoint.autonomous_system.name";
    case OcsfStringField::evidences_src_endpoint_hostname:
      return "evidences.src_endpoint.hostname";
    case OcsfStringField::evidences_src_endpoint_location_city:
      return "evidences.src_endpoint.location.city";
    case OcsfStringField::evidences_src_endpoint_location_country:
      return "evidences.src_endpoint.location.country";
    case OcsfStringField::finding_info_analytic_name:
      return "finding_info.analytic.name";
    case OcsfStringField::malware_name:
      return "malware.name";
    case OcsfStringField::malware_scan_info_uid:
      return "malware_scan_info.uid";
    case OcsfStringField::malware_severity:
      return "malware.severity";
    case OcsfStringField::resources_cloud_function_layers_uid_alt:
      return "resources.cloud_function.layers.uid_alt";
    case OcsfStringField::resources_cloud_function_runtime:
      return "resources.cloud_function.runtime";
    case OcsfStringField::resources_cloud_function_user_uid:
      return "resources.cloud_function.user.uid";
    case OcsfStringField::resources_device_encryption_details_key_uid:
      return "resources.device.encryption_details.key_uid";
    case OcsfStringField::resources_device_image_uid:
      return "resources.device.image.uid";
    case OcsfStringField::resources_image_architecture:
      return "resources.image.architecture";
    case OcsfStringField::resources_image_registry_uid:
      return "resources.image.registry_uid";
    case OcsfStringField::resources_image_repository_name:
      return "resources.image.repository_name";
    case OcsfStringField::resources_image_uid:
      return "resources.image.uid";
    case OcsfStringField::resources_subnet_info_uid:
      return "resources.subnet_info.uid";
    case OcsfStringField::resources_vpc_uid:
      return "resources.vpc_uid";
    case OcsfStringField::vulnerabilities_affected_code_file_path:
      return "vulnerabilities.affected_code.file.path";
    case OcsfStringField::vulnerabilities_affected_packages_name:
      return "vulnerabilities.affected_packages.name";
    case OcsfStringField::vulnerabilities_cve_epss_score:
      return "vulnerabilities.cve.epss.score";
    case OcsfStringField::vulnerabilities_cve_uid:
      return "vulnerabilities.cve.uid";
    case OcsfStringField::vulnerabilities_related_vulnerabilities:
      return "vulnerabilities.related_vulnerabilities";
    case OcsfStringField::cloud_account_name:
      return "cloud.account.name";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OcsfStringFieldMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
