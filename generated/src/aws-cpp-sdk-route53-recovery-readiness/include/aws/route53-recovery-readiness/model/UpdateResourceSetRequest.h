/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53-recovery-readiness/model/Resource.h>
#include <utility>

namespace Aws
{
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   * <p>Name of a resource set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/UpdateResourceSetRequest">AWS
   * API Reference</a></p>
   */
  class UpdateResourceSetRequest : public Route53RecoveryReadinessRequest
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API UpdateResourceSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateResourceSet"; }

    AWS_ROUTE53RECOVERYREADINESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Name of a resource set.</p>
     */
    inline const Aws::String& GetResourceSetName() const { return m_resourceSetName; }
    inline bool ResourceSetNameHasBeenSet() const { return m_resourceSetNameHasBeenSet; }
    template<typename ResourceSetNameT = Aws::String>
    void SetResourceSetName(ResourceSetNameT&& value) { m_resourceSetNameHasBeenSet = true; m_resourceSetName = std::forward<ResourceSetNameT>(value); }
    template<typename ResourceSetNameT = Aws::String>
    UpdateResourceSetRequest& WithResourceSetName(ResourceSetNameT&& value) { SetResourceSetName(std::forward<ResourceSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type of the resources in the resource set. Enter one of the
     * following values for resource type:</p> <p>AWS::ApiGateway::Stage,
     * AWS::ApiGatewayV2::Stage, AWS::AutoScaling::AutoScalingGroup,
     * AWS::CloudWatch::Alarm, AWS::EC2::CustomerGateway, AWS::DynamoDB::Table,
     * AWS::EC2::Volume, AWS::ElasticLoadBalancing::LoadBalancer,
     * AWS::ElasticLoadBalancingV2::LoadBalancer, AWS::Lambda::Function,
     * AWS::MSK::Cluster, AWS::RDS::DBCluster, AWS::Route53::HealthCheck,
     * AWS::SQS::Queue, AWS::SNS::Topic, AWS::SNS::Subscription, AWS::EC2::VPC,
     * AWS::EC2::VPNConnection, AWS::EC2::VPNGateway,
     * AWS::Route53RecoveryReadiness::DNSTargetResource</p>
     */
    inline const Aws::String& GetResourceSetType() const { return m_resourceSetType; }
    inline bool ResourceSetTypeHasBeenSet() const { return m_resourceSetTypeHasBeenSet; }
    template<typename ResourceSetTypeT = Aws::String>
    void SetResourceSetType(ResourceSetTypeT&& value) { m_resourceSetTypeHasBeenSet = true; m_resourceSetType = std::forward<ResourceSetTypeT>(value); }
    template<typename ResourceSetTypeT = Aws::String>
    UpdateResourceSetRequest& WithResourceSetType(ResourceSetTypeT&& value) { SetResourceSetType(std::forward<ResourceSetTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of resource objects.</p>
     */
    inline const Aws::Vector<Resource>& GetResources() const { return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    template<typename ResourcesT = Aws::Vector<Resource>>
    void SetResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources = std::forward<ResourcesT>(value); }
    template<typename ResourcesT = Aws::Vector<Resource>>
    UpdateResourceSetRequest& WithResources(ResourcesT&& value) { SetResources(std::forward<ResourcesT>(value)); return *this;}
    template<typename ResourcesT = Resource>
    UpdateResourceSetRequest& AddResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources.emplace_back(std::forward<ResourcesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_resourceSetName;
    bool m_resourceSetNameHasBeenSet = false;

    Aws::String m_resourceSetType;
    bool m_resourceSetTypeHasBeenSet = false;

    Aws::Vector<Resource> m_resources;
    bool m_resourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
