/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/route53-recovery-readiness/model/Resource.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   * <p>A collection of resources of the same type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/ResourceSetOutput">AWS
   * API Reference</a></p>
   */
  class ResourceSetOutput
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API ResourceSetOutput() = default;
    AWS_ROUTE53RECOVERYREADINESS_API ResourceSetOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API ResourceSetOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the resource set.</p>
     */
    inline const Aws::String& GetResourceSetArn() const { return m_resourceSetArn; }
    inline bool ResourceSetArnHasBeenSet() const { return m_resourceSetArnHasBeenSet; }
    template<typename ResourceSetArnT = Aws::String>
    void SetResourceSetArn(ResourceSetArnT&& value) { m_resourceSetArnHasBeenSet = true; m_resourceSetArn = std::forward<ResourceSetArnT>(value); }
    template<typename ResourceSetArnT = Aws::String>
    ResourceSetOutput& WithResourceSetArn(ResourceSetArnT&& value) { SetResourceSetArn(std::forward<ResourceSetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource set.</p>
     */
    inline const Aws::String& GetResourceSetName() const { return m_resourceSetName; }
    inline bool ResourceSetNameHasBeenSet() const { return m_resourceSetNameHasBeenSet; }
    template<typename ResourceSetNameT = Aws::String>
    void SetResourceSetName(ResourceSetNameT&& value) { m_resourceSetNameHasBeenSet = true; m_resourceSetName = std::forward<ResourceSetNameT>(value); }
    template<typename ResourceSetNameT = Aws::String>
    ResourceSetOutput& WithResourceSetName(ResourceSetNameT&& value) { SetResourceSetName(std::forward<ResourceSetNameT>(value)); return *this;}
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
    ResourceSetOutput& WithResourceSetType(ResourceSetTypeT&& value) { SetResourceSetType(std::forward<ResourceSetTypeT>(value)); return *this;}
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
    ResourceSetOutput& WithResources(ResourcesT&& value) { SetResources(std::forward<ResourcesT>(value)); return *this;}
    template<typename ResourcesT = Resource>
    ResourceSetOutput& AddResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources.emplace_back(std::forward<ResourcesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    ResourceSetOutput& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    ResourceSetOutput& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_resourceSetArn;
    bool m_resourceSetArnHasBeenSet = false;

    Aws::String m_resourceSetName;
    bool m_resourceSetNameHasBeenSet = false;

    Aws::String m_resourceSetType;
    bool m_resourceSetTypeHasBeenSet = false;

    Aws::Vector<Resource> m_resources;
    bool m_resourcesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
