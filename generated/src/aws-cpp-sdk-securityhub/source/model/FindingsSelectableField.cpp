/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/FindingsSelectableField.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace FindingsSelectableFieldMapper {

static const int metadata_uid_HASH = HashingUtils::HashString("metadata.uid");
static const int activity_name_HASH = HashingUtils::HashString("activity_name");
static const int cloud_account_name_HASH = HashingUtils::HashString("cloud.account.name");
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
static const int finding_info_related_events_traits_category_HASH = HashingUtils::HashString("finding_info.related_events.traits.category");
static const int finding_info_related_events_uid_HASH = HashingUtils::HashString("finding_info.related_events.uid");
static const int finding_info_related_events_product_uid_HASH = HashingUtils::HashString("finding_info.related_events.product.uid");
static const int finding_info_related_events_title_HASH = HashingUtils::HashString("finding_info.related_events.title");
static const int metadata_product_feature_uid_HASH = HashingUtils::HashString("metadata.product.feature.uid");
static const int metadata_product_name_HASH = HashingUtils::HashString("metadata.product.name");
static const int metadata_product_uid_HASH = HashingUtils::HashString("metadata.product.uid");
static const int metadata_product_vendor_name_HASH = HashingUtils::HashString("metadata.product.vendor_name");
static const int remediation_desc_HASH = HashingUtils::HashString("remediation.desc");
static const int remediation_references_HASH = HashingUtils::HashString("remediation.references");
static const int resources_cloud_partition_HASH = HashingUtils::HashString("resources.cloud_partition");
static const int resources_name_HASH = HashingUtils::HashString("resources.name");
static const int resources_owner_account_uid_HASH = HashingUtils::HashString("resources.owner.account.uid");
static const int resources_owner_org_uid_HASH = HashingUtils::HashString("resources.owner.org.uid");
static const int resources_owner_account_name_HASH = HashingUtils::HashString("resources.owner.account.name");
static const int resources_provider_HASH = HashingUtils::HashString("resources.provider");
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
static const int vulnerabilities_cve_cvss_vendor_name_HASH = HashingUtils::HashString("vulnerabilities.cve.cvss.vendor_name");
static const int vulnerabilities_cve_cvss_version_HASH = HashingUtils::HashString("vulnerabilities.cve.cvss.version");
static const int vulnerabilities_cve_epss_score_HASH = HashingUtils::HashString("vulnerabilities.cve.epss.score");
static const int vulnerabilities_cve_uid_HASH = HashingUtils::HashString("vulnerabilities.cve.uid");
static const int vulnerabilities_related_vulnerabilities_HASH = HashingUtils::HashString("vulnerabilities.related_vulnerabilities");
static const int vendor_attributes_severity_HASH = HashingUtils::HashString("vendor_attributes.severity");
static const int activity_id_HASH = HashingUtils::HashString("activity_id");
static const int compliance_status_id_HASH = HashingUtils::HashString("compliance.status_id");
static const int confidence_score_HASH = HashingUtils::HashString("confidence_score");
static const int severity_id_HASH = HashingUtils::HashString("severity_id");
static const int status_id_HASH = HashingUtils::HashString("status_id");
static const int finding_info_related_events_count_HASH = HashingUtils::HashString("finding_info.related_events_count");
static const int evidences_api_response_code_HASH = HashingUtils::HashString("evidences.api.response.code");
static const int evidences_dst_endpoint_autonomous_system_number_HASH =
    HashingUtils::HashString("evidences.dst_endpoint.autonomous_system.number");
static const int evidences_dst_endpoint_port_HASH = HashingUtils::HashString("evidences.dst_endpoint.port");
static const int evidences_src_endpoint_autonomous_system_number_HASH =
    HashingUtils::HashString("evidences.src_endpoint.autonomous_system.number");
static const int evidences_src_endpoint_port_HASH = HashingUtils::HashString("evidences.src_endpoint.port");
static const int resources_image_in_use_count_HASH = HashingUtils::HashString("resources.image.in_use_count");
static const int vulnerabilities_cve_cvss_base_score_HASH = HashingUtils::HashString("vulnerabilities.cve.cvss.base_score");
static const int vendor_attributes_severity_id_HASH = HashingUtils::HashString("vendor_attributes.severity_id");
static const int finding_info_created_time_dt_HASH = HashingUtils::HashString("finding_info.created_time_dt");
static const int finding_info_first_seen_time_dt_HASH = HashingUtils::HashString("finding_info.first_seen_time_dt");
static const int finding_info_last_seen_time_dt_HASH = HashingUtils::HashString("finding_info.last_seen_time_dt");
static const int finding_info_modified_time_dt_HASH = HashingUtils::HashString("finding_info.modified_time_dt");
static const int resources_image_created_time_dt_HASH = HashingUtils::HashString("resources.image.created_time_dt");
static const int resources_image_last_used_time_dt_HASH = HashingUtils::HashString("resources.image.last_used_time_dt");
static const int resources_modified_time_dt_HASH = HashingUtils::HashString("resources.modified_time_dt");
static const int compliance_assessments_meets_criteria_HASH = HashingUtils::HashString("compliance.assessments.meets_criteria");
static const int vulnerabilities_is_exploit_available_HASH = HashingUtils::HashString("vulnerabilities.is_exploit_available");
static const int vulnerabilities_is_fix_available_HASH = HashingUtils::HashString("vulnerabilities.is_fix_available");
static const int resources_tags_HASH = HashingUtils::HashString("resources.tags");
static const int compliance_control_parameters_HASH = HashingUtils::HashString("compliance.control_parameters");
static const int databucket_tags_HASH = HashingUtils::HashString("databucket.tags");
static const int finding_info_tags_HASH = HashingUtils::HashString("finding_info.tags");
static const int evidences_dst_endpoint_ip_HASH = HashingUtils::HashString("evidences.dst_endpoint.ip");
static const int evidences_src_endpoint_ip_HASH = HashingUtils::HashString("evidences.src_endpoint.ip");

FindingsSelectableField GetFindingsSelectableFieldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == metadata_uid_HASH) {
    return FindingsSelectableField::metadata_uid;
  } else if (hashCode == activity_name_HASH) {
    return FindingsSelectableField::activity_name;
  } else if (hashCode == cloud_account_name_HASH) {
    return FindingsSelectableField::cloud_account_name;
  } else if (hashCode == cloud_account_uid_HASH) {
    return FindingsSelectableField::cloud_account_uid;
  } else if (hashCode == cloud_provider_HASH) {
    return FindingsSelectableField::cloud_provider;
  } else if (hashCode == cloud_region_HASH) {
    return FindingsSelectableField::cloud_region;
  } else if (hashCode == compliance_assessments_category_HASH) {
    return FindingsSelectableField::compliance_assessments_category;
  } else if (hashCode == compliance_assessments_name_HASH) {
    return FindingsSelectableField::compliance_assessments_name;
  } else if (hashCode == compliance_control_HASH) {
    return FindingsSelectableField::compliance_control;
  } else if (hashCode == compliance_status_HASH) {
    return FindingsSelectableField::compliance_status;
  } else if (hashCode == compliance_standards_HASH) {
    return FindingsSelectableField::compliance_standards;
  } else if (hashCode == finding_info_desc_HASH) {
    return FindingsSelectableField::finding_info_desc;
  } else if (hashCode == finding_info_src_url_HASH) {
    return FindingsSelectableField::finding_info_src_url;
  } else if (hashCode == finding_info_title_HASH) {
    return FindingsSelectableField::finding_info_title;
  } else if (hashCode == finding_info_types_HASH) {
    return FindingsSelectableField::finding_info_types;
  } else if (hashCode == finding_info_uid_HASH) {
    return FindingsSelectableField::finding_info_uid;
  } else if (hashCode == finding_info_related_events_traits_category_HASH) {
    return FindingsSelectableField::finding_info_related_events_traits_category;
  } else if (hashCode == finding_info_related_events_uid_HASH) {
    return FindingsSelectableField::finding_info_related_events_uid;
  } else if (hashCode == finding_info_related_events_product_uid_HASH) {
    return FindingsSelectableField::finding_info_related_events_product_uid;
  } else if (hashCode == finding_info_related_events_title_HASH) {
    return FindingsSelectableField::finding_info_related_events_title;
  } else if (hashCode == metadata_product_feature_uid_HASH) {
    return FindingsSelectableField::metadata_product_feature_uid;
  } else if (hashCode == metadata_product_name_HASH) {
    return FindingsSelectableField::metadata_product_name;
  } else if (hashCode == metadata_product_uid_HASH) {
    return FindingsSelectableField::metadata_product_uid;
  } else if (hashCode == metadata_product_vendor_name_HASH) {
    return FindingsSelectableField::metadata_product_vendor_name;
  } else if (hashCode == remediation_desc_HASH) {
    return FindingsSelectableField::remediation_desc;
  } else if (hashCode == remediation_references_HASH) {
    return FindingsSelectableField::remediation_references;
  } else if (hashCode == resources_cloud_partition_HASH) {
    return FindingsSelectableField::resources_cloud_partition;
  } else if (hashCode == resources_name_HASH) {
    return FindingsSelectableField::resources_name;
  } else if (hashCode == resources_owner_account_uid_HASH) {
    return FindingsSelectableField::resources_owner_account_uid;
  } else if (hashCode == resources_owner_org_uid_HASH) {
    return FindingsSelectableField::resources_owner_org_uid;
  } else if (hashCode == resources_owner_account_name_HASH) {
    return FindingsSelectableField::resources_owner_account_name;
  } else if (hashCode == resources_provider_HASH) {
    return FindingsSelectableField::resources_provider;
  } else if (hashCode == resources_region_HASH) {
    return FindingsSelectableField::resources_region;
  } else if (hashCode == resources_type_HASH) {
    return FindingsSelectableField::resources_type;
  } else if (hashCode == resources_uid_HASH) {
    return FindingsSelectableField::resources_uid;
  } else if (hashCode == severity_HASH) {
    return FindingsSelectableField::severity;
  } else if (hashCode == status_HASH) {
    return FindingsSelectableField::status;
  } else if (hashCode == comment_HASH) {
    return FindingsSelectableField::comment;
  } else if (hashCode == vulnerabilities_fix_coverage_HASH) {
    return FindingsSelectableField::vulnerabilities_fix_coverage;
  } else if (hashCode == class_name_HASH) {
    return FindingsSelectableField::class_name;
  } else if (hashCode == databucket_encryption_details_algorithm_HASH) {
    return FindingsSelectableField::databucket_encryption_details_algorithm;
  } else if (hashCode == databucket_encryption_details_key_uid_HASH) {
    return FindingsSelectableField::databucket_encryption_details_key_uid;
  } else if (hashCode == databucket_file_data_classifications_classifier_details_type_HASH) {
    return FindingsSelectableField::databucket_file_data_classifications_classifier_details_type;
  } else if (hashCode == evidences_actor_user_account_uid_HASH) {
    return FindingsSelectableField::evidences_actor_user_account_uid;
  } else if (hashCode == evidences_api_operation_HASH) {
    return FindingsSelectableField::evidences_api_operation;
  } else if (hashCode == evidences_api_response_error_message_HASH) {
    return FindingsSelectableField::evidences_api_response_error_message;
  } else if (hashCode == evidences_api_service_name_HASH) {
    return FindingsSelectableField::evidences_api_service_name;
  } else if (hashCode == evidences_connection_info_direction_HASH) {
    return FindingsSelectableField::evidences_connection_info_direction;
  } else if (hashCode == evidences_connection_info_protocol_name_HASH) {
    return FindingsSelectableField::evidences_connection_info_protocol_name;
  } else if (hashCode == evidences_dst_endpoint_autonomous_system_name_HASH) {
    return FindingsSelectableField::evidences_dst_endpoint_autonomous_system_name;
  } else if (hashCode == evidences_dst_endpoint_location_city_HASH) {
    return FindingsSelectableField::evidences_dst_endpoint_location_city;
  } else if (hashCode == evidences_dst_endpoint_location_country_HASH) {
    return FindingsSelectableField::evidences_dst_endpoint_location_country;
  } else if (hashCode == evidences_src_endpoint_autonomous_system_name_HASH) {
    return FindingsSelectableField::evidences_src_endpoint_autonomous_system_name;
  } else if (hashCode == evidences_src_endpoint_hostname_HASH) {
    return FindingsSelectableField::evidences_src_endpoint_hostname;
  } else if (hashCode == evidences_src_endpoint_location_city_HASH) {
    return FindingsSelectableField::evidences_src_endpoint_location_city;
  } else if (hashCode == evidences_src_endpoint_location_country_HASH) {
    return FindingsSelectableField::evidences_src_endpoint_location_country;
  } else if (hashCode == finding_info_analytic_name_HASH) {
    return FindingsSelectableField::finding_info_analytic_name;
  } else if (hashCode == malware_name_HASH) {
    return FindingsSelectableField::malware_name;
  } else if (hashCode == malware_scan_info_uid_HASH) {
    return FindingsSelectableField::malware_scan_info_uid;
  } else if (hashCode == malware_severity_HASH) {
    return FindingsSelectableField::malware_severity;
  } else if (hashCode == resources_cloud_function_layers_uid_alt_HASH) {
    return FindingsSelectableField::resources_cloud_function_layers_uid_alt;
  } else if (hashCode == resources_cloud_function_runtime_HASH) {
    return FindingsSelectableField::resources_cloud_function_runtime;
  } else if (hashCode == resources_cloud_function_user_uid_HASH) {
    return FindingsSelectableField::resources_cloud_function_user_uid;
  } else if (hashCode == resources_device_encryption_details_key_uid_HASH) {
    return FindingsSelectableField::resources_device_encryption_details_key_uid;
  } else if (hashCode == resources_device_image_uid_HASH) {
    return FindingsSelectableField::resources_device_image_uid;
  } else if (hashCode == resources_image_architecture_HASH) {
    return FindingsSelectableField::resources_image_architecture;
  } else if (hashCode == resources_image_registry_uid_HASH) {
    return FindingsSelectableField::resources_image_registry_uid;
  } else if (hashCode == resources_image_repository_name_HASH) {
    return FindingsSelectableField::resources_image_repository_name;
  } else if (hashCode == resources_image_uid_HASH) {
    return FindingsSelectableField::resources_image_uid;
  } else if (hashCode == resources_subnet_info_uid_HASH) {
    return FindingsSelectableField::resources_subnet_info_uid;
  } else if (hashCode == resources_vpc_uid_HASH) {
    return FindingsSelectableField::resources_vpc_uid;
  } else if (hashCode == vulnerabilities_affected_code_file_path_HASH) {
    return FindingsSelectableField::vulnerabilities_affected_code_file_path;
  } else if (hashCode == vulnerabilities_affected_packages_name_HASH) {
    return FindingsSelectableField::vulnerabilities_affected_packages_name;
  } else if (hashCode == vulnerabilities_cve_cvss_vendor_name_HASH) {
    return FindingsSelectableField::vulnerabilities_cve_cvss_vendor_name;
  } else if (hashCode == vulnerabilities_cve_cvss_version_HASH) {
    return FindingsSelectableField::vulnerabilities_cve_cvss_version;
  } else if (hashCode == vulnerabilities_cve_epss_score_HASH) {
    return FindingsSelectableField::vulnerabilities_cve_epss_score;
  } else if (hashCode == vulnerabilities_cve_uid_HASH) {
    return FindingsSelectableField::vulnerabilities_cve_uid;
  } else if (hashCode == vulnerabilities_related_vulnerabilities_HASH) {
    return FindingsSelectableField::vulnerabilities_related_vulnerabilities;
  } else if (hashCode == vendor_attributes_severity_HASH) {
    return FindingsSelectableField::vendor_attributes_severity;
  } else if (hashCode == activity_id_HASH) {
    return FindingsSelectableField::activity_id;
  } else if (hashCode == compliance_status_id_HASH) {
    return FindingsSelectableField::compliance_status_id;
  } else if (hashCode == confidence_score_HASH) {
    return FindingsSelectableField::confidence_score;
  } else if (hashCode == severity_id_HASH) {
    return FindingsSelectableField::severity_id;
  } else if (hashCode == status_id_HASH) {
    return FindingsSelectableField::status_id;
  } else if (hashCode == finding_info_related_events_count_HASH) {
    return FindingsSelectableField::finding_info_related_events_count;
  } else if (hashCode == evidences_api_response_code_HASH) {
    return FindingsSelectableField::evidences_api_response_code;
  } else if (hashCode == evidences_dst_endpoint_autonomous_system_number_HASH) {
    return FindingsSelectableField::evidences_dst_endpoint_autonomous_system_number;
  } else if (hashCode == evidences_dst_endpoint_port_HASH) {
    return FindingsSelectableField::evidences_dst_endpoint_port;
  } else if (hashCode == evidences_src_endpoint_autonomous_system_number_HASH) {
    return FindingsSelectableField::evidences_src_endpoint_autonomous_system_number;
  } else if (hashCode == evidences_src_endpoint_port_HASH) {
    return FindingsSelectableField::evidences_src_endpoint_port;
  } else if (hashCode == resources_image_in_use_count_HASH) {
    return FindingsSelectableField::resources_image_in_use_count;
  } else if (hashCode == vulnerabilities_cve_cvss_base_score_HASH) {
    return FindingsSelectableField::vulnerabilities_cve_cvss_base_score;
  } else if (hashCode == vendor_attributes_severity_id_HASH) {
    return FindingsSelectableField::vendor_attributes_severity_id;
  } else if (hashCode == finding_info_created_time_dt_HASH) {
    return FindingsSelectableField::finding_info_created_time_dt;
  } else if (hashCode == finding_info_first_seen_time_dt_HASH) {
    return FindingsSelectableField::finding_info_first_seen_time_dt;
  } else if (hashCode == finding_info_last_seen_time_dt_HASH) {
    return FindingsSelectableField::finding_info_last_seen_time_dt;
  } else if (hashCode == finding_info_modified_time_dt_HASH) {
    return FindingsSelectableField::finding_info_modified_time_dt;
  } else if (hashCode == resources_image_created_time_dt_HASH) {
    return FindingsSelectableField::resources_image_created_time_dt;
  } else if (hashCode == resources_image_last_used_time_dt_HASH) {
    return FindingsSelectableField::resources_image_last_used_time_dt;
  } else if (hashCode == resources_modified_time_dt_HASH) {
    return FindingsSelectableField::resources_modified_time_dt;
  } else if (hashCode == compliance_assessments_meets_criteria_HASH) {
    return FindingsSelectableField::compliance_assessments_meets_criteria;
  } else if (hashCode == vulnerabilities_is_exploit_available_HASH) {
    return FindingsSelectableField::vulnerabilities_is_exploit_available;
  } else if (hashCode == vulnerabilities_is_fix_available_HASH) {
    return FindingsSelectableField::vulnerabilities_is_fix_available;
  } else if (hashCode == resources_tags_HASH) {
    return FindingsSelectableField::resources_tags;
  } else if (hashCode == compliance_control_parameters_HASH) {
    return FindingsSelectableField::compliance_control_parameters;
  } else if (hashCode == databucket_tags_HASH) {
    return FindingsSelectableField::databucket_tags;
  } else if (hashCode == finding_info_tags_HASH) {
    return FindingsSelectableField::finding_info_tags;
  } else if (hashCode == evidences_dst_endpoint_ip_HASH) {
    return FindingsSelectableField::evidences_dst_endpoint_ip;
  } else if (hashCode == evidences_src_endpoint_ip_HASH) {
    return FindingsSelectableField::evidences_src_endpoint_ip;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FindingsSelectableField>(hashCode);
  }

  return FindingsSelectableField::NOT_SET;
}

Aws::String GetNameForFindingsSelectableField(FindingsSelectableField enumValue) {
  switch (enumValue) {
    case FindingsSelectableField::NOT_SET:
      return {};
    case FindingsSelectableField::metadata_uid:
      return "metadata.uid";
    case FindingsSelectableField::activity_name:
      return "activity_name";
    case FindingsSelectableField::cloud_account_name:
      return "cloud.account.name";
    case FindingsSelectableField::cloud_account_uid:
      return "cloud.account.uid";
    case FindingsSelectableField::cloud_provider:
      return "cloud.provider";
    case FindingsSelectableField::cloud_region:
      return "cloud.region";
    case FindingsSelectableField::compliance_assessments_category:
      return "compliance.assessments.category";
    case FindingsSelectableField::compliance_assessments_name:
      return "compliance.assessments.name";
    case FindingsSelectableField::compliance_control:
      return "compliance.control";
    case FindingsSelectableField::compliance_status:
      return "compliance.status";
    case FindingsSelectableField::compliance_standards:
      return "compliance.standards";
    case FindingsSelectableField::finding_info_desc:
      return "finding_info.desc";
    case FindingsSelectableField::finding_info_src_url:
      return "finding_info.src_url";
    case FindingsSelectableField::finding_info_title:
      return "finding_info.title";
    case FindingsSelectableField::finding_info_types:
      return "finding_info.types";
    case FindingsSelectableField::finding_info_uid:
      return "finding_info.uid";
    case FindingsSelectableField::finding_info_related_events_traits_category:
      return "finding_info.related_events.traits.category";
    case FindingsSelectableField::finding_info_related_events_uid:
      return "finding_info.related_events.uid";
    case FindingsSelectableField::finding_info_related_events_product_uid:
      return "finding_info.related_events.product.uid";
    case FindingsSelectableField::finding_info_related_events_title:
      return "finding_info.related_events.title";
    case FindingsSelectableField::metadata_product_feature_uid:
      return "metadata.product.feature.uid";
    case FindingsSelectableField::metadata_product_name:
      return "metadata.product.name";
    case FindingsSelectableField::metadata_product_uid:
      return "metadata.product.uid";
    case FindingsSelectableField::metadata_product_vendor_name:
      return "metadata.product.vendor_name";
    case FindingsSelectableField::remediation_desc:
      return "remediation.desc";
    case FindingsSelectableField::remediation_references:
      return "remediation.references";
    case FindingsSelectableField::resources_cloud_partition:
      return "resources.cloud_partition";
    case FindingsSelectableField::resources_name:
      return "resources.name";
    case FindingsSelectableField::resources_owner_account_uid:
      return "resources.owner.account.uid";
    case FindingsSelectableField::resources_owner_org_uid:
      return "resources.owner.org.uid";
    case FindingsSelectableField::resources_owner_account_name:
      return "resources.owner.account.name";
    case FindingsSelectableField::resources_provider:
      return "resources.provider";
    case FindingsSelectableField::resources_region:
      return "resources.region";
    case FindingsSelectableField::resources_type:
      return "resources.type";
    case FindingsSelectableField::resources_uid:
      return "resources.uid";
    case FindingsSelectableField::severity:
      return "severity";
    case FindingsSelectableField::status:
      return "status";
    case FindingsSelectableField::comment:
      return "comment";
    case FindingsSelectableField::vulnerabilities_fix_coverage:
      return "vulnerabilities.fix_coverage";
    case FindingsSelectableField::class_name:
      return "class_name";
    case FindingsSelectableField::databucket_encryption_details_algorithm:
      return "databucket.encryption_details.algorithm";
    case FindingsSelectableField::databucket_encryption_details_key_uid:
      return "databucket.encryption_details.key_uid";
    case FindingsSelectableField::databucket_file_data_classifications_classifier_details_type:
      return "databucket.file.data_classifications.classifier_details.type";
    case FindingsSelectableField::evidences_actor_user_account_uid:
      return "evidences.actor.user.account.uid";
    case FindingsSelectableField::evidences_api_operation:
      return "evidences.api.operation";
    case FindingsSelectableField::evidences_api_response_error_message:
      return "evidences.api.response.error_message";
    case FindingsSelectableField::evidences_api_service_name:
      return "evidences.api.service.name";
    case FindingsSelectableField::evidences_connection_info_direction:
      return "evidences.connection_info.direction";
    case FindingsSelectableField::evidences_connection_info_protocol_name:
      return "evidences.connection_info.protocol_name";
    case FindingsSelectableField::evidences_dst_endpoint_autonomous_system_name:
      return "evidences.dst_endpoint.autonomous_system.name";
    case FindingsSelectableField::evidences_dst_endpoint_location_city:
      return "evidences.dst_endpoint.location.city";
    case FindingsSelectableField::evidences_dst_endpoint_location_country:
      return "evidences.dst_endpoint.location.country";
    case FindingsSelectableField::evidences_src_endpoint_autonomous_system_name:
      return "evidences.src_endpoint.autonomous_system.name";
    case FindingsSelectableField::evidences_src_endpoint_hostname:
      return "evidences.src_endpoint.hostname";
    case FindingsSelectableField::evidences_src_endpoint_location_city:
      return "evidences.src_endpoint.location.city";
    case FindingsSelectableField::evidences_src_endpoint_location_country:
      return "evidences.src_endpoint.location.country";
    case FindingsSelectableField::finding_info_analytic_name:
      return "finding_info.analytic.name";
    case FindingsSelectableField::malware_name:
      return "malware.name";
    case FindingsSelectableField::malware_scan_info_uid:
      return "malware_scan_info.uid";
    case FindingsSelectableField::malware_severity:
      return "malware.severity";
    case FindingsSelectableField::resources_cloud_function_layers_uid_alt:
      return "resources.cloud_function.layers.uid_alt";
    case FindingsSelectableField::resources_cloud_function_runtime:
      return "resources.cloud_function.runtime";
    case FindingsSelectableField::resources_cloud_function_user_uid:
      return "resources.cloud_function.user.uid";
    case FindingsSelectableField::resources_device_encryption_details_key_uid:
      return "resources.device.encryption_details.key_uid";
    case FindingsSelectableField::resources_device_image_uid:
      return "resources.device.image.uid";
    case FindingsSelectableField::resources_image_architecture:
      return "resources.image.architecture";
    case FindingsSelectableField::resources_image_registry_uid:
      return "resources.image.registry_uid";
    case FindingsSelectableField::resources_image_repository_name:
      return "resources.image.repository_name";
    case FindingsSelectableField::resources_image_uid:
      return "resources.image.uid";
    case FindingsSelectableField::resources_subnet_info_uid:
      return "resources.subnet_info.uid";
    case FindingsSelectableField::resources_vpc_uid:
      return "resources.vpc_uid";
    case FindingsSelectableField::vulnerabilities_affected_code_file_path:
      return "vulnerabilities.affected_code.file.path";
    case FindingsSelectableField::vulnerabilities_affected_packages_name:
      return "vulnerabilities.affected_packages.name";
    case FindingsSelectableField::vulnerabilities_cve_cvss_vendor_name:
      return "vulnerabilities.cve.cvss.vendor_name";
    case FindingsSelectableField::vulnerabilities_cve_cvss_version:
      return "vulnerabilities.cve.cvss.version";
    case FindingsSelectableField::vulnerabilities_cve_epss_score:
      return "vulnerabilities.cve.epss.score";
    case FindingsSelectableField::vulnerabilities_cve_uid:
      return "vulnerabilities.cve.uid";
    case FindingsSelectableField::vulnerabilities_related_vulnerabilities:
      return "vulnerabilities.related_vulnerabilities";
    case FindingsSelectableField::vendor_attributes_severity:
      return "vendor_attributes.severity";
    case FindingsSelectableField::activity_id:
      return "activity_id";
    case FindingsSelectableField::compliance_status_id:
      return "compliance.status_id";
    case FindingsSelectableField::confidence_score:
      return "confidence_score";
    case FindingsSelectableField::severity_id:
      return "severity_id";
    case FindingsSelectableField::status_id:
      return "status_id";
    case FindingsSelectableField::finding_info_related_events_count:
      return "finding_info.related_events_count";
    case FindingsSelectableField::evidences_api_response_code:
      return "evidences.api.response.code";
    case FindingsSelectableField::evidences_dst_endpoint_autonomous_system_number:
      return "evidences.dst_endpoint.autonomous_system.number";
    case FindingsSelectableField::evidences_dst_endpoint_port:
      return "evidences.dst_endpoint.port";
    case FindingsSelectableField::evidences_src_endpoint_autonomous_system_number:
      return "evidences.src_endpoint.autonomous_system.number";
    case FindingsSelectableField::evidences_src_endpoint_port:
      return "evidences.src_endpoint.port";
    case FindingsSelectableField::resources_image_in_use_count:
      return "resources.image.in_use_count";
    case FindingsSelectableField::vulnerabilities_cve_cvss_base_score:
      return "vulnerabilities.cve.cvss.base_score";
    case FindingsSelectableField::vendor_attributes_severity_id:
      return "vendor_attributes.severity_id";
    case FindingsSelectableField::finding_info_created_time_dt:
      return "finding_info.created_time_dt";
    case FindingsSelectableField::finding_info_first_seen_time_dt:
      return "finding_info.first_seen_time_dt";
    case FindingsSelectableField::finding_info_last_seen_time_dt:
      return "finding_info.last_seen_time_dt";
    case FindingsSelectableField::finding_info_modified_time_dt:
      return "finding_info.modified_time_dt";
    case FindingsSelectableField::resources_image_created_time_dt:
      return "resources.image.created_time_dt";
    case FindingsSelectableField::resources_image_last_used_time_dt:
      return "resources.image.last_used_time_dt";
    case FindingsSelectableField::resources_modified_time_dt:
      return "resources.modified_time_dt";
    case FindingsSelectableField::compliance_assessments_meets_criteria:
      return "compliance.assessments.meets_criteria";
    case FindingsSelectableField::vulnerabilities_is_exploit_available:
      return "vulnerabilities.is_exploit_available";
    case FindingsSelectableField::vulnerabilities_is_fix_available:
      return "vulnerabilities.is_fix_available";
    case FindingsSelectableField::resources_tags:
      return "resources.tags";
    case FindingsSelectableField::compliance_control_parameters:
      return "compliance.control_parameters";
    case FindingsSelectableField::databucket_tags:
      return "databucket.tags";
    case FindingsSelectableField::finding_info_tags:
      return "finding_info.tags";
    case FindingsSelectableField::evidences_dst_endpoint_ip:
      return "evidences.dst_endpoint.ip";
    case FindingsSelectableField::evidences_src_endpoint_ip:
      return "evidences.src_endpoint.ip";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FindingsSelectableFieldMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
