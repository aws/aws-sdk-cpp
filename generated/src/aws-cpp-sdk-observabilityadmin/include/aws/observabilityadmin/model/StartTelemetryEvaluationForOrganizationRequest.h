/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/observabilityadmin/ObservabilityAdminRequest.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

#include <utility>

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

/**
 */
class StartTelemetryEvaluationForOrganizationRequest : public ObservabilityAdminRequest {
 public:
  AWS_OBSERVABILITYADMIN_API StartTelemetryEvaluationForOrganizationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartTelemetryEvaluationForOrganization"; }

  AWS_OBSERVABILITYADMIN_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p> An optional list of Amazon Web Services Regions to include in multi-region
   * telemetry evaluation for the organization. The current region is always
   * implicitly included and must not be specified in this list. When provided,
   * telemetry evaluation starts in the current region and propagates to all
   * specified regions for the organization. Mutually exclusive with
   * <code>AllRegions</code>. If neither <code>Regions</code> nor
   * <code>AllRegions</code> is provided, the operation applies only to the current
   * region. </p>
   */
  inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
  inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
  template <typename RegionsT = Aws::Vector<Aws::String>>
  void SetRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions = std::forward<RegionsT>(value);
  }
  template <typename RegionsT = Aws::Vector<Aws::String>>
  StartTelemetryEvaluationForOrganizationRequest& WithRegions(RegionsT&& value) {
    SetRegions(std::forward<RegionsT>(value));
    return *this;
  }
  template <typename RegionsT = Aws::String>
  StartTelemetryEvaluationForOrganizationRequest& AddRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions.emplace_back(std::forward<RegionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> If set to <code>true</code>, telemetry evaluation for the organization
   * starts in all Amazon Web Services Regions where Amazon CloudWatch Observability
   * Admin is available in the current partition. The current region becomes the home
   * region for managing multi-region evaluation for the organization. When new
   * regions become available, evaluation automatically expands to include them.
   * Mutually exclusive with <code>Regions</code>. </p>
   */
  inline bool GetAllRegions() const { return m_allRegions; }
  inline bool AllRegionsHasBeenSet() const { return m_allRegionsHasBeenSet; }
  inline void SetAllRegions(bool value) {
    m_allRegionsHasBeenSet = true;
    m_allRegions = value;
  }
  inline StartTelemetryEvaluationForOrganizationRequest& WithAllRegions(bool value) {
    SetAllRegions(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_regions;

  bool m_allRegions{false};
  bool m_regionsHasBeenSet = false;
  bool m_allRegionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
