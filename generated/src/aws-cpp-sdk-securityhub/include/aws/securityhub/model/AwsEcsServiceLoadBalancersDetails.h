/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about a load balancer that the service uses.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsServiceLoadBalancersDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsServiceLoadBalancersDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsServiceLoadBalancersDetails();
    AWS_SECURITYHUB_API AwsEcsServiceLoadBalancersDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsServiceLoadBalancersDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the container to associate with the load balancer.</p>
     */
    inline const Aws::String& GetContainerName() const{ return m_containerName; }

    /**
     * <p>The name of the container to associate with the load balancer.</p>
     */
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }

    /**
     * <p>The name of the container to associate with the load balancer.</p>
     */
    inline void SetContainerName(const Aws::String& value) { m_containerNameHasBeenSet = true; m_containerName = value; }

    /**
     * <p>The name of the container to associate with the load balancer.</p>
     */
    inline void SetContainerName(Aws::String&& value) { m_containerNameHasBeenSet = true; m_containerName = std::move(value); }

    /**
     * <p>The name of the container to associate with the load balancer.</p>
     */
    inline void SetContainerName(const char* value) { m_containerNameHasBeenSet = true; m_containerName.assign(value); }

    /**
     * <p>The name of the container to associate with the load balancer.</p>
     */
    inline AwsEcsServiceLoadBalancersDetails& WithContainerName(const Aws::String& value) { SetContainerName(value); return *this;}

    /**
     * <p>The name of the container to associate with the load balancer.</p>
     */
    inline AwsEcsServiceLoadBalancersDetails& WithContainerName(Aws::String&& value) { SetContainerName(std::move(value)); return *this;}

    /**
     * <p>The name of the container to associate with the load balancer.</p>
     */
    inline AwsEcsServiceLoadBalancersDetails& WithContainerName(const char* value) { SetContainerName(value); return *this;}


    /**
     * <p>The port on the container to associate with the load balancer. This port must
     * correspond to a <code>containerPort</code> in the task definition the tasks in
     * the service are using. For tasks that use the EC2 launch type, the container
     * instance they are launched on must allow ingress traffic on the
     * <code>hostPort</code> of the port mapping.</p>
     */
    inline int GetContainerPort() const{ return m_containerPort; }

    /**
     * <p>The port on the container to associate with the load balancer. This port must
     * correspond to a <code>containerPort</code> in the task definition the tasks in
     * the service are using. For tasks that use the EC2 launch type, the container
     * instance they are launched on must allow ingress traffic on the
     * <code>hostPort</code> of the port mapping.</p>
     */
    inline bool ContainerPortHasBeenSet() const { return m_containerPortHasBeenSet; }

    /**
     * <p>The port on the container to associate with the load balancer. This port must
     * correspond to a <code>containerPort</code> in the task definition the tasks in
     * the service are using. For tasks that use the EC2 launch type, the container
     * instance they are launched on must allow ingress traffic on the
     * <code>hostPort</code> of the port mapping.</p>
     */
    inline void SetContainerPort(int value) { m_containerPortHasBeenSet = true; m_containerPort = value; }

    /**
     * <p>The port on the container to associate with the load balancer. This port must
     * correspond to a <code>containerPort</code> in the task definition the tasks in
     * the service are using. For tasks that use the EC2 launch type, the container
     * instance they are launched on must allow ingress traffic on the
     * <code>hostPort</code> of the port mapping.</p>
     */
    inline AwsEcsServiceLoadBalancersDetails& WithContainerPort(int value) { SetContainerPort(value); return *this;}


    /**
     * <p>The name of the load balancer to associate with the Amazon ECS service or
     * task set.</p> <p>Only specified when using a Classic Load Balancer. For an
     * Application Load Balancer or a Network Load Balancer, the load balancer name is
     * omitted.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const{ return m_loadBalancerName; }

    /**
     * <p>The name of the load balancer to associate with the Amazon ECS service or
     * task set.</p> <p>Only specified when using a Classic Load Balancer. For an
     * Application Load Balancer or a Network Load Balancer, the load balancer name is
     * omitted.</p>
     */
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }

    /**
     * <p>The name of the load balancer to associate with the Amazon ECS service or
     * task set.</p> <p>Only specified when using a Classic Load Balancer. For an
     * Application Load Balancer or a Network Load Balancer, the load balancer name is
     * omitted.</p>
     */
    inline void SetLoadBalancerName(const Aws::String& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = value; }

    /**
     * <p>The name of the load balancer to associate with the Amazon ECS service or
     * task set.</p> <p>Only specified when using a Classic Load Balancer. For an
     * Application Load Balancer or a Network Load Balancer, the load balancer name is
     * omitted.</p>
     */
    inline void SetLoadBalancerName(Aws::String&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::move(value); }

    /**
     * <p>The name of the load balancer to associate with the Amazon ECS service or
     * task set.</p> <p>Only specified when using a Classic Load Balancer. For an
     * Application Load Balancer or a Network Load Balancer, the load balancer name is
     * omitted.</p>
     */
    inline void SetLoadBalancerName(const char* value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName.assign(value); }

    /**
     * <p>The name of the load balancer to associate with the Amazon ECS service or
     * task set.</p> <p>Only specified when using a Classic Load Balancer. For an
     * Application Load Balancer or a Network Load Balancer, the load balancer name is
     * omitted.</p>
     */
    inline AwsEcsServiceLoadBalancersDetails& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of the load balancer to associate with the Amazon ECS service or
     * task set.</p> <p>Only specified when using a Classic Load Balancer. For an
     * Application Load Balancer or a Network Load Balancer, the load balancer name is
     * omitted.</p>
     */
    inline AwsEcsServiceLoadBalancersDetails& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(std::move(value)); return *this;}

    /**
     * <p>The name of the load balancer to associate with the Amazon ECS service or
     * task set.</p> <p>Only specified when using a Classic Load Balancer. For an
     * Application Load Balancer or a Network Load Balancer, the load balancer name is
     * omitted.</p>
     */
    inline AwsEcsServiceLoadBalancersDetails& WithLoadBalancerName(const char* value) { SetLoadBalancerName(value); return *this;}


    /**
     * <p>The ARN of the Elastic Load Balancing target group or groups associated with
     * a service or task set.</p> <p>Only specified when using an Application Load
     * Balancer or a Network Load Balancer. For a Classic Load Balancer, the target
     * group ARN is omitted.</p>
     */
    inline const Aws::String& GetTargetGroupArn() const{ return m_targetGroupArn; }

    /**
     * <p>The ARN of the Elastic Load Balancing target group or groups associated with
     * a service or task set.</p> <p>Only specified when using an Application Load
     * Balancer or a Network Load Balancer. For a Classic Load Balancer, the target
     * group ARN is omitted.</p>
     */
    inline bool TargetGroupArnHasBeenSet() const { return m_targetGroupArnHasBeenSet; }

    /**
     * <p>The ARN of the Elastic Load Balancing target group or groups associated with
     * a service or task set.</p> <p>Only specified when using an Application Load
     * Balancer or a Network Load Balancer. For a Classic Load Balancer, the target
     * group ARN is omitted.</p>
     */
    inline void SetTargetGroupArn(const Aws::String& value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn = value; }

    /**
     * <p>The ARN of the Elastic Load Balancing target group or groups associated with
     * a service or task set.</p> <p>Only specified when using an Application Load
     * Balancer or a Network Load Balancer. For a Classic Load Balancer, the target
     * group ARN is omitted.</p>
     */
    inline void SetTargetGroupArn(Aws::String&& value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn = std::move(value); }

    /**
     * <p>The ARN of the Elastic Load Balancing target group or groups associated with
     * a service or task set.</p> <p>Only specified when using an Application Load
     * Balancer or a Network Load Balancer. For a Classic Load Balancer, the target
     * group ARN is omitted.</p>
     */
    inline void SetTargetGroupArn(const char* value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn.assign(value); }

    /**
     * <p>The ARN of the Elastic Load Balancing target group or groups associated with
     * a service or task set.</p> <p>Only specified when using an Application Load
     * Balancer or a Network Load Balancer. For a Classic Load Balancer, the target
     * group ARN is omitted.</p>
     */
    inline AwsEcsServiceLoadBalancersDetails& WithTargetGroupArn(const Aws::String& value) { SetTargetGroupArn(value); return *this;}

    /**
     * <p>The ARN of the Elastic Load Balancing target group or groups associated with
     * a service or task set.</p> <p>Only specified when using an Application Load
     * Balancer or a Network Load Balancer. For a Classic Load Balancer, the target
     * group ARN is omitted.</p>
     */
    inline AwsEcsServiceLoadBalancersDetails& WithTargetGroupArn(Aws::String&& value) { SetTargetGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Elastic Load Balancing target group or groups associated with
     * a service or task set.</p> <p>Only specified when using an Application Load
     * Balancer or a Network Load Balancer. For a Classic Load Balancer, the target
     * group ARN is omitted.</p>
     */
    inline AwsEcsServiceLoadBalancersDetails& WithTargetGroupArn(const char* value) { SetTargetGroupArn(value); return *this;}

  private:

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet = false;

    int m_containerPort;
    bool m_containerPortHasBeenSet = false;

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet = false;

    Aws::String m_targetGroupArn;
    bool m_targetGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
