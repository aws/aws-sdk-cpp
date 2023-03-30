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
    AWS_VPCLATTICE_API UpdateTargetGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTargetGroup"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The health check configuration.</p>
     */
    inline const HealthCheckConfig& GetHealthCheck() const{ return m_healthCheck; }

    /**
     * <p>The health check configuration.</p>
     */
    inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }

    /**
     * <p>The health check configuration.</p>
     */
    inline void SetHealthCheck(const HealthCheckConfig& value) { m_healthCheckHasBeenSet = true; m_healthCheck = value; }

    /**
     * <p>The health check configuration.</p>
     */
    inline void SetHealthCheck(HealthCheckConfig&& value) { m_healthCheckHasBeenSet = true; m_healthCheck = std::move(value); }

    /**
     * <p>The health check configuration.</p>
     */
    inline UpdateTargetGroupRequest& WithHealthCheck(const HealthCheckConfig& value) { SetHealthCheck(value); return *this;}

    /**
     * <p>The health check configuration.</p>
     */
    inline UpdateTargetGroupRequest& WithHealthCheck(HealthCheckConfig&& value) { SetHealthCheck(std::move(value)); return *this;}


    /**
     * <p>The ID or Amazon Resource Name (ARN) of the target group.</p>
     */
    inline const Aws::String& GetTargetGroupIdentifier() const{ return m_targetGroupIdentifier; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the target group.</p>
     */
    inline bool TargetGroupIdentifierHasBeenSet() const { return m_targetGroupIdentifierHasBeenSet; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the target group.</p>
     */
    inline void SetTargetGroupIdentifier(const Aws::String& value) { m_targetGroupIdentifierHasBeenSet = true; m_targetGroupIdentifier = value; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the target group.</p>
     */
    inline void SetTargetGroupIdentifier(Aws::String&& value) { m_targetGroupIdentifierHasBeenSet = true; m_targetGroupIdentifier = std::move(value); }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the target group.</p>
     */
    inline void SetTargetGroupIdentifier(const char* value) { m_targetGroupIdentifierHasBeenSet = true; m_targetGroupIdentifier.assign(value); }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the target group.</p>
     */
    inline UpdateTargetGroupRequest& WithTargetGroupIdentifier(const Aws::String& value) { SetTargetGroupIdentifier(value); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the target group.</p>
     */
    inline UpdateTargetGroupRequest& WithTargetGroupIdentifier(Aws::String&& value) { SetTargetGroupIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the target group.</p>
     */
    inline UpdateTargetGroupRequest& WithTargetGroupIdentifier(const char* value) { SetTargetGroupIdentifier(value); return *this;}

  private:

    HealthCheckConfig m_healthCheck;
    bool m_healthCheckHasBeenSet = false;

    Aws::String m_targetGroupIdentifier;
    bool m_targetGroupIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
