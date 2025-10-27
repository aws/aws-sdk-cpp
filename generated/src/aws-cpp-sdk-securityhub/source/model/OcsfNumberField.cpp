/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/OcsfNumberField.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace OcsfNumberFieldMapper {

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

OcsfNumberField GetOcsfNumberFieldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == activity_id_HASH) {
    return OcsfNumberField::activity_id;
  } else if (hashCode == compliance_status_id_HASH) {
    return OcsfNumberField::compliance_status_id;
  } else if (hashCode == confidence_score_HASH) {
    return OcsfNumberField::confidence_score;
  } else if (hashCode == severity_id_HASH) {
    return OcsfNumberField::severity_id;
  } else if (hashCode == status_id_HASH) {
    return OcsfNumberField::status_id;
  } else if (hashCode == finding_info_related_events_count_HASH) {
    return OcsfNumberField::finding_info_related_events_count;
  } else if (hashCode == evidences_api_response_code_HASH) {
    return OcsfNumberField::evidences_api_response_code;
  } else if (hashCode == evidences_dst_endpoint_autonomous_system_number_HASH) {
    return OcsfNumberField::evidences_dst_endpoint_autonomous_system_number;
  } else if (hashCode == evidences_dst_endpoint_port_HASH) {
    return OcsfNumberField::evidences_dst_endpoint_port;
  } else if (hashCode == evidences_src_endpoint_autonomous_system_number_HASH) {
    return OcsfNumberField::evidences_src_endpoint_autonomous_system_number;
  } else if (hashCode == evidences_src_endpoint_port_HASH) {
    return OcsfNumberField::evidences_src_endpoint_port;
  } else if (hashCode == resources_image_in_use_count_HASH) {
    return OcsfNumberField::resources_image_in_use_count;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OcsfNumberField>(hashCode);
  }

  return OcsfNumberField::NOT_SET;
}

Aws::String GetNameForOcsfNumberField(OcsfNumberField enumValue) {
  switch (enumValue) {
    case OcsfNumberField::NOT_SET:
      return {};
    case OcsfNumberField::activity_id:
      return "activity_id";
    case OcsfNumberField::compliance_status_id:
      return "compliance.status_id";
    case OcsfNumberField::confidence_score:
      return "confidence_score";
    case OcsfNumberField::severity_id:
      return "severity_id";
    case OcsfNumberField::status_id:
      return "status_id";
    case OcsfNumberField::finding_info_related_events_count:
      return "finding_info.related_events_count";
    case OcsfNumberField::evidences_api_response_code:
      return "evidences.api.response.code";
    case OcsfNumberField::evidences_dst_endpoint_autonomous_system_number:
      return "evidences.dst_endpoint.autonomous_system.number";
    case OcsfNumberField::evidences_dst_endpoint_port:
      return "evidences.dst_endpoint.port";
    case OcsfNumberField::evidences_src_endpoint_autonomous_system_number:
      return "evidences.src_endpoint.autonomous_system.number";
    case OcsfNumberField::evidences_src_endpoint_port:
      return "evidences.src_endpoint.port";
    case OcsfNumberField::resources_image_in_use_count:
      return "resources.image.in_use_count";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OcsfNumberFieldMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
