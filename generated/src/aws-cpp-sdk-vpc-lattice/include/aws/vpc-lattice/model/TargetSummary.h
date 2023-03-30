/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/model/TargetStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace VPCLattice
{
namespace Model
{

  /**
   * <p>Summary information about a target.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/TargetSummary">AWS
   * API Reference</a></p>
   */
  class TargetSummary
  {
  public:
    AWS_VPCLATTICE_API TargetSummary();
    AWS_VPCLATTICE_API TargetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API TargetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the target. If the target type of the target group is
     * <code>INSTANCE</code>, this is an instance ID. If the target type is
     * <code>IP</code> , this is an IP address. If the target type is
     * <code>LAMBDA</code>, this is the ARN of the Lambda function. If the target type
     * is <code>ALB</code>, this is the ARN of the Application Load Balancer.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the target. If the target type of the target group is
     * <code>INSTANCE</code>, this is an instance ID. If the target type is
     * <code>IP</code> , this is an IP address. If the target type is
     * <code>LAMBDA</code>, this is the ARN of the Lambda function. If the target type
     * is <code>ALB</code>, this is the ARN of the Application Load Balancer.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the target. If the target type of the target group is
     * <code>INSTANCE</code>, this is an instance ID. If the target type is
     * <code>IP</code> , this is an IP address. If the target type is
     * <code>LAMBDA</code>, this is the ARN of the Lambda function. If the target type
     * is <code>ALB</code>, this is the ARN of the Application Load Balancer.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the target. If the target type of the target group is
     * <code>INSTANCE</code>, this is an instance ID. If the target type is
     * <code>IP</code> , this is an IP address. If the target type is
     * <code>LAMBDA</code>, this is the ARN of the Lambda function. If the target type
     * is <code>ALB</code>, this is the ARN of the Application Load Balancer.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the target. If the target type of the target group is
     * <code>INSTANCE</code>, this is an instance ID. If the target type is
     * <code>IP</code> , this is an IP address. If the target type is
     * <code>LAMBDA</code>, this is the ARN of the Lambda function. If the target type
     * is <code>ALB</code>, this is the ARN of the Application Load Balancer.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the target. If the target type of the target group is
     * <code>INSTANCE</code>, this is an instance ID. If the target type is
     * <code>IP</code> , this is an IP address. If the target type is
     * <code>LAMBDA</code>, this is the ARN of the Lambda function. If the target type
     * is <code>ALB</code>, this is the ARN of the Application Load Balancer.</p>
     */
    inline TargetSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the target. If the target type of the target group is
     * <code>INSTANCE</code>, this is an instance ID. If the target type is
     * <code>IP</code> , this is an IP address. If the target type is
     * <code>LAMBDA</code>, this is the ARN of the Lambda function. If the target type
     * is <code>ALB</code>, this is the ARN of the Application Load Balancer.</p>
     */
    inline TargetSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the target. If the target type of the target group is
     * <code>INSTANCE</code>, this is an instance ID. If the target type is
     * <code>IP</code> , this is an IP address. If the target type is
     * <code>LAMBDA</code>, this is the ARN of the Lambda function. If the target type
     * is <code>ALB</code>, this is the ARN of the Application Load Balancer.</p>
     */
    inline TargetSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The port on which the target is listening.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port on which the target is listening.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port on which the target is listening.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port on which the target is listening.</p>
     */
    inline TargetSummary& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The code for why the target status is what it is.</p>
     */
    inline const Aws::String& GetReasonCode() const{ return m_reasonCode; }

    /**
     * <p>The code for why the target status is what it is.</p>
     */
    inline bool ReasonCodeHasBeenSet() const { return m_reasonCodeHasBeenSet; }

    /**
     * <p>The code for why the target status is what it is.</p>
     */
    inline void SetReasonCode(const Aws::String& value) { m_reasonCodeHasBeenSet = true; m_reasonCode = value; }

    /**
     * <p>The code for why the target status is what it is.</p>
     */
    inline void SetReasonCode(Aws::String&& value) { m_reasonCodeHasBeenSet = true; m_reasonCode = std::move(value); }

    /**
     * <p>The code for why the target status is what it is.</p>
     */
    inline void SetReasonCode(const char* value) { m_reasonCodeHasBeenSet = true; m_reasonCode.assign(value); }

    /**
     * <p>The code for why the target status is what it is.</p>
     */
    inline TargetSummary& WithReasonCode(const Aws::String& value) { SetReasonCode(value); return *this;}

    /**
     * <p>The code for why the target status is what it is.</p>
     */
    inline TargetSummary& WithReasonCode(Aws::String&& value) { SetReasonCode(std::move(value)); return *this;}

    /**
     * <p>The code for why the target status is what it is.</p>
     */
    inline TargetSummary& WithReasonCode(const char* value) { SetReasonCode(value); return *this;}


    /**
     * <p>The status of the target.</p> <ul> <li> <p> <code>Draining</code>: The target
     * is being deregistered. No new connections will be sent to this target while
     * current connections are being drained. Default draining time is 5 minutes.</p>
     * </li> <li> <p> <code>Unavailable</code>: Health checks are unavailable for the
     * target group.</p> </li> <li> <p> <code>Healthy</code>: The target is healthy.
     * </p> </li> <li> <p> <code>Unhealthy</code>: The target is unhealthy.</p> </li>
     * <li> <p> <code>Initial</code>: Initial health checks on the target are being
     * performed.</p> </li> <li> <p> <code>Unused</code>: Target group is not used in a
     * service.</p> </li> </ul>
     */
    inline const TargetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the target.</p> <ul> <li> <p> <code>Draining</code>: The target
     * is being deregistered. No new connections will be sent to this target while
     * current connections are being drained. Default draining time is 5 minutes.</p>
     * </li> <li> <p> <code>Unavailable</code>: Health checks are unavailable for the
     * target group.</p> </li> <li> <p> <code>Healthy</code>: The target is healthy.
     * </p> </li> <li> <p> <code>Unhealthy</code>: The target is unhealthy.</p> </li>
     * <li> <p> <code>Initial</code>: Initial health checks on the target are being
     * performed.</p> </li> <li> <p> <code>Unused</code>: Target group is not used in a
     * service.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the target.</p> <ul> <li> <p> <code>Draining</code>: The target
     * is being deregistered. No new connections will be sent to this target while
     * current connections are being drained. Default draining time is 5 minutes.</p>
     * </li> <li> <p> <code>Unavailable</code>: Health checks are unavailable for the
     * target group.</p> </li> <li> <p> <code>Healthy</code>: The target is healthy.
     * </p> </li> <li> <p> <code>Unhealthy</code>: The target is unhealthy.</p> </li>
     * <li> <p> <code>Initial</code>: Initial health checks on the target are being
     * performed.</p> </li> <li> <p> <code>Unused</code>: Target group is not used in a
     * service.</p> </li> </ul>
     */
    inline void SetStatus(const TargetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the target.</p> <ul> <li> <p> <code>Draining</code>: The target
     * is being deregistered. No new connections will be sent to this target while
     * current connections are being drained. Default draining time is 5 minutes.</p>
     * </li> <li> <p> <code>Unavailable</code>: Health checks are unavailable for the
     * target group.</p> </li> <li> <p> <code>Healthy</code>: The target is healthy.
     * </p> </li> <li> <p> <code>Unhealthy</code>: The target is unhealthy.</p> </li>
     * <li> <p> <code>Initial</code>: Initial health checks on the target are being
     * performed.</p> </li> <li> <p> <code>Unused</code>: Target group is not used in a
     * service.</p> </li> </ul>
     */
    inline void SetStatus(TargetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the target.</p> <ul> <li> <p> <code>Draining</code>: The target
     * is being deregistered. No new connections will be sent to this target while
     * current connections are being drained. Default draining time is 5 minutes.</p>
     * </li> <li> <p> <code>Unavailable</code>: Health checks are unavailable for the
     * target group.</p> </li> <li> <p> <code>Healthy</code>: The target is healthy.
     * </p> </li> <li> <p> <code>Unhealthy</code>: The target is unhealthy.</p> </li>
     * <li> <p> <code>Initial</code>: Initial health checks on the target are being
     * performed.</p> </li> <li> <p> <code>Unused</code>: Target group is not used in a
     * service.</p> </li> </ul>
     */
    inline TargetSummary& WithStatus(const TargetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the target.</p> <ul> <li> <p> <code>Draining</code>: The target
     * is being deregistered. No new connections will be sent to this target while
     * current connections are being drained. Default draining time is 5 minutes.</p>
     * </li> <li> <p> <code>Unavailable</code>: Health checks are unavailable for the
     * target group.</p> </li> <li> <p> <code>Healthy</code>: The target is healthy.
     * </p> </li> <li> <p> <code>Unhealthy</code>: The target is unhealthy.</p> </li>
     * <li> <p> <code>Initial</code>: Initial health checks on the target are being
     * performed.</p> </li> <li> <p> <code>Unused</code>: Target group is not used in a
     * service.</p> </li> </ul>
     */
    inline TargetSummary& WithStatus(TargetStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_reasonCode;
    bool m_reasonCodeHasBeenSet = false;

    TargetStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
