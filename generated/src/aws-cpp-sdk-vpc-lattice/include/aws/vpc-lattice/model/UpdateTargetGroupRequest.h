/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/VPCLatticeRequest.h>
#include <aws/vpc-lattice/model/HealthCheckConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace VPCLattice
{
namespace Model
{

  /**
   */
  class UpdateTargetGroupRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API UpdateTargetGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTargetGroup"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The health check configuration.</p>
     */
    inline const HealthCheckConfig& GetHealthCheck() const { return m_healthCheck; }
    inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }
    template<typename HealthCheckT = HealthCheckConfig>
    void SetHealthCheck(HealthCheckT&& value) { m_healthCheckHasBeenSet = true; m_healthCheck = std::forward<HealthCheckT>(value); }
    template<typename HealthCheckT = HealthCheckConfig>
    UpdateTargetGroupRequest& WithHealthCheck(HealthCheckT&& value) { SetHealthCheck(std::forward<HealthCheckT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID or ARN of the target group.</p>
     */
    inline const Aws::String& GetTargetGroupIdentifier() const { return m_targetGroupIdentifier; }
    inline bool TargetGroupIdentifierHasBeenSet() const { return m_targetGroupIdentifierHasBeenSet; }
    template<typename TargetGroupIdentifierT = Aws::String>
    void SetTargetGroupIdentifier(TargetGroupIdentifierT&& value) { m_targetGroupIdentifierHasBeenSet = true; m_targetGroupIdentifier = std::forward<TargetGroupIdentifierT>(value); }
    template<typename TargetGroupIdentifierT = Aws::String>
    UpdateTargetGroupRequest& WithTargetGroupIdentifier(TargetGroupIdentifierT&& value) { SetTargetGroupIdentifier(std::forward<TargetGroupIdentifierT>(value)); return *this;}
    ///@}
  private:

    HealthCheckConfig m_healthCheck;
    bool m_healthCheckHasBeenSet = false;

    Aws::String m_targetGroupIdentifier;
    bool m_targetGroupIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
