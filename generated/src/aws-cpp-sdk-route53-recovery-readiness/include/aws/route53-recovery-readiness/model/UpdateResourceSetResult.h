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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Route53RecoveryReadiness
{
namespace Model
{
  class UpdateResourceSetResult
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API UpdateResourceSetResult() = default;
    AWS_ROUTE53RECOVERYREADINESS_API UpdateResourceSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYREADINESS_API UpdateResourceSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the resource set.</p>
     */
    inline const Aws::String& GetResourceSetArn() const { return m_resourceSetArn; }
    template<typename ResourceSetArnT = Aws::String>
    void SetResourceSetArn(ResourceSetArnT&& value) { m_resourceSetArnHasBeenSet = true; m_resourceSetArn = std::forward<ResourceSetArnT>(value); }
    template<typename ResourceSetArnT = Aws::String>
    UpdateResourceSetResult& WithResourceSetArn(ResourceSetArnT&& value) { SetResourceSetArn(std::forward<ResourceSetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource set.</p>
     */
    inline const Aws::String& GetResourceSetName() const { return m_resourceSetName; }
    template<typename ResourceSetNameT = Aws::String>
    void SetResourceSetName(ResourceSetNameT&& value) { m_resourceSetNameHasBeenSet = true; m_resourceSetName = std::forward<ResourceSetNameT>(value); }
    template<typename ResourceSetNameT = Aws::String>
    UpdateResourceSetResult& WithResourceSetName(ResourceSetNameT&& value) { SetResourceSetName(std::forward<ResourceSetNameT>(value)); return *this;}
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
    template<typename ResourceSetTypeT = Aws::String>
    void SetResourceSetType(ResourceSetTypeT&& value) { m_resourceSetTypeHasBeenSet = true; m_resourceSetType = std::forward<ResourceSetTypeT>(value); }
    template<typename ResourceSetTypeT = Aws::String>
    UpdateResourceSetResult& WithResourceSetType(ResourceSetTypeT&& value) { SetResourceSetType(std::forward<ResourceSetTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of resource objects.</p>
     */
    inline const Aws::Vector<Resource>& GetResources() const { return m_resources; }
    template<typename ResourcesT = Aws::Vector<Resource>>
    void SetResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources = std::forward<ResourcesT>(value); }
    template<typename ResourcesT = Aws::Vector<Resource>>
    UpdateResourceSetResult& WithResources(ResourcesT&& value) { SetResources(std::forward<ResourcesT>(value)); return *this;}
    template<typename ResourcesT = Resource>
    UpdateResourceSetResult& AddResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources.emplace_back(std::forward<ResourcesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    UpdateResourceSetResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    UpdateResourceSetResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateResourceSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
