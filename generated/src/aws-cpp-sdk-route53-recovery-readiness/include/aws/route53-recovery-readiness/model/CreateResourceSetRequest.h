/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/route53-recovery-readiness/model/Resource.h>
#include <utility>

namespace Aws
{
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   */
  class CreateResourceSetRequest : public Route53RecoveryReadinessRequest
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API CreateResourceSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateResourceSet"; }

    AWS_ROUTE53RECOVERYREADINESS_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the resource set to create.</p>
     */
    inline const Aws::String& GetResourceSetName() const{ return m_resourceSetName; }

    /**
     * <p>The name of the resource set to create.</p>
     */
    inline bool ResourceSetNameHasBeenSet() const { return m_resourceSetNameHasBeenSet; }

    /**
     * <p>The name of the resource set to create.</p>
     */
    inline void SetResourceSetName(const Aws::String& value) { m_resourceSetNameHasBeenSet = true; m_resourceSetName = value; }

    /**
     * <p>The name of the resource set to create.</p>
     */
    inline void SetResourceSetName(Aws::String&& value) { m_resourceSetNameHasBeenSet = true; m_resourceSetName = std::move(value); }

    /**
     * <p>The name of the resource set to create.</p>
     */
    inline void SetResourceSetName(const char* value) { m_resourceSetNameHasBeenSet = true; m_resourceSetName.assign(value); }

    /**
     * <p>The name of the resource set to create.</p>
     */
    inline CreateResourceSetRequest& WithResourceSetName(const Aws::String& value) { SetResourceSetName(value); return *this;}

    /**
     * <p>The name of the resource set to create.</p>
     */
    inline CreateResourceSetRequest& WithResourceSetName(Aws::String&& value) { SetResourceSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource set to create.</p>
     */
    inline CreateResourceSetRequest& WithResourceSetName(const char* value) { SetResourceSetName(value); return *this;}


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
    inline const Aws::String& GetResourceSetType() const{ return m_resourceSetType; }

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
    inline bool ResourceSetTypeHasBeenSet() const { return m_resourceSetTypeHasBeenSet; }

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
    inline void SetResourceSetType(const Aws::String& value) { m_resourceSetTypeHasBeenSet = true; m_resourceSetType = value; }

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
    inline void SetResourceSetType(Aws::String&& value) { m_resourceSetTypeHasBeenSet = true; m_resourceSetType = std::move(value); }

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
    inline void SetResourceSetType(const char* value) { m_resourceSetTypeHasBeenSet = true; m_resourceSetType.assign(value); }

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
    inline CreateResourceSetRequest& WithResourceSetType(const Aws::String& value) { SetResourceSetType(value); return *this;}

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
    inline CreateResourceSetRequest& WithResourceSetType(Aws::String&& value) { SetResourceSetType(std::move(value)); return *this;}

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
    inline CreateResourceSetRequest& WithResourceSetType(const char* value) { SetResourceSetType(value); return *this;}


    /**
     * <p>A list of resource objects in the resource set.</p>
     */
    inline const Aws::Vector<Resource>& GetResources() const{ return m_resources; }

    /**
     * <p>A list of resource objects in the resource set.</p>
     */
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    /**
     * <p>A list of resource objects in the resource set.</p>
     */
    inline void SetResources(const Aws::Vector<Resource>& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>A list of resource objects in the resource set.</p>
     */
    inline void SetResources(Aws::Vector<Resource>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    /**
     * <p>A list of resource objects in the resource set.</p>
     */
    inline CreateResourceSetRequest& WithResources(const Aws::Vector<Resource>& value) { SetResources(value); return *this;}

    /**
     * <p>A list of resource objects in the resource set.</p>
     */
    inline CreateResourceSetRequest& WithResources(Aws::Vector<Resource>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>A list of resource objects in the resource set.</p>
     */
    inline CreateResourceSetRequest& AddResources(const Resource& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    /**
     * <p>A list of resource objects in the resource set.</p>
     */
    inline CreateResourceSetRequest& AddResources(Resource&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }


    /**
     * <p>A tag to associate with the parameters for a resource set.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A tag to associate with the parameters for a resource set.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A tag to associate with the parameters for a resource set.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A tag to associate with the parameters for a resource set.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A tag to associate with the parameters for a resource set.</p>
     */
    inline CreateResourceSetRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A tag to associate with the parameters for a resource set.</p>
     */
    inline CreateResourceSetRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A tag to associate with the parameters for a resource set.</p>
     */
    inline CreateResourceSetRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A tag to associate with the parameters for a resource set.</p>
     */
    inline CreateResourceSetRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A tag to associate with the parameters for a resource set.</p>
     */
    inline CreateResourceSetRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A tag to associate with the parameters for a resource set.</p>
     */
    inline CreateResourceSetRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A tag to associate with the parameters for a resource set.</p>
     */
    inline CreateResourceSetRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A tag to associate with the parameters for a resource set.</p>
     */
    inline CreateResourceSetRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A tag to associate with the parameters for a resource set.</p>
     */
    inline CreateResourceSetRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

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
