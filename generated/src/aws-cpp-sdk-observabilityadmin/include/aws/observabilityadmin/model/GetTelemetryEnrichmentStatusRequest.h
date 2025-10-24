/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdminRequest.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

/**
 */
class GetTelemetryEnrichmentStatusRequest : public ObservabilityAdminRequest {
 public:
  AWS_OBSERVABILITYADMIN_API GetTelemetryEnrichmentStatusRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetTelemetryEnrichmentStatus"; }

  AWS_OBSERVABILITYADMIN_API Aws::String SerializePayload() const override;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
