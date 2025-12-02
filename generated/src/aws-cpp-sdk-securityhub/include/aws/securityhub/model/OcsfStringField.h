/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>

namespace Aws {
namespace SecurityHub {
namespace Model {
enum class OcsfStringField {
  NOT_SET,
  metadata_uid,
  activity_name,
  cloud_account_uid,
  cloud_provider,
  cloud_region,
  compliance_assessments_category,
  compliance_assessments_name,
  compliance_control,
  compliance_status,
  compliance_standards,
  finding_info_desc,
  finding_info_src_url,
  finding_info_title,
  finding_info_types,
  finding_info_uid,
  finding_info_related_events_traits_category,
  finding_info_related_events_uid,
  finding_info_related_events_product_uid,
  finding_info_related_events_title,
  metadata_product_name,
  metadata_product_uid,
  metadata_product_vendor_name,
  remediation_desc,
  remediation_references,
  resources_cloud_partition,
  resources_region,
  resources_type,
  resources_uid,
  severity,
  status,
  comment,
  vulnerabilities_fix_coverage,
  class_name,
  databucket_encryption_details_algorithm,
  databucket_encryption_details_key_uid,
  databucket_file_data_classifications_classifier_details_type,
  evidences_actor_user_account_uid,
  evidences_api_operation,
  evidences_api_response_error_message,
  evidences_api_service_name,
  evidences_connection_info_direction,
  evidences_connection_info_protocol_name,
  evidences_dst_endpoint_autonomous_system_name,
  evidences_dst_endpoint_location_city,
  evidences_dst_endpoint_location_country,
  evidences_src_endpoint_autonomous_system_name,
  evidences_src_endpoint_hostname,
  evidences_src_endpoint_location_city,
  evidences_src_endpoint_location_country,
  finding_info_analytic_name,
  malware_name,
  malware_scan_info_uid,
  malware_severity,
  resources_cloud_function_layers_uid_alt,
  resources_cloud_function_runtime,
  resources_cloud_function_user_uid,
  resources_device_encryption_details_key_uid,
  resources_device_image_uid,
  resources_image_architecture,
  resources_image_registry_uid,
  resources_image_repository_name,
  resources_image_uid,
  resources_subnet_info_uid,
  resources_vpc_uid,
  vulnerabilities_affected_code_file_path,
  vulnerabilities_affected_packages_name,
  vulnerabilities_cve_epss_score,
  vulnerabilities_cve_uid,
  vulnerabilities_related_vulnerabilities,
  cloud_account_name,
  vendor_attributes_severity
};

namespace OcsfStringFieldMapper {
AWS_SECURITYHUB_API OcsfStringField GetOcsfStringFieldForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForOcsfStringField(OcsfStringField value);
}  // namespace OcsfStringFieldMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
