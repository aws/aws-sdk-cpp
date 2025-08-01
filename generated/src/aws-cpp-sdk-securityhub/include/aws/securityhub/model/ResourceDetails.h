/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsAutoScalingAutoScalingGroupDetails.h>
#include <aws/securityhub/model/AwsCodeBuildProjectDetails.h>
#include <aws/securityhub/model/AwsCloudFrontDistributionDetails.h>
#include <aws/securityhub/model/AwsEc2InstanceDetails.h>
#include <aws/securityhub/model/AwsEc2NetworkInterfaceDetails.h>
#include <aws/securityhub/model/AwsEc2SecurityGroupDetails.h>
#include <aws/securityhub/model/AwsEc2VolumeDetails.h>
#include <aws/securityhub/model/AwsEc2VpcDetails.h>
#include <aws/securityhub/model/AwsEc2EipDetails.h>
#include <aws/securityhub/model/AwsEc2SubnetDetails.h>
#include <aws/securityhub/model/AwsEc2NetworkAclDetails.h>
#include <aws/securityhub/model/AwsElbv2LoadBalancerDetails.h>
#include <aws/securityhub/model/AwsElasticBeanstalkEnvironmentDetails.h>
#include <aws/securityhub/model/AwsElasticsearchDomainDetails.h>
#include <aws/securityhub/model/AwsS3BucketDetails.h>
#include <aws/securityhub/model/AwsS3AccountPublicAccessBlockDetails.h>
#include <aws/securityhub/model/AwsS3ObjectDetails.h>
#include <aws/securityhub/model/AwsSecretsManagerSecretDetails.h>
#include <aws/securityhub/model/AwsIamAccessKeyDetails.h>
#include <aws/securityhub/model/AwsIamUserDetails.h>
#include <aws/securityhub/model/AwsIamPolicyDetails.h>
#include <aws/securityhub/model/AwsApiGatewayV2StageDetails.h>
#include <aws/securityhub/model/AwsApiGatewayV2ApiDetails.h>
#include <aws/securityhub/model/AwsDynamoDbTableDetails.h>
#include <aws/securityhub/model/AwsApiGatewayStageDetails.h>
#include <aws/securityhub/model/AwsApiGatewayRestApiDetails.h>
#include <aws/securityhub/model/AwsCloudTrailTrailDetails.h>
#include <aws/securityhub/model/AwsSsmPatchComplianceDetails.h>
#include <aws/securityhub/model/AwsCertificateManagerCertificateDetails.h>
#include <aws/securityhub/model/AwsRedshiftClusterDetails.h>
#include <aws/securityhub/model/AwsElbLoadBalancerDetails.h>
#include <aws/securityhub/model/AwsIamGroupDetails.h>
#include <aws/securityhub/model/AwsIamRoleDetails.h>
#include <aws/securityhub/model/AwsKmsKeyDetails.h>
#include <aws/securityhub/model/AwsLambdaFunctionDetails.h>
#include <aws/securityhub/model/AwsLambdaLayerVersionDetails.h>
#include <aws/securityhub/model/AwsRdsDbInstanceDetails.h>
#include <aws/securityhub/model/AwsSnsTopicDetails.h>
#include <aws/securityhub/model/AwsSqsQueueDetails.h>
#include <aws/securityhub/model/AwsWafWebAclDetails.h>
#include <aws/securityhub/model/AwsRdsDbSnapshotDetails.h>
#include <aws/securityhub/model/AwsRdsDbClusterSnapshotDetails.h>
#include <aws/securityhub/model/AwsRdsDbClusterDetails.h>
#include <aws/securityhub/model/AwsEcsClusterDetails.h>
#include <aws/securityhub/model/AwsEcsContainerDetails.h>
#include <aws/securityhub/model/AwsEcsTaskDefinitionDetails.h>
#include <aws/securityhub/model/ContainerDetails.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/securityhub/model/AwsRdsEventSubscriptionDetails.h>
#include <aws/securityhub/model/AwsEcsServiceDetails.h>
#include <aws/securityhub/model/AwsAutoScalingLaunchConfigurationDetails.h>
#include <aws/securityhub/model/AwsEc2VpnConnectionDetails.h>
#include <aws/securityhub/model/AwsEcrContainerImageDetails.h>
#include <aws/securityhub/model/AwsOpenSearchServiceDomainDetails.h>
#include <aws/securityhub/model/AwsEc2VpcEndpointServiceDetails.h>
#include <aws/securityhub/model/AwsXrayEncryptionConfigDetails.h>
#include <aws/securityhub/model/AwsWafRateBasedRuleDetails.h>
#include <aws/securityhub/model/AwsWafRegionalRateBasedRuleDetails.h>
#include <aws/securityhub/model/AwsEcrRepositoryDetails.h>
#include <aws/securityhub/model/AwsEksClusterDetails.h>
#include <aws/securityhub/model/AwsNetworkFirewallFirewallPolicyDetails.h>
#include <aws/securityhub/model/AwsNetworkFirewallFirewallDetails.h>
#include <aws/securityhub/model/AwsNetworkFirewallRuleGroupDetails.h>
#include <aws/securityhub/model/AwsRdsDbSecurityGroupDetails.h>
#include <aws/securityhub/model/AwsKinesisStreamDetails.h>
#include <aws/securityhub/model/AwsEc2TransitGatewayDetails.h>
#include <aws/securityhub/model/AwsEfsAccessPointDetails.h>
#include <aws/securityhub/model/AwsCloudFormationStackDetails.h>
#include <aws/securityhub/model/AwsCloudWatchAlarmDetails.h>
#include <aws/securityhub/model/AwsEc2VpcPeeringConnectionDetails.h>
#include <aws/securityhub/model/AwsWafRegionalRuleGroupDetails.h>
#include <aws/securityhub/model/AwsWafRegionalRuleDetails.h>
#include <aws/securityhub/model/AwsWafRegionalWebAclDetails.h>
#include <aws/securityhub/model/AwsWafRuleDetails.h>
#include <aws/securityhub/model/AwsWafRuleGroupDetails.h>
#include <aws/securityhub/model/AwsEcsTaskDetails.h>
#include <aws/securityhub/model/AwsBackupBackupVaultDetails.h>
#include <aws/securityhub/model/AwsBackupBackupPlanDetails.h>
#include <aws/securityhub/model/AwsBackupRecoveryPointDetails.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDetails.h>
#include <aws/securityhub/model/AwsSageMakerNotebookInstanceDetails.h>
#include <aws/securityhub/model/AwsWafv2WebAclDetails.h>
#include <aws/securityhub/model/AwsWafv2RuleGroupDetails.h>
#include <aws/securityhub/model/AwsEc2RouteTableDetails.h>
#include <aws/securityhub/model/AwsAmazonMqBrokerDetails.h>
#include <aws/securityhub/model/AwsAppSyncGraphQlApiDetails.h>
#include <aws/securityhub/model/AwsEventSchemasRegistryDetails.h>
#include <aws/securityhub/model/AwsGuardDutyDetectorDetails.h>
#include <aws/securityhub/model/AwsStepFunctionStateMachineDetails.h>
#include <aws/securityhub/model/AwsAthenaWorkGroupDetails.h>
#include <aws/securityhub/model/AwsEventsEventbusDetails.h>
#include <aws/securityhub/model/AwsDmsEndpointDetails.h>
#include <aws/securityhub/model/AwsEventsEndpointDetails.h>
#include <aws/securityhub/model/AwsDmsReplicationTaskDetails.h>
#include <aws/securityhub/model/AwsDmsReplicationInstanceDetails.h>
#include <aws/securityhub/model/AwsRoute53HostedZoneDetails.h>
#include <aws/securityhub/model/AwsMskClusterDetails.h>
#include <aws/securityhub/model/AwsS3AccessPointDetails.h>
#include <aws/securityhub/model/AwsEc2ClientVpnEndpointDetails.h>
#include <aws/securityhub/model/CodeRepositoryDetails.h>
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
   * <p>Additional details about a resource related to a finding.</p> <p>To provide
   * the details, use the object that corresponds to the resource type. For example,
   * if the resource type is <code>AwsEc2Instance</code>, then you use the
   * <code>AwsEc2Instance</code> object to provide the details.</p> <p>If the
   * type-specific object does not contain all of the fields you want to populate,
   * then you use the <code>Other</code> object to populate those additional
   * fields.</p> <p>You also use the <code>Other</code> object to populate the
   * details when the selected type does not have a corresponding
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ResourceDetails">AWS
   * API Reference</a></p>
   */
  class ResourceDetails
  {
  public:
    AWS_SECURITYHUB_API ResourceDetails() = default;
    AWS_SECURITYHUB_API ResourceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ResourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details for an autoscaling group.</p>
     */
    inline const AwsAutoScalingAutoScalingGroupDetails& GetAwsAutoScalingAutoScalingGroup() const { return m_awsAutoScalingAutoScalingGroup; }
    inline bool AwsAutoScalingAutoScalingGroupHasBeenSet() const { return m_awsAutoScalingAutoScalingGroupHasBeenSet; }
    template<typename AwsAutoScalingAutoScalingGroupT = AwsAutoScalingAutoScalingGroupDetails>
    void SetAwsAutoScalingAutoScalingGroup(AwsAutoScalingAutoScalingGroupT&& value) { m_awsAutoScalingAutoScalingGroupHasBeenSet = true; m_awsAutoScalingAutoScalingGroup = std::forward<AwsAutoScalingAutoScalingGroupT>(value); }
    template<typename AwsAutoScalingAutoScalingGroupT = AwsAutoScalingAutoScalingGroupDetails>
    ResourceDetails& WithAwsAutoScalingAutoScalingGroup(AwsAutoScalingAutoScalingGroupT&& value) { SetAwsAutoScalingAutoScalingGroup(std::forward<AwsAutoScalingAutoScalingGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details for an CodeBuild project.</p>
     */
    inline const AwsCodeBuildProjectDetails& GetAwsCodeBuildProject() const { return m_awsCodeBuildProject; }
    inline bool AwsCodeBuildProjectHasBeenSet() const { return m_awsCodeBuildProjectHasBeenSet; }
    template<typename AwsCodeBuildProjectT = AwsCodeBuildProjectDetails>
    void SetAwsCodeBuildProject(AwsCodeBuildProjectT&& value) { m_awsCodeBuildProjectHasBeenSet = true; m_awsCodeBuildProject = std::forward<AwsCodeBuildProjectT>(value); }
    template<typename AwsCodeBuildProjectT = AwsCodeBuildProjectDetails>
    ResourceDetails& WithAwsCodeBuildProject(AwsCodeBuildProjectT&& value) { SetAwsCodeBuildProject(std::forward<AwsCodeBuildProjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a CloudFront distribution.</p>
     */
    inline const AwsCloudFrontDistributionDetails& GetAwsCloudFrontDistribution() const { return m_awsCloudFrontDistribution; }
    inline bool AwsCloudFrontDistributionHasBeenSet() const { return m_awsCloudFrontDistributionHasBeenSet; }
    template<typename AwsCloudFrontDistributionT = AwsCloudFrontDistributionDetails>
    void SetAwsCloudFrontDistribution(AwsCloudFrontDistributionT&& value) { m_awsCloudFrontDistributionHasBeenSet = true; m_awsCloudFrontDistribution = std::forward<AwsCloudFrontDistributionT>(value); }
    template<typename AwsCloudFrontDistributionT = AwsCloudFrontDistributionDetails>
    ResourceDetails& WithAwsCloudFrontDistribution(AwsCloudFrontDistributionT&& value) { SetAwsCloudFrontDistribution(std::forward<AwsCloudFrontDistributionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an EC2 instance related to a finding.</p>
     */
    inline const AwsEc2InstanceDetails& GetAwsEc2Instance() const { return m_awsEc2Instance; }
    inline bool AwsEc2InstanceHasBeenSet() const { return m_awsEc2InstanceHasBeenSet; }
    template<typename AwsEc2InstanceT = AwsEc2InstanceDetails>
    void SetAwsEc2Instance(AwsEc2InstanceT&& value) { m_awsEc2InstanceHasBeenSet = true; m_awsEc2Instance = std::forward<AwsEc2InstanceT>(value); }
    template<typename AwsEc2InstanceT = AwsEc2InstanceDetails>
    ResourceDetails& WithAwsEc2Instance(AwsEc2InstanceT&& value) { SetAwsEc2Instance(std::forward<AwsEc2InstanceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details for an EC2 network interface.</p>
     */
    inline const AwsEc2NetworkInterfaceDetails& GetAwsEc2NetworkInterface() const { return m_awsEc2NetworkInterface; }
    inline bool AwsEc2NetworkInterfaceHasBeenSet() const { return m_awsEc2NetworkInterfaceHasBeenSet; }
    template<typename AwsEc2NetworkInterfaceT = AwsEc2NetworkInterfaceDetails>
    void SetAwsEc2NetworkInterface(AwsEc2NetworkInterfaceT&& value) { m_awsEc2NetworkInterfaceHasBeenSet = true; m_awsEc2NetworkInterface = std::forward<AwsEc2NetworkInterfaceT>(value); }
    template<typename AwsEc2NetworkInterfaceT = AwsEc2NetworkInterfaceDetails>
    ResourceDetails& WithAwsEc2NetworkInterface(AwsEc2NetworkInterfaceT&& value) { SetAwsEc2NetworkInterface(std::forward<AwsEc2NetworkInterfaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details for an EC2 security group.</p>
     */
    inline const AwsEc2SecurityGroupDetails& GetAwsEc2SecurityGroup() const { return m_awsEc2SecurityGroup; }
    inline bool AwsEc2SecurityGroupHasBeenSet() const { return m_awsEc2SecurityGroupHasBeenSet; }
    template<typename AwsEc2SecurityGroupT = AwsEc2SecurityGroupDetails>
    void SetAwsEc2SecurityGroup(AwsEc2SecurityGroupT&& value) { m_awsEc2SecurityGroupHasBeenSet = true; m_awsEc2SecurityGroup = std::forward<AwsEc2SecurityGroupT>(value); }
    template<typename AwsEc2SecurityGroupT = AwsEc2SecurityGroupDetails>
    ResourceDetails& WithAwsEc2SecurityGroup(AwsEc2SecurityGroupT&& value) { SetAwsEc2SecurityGroup(std::forward<AwsEc2SecurityGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details for an Amazon EC2 volume.</p>
     */
    inline const AwsEc2VolumeDetails& GetAwsEc2Volume() const { return m_awsEc2Volume; }
    inline bool AwsEc2VolumeHasBeenSet() const { return m_awsEc2VolumeHasBeenSet; }
    template<typename AwsEc2VolumeT = AwsEc2VolumeDetails>
    void SetAwsEc2Volume(AwsEc2VolumeT&& value) { m_awsEc2VolumeHasBeenSet = true; m_awsEc2Volume = std::forward<AwsEc2VolumeT>(value); }
    template<typename AwsEc2VolumeT = AwsEc2VolumeDetails>
    ResourceDetails& WithAwsEc2Volume(AwsEc2VolumeT&& value) { SetAwsEc2Volume(std::forward<AwsEc2VolumeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details for an Amazon EC2 VPC.</p>
     */
    inline const AwsEc2VpcDetails& GetAwsEc2Vpc() const { return m_awsEc2Vpc; }
    inline bool AwsEc2VpcHasBeenSet() const { return m_awsEc2VpcHasBeenSet; }
    template<typename AwsEc2VpcT = AwsEc2VpcDetails>
    void SetAwsEc2Vpc(AwsEc2VpcT&& value) { m_awsEc2VpcHasBeenSet = true; m_awsEc2Vpc = std::forward<AwsEc2VpcT>(value); }
    template<typename AwsEc2VpcT = AwsEc2VpcDetails>
    ResourceDetails& WithAwsEc2Vpc(AwsEc2VpcT&& value) { SetAwsEc2Vpc(std::forward<AwsEc2VpcT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an Elastic IP address.</p>
     */
    inline const AwsEc2EipDetails& GetAwsEc2Eip() const { return m_awsEc2Eip; }
    inline bool AwsEc2EipHasBeenSet() const { return m_awsEc2EipHasBeenSet; }
    template<typename AwsEc2EipT = AwsEc2EipDetails>
    void SetAwsEc2Eip(AwsEc2EipT&& value) { m_awsEc2EipHasBeenSet = true; m_awsEc2Eip = std::forward<AwsEc2EipT>(value); }
    template<typename AwsEc2EipT = AwsEc2EipDetails>
    ResourceDetails& WithAwsEc2Eip(AwsEc2EipT&& value) { SetAwsEc2Eip(std::forward<AwsEc2EipT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a subnet in Amazon EC2.</p>
     */
    inline const AwsEc2SubnetDetails& GetAwsEc2Subnet() const { return m_awsEc2Subnet; }
    inline bool AwsEc2SubnetHasBeenSet() const { return m_awsEc2SubnetHasBeenSet; }
    template<typename AwsEc2SubnetT = AwsEc2SubnetDetails>
    void SetAwsEc2Subnet(AwsEc2SubnetT&& value) { m_awsEc2SubnetHasBeenSet = true; m_awsEc2Subnet = std::forward<AwsEc2SubnetT>(value); }
    template<typename AwsEc2SubnetT = AwsEc2SubnetDetails>
    ResourceDetails& WithAwsEc2Subnet(AwsEc2SubnetT&& value) { SetAwsEc2Subnet(std::forward<AwsEc2SubnetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an EC2 network access control list (ACL).</p>
     */
    inline const AwsEc2NetworkAclDetails& GetAwsEc2NetworkAcl() const { return m_awsEc2NetworkAcl; }
    inline bool AwsEc2NetworkAclHasBeenSet() const { return m_awsEc2NetworkAclHasBeenSet; }
    template<typename AwsEc2NetworkAclT = AwsEc2NetworkAclDetails>
    void SetAwsEc2NetworkAcl(AwsEc2NetworkAclT&& value) { m_awsEc2NetworkAclHasBeenSet = true; m_awsEc2NetworkAcl = std::forward<AwsEc2NetworkAclT>(value); }
    template<typename AwsEc2NetworkAclT = AwsEc2NetworkAclDetails>
    ResourceDetails& WithAwsEc2NetworkAcl(AwsEc2NetworkAclT&& value) { SetAwsEc2NetworkAcl(std::forward<AwsEc2NetworkAclT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a load balancer.</p>
     */
    inline const AwsElbv2LoadBalancerDetails& GetAwsElbv2LoadBalancer() const { return m_awsElbv2LoadBalancer; }
    inline bool AwsElbv2LoadBalancerHasBeenSet() const { return m_awsElbv2LoadBalancerHasBeenSet; }
    template<typename AwsElbv2LoadBalancerT = AwsElbv2LoadBalancerDetails>
    void SetAwsElbv2LoadBalancer(AwsElbv2LoadBalancerT&& value) { m_awsElbv2LoadBalancerHasBeenSet = true; m_awsElbv2LoadBalancer = std::forward<AwsElbv2LoadBalancerT>(value); }
    template<typename AwsElbv2LoadBalancerT = AwsElbv2LoadBalancerDetails>
    ResourceDetails& WithAwsElbv2LoadBalancer(AwsElbv2LoadBalancerT&& value) { SetAwsElbv2LoadBalancer(std::forward<AwsElbv2LoadBalancerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an Elastic Beanstalk environment.</p>
     */
    inline const AwsElasticBeanstalkEnvironmentDetails& GetAwsElasticBeanstalkEnvironment() const { return m_awsElasticBeanstalkEnvironment; }
    inline bool AwsElasticBeanstalkEnvironmentHasBeenSet() const { return m_awsElasticBeanstalkEnvironmentHasBeenSet; }
    template<typename AwsElasticBeanstalkEnvironmentT = AwsElasticBeanstalkEnvironmentDetails>
    void SetAwsElasticBeanstalkEnvironment(AwsElasticBeanstalkEnvironmentT&& value) { m_awsElasticBeanstalkEnvironmentHasBeenSet = true; m_awsElasticBeanstalkEnvironment = std::forward<AwsElasticBeanstalkEnvironmentT>(value); }
    template<typename AwsElasticBeanstalkEnvironmentT = AwsElasticBeanstalkEnvironmentDetails>
    ResourceDetails& WithAwsElasticBeanstalkEnvironment(AwsElasticBeanstalkEnvironmentT&& value) { SetAwsElasticBeanstalkEnvironment(std::forward<AwsElasticBeanstalkEnvironmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details for an Elasticsearch domain.</p>
     */
    inline const AwsElasticsearchDomainDetails& GetAwsElasticsearchDomain() const { return m_awsElasticsearchDomain; }
    inline bool AwsElasticsearchDomainHasBeenSet() const { return m_awsElasticsearchDomainHasBeenSet; }
    template<typename AwsElasticsearchDomainT = AwsElasticsearchDomainDetails>
    void SetAwsElasticsearchDomain(AwsElasticsearchDomainT&& value) { m_awsElasticsearchDomainHasBeenSet = true; m_awsElasticsearchDomain = std::forward<AwsElasticsearchDomainT>(value); }
    template<typename AwsElasticsearchDomainT = AwsElasticsearchDomainDetails>
    ResourceDetails& WithAwsElasticsearchDomain(AwsElasticsearchDomainT&& value) { SetAwsElasticsearchDomain(std::forward<AwsElasticsearchDomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an S3 bucket related to a finding.</p>
     */
    inline const AwsS3BucketDetails& GetAwsS3Bucket() const { return m_awsS3Bucket; }
    inline bool AwsS3BucketHasBeenSet() const { return m_awsS3BucketHasBeenSet; }
    template<typename AwsS3BucketT = AwsS3BucketDetails>
    void SetAwsS3Bucket(AwsS3BucketT&& value) { m_awsS3BucketHasBeenSet = true; m_awsS3Bucket = std::forward<AwsS3BucketT>(value); }
    template<typename AwsS3BucketT = AwsS3BucketDetails>
    ResourceDetails& WithAwsS3Bucket(AwsS3BucketT&& value) { SetAwsS3Bucket(std::forward<AwsS3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the Amazon S3 Public Access Block configuration for an
     * account.</p>
     */
    inline const AwsS3AccountPublicAccessBlockDetails& GetAwsS3AccountPublicAccessBlock() const { return m_awsS3AccountPublicAccessBlock; }
    inline bool AwsS3AccountPublicAccessBlockHasBeenSet() const { return m_awsS3AccountPublicAccessBlockHasBeenSet; }
    template<typename AwsS3AccountPublicAccessBlockT = AwsS3AccountPublicAccessBlockDetails>
    void SetAwsS3AccountPublicAccessBlock(AwsS3AccountPublicAccessBlockT&& value) { m_awsS3AccountPublicAccessBlockHasBeenSet = true; m_awsS3AccountPublicAccessBlock = std::forward<AwsS3AccountPublicAccessBlockT>(value); }
    template<typename AwsS3AccountPublicAccessBlockT = AwsS3AccountPublicAccessBlockDetails>
    ResourceDetails& WithAwsS3AccountPublicAccessBlock(AwsS3AccountPublicAccessBlockT&& value) { SetAwsS3AccountPublicAccessBlock(std::forward<AwsS3AccountPublicAccessBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an S3 object related to a finding.</p>
     */
    inline const AwsS3ObjectDetails& GetAwsS3Object() const { return m_awsS3Object; }
    inline bool AwsS3ObjectHasBeenSet() const { return m_awsS3ObjectHasBeenSet; }
    template<typename AwsS3ObjectT = AwsS3ObjectDetails>
    void SetAwsS3Object(AwsS3ObjectT&& value) { m_awsS3ObjectHasBeenSet = true; m_awsS3Object = std::forward<AwsS3ObjectT>(value); }
    template<typename AwsS3ObjectT = AwsS3ObjectDetails>
    ResourceDetails& WithAwsS3Object(AwsS3ObjectT&& value) { SetAwsS3Object(std::forward<AwsS3ObjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a Secrets Manager secret.</p>
     */
    inline const AwsSecretsManagerSecretDetails& GetAwsSecretsManagerSecret() const { return m_awsSecretsManagerSecret; }
    inline bool AwsSecretsManagerSecretHasBeenSet() const { return m_awsSecretsManagerSecretHasBeenSet; }
    template<typename AwsSecretsManagerSecretT = AwsSecretsManagerSecretDetails>
    void SetAwsSecretsManagerSecret(AwsSecretsManagerSecretT&& value) { m_awsSecretsManagerSecretHasBeenSet = true; m_awsSecretsManagerSecret = std::forward<AwsSecretsManagerSecretT>(value); }
    template<typename AwsSecretsManagerSecretT = AwsSecretsManagerSecretDetails>
    ResourceDetails& WithAwsSecretsManagerSecret(AwsSecretsManagerSecretT&& value) { SetAwsSecretsManagerSecret(std::forward<AwsSecretsManagerSecretT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an IAM access key related to a finding.</p>
     */
    inline const AwsIamAccessKeyDetails& GetAwsIamAccessKey() const { return m_awsIamAccessKey; }
    inline bool AwsIamAccessKeyHasBeenSet() const { return m_awsIamAccessKeyHasBeenSet; }
    template<typename AwsIamAccessKeyT = AwsIamAccessKeyDetails>
    void SetAwsIamAccessKey(AwsIamAccessKeyT&& value) { m_awsIamAccessKeyHasBeenSet = true; m_awsIamAccessKey = std::forward<AwsIamAccessKeyT>(value); }
    template<typename AwsIamAccessKeyT = AwsIamAccessKeyDetails>
    ResourceDetails& WithAwsIamAccessKey(AwsIamAccessKeyT&& value) { SetAwsIamAccessKey(std::forward<AwsIamAccessKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an IAM user.</p>
     */
    inline const AwsIamUserDetails& GetAwsIamUser() const { return m_awsIamUser; }
    inline bool AwsIamUserHasBeenSet() const { return m_awsIamUserHasBeenSet; }
    template<typename AwsIamUserT = AwsIamUserDetails>
    void SetAwsIamUser(AwsIamUserT&& value) { m_awsIamUserHasBeenSet = true; m_awsIamUser = std::forward<AwsIamUserT>(value); }
    template<typename AwsIamUserT = AwsIamUserDetails>
    ResourceDetails& WithAwsIamUser(AwsIamUserT&& value) { SetAwsIamUser(std::forward<AwsIamUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an IAM permissions policy.</p>
     */
    inline const AwsIamPolicyDetails& GetAwsIamPolicy() const { return m_awsIamPolicy; }
    inline bool AwsIamPolicyHasBeenSet() const { return m_awsIamPolicyHasBeenSet; }
    template<typename AwsIamPolicyT = AwsIamPolicyDetails>
    void SetAwsIamPolicy(AwsIamPolicyT&& value) { m_awsIamPolicyHasBeenSet = true; m_awsIamPolicy = std::forward<AwsIamPolicyT>(value); }
    template<typename AwsIamPolicyT = AwsIamPolicyDetails>
    ResourceDetails& WithAwsIamPolicy(AwsIamPolicyT&& value) { SetAwsIamPolicy(std::forward<AwsIamPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about a version 2 stage for Amazon API Gateway.</p>
     */
    inline const AwsApiGatewayV2StageDetails& GetAwsApiGatewayV2Stage() const { return m_awsApiGatewayV2Stage; }
    inline bool AwsApiGatewayV2StageHasBeenSet() const { return m_awsApiGatewayV2StageHasBeenSet; }
    template<typename AwsApiGatewayV2StageT = AwsApiGatewayV2StageDetails>
    void SetAwsApiGatewayV2Stage(AwsApiGatewayV2StageT&& value) { m_awsApiGatewayV2StageHasBeenSet = true; m_awsApiGatewayV2Stage = std::forward<AwsApiGatewayV2StageT>(value); }
    template<typename AwsApiGatewayV2StageT = AwsApiGatewayV2StageDetails>
    ResourceDetails& WithAwsApiGatewayV2Stage(AwsApiGatewayV2StageT&& value) { SetAwsApiGatewayV2Stage(std::forward<AwsApiGatewayV2StageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about a version 2 API in Amazon API Gateway.</p>
     */
    inline const AwsApiGatewayV2ApiDetails& GetAwsApiGatewayV2Api() const { return m_awsApiGatewayV2Api; }
    inline bool AwsApiGatewayV2ApiHasBeenSet() const { return m_awsApiGatewayV2ApiHasBeenSet; }
    template<typename AwsApiGatewayV2ApiT = AwsApiGatewayV2ApiDetails>
    void SetAwsApiGatewayV2Api(AwsApiGatewayV2ApiT&& value) { m_awsApiGatewayV2ApiHasBeenSet = true; m_awsApiGatewayV2Api = std::forward<AwsApiGatewayV2ApiT>(value); }
    template<typename AwsApiGatewayV2ApiT = AwsApiGatewayV2ApiDetails>
    ResourceDetails& WithAwsApiGatewayV2Api(AwsApiGatewayV2ApiT&& value) { SetAwsApiGatewayV2Api(std::forward<AwsApiGatewayV2ApiT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a DynamoDB table.</p>
     */
    inline const AwsDynamoDbTableDetails& GetAwsDynamoDbTable() const { return m_awsDynamoDbTable; }
    inline bool AwsDynamoDbTableHasBeenSet() const { return m_awsDynamoDbTableHasBeenSet; }
    template<typename AwsDynamoDbTableT = AwsDynamoDbTableDetails>
    void SetAwsDynamoDbTable(AwsDynamoDbTableT&& value) { m_awsDynamoDbTableHasBeenSet = true; m_awsDynamoDbTable = std::forward<AwsDynamoDbTableT>(value); }
    template<typename AwsDynamoDbTableT = AwsDynamoDbTableDetails>
    ResourceDetails& WithAwsDynamoDbTable(AwsDynamoDbTableT&& value) { SetAwsDynamoDbTable(std::forward<AwsDynamoDbTableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about a version 1 Amazon API Gateway stage.</p>
     */
    inline const AwsApiGatewayStageDetails& GetAwsApiGatewayStage() const { return m_awsApiGatewayStage; }
    inline bool AwsApiGatewayStageHasBeenSet() const { return m_awsApiGatewayStageHasBeenSet; }
    template<typename AwsApiGatewayStageT = AwsApiGatewayStageDetails>
    void SetAwsApiGatewayStage(AwsApiGatewayStageT&& value) { m_awsApiGatewayStageHasBeenSet = true; m_awsApiGatewayStage = std::forward<AwsApiGatewayStageT>(value); }
    template<typename AwsApiGatewayStageT = AwsApiGatewayStageDetails>
    ResourceDetails& WithAwsApiGatewayStage(AwsApiGatewayStageT&& value) { SetAwsApiGatewayStage(std::forward<AwsApiGatewayStageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about a REST API in version 1 of Amazon API Gateway.</p>
     */
    inline const AwsApiGatewayRestApiDetails& GetAwsApiGatewayRestApi() const { return m_awsApiGatewayRestApi; }
    inline bool AwsApiGatewayRestApiHasBeenSet() const { return m_awsApiGatewayRestApiHasBeenSet; }
    template<typename AwsApiGatewayRestApiT = AwsApiGatewayRestApiDetails>
    void SetAwsApiGatewayRestApi(AwsApiGatewayRestApiT&& value) { m_awsApiGatewayRestApiHasBeenSet = true; m_awsApiGatewayRestApi = std::forward<AwsApiGatewayRestApiT>(value); }
    template<typename AwsApiGatewayRestApiT = AwsApiGatewayRestApiDetails>
    ResourceDetails& WithAwsApiGatewayRestApi(AwsApiGatewayRestApiT&& value) { SetAwsApiGatewayRestApi(std::forward<AwsApiGatewayRestApiT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details about a CloudTrail trail.</p>
     */
    inline const AwsCloudTrailTrailDetails& GetAwsCloudTrailTrail() const { return m_awsCloudTrailTrail; }
    inline bool AwsCloudTrailTrailHasBeenSet() const { return m_awsCloudTrailTrailHasBeenSet; }
    template<typename AwsCloudTrailTrailT = AwsCloudTrailTrailDetails>
    void SetAwsCloudTrailTrail(AwsCloudTrailTrailT&& value) { m_awsCloudTrailTrailHasBeenSet = true; m_awsCloudTrailTrail = std::forward<AwsCloudTrailTrailT>(value); }
    template<typename AwsCloudTrailTrailT = AwsCloudTrailTrailDetails>
    ResourceDetails& WithAwsCloudTrailTrail(AwsCloudTrailTrailT&& value) { SetAwsCloudTrailTrail(std::forward<AwsCloudTrailTrailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about the state of a patch on an instance based on the
     * patch baseline that was used to patch the instance.</p>
     */
    inline const AwsSsmPatchComplianceDetails& GetAwsSsmPatchCompliance() const { return m_awsSsmPatchCompliance; }
    inline bool AwsSsmPatchComplianceHasBeenSet() const { return m_awsSsmPatchComplianceHasBeenSet; }
    template<typename AwsSsmPatchComplianceT = AwsSsmPatchComplianceDetails>
    void SetAwsSsmPatchCompliance(AwsSsmPatchComplianceT&& value) { m_awsSsmPatchComplianceHasBeenSet = true; m_awsSsmPatchCompliance = std::forward<AwsSsmPatchComplianceT>(value); }
    template<typename AwsSsmPatchComplianceT = AwsSsmPatchComplianceDetails>
    ResourceDetails& WithAwsSsmPatchCompliance(AwsSsmPatchComplianceT&& value) { SetAwsSsmPatchCompliance(std::forward<AwsSsmPatchComplianceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details about an Certificate Manager certificate.</p>
     */
    inline const AwsCertificateManagerCertificateDetails& GetAwsCertificateManagerCertificate() const { return m_awsCertificateManagerCertificate; }
    inline bool AwsCertificateManagerCertificateHasBeenSet() const { return m_awsCertificateManagerCertificateHasBeenSet; }
    template<typename AwsCertificateManagerCertificateT = AwsCertificateManagerCertificateDetails>
    void SetAwsCertificateManagerCertificate(AwsCertificateManagerCertificateT&& value) { m_awsCertificateManagerCertificateHasBeenSet = true; m_awsCertificateManagerCertificate = std::forward<AwsCertificateManagerCertificateT>(value); }
    template<typename AwsCertificateManagerCertificateT = AwsCertificateManagerCertificateDetails>
    ResourceDetails& WithAwsCertificateManagerCertificate(AwsCertificateManagerCertificateT&& value) { SetAwsCertificateManagerCertificate(std::forward<AwsCertificateManagerCertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about an Amazon Redshift cluster.</p>
     */
    inline const AwsRedshiftClusterDetails& GetAwsRedshiftCluster() const { return m_awsRedshiftCluster; }
    inline bool AwsRedshiftClusterHasBeenSet() const { return m_awsRedshiftClusterHasBeenSet; }
    template<typename AwsRedshiftClusterT = AwsRedshiftClusterDetails>
    void SetAwsRedshiftCluster(AwsRedshiftClusterT&& value) { m_awsRedshiftClusterHasBeenSet = true; m_awsRedshiftCluster = std::forward<AwsRedshiftClusterT>(value); }
    template<typename AwsRedshiftClusterT = AwsRedshiftClusterDetails>
    ResourceDetails& WithAwsRedshiftCluster(AwsRedshiftClusterT&& value) { SetAwsRedshiftCluster(std::forward<AwsRedshiftClusterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about a Classic Load Balancer.</p>
     */
    inline const AwsElbLoadBalancerDetails& GetAwsElbLoadBalancer() const { return m_awsElbLoadBalancer; }
    inline bool AwsElbLoadBalancerHasBeenSet() const { return m_awsElbLoadBalancerHasBeenSet; }
    template<typename AwsElbLoadBalancerT = AwsElbLoadBalancerDetails>
    void SetAwsElbLoadBalancer(AwsElbLoadBalancerT&& value) { m_awsElbLoadBalancerHasBeenSet = true; m_awsElbLoadBalancer = std::forward<AwsElbLoadBalancerT>(value); }
    template<typename AwsElbLoadBalancerT = AwsElbLoadBalancerDetails>
    ResourceDetails& WithAwsElbLoadBalancer(AwsElbLoadBalancerT&& value) { SetAwsElbLoadBalancer(std::forward<AwsElbLoadBalancerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about an IAM group.</p>
     */
    inline const AwsIamGroupDetails& GetAwsIamGroup() const { return m_awsIamGroup; }
    inline bool AwsIamGroupHasBeenSet() const { return m_awsIamGroupHasBeenSet; }
    template<typename AwsIamGroupT = AwsIamGroupDetails>
    void SetAwsIamGroup(AwsIamGroupT&& value) { m_awsIamGroupHasBeenSet = true; m_awsIamGroup = std::forward<AwsIamGroupT>(value); }
    template<typename AwsIamGroupT = AwsIamGroupDetails>
    ResourceDetails& WithAwsIamGroup(AwsIamGroupT&& value) { SetAwsIamGroup(std::forward<AwsIamGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an IAM role.</p>
     */
    inline const AwsIamRoleDetails& GetAwsIamRole() const { return m_awsIamRole; }
    inline bool AwsIamRoleHasBeenSet() const { return m_awsIamRoleHasBeenSet; }
    template<typename AwsIamRoleT = AwsIamRoleDetails>
    void SetAwsIamRole(AwsIamRoleT&& value) { m_awsIamRoleHasBeenSet = true; m_awsIamRole = std::forward<AwsIamRoleT>(value); }
    template<typename AwsIamRoleT = AwsIamRoleDetails>
    ResourceDetails& WithAwsIamRole(AwsIamRoleT&& value) { SetAwsIamRole(std::forward<AwsIamRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an KMS key.</p>
     */
    inline const AwsKmsKeyDetails& GetAwsKmsKey() const { return m_awsKmsKey; }
    inline bool AwsKmsKeyHasBeenSet() const { return m_awsKmsKeyHasBeenSet; }
    template<typename AwsKmsKeyT = AwsKmsKeyDetails>
    void SetAwsKmsKey(AwsKmsKeyT&& value) { m_awsKmsKeyHasBeenSet = true; m_awsKmsKey = std::forward<AwsKmsKeyT>(value); }
    template<typename AwsKmsKeyT = AwsKmsKeyDetails>
    ResourceDetails& WithAwsKmsKey(AwsKmsKeyT&& value) { SetAwsKmsKey(std::forward<AwsKmsKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a Lambda function.</p>
     */
    inline const AwsLambdaFunctionDetails& GetAwsLambdaFunction() const { return m_awsLambdaFunction; }
    inline bool AwsLambdaFunctionHasBeenSet() const { return m_awsLambdaFunctionHasBeenSet; }
    template<typename AwsLambdaFunctionT = AwsLambdaFunctionDetails>
    void SetAwsLambdaFunction(AwsLambdaFunctionT&& value) { m_awsLambdaFunctionHasBeenSet = true; m_awsLambdaFunction = std::forward<AwsLambdaFunctionT>(value); }
    template<typename AwsLambdaFunctionT = AwsLambdaFunctionDetails>
    ResourceDetails& WithAwsLambdaFunction(AwsLambdaFunctionT&& value) { SetAwsLambdaFunction(std::forward<AwsLambdaFunctionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details for a Lambda layer version.</p>
     */
    inline const AwsLambdaLayerVersionDetails& GetAwsLambdaLayerVersion() const { return m_awsLambdaLayerVersion; }
    inline bool AwsLambdaLayerVersionHasBeenSet() const { return m_awsLambdaLayerVersionHasBeenSet; }
    template<typename AwsLambdaLayerVersionT = AwsLambdaLayerVersionDetails>
    void SetAwsLambdaLayerVersion(AwsLambdaLayerVersionT&& value) { m_awsLambdaLayerVersionHasBeenSet = true; m_awsLambdaLayerVersion = std::forward<AwsLambdaLayerVersionT>(value); }
    template<typename AwsLambdaLayerVersionT = AwsLambdaLayerVersionDetails>
    ResourceDetails& WithAwsLambdaLayerVersion(AwsLambdaLayerVersionT&& value) { SetAwsLambdaLayerVersion(std::forward<AwsLambdaLayerVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an Amazon RDS database instance.</p>
     */
    inline const AwsRdsDbInstanceDetails& GetAwsRdsDbInstance() const { return m_awsRdsDbInstance; }
    inline bool AwsRdsDbInstanceHasBeenSet() const { return m_awsRdsDbInstanceHasBeenSet; }
    template<typename AwsRdsDbInstanceT = AwsRdsDbInstanceDetails>
    void SetAwsRdsDbInstance(AwsRdsDbInstanceT&& value) { m_awsRdsDbInstanceHasBeenSet = true; m_awsRdsDbInstance = std::forward<AwsRdsDbInstanceT>(value); }
    template<typename AwsRdsDbInstanceT = AwsRdsDbInstanceDetails>
    ResourceDetails& WithAwsRdsDbInstance(AwsRdsDbInstanceT&& value) { SetAwsRdsDbInstance(std::forward<AwsRdsDbInstanceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an SNS topic.</p>
     */
    inline const AwsSnsTopicDetails& GetAwsSnsTopic() const { return m_awsSnsTopic; }
    inline bool AwsSnsTopicHasBeenSet() const { return m_awsSnsTopicHasBeenSet; }
    template<typename AwsSnsTopicT = AwsSnsTopicDetails>
    void SetAwsSnsTopic(AwsSnsTopicT&& value) { m_awsSnsTopicHasBeenSet = true; m_awsSnsTopic = std::forward<AwsSnsTopicT>(value); }
    template<typename AwsSnsTopicT = AwsSnsTopicDetails>
    ResourceDetails& WithAwsSnsTopic(AwsSnsTopicT&& value) { SetAwsSnsTopic(std::forward<AwsSnsTopicT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an SQS queue.</p>
     */
    inline const AwsSqsQueueDetails& GetAwsSqsQueue() const { return m_awsSqsQueue; }
    inline bool AwsSqsQueueHasBeenSet() const { return m_awsSqsQueueHasBeenSet; }
    template<typename AwsSqsQueueT = AwsSqsQueueDetails>
    void SetAwsSqsQueue(AwsSqsQueueT&& value) { m_awsSqsQueueHasBeenSet = true; m_awsSqsQueue = std::forward<AwsSqsQueueT>(value); }
    template<typename AwsSqsQueueT = AwsSqsQueueDetails>
    ResourceDetails& WithAwsSqsQueue(AwsSqsQueueT&& value) { SetAwsSqsQueue(std::forward<AwsSqsQueueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details for an WAF web ACL.</p>
     */
    inline const AwsWafWebAclDetails& GetAwsWafWebAcl() const { return m_awsWafWebAcl; }
    inline bool AwsWafWebAclHasBeenSet() const { return m_awsWafWebAclHasBeenSet; }
    template<typename AwsWafWebAclT = AwsWafWebAclDetails>
    void SetAwsWafWebAcl(AwsWafWebAclT&& value) { m_awsWafWebAclHasBeenSet = true; m_awsWafWebAcl = std::forward<AwsWafWebAclT>(value); }
    template<typename AwsWafWebAclT = AwsWafWebAclDetails>
    ResourceDetails& WithAwsWafWebAcl(AwsWafWebAclT&& value) { SetAwsWafWebAcl(std::forward<AwsWafWebAclT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an Amazon RDS database snapshot.</p>
     */
    inline const AwsRdsDbSnapshotDetails& GetAwsRdsDbSnapshot() const { return m_awsRdsDbSnapshot; }
    inline bool AwsRdsDbSnapshotHasBeenSet() const { return m_awsRdsDbSnapshotHasBeenSet; }
    template<typename AwsRdsDbSnapshotT = AwsRdsDbSnapshotDetails>
    void SetAwsRdsDbSnapshot(AwsRdsDbSnapshotT&& value) { m_awsRdsDbSnapshotHasBeenSet = true; m_awsRdsDbSnapshot = std::forward<AwsRdsDbSnapshotT>(value); }
    template<typename AwsRdsDbSnapshotT = AwsRdsDbSnapshotDetails>
    ResourceDetails& WithAwsRdsDbSnapshot(AwsRdsDbSnapshotT&& value) { SetAwsRdsDbSnapshot(std::forward<AwsRdsDbSnapshotT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an Amazon RDS database cluster snapshot.</p>
     */
    inline const AwsRdsDbClusterSnapshotDetails& GetAwsRdsDbClusterSnapshot() const { return m_awsRdsDbClusterSnapshot; }
    inline bool AwsRdsDbClusterSnapshotHasBeenSet() const { return m_awsRdsDbClusterSnapshotHasBeenSet; }
    template<typename AwsRdsDbClusterSnapshotT = AwsRdsDbClusterSnapshotDetails>
    void SetAwsRdsDbClusterSnapshot(AwsRdsDbClusterSnapshotT&& value) { m_awsRdsDbClusterSnapshotHasBeenSet = true; m_awsRdsDbClusterSnapshot = std::forward<AwsRdsDbClusterSnapshotT>(value); }
    template<typename AwsRdsDbClusterSnapshotT = AwsRdsDbClusterSnapshotDetails>
    ResourceDetails& WithAwsRdsDbClusterSnapshot(AwsRdsDbClusterSnapshotT&& value) { SetAwsRdsDbClusterSnapshot(std::forward<AwsRdsDbClusterSnapshotT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an Amazon RDS database cluster.</p>
     */
    inline const AwsRdsDbClusterDetails& GetAwsRdsDbCluster() const { return m_awsRdsDbCluster; }
    inline bool AwsRdsDbClusterHasBeenSet() const { return m_awsRdsDbClusterHasBeenSet; }
    template<typename AwsRdsDbClusterT = AwsRdsDbClusterDetails>
    void SetAwsRdsDbCluster(AwsRdsDbClusterT&& value) { m_awsRdsDbClusterHasBeenSet = true; m_awsRdsDbCluster = std::forward<AwsRdsDbClusterT>(value); }
    template<typename AwsRdsDbClusterT = AwsRdsDbClusterDetails>
    ResourceDetails& WithAwsRdsDbCluster(AwsRdsDbClusterT&& value) { SetAwsRdsDbCluster(std::forward<AwsRdsDbClusterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an Amazon ECS cluster.</p>
     */
    inline const AwsEcsClusterDetails& GetAwsEcsCluster() const { return m_awsEcsCluster; }
    inline bool AwsEcsClusterHasBeenSet() const { return m_awsEcsClusterHasBeenSet; }
    template<typename AwsEcsClusterT = AwsEcsClusterDetails>
    void SetAwsEcsCluster(AwsEcsClusterT&& value) { m_awsEcsClusterHasBeenSet = true; m_awsEcsCluster = std::forward<AwsEcsClusterT>(value); }
    template<typename AwsEcsClusterT = AwsEcsClusterDetails>
    ResourceDetails& WithAwsEcsCluster(AwsEcsClusterT&& value) { SetAwsEcsCluster(std::forward<AwsEcsClusterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about a Docker container that's part of a task. </p>
     */
    inline const AwsEcsContainerDetails& GetAwsEcsContainer() const { return m_awsEcsContainer; }
    inline bool AwsEcsContainerHasBeenSet() const { return m_awsEcsContainerHasBeenSet; }
    template<typename AwsEcsContainerT = AwsEcsContainerDetails>
    void SetAwsEcsContainer(AwsEcsContainerT&& value) { m_awsEcsContainerHasBeenSet = true; m_awsEcsContainer = std::forward<AwsEcsContainerT>(value); }
    template<typename AwsEcsContainerT = AwsEcsContainerDetails>
    ResourceDetails& WithAwsEcsContainer(AwsEcsContainerT&& value) { SetAwsEcsContainer(std::forward<AwsEcsContainerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a task definition. A task definition describes the container
     * and volume definitions of an Amazon Elastic Container Service task.</p>
     */
    inline const AwsEcsTaskDefinitionDetails& GetAwsEcsTaskDefinition() const { return m_awsEcsTaskDefinition; }
    inline bool AwsEcsTaskDefinitionHasBeenSet() const { return m_awsEcsTaskDefinitionHasBeenSet; }
    template<typename AwsEcsTaskDefinitionT = AwsEcsTaskDefinitionDetails>
    void SetAwsEcsTaskDefinition(AwsEcsTaskDefinitionT&& value) { m_awsEcsTaskDefinitionHasBeenSet = true; m_awsEcsTaskDefinition = std::forward<AwsEcsTaskDefinitionT>(value); }
    template<typename AwsEcsTaskDefinitionT = AwsEcsTaskDefinitionDetails>
    ResourceDetails& WithAwsEcsTaskDefinition(AwsEcsTaskDefinitionT&& value) { SetAwsEcsTaskDefinition(std::forward<AwsEcsTaskDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a container resource related to a finding.</p>
     */
    inline const ContainerDetails& GetContainer() const { return m_container; }
    inline bool ContainerHasBeenSet() const { return m_containerHasBeenSet; }
    template<typename ContainerT = ContainerDetails>
    void SetContainer(ContainerT&& value) { m_containerHasBeenSet = true; m_container = std::forward<ContainerT>(value); }
    template<typename ContainerT = ContainerDetails>
    ResourceDetails& WithContainer(ContainerT&& value) { SetContainer(std::forward<ContainerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a resource that are not available in a type-specific details
     * object. Use the <code>Other</code> object in the following cases.</p> <ul> <li>
     * <p>The type-specific object does not contain all of the fields that you want to
     * populate. In this case, first use the type-specific object to populate those
     * fields. Use the <code>Other</code> object to populate the fields that are
     * missing from the type-specific object.</p> </li> <li> <p>The resource type does
     * not have a corresponding object. This includes resources for which the type is
     * <code>Other</code>. </p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOther() const { return m_other; }
    inline bool OtherHasBeenSet() const { return m_otherHasBeenSet; }
    template<typename OtherT = Aws::Map<Aws::String, Aws::String>>
    void SetOther(OtherT&& value) { m_otherHasBeenSet = true; m_other = std::forward<OtherT>(value); }
    template<typename OtherT = Aws::Map<Aws::String, Aws::String>>
    ResourceDetails& WithOther(OtherT&& value) { SetOther(std::forward<OtherT>(value)); return *this;}
    template<typename OtherKeyT = Aws::String, typename OtherValueT = Aws::String>
    ResourceDetails& AddOther(OtherKeyT&& key, OtherValueT&& value) {
      m_otherHasBeenSet = true; m_other.emplace(std::forward<OtherKeyT>(key), std::forward<OtherValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Details about an RDS event notification subscription.</p>
     */
    inline const AwsRdsEventSubscriptionDetails& GetAwsRdsEventSubscription() const { return m_awsRdsEventSubscription; }
    inline bool AwsRdsEventSubscriptionHasBeenSet() const { return m_awsRdsEventSubscriptionHasBeenSet; }
    template<typename AwsRdsEventSubscriptionT = AwsRdsEventSubscriptionDetails>
    void SetAwsRdsEventSubscription(AwsRdsEventSubscriptionT&& value) { m_awsRdsEventSubscriptionHasBeenSet = true; m_awsRdsEventSubscription = std::forward<AwsRdsEventSubscriptionT>(value); }
    template<typename AwsRdsEventSubscriptionT = AwsRdsEventSubscriptionDetails>
    ResourceDetails& WithAwsRdsEventSubscription(AwsRdsEventSubscriptionT&& value) { SetAwsRdsEventSubscription(std::forward<AwsRdsEventSubscriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a service within an ECS cluster.</p>
     */
    inline const AwsEcsServiceDetails& GetAwsEcsService() const { return m_awsEcsService; }
    inline bool AwsEcsServiceHasBeenSet() const { return m_awsEcsServiceHasBeenSet; }
    template<typename AwsEcsServiceT = AwsEcsServiceDetails>
    void SetAwsEcsService(AwsEcsServiceT&& value) { m_awsEcsServiceHasBeenSet = true; m_awsEcsService = std::forward<AwsEcsServiceT>(value); }
    template<typename AwsEcsServiceT = AwsEcsServiceDetails>
    ResourceDetails& WithAwsEcsService(AwsEcsServiceT&& value) { SetAwsEcsService(std::forward<AwsEcsServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details about a launch configuration.</p>
     */
    inline const AwsAutoScalingLaunchConfigurationDetails& GetAwsAutoScalingLaunchConfiguration() const { return m_awsAutoScalingLaunchConfiguration; }
    inline bool AwsAutoScalingLaunchConfigurationHasBeenSet() const { return m_awsAutoScalingLaunchConfigurationHasBeenSet; }
    template<typename AwsAutoScalingLaunchConfigurationT = AwsAutoScalingLaunchConfigurationDetails>
    void SetAwsAutoScalingLaunchConfiguration(AwsAutoScalingLaunchConfigurationT&& value) { m_awsAutoScalingLaunchConfigurationHasBeenSet = true; m_awsAutoScalingLaunchConfiguration = std::forward<AwsAutoScalingLaunchConfigurationT>(value); }
    template<typename AwsAutoScalingLaunchConfigurationT = AwsAutoScalingLaunchConfigurationDetails>
    ResourceDetails& WithAwsAutoScalingLaunchConfiguration(AwsAutoScalingLaunchConfigurationT&& value) { SetAwsAutoScalingLaunchConfiguration(std::forward<AwsAutoScalingLaunchConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an Amazon EC2 VPN connection.</p>
     */
    inline const AwsEc2VpnConnectionDetails& GetAwsEc2VpnConnection() const { return m_awsEc2VpnConnection; }
    inline bool AwsEc2VpnConnectionHasBeenSet() const { return m_awsEc2VpnConnectionHasBeenSet; }
    template<typename AwsEc2VpnConnectionT = AwsEc2VpnConnectionDetails>
    void SetAwsEc2VpnConnection(AwsEc2VpnConnectionT&& value) { m_awsEc2VpnConnectionHasBeenSet = true; m_awsEc2VpnConnection = std::forward<AwsEc2VpnConnectionT>(value); }
    template<typename AwsEc2VpnConnectionT = AwsEc2VpnConnectionDetails>
    ResourceDetails& WithAwsEc2VpnConnection(AwsEc2VpnConnectionT&& value) { SetAwsEc2VpnConnection(std::forward<AwsEc2VpnConnectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about an Amazon ECR image.</p>
     */
    inline const AwsEcrContainerImageDetails& GetAwsEcrContainerImage() const { return m_awsEcrContainerImage; }
    inline bool AwsEcrContainerImageHasBeenSet() const { return m_awsEcrContainerImageHasBeenSet; }
    template<typename AwsEcrContainerImageT = AwsEcrContainerImageDetails>
    void SetAwsEcrContainerImage(AwsEcrContainerImageT&& value) { m_awsEcrContainerImageHasBeenSet = true; m_awsEcrContainerImage = std::forward<AwsEcrContainerImageT>(value); }
    template<typename AwsEcrContainerImageT = AwsEcrContainerImageDetails>
    ResourceDetails& WithAwsEcrContainerImage(AwsEcrContainerImageT&& value) { SetAwsEcrContainerImage(std::forward<AwsEcrContainerImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an Amazon OpenSearch Service domain.</p>
     */
    inline const AwsOpenSearchServiceDomainDetails& GetAwsOpenSearchServiceDomain() const { return m_awsOpenSearchServiceDomain; }
    inline bool AwsOpenSearchServiceDomainHasBeenSet() const { return m_awsOpenSearchServiceDomainHasBeenSet; }
    template<typename AwsOpenSearchServiceDomainT = AwsOpenSearchServiceDomainDetails>
    void SetAwsOpenSearchServiceDomain(AwsOpenSearchServiceDomainT&& value) { m_awsOpenSearchServiceDomainHasBeenSet = true; m_awsOpenSearchServiceDomain = std::forward<AwsOpenSearchServiceDomainT>(value); }
    template<typename AwsOpenSearchServiceDomainT = AwsOpenSearchServiceDomainDetails>
    ResourceDetails& WithAwsOpenSearchServiceDomain(AwsOpenSearchServiceDomainT&& value) { SetAwsOpenSearchServiceDomain(std::forward<AwsOpenSearchServiceDomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the service configuration for a VPC endpoint service.</p>
     */
    inline const AwsEc2VpcEndpointServiceDetails& GetAwsEc2VpcEndpointService() const { return m_awsEc2VpcEndpointService; }
    inline bool AwsEc2VpcEndpointServiceHasBeenSet() const { return m_awsEc2VpcEndpointServiceHasBeenSet; }
    template<typename AwsEc2VpcEndpointServiceT = AwsEc2VpcEndpointServiceDetails>
    void SetAwsEc2VpcEndpointService(AwsEc2VpcEndpointServiceT&& value) { m_awsEc2VpcEndpointServiceHasBeenSet = true; m_awsEc2VpcEndpointService = std::forward<AwsEc2VpcEndpointServiceT>(value); }
    template<typename AwsEc2VpcEndpointServiceT = AwsEc2VpcEndpointServiceDetails>
    ResourceDetails& WithAwsEc2VpcEndpointService(AwsEc2VpcEndpointServiceT&& value) { SetAwsEc2VpcEndpointService(std::forward<AwsEc2VpcEndpointServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the encryption configuration for X-Ray.</p>
     */
    inline const AwsXrayEncryptionConfigDetails& GetAwsXrayEncryptionConfig() const { return m_awsXrayEncryptionConfig; }
    inline bool AwsXrayEncryptionConfigHasBeenSet() const { return m_awsXrayEncryptionConfigHasBeenSet; }
    template<typename AwsXrayEncryptionConfigT = AwsXrayEncryptionConfigDetails>
    void SetAwsXrayEncryptionConfig(AwsXrayEncryptionConfigT&& value) { m_awsXrayEncryptionConfigHasBeenSet = true; m_awsXrayEncryptionConfig = std::forward<AwsXrayEncryptionConfigT>(value); }
    template<typename AwsXrayEncryptionConfigT = AwsXrayEncryptionConfigDetails>
    ResourceDetails& WithAwsXrayEncryptionConfig(AwsXrayEncryptionConfigT&& value) { SetAwsXrayEncryptionConfig(std::forward<AwsXrayEncryptionConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a rate-based rule for global resources.</p>
     */
    inline const AwsWafRateBasedRuleDetails& GetAwsWafRateBasedRule() const { return m_awsWafRateBasedRule; }
    inline bool AwsWafRateBasedRuleHasBeenSet() const { return m_awsWafRateBasedRuleHasBeenSet; }
    template<typename AwsWafRateBasedRuleT = AwsWafRateBasedRuleDetails>
    void SetAwsWafRateBasedRule(AwsWafRateBasedRuleT&& value) { m_awsWafRateBasedRuleHasBeenSet = true; m_awsWafRateBasedRule = std::forward<AwsWafRateBasedRuleT>(value); }
    template<typename AwsWafRateBasedRuleT = AwsWafRateBasedRuleDetails>
    ResourceDetails& WithAwsWafRateBasedRule(AwsWafRateBasedRuleT&& value) { SetAwsWafRateBasedRule(std::forward<AwsWafRateBasedRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a rate-based rule for Regional resources.</p>
     */
    inline const AwsWafRegionalRateBasedRuleDetails& GetAwsWafRegionalRateBasedRule() const { return m_awsWafRegionalRateBasedRule; }
    inline bool AwsWafRegionalRateBasedRuleHasBeenSet() const { return m_awsWafRegionalRateBasedRuleHasBeenSet; }
    template<typename AwsWafRegionalRateBasedRuleT = AwsWafRegionalRateBasedRuleDetails>
    void SetAwsWafRegionalRateBasedRule(AwsWafRegionalRateBasedRuleT&& value) { m_awsWafRegionalRateBasedRuleHasBeenSet = true; m_awsWafRegionalRateBasedRule = std::forward<AwsWafRegionalRateBasedRuleT>(value); }
    template<typename AwsWafRegionalRateBasedRuleT = AwsWafRegionalRateBasedRuleDetails>
    ResourceDetails& WithAwsWafRegionalRateBasedRule(AwsWafRegionalRateBasedRuleT&& value) { SetAwsWafRegionalRateBasedRule(std::forward<AwsWafRegionalRateBasedRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about an Amazon Elastic Container Registry repository.</p>
     */
    inline const AwsEcrRepositoryDetails& GetAwsEcrRepository() const { return m_awsEcrRepository; }
    inline bool AwsEcrRepositoryHasBeenSet() const { return m_awsEcrRepositoryHasBeenSet; }
    template<typename AwsEcrRepositoryT = AwsEcrRepositoryDetails>
    void SetAwsEcrRepository(AwsEcrRepositoryT&& value) { m_awsEcrRepositoryHasBeenSet = true; m_awsEcrRepository = std::forward<AwsEcrRepositoryT>(value); }
    template<typename AwsEcrRepositoryT = AwsEcrRepositoryDetails>
    ResourceDetails& WithAwsEcrRepository(AwsEcrRepositoryT&& value) { SetAwsEcrRepository(std::forward<AwsEcrRepositoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an Amazon EKS cluster.</p>
     */
    inline const AwsEksClusterDetails& GetAwsEksCluster() const { return m_awsEksCluster; }
    inline bool AwsEksClusterHasBeenSet() const { return m_awsEksClusterHasBeenSet; }
    template<typename AwsEksClusterT = AwsEksClusterDetails>
    void SetAwsEksCluster(AwsEksClusterT&& value) { m_awsEksClusterHasBeenSet = true; m_awsEksCluster = std::forward<AwsEksClusterT>(value); }
    template<typename AwsEksClusterT = AwsEksClusterDetails>
    ResourceDetails& WithAwsEksCluster(AwsEksClusterT&& value) { SetAwsEksCluster(std::forward<AwsEksClusterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an Network Firewall firewall policy.</p>
     */
    inline const AwsNetworkFirewallFirewallPolicyDetails& GetAwsNetworkFirewallFirewallPolicy() const { return m_awsNetworkFirewallFirewallPolicy; }
    inline bool AwsNetworkFirewallFirewallPolicyHasBeenSet() const { return m_awsNetworkFirewallFirewallPolicyHasBeenSet; }
    template<typename AwsNetworkFirewallFirewallPolicyT = AwsNetworkFirewallFirewallPolicyDetails>
    void SetAwsNetworkFirewallFirewallPolicy(AwsNetworkFirewallFirewallPolicyT&& value) { m_awsNetworkFirewallFirewallPolicyHasBeenSet = true; m_awsNetworkFirewallFirewallPolicy = std::forward<AwsNetworkFirewallFirewallPolicyT>(value); }
    template<typename AwsNetworkFirewallFirewallPolicyT = AwsNetworkFirewallFirewallPolicyDetails>
    ResourceDetails& WithAwsNetworkFirewallFirewallPolicy(AwsNetworkFirewallFirewallPolicyT&& value) { SetAwsNetworkFirewallFirewallPolicy(std::forward<AwsNetworkFirewallFirewallPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an Network Firewall firewall.</p>
     */
    inline const AwsNetworkFirewallFirewallDetails& GetAwsNetworkFirewallFirewall() const { return m_awsNetworkFirewallFirewall; }
    inline bool AwsNetworkFirewallFirewallHasBeenSet() const { return m_awsNetworkFirewallFirewallHasBeenSet; }
    template<typename AwsNetworkFirewallFirewallT = AwsNetworkFirewallFirewallDetails>
    void SetAwsNetworkFirewallFirewall(AwsNetworkFirewallFirewallT&& value) { m_awsNetworkFirewallFirewallHasBeenSet = true; m_awsNetworkFirewallFirewall = std::forward<AwsNetworkFirewallFirewallT>(value); }
    template<typename AwsNetworkFirewallFirewallT = AwsNetworkFirewallFirewallDetails>
    ResourceDetails& WithAwsNetworkFirewallFirewall(AwsNetworkFirewallFirewallT&& value) { SetAwsNetworkFirewallFirewall(std::forward<AwsNetworkFirewallFirewallT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an Network Firewall rule group.</p>
     */
    inline const AwsNetworkFirewallRuleGroupDetails& GetAwsNetworkFirewallRuleGroup() const { return m_awsNetworkFirewallRuleGroup; }
    inline bool AwsNetworkFirewallRuleGroupHasBeenSet() const { return m_awsNetworkFirewallRuleGroupHasBeenSet; }
    template<typename AwsNetworkFirewallRuleGroupT = AwsNetworkFirewallRuleGroupDetails>
    void SetAwsNetworkFirewallRuleGroup(AwsNetworkFirewallRuleGroupT&& value) { m_awsNetworkFirewallRuleGroupHasBeenSet = true; m_awsNetworkFirewallRuleGroup = std::forward<AwsNetworkFirewallRuleGroupT>(value); }
    template<typename AwsNetworkFirewallRuleGroupT = AwsNetworkFirewallRuleGroupDetails>
    ResourceDetails& WithAwsNetworkFirewallRuleGroup(AwsNetworkFirewallRuleGroupT&& value) { SetAwsNetworkFirewallRuleGroup(std::forward<AwsNetworkFirewallRuleGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an Amazon RDS DB security group.</p>
     */
    inline const AwsRdsDbSecurityGroupDetails& GetAwsRdsDbSecurityGroup() const { return m_awsRdsDbSecurityGroup; }
    inline bool AwsRdsDbSecurityGroupHasBeenSet() const { return m_awsRdsDbSecurityGroupHasBeenSet; }
    template<typename AwsRdsDbSecurityGroupT = AwsRdsDbSecurityGroupDetails>
    void SetAwsRdsDbSecurityGroup(AwsRdsDbSecurityGroupT&& value) { m_awsRdsDbSecurityGroupHasBeenSet = true; m_awsRdsDbSecurityGroup = std::forward<AwsRdsDbSecurityGroupT>(value); }
    template<typename AwsRdsDbSecurityGroupT = AwsRdsDbSecurityGroupDetails>
    ResourceDetails& WithAwsRdsDbSecurityGroup(AwsRdsDbSecurityGroupT&& value) { SetAwsRdsDbSecurityGroup(std::forward<AwsRdsDbSecurityGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an Amazon Kinesis data stream.</p>
     */
    inline const AwsKinesisStreamDetails& GetAwsKinesisStream() const { return m_awsKinesisStream; }
    inline bool AwsKinesisStreamHasBeenSet() const { return m_awsKinesisStreamHasBeenSet; }
    template<typename AwsKinesisStreamT = AwsKinesisStreamDetails>
    void SetAwsKinesisStream(AwsKinesisStreamT&& value) { m_awsKinesisStreamHasBeenSet = true; m_awsKinesisStream = std::forward<AwsKinesisStreamT>(value); }
    template<typename AwsKinesisStreamT = AwsKinesisStreamDetails>
    ResourceDetails& WithAwsKinesisStream(AwsKinesisStreamT&& value) { SetAwsKinesisStream(std::forward<AwsKinesisStreamT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an Amazon EC2 transit gateway that interconnects your virtual
     * private clouds (VPC) and on-premises networks.</p>
     */
    inline const AwsEc2TransitGatewayDetails& GetAwsEc2TransitGateway() const { return m_awsEc2TransitGateway; }
    inline bool AwsEc2TransitGatewayHasBeenSet() const { return m_awsEc2TransitGatewayHasBeenSet; }
    template<typename AwsEc2TransitGatewayT = AwsEc2TransitGatewayDetails>
    void SetAwsEc2TransitGateway(AwsEc2TransitGatewayT&& value) { m_awsEc2TransitGatewayHasBeenSet = true; m_awsEc2TransitGateway = std::forward<AwsEc2TransitGatewayT>(value); }
    template<typename AwsEc2TransitGatewayT = AwsEc2TransitGatewayDetails>
    ResourceDetails& WithAwsEc2TransitGateway(AwsEc2TransitGatewayT&& value) { SetAwsEc2TransitGateway(std::forward<AwsEc2TransitGatewayT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an Amazon EFS access point. An access point is an
     * application-specific view into an EFS file system that applies an operating
     * system user and group, and a file system path, to any file system request made
     * through the access point. </p>
     */
    inline const AwsEfsAccessPointDetails& GetAwsEfsAccessPoint() const { return m_awsEfsAccessPoint; }
    inline bool AwsEfsAccessPointHasBeenSet() const { return m_awsEfsAccessPointHasBeenSet; }
    template<typename AwsEfsAccessPointT = AwsEfsAccessPointDetails>
    void SetAwsEfsAccessPoint(AwsEfsAccessPointT&& value) { m_awsEfsAccessPointHasBeenSet = true; m_awsEfsAccessPoint = std::forward<AwsEfsAccessPointT>(value); }
    template<typename AwsEfsAccessPointT = AwsEfsAccessPointDetails>
    ResourceDetails& WithAwsEfsAccessPoint(AwsEfsAccessPointT&& value) { SetAwsEfsAccessPoint(std::forward<AwsEfsAccessPointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an CloudFormation stack. A stack is a collection of Amazon Web
     * Services resources that you can manage as a single unit.</p>
     */
    inline const AwsCloudFormationStackDetails& GetAwsCloudFormationStack() const { return m_awsCloudFormationStack; }
    inline bool AwsCloudFormationStackHasBeenSet() const { return m_awsCloudFormationStackHasBeenSet; }
    template<typename AwsCloudFormationStackT = AwsCloudFormationStackDetails>
    void SetAwsCloudFormationStack(AwsCloudFormationStackT&& value) { m_awsCloudFormationStackHasBeenSet = true; m_awsCloudFormationStack = std::forward<AwsCloudFormationStackT>(value); }
    template<typename AwsCloudFormationStackT = AwsCloudFormationStackDetails>
    ResourceDetails& WithAwsCloudFormationStack(AwsCloudFormationStackT&& value) { SetAwsCloudFormationStack(std::forward<AwsCloudFormationStackT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an Amazon CloudWatch alarm. An alarm allows you to monitor and
     * receive alerts about your Amazon Web Services resources and applications across
     * multiple Regions.</p>
     */
    inline const AwsCloudWatchAlarmDetails& GetAwsCloudWatchAlarm() const { return m_awsCloudWatchAlarm; }
    inline bool AwsCloudWatchAlarmHasBeenSet() const { return m_awsCloudWatchAlarmHasBeenSet; }
    template<typename AwsCloudWatchAlarmT = AwsCloudWatchAlarmDetails>
    void SetAwsCloudWatchAlarm(AwsCloudWatchAlarmT&& value) { m_awsCloudWatchAlarmHasBeenSet = true; m_awsCloudWatchAlarm = std::forward<AwsCloudWatchAlarmT>(value); }
    template<typename AwsCloudWatchAlarmT = AwsCloudWatchAlarmDetails>
    ResourceDetails& WithAwsCloudWatchAlarm(AwsCloudWatchAlarmT&& value) { SetAwsCloudWatchAlarm(std::forward<AwsCloudWatchAlarmT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an Amazon EC2 VPC peering connection. A VPC peering connection
     * is a networking connection between two VPCs that enables you to route traffic
     * between them privately. </p>
     */
    inline const AwsEc2VpcPeeringConnectionDetails& GetAwsEc2VpcPeeringConnection() const { return m_awsEc2VpcPeeringConnection; }
    inline bool AwsEc2VpcPeeringConnectionHasBeenSet() const { return m_awsEc2VpcPeeringConnectionHasBeenSet; }
    template<typename AwsEc2VpcPeeringConnectionT = AwsEc2VpcPeeringConnectionDetails>
    void SetAwsEc2VpcPeeringConnection(AwsEc2VpcPeeringConnectionT&& value) { m_awsEc2VpcPeeringConnectionHasBeenSet = true; m_awsEc2VpcPeeringConnection = std::forward<AwsEc2VpcPeeringConnectionT>(value); }
    template<typename AwsEc2VpcPeeringConnectionT = AwsEc2VpcPeeringConnectionDetails>
    ResourceDetails& WithAwsEc2VpcPeeringConnection(AwsEc2VpcPeeringConnectionT&& value) { SetAwsEc2VpcPeeringConnection(std::forward<AwsEc2VpcPeeringConnectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an WAF rule group for Regional resources. </p>
     */
    inline const AwsWafRegionalRuleGroupDetails& GetAwsWafRegionalRuleGroup() const { return m_awsWafRegionalRuleGroup; }
    inline bool AwsWafRegionalRuleGroupHasBeenSet() const { return m_awsWafRegionalRuleGroupHasBeenSet; }
    template<typename AwsWafRegionalRuleGroupT = AwsWafRegionalRuleGroupDetails>
    void SetAwsWafRegionalRuleGroup(AwsWafRegionalRuleGroupT&& value) { m_awsWafRegionalRuleGroupHasBeenSet = true; m_awsWafRegionalRuleGroup = std::forward<AwsWafRegionalRuleGroupT>(value); }
    template<typename AwsWafRegionalRuleGroupT = AwsWafRegionalRuleGroupDetails>
    ResourceDetails& WithAwsWafRegionalRuleGroup(AwsWafRegionalRuleGroupT&& value) { SetAwsWafRegionalRuleGroup(std::forward<AwsWafRegionalRuleGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an WAF rule for Regional resources. </p>
     */
    inline const AwsWafRegionalRuleDetails& GetAwsWafRegionalRule() const { return m_awsWafRegionalRule; }
    inline bool AwsWafRegionalRuleHasBeenSet() const { return m_awsWafRegionalRuleHasBeenSet; }
    template<typename AwsWafRegionalRuleT = AwsWafRegionalRuleDetails>
    void SetAwsWafRegionalRule(AwsWafRegionalRuleT&& value) { m_awsWafRegionalRuleHasBeenSet = true; m_awsWafRegionalRule = std::forward<AwsWafRegionalRuleT>(value); }
    template<typename AwsWafRegionalRuleT = AwsWafRegionalRuleDetails>
    ResourceDetails& WithAwsWafRegionalRule(AwsWafRegionalRuleT&& value) { SetAwsWafRegionalRule(std::forward<AwsWafRegionalRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an WAF web access control list (web ACL) for Regional
     * resources. </p>
     */
    inline const AwsWafRegionalWebAclDetails& GetAwsWafRegionalWebAcl() const { return m_awsWafRegionalWebAcl; }
    inline bool AwsWafRegionalWebAclHasBeenSet() const { return m_awsWafRegionalWebAclHasBeenSet; }
    template<typename AwsWafRegionalWebAclT = AwsWafRegionalWebAclDetails>
    void SetAwsWafRegionalWebAcl(AwsWafRegionalWebAclT&& value) { m_awsWafRegionalWebAclHasBeenSet = true; m_awsWafRegionalWebAcl = std::forward<AwsWafRegionalWebAclT>(value); }
    template<typename AwsWafRegionalWebAclT = AwsWafRegionalWebAclDetails>
    ResourceDetails& WithAwsWafRegionalWebAcl(AwsWafRegionalWebAclT&& value) { SetAwsWafRegionalWebAcl(std::forward<AwsWafRegionalWebAclT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an WAF rule for global resources. </p>
     */
    inline const AwsWafRuleDetails& GetAwsWafRule() const { return m_awsWafRule; }
    inline bool AwsWafRuleHasBeenSet() const { return m_awsWafRuleHasBeenSet; }
    template<typename AwsWafRuleT = AwsWafRuleDetails>
    void SetAwsWafRule(AwsWafRuleT&& value) { m_awsWafRuleHasBeenSet = true; m_awsWafRule = std::forward<AwsWafRuleT>(value); }
    template<typename AwsWafRuleT = AwsWafRuleDetails>
    ResourceDetails& WithAwsWafRule(AwsWafRuleT&& value) { SetAwsWafRule(std::forward<AwsWafRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an WAF rule group for global resources. </p>
     */
    inline const AwsWafRuleGroupDetails& GetAwsWafRuleGroup() const { return m_awsWafRuleGroup; }
    inline bool AwsWafRuleGroupHasBeenSet() const { return m_awsWafRuleGroupHasBeenSet; }
    template<typename AwsWafRuleGroupT = AwsWafRuleGroupDetails>
    void SetAwsWafRuleGroup(AwsWafRuleGroupT&& value) { m_awsWafRuleGroupHasBeenSet = true; m_awsWafRuleGroup = std::forward<AwsWafRuleGroupT>(value); }
    template<typename AwsWafRuleGroupT = AwsWafRuleGroupDetails>
    ResourceDetails& WithAwsWafRuleGroup(AwsWafRuleGroupT&& value) { SetAwsWafRuleGroup(std::forward<AwsWafRuleGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a task in a cluster. </p>
     */
    inline const AwsEcsTaskDetails& GetAwsEcsTask() const { return m_awsEcsTask; }
    inline bool AwsEcsTaskHasBeenSet() const { return m_awsEcsTaskHasBeenSet; }
    template<typename AwsEcsTaskT = AwsEcsTaskDetails>
    void SetAwsEcsTask(AwsEcsTaskT&& value) { m_awsEcsTaskHasBeenSet = true; m_awsEcsTask = std::forward<AwsEcsTaskT>(value); }
    template<typename AwsEcsTaskT = AwsEcsTaskDetails>
    ResourceDetails& WithAwsEcsTask(AwsEcsTaskT&& value) { SetAwsEcsTask(std::forward<AwsEcsTaskT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details about an Backup backup vault. </p>
     */
    inline const AwsBackupBackupVaultDetails& GetAwsBackupBackupVault() const { return m_awsBackupBackupVault; }
    inline bool AwsBackupBackupVaultHasBeenSet() const { return m_awsBackupBackupVaultHasBeenSet; }
    template<typename AwsBackupBackupVaultT = AwsBackupBackupVaultDetails>
    void SetAwsBackupBackupVault(AwsBackupBackupVaultT&& value) { m_awsBackupBackupVaultHasBeenSet = true; m_awsBackupBackupVault = std::forward<AwsBackupBackupVaultT>(value); }
    template<typename AwsBackupBackupVaultT = AwsBackupBackupVaultDetails>
    ResourceDetails& WithAwsBackupBackupVault(AwsBackupBackupVaultT&& value) { SetAwsBackupBackupVault(std::forward<AwsBackupBackupVaultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details about an Backup backup plan. </p>
     */
    inline const AwsBackupBackupPlanDetails& GetAwsBackupBackupPlan() const { return m_awsBackupBackupPlan; }
    inline bool AwsBackupBackupPlanHasBeenSet() const { return m_awsBackupBackupPlanHasBeenSet; }
    template<typename AwsBackupBackupPlanT = AwsBackupBackupPlanDetails>
    void SetAwsBackupBackupPlan(AwsBackupBackupPlanT&& value) { m_awsBackupBackupPlanHasBeenSet = true; m_awsBackupBackupPlan = std::forward<AwsBackupBackupPlanT>(value); }
    template<typename AwsBackupBackupPlanT = AwsBackupBackupPlanDetails>
    ResourceDetails& WithAwsBackupBackupPlan(AwsBackupBackupPlanT&& value) { SetAwsBackupBackupPlan(std::forward<AwsBackupBackupPlanT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details about an Backup backup, or recovery point. </p>
     */
    inline const AwsBackupRecoveryPointDetails& GetAwsBackupRecoveryPoint() const { return m_awsBackupRecoveryPoint; }
    inline bool AwsBackupRecoveryPointHasBeenSet() const { return m_awsBackupRecoveryPointHasBeenSet; }
    template<typename AwsBackupRecoveryPointT = AwsBackupRecoveryPointDetails>
    void SetAwsBackupRecoveryPoint(AwsBackupRecoveryPointT&& value) { m_awsBackupRecoveryPointHasBeenSet = true; m_awsBackupRecoveryPoint = std::forward<AwsBackupRecoveryPointT>(value); }
    template<typename AwsBackupRecoveryPointT = AwsBackupRecoveryPointDetails>
    ResourceDetails& WithAwsBackupRecoveryPoint(AwsBackupRecoveryPointT&& value) { SetAwsBackupRecoveryPoint(std::forward<AwsBackupRecoveryPointT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AwsEc2LaunchTemplateDetails& GetAwsEc2LaunchTemplate() const { return m_awsEc2LaunchTemplate; }
    inline bool AwsEc2LaunchTemplateHasBeenSet() const { return m_awsEc2LaunchTemplateHasBeenSet; }
    template<typename AwsEc2LaunchTemplateT = AwsEc2LaunchTemplateDetails>
    void SetAwsEc2LaunchTemplate(AwsEc2LaunchTemplateT&& value) { m_awsEc2LaunchTemplateHasBeenSet = true; m_awsEc2LaunchTemplate = std::forward<AwsEc2LaunchTemplateT>(value); }
    template<typename AwsEc2LaunchTemplateT = AwsEc2LaunchTemplateDetails>
    ResourceDetails& WithAwsEc2LaunchTemplate(AwsEc2LaunchTemplateT&& value) { SetAwsEc2LaunchTemplate(std::forward<AwsEc2LaunchTemplateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AwsSageMakerNotebookInstanceDetails& GetAwsSageMakerNotebookInstance() const { return m_awsSageMakerNotebookInstance; }
    inline bool AwsSageMakerNotebookInstanceHasBeenSet() const { return m_awsSageMakerNotebookInstanceHasBeenSet; }
    template<typename AwsSageMakerNotebookInstanceT = AwsSageMakerNotebookInstanceDetails>
    void SetAwsSageMakerNotebookInstance(AwsSageMakerNotebookInstanceT&& value) { m_awsSageMakerNotebookInstanceHasBeenSet = true; m_awsSageMakerNotebookInstance = std::forward<AwsSageMakerNotebookInstanceT>(value); }
    template<typename AwsSageMakerNotebookInstanceT = AwsSageMakerNotebookInstanceDetails>
    ResourceDetails& WithAwsSageMakerNotebookInstance(AwsSageMakerNotebookInstanceT&& value) { SetAwsSageMakerNotebookInstance(std::forward<AwsSageMakerNotebookInstanceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AwsWafv2WebAclDetails& GetAwsWafv2WebAcl() const { return m_awsWafv2WebAcl; }
    inline bool AwsWafv2WebAclHasBeenSet() const { return m_awsWafv2WebAclHasBeenSet; }
    template<typename AwsWafv2WebAclT = AwsWafv2WebAclDetails>
    void SetAwsWafv2WebAcl(AwsWafv2WebAclT&& value) { m_awsWafv2WebAclHasBeenSet = true; m_awsWafv2WebAcl = std::forward<AwsWafv2WebAclT>(value); }
    template<typename AwsWafv2WebAclT = AwsWafv2WebAclDetails>
    ResourceDetails& WithAwsWafv2WebAcl(AwsWafv2WebAclT&& value) { SetAwsWafv2WebAcl(std::forward<AwsWafv2WebAclT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AwsWafv2RuleGroupDetails& GetAwsWafv2RuleGroup() const { return m_awsWafv2RuleGroup; }
    inline bool AwsWafv2RuleGroupHasBeenSet() const { return m_awsWafv2RuleGroupHasBeenSet; }
    template<typename AwsWafv2RuleGroupT = AwsWafv2RuleGroupDetails>
    void SetAwsWafv2RuleGroup(AwsWafv2RuleGroupT&& value) { m_awsWafv2RuleGroupHasBeenSet = true; m_awsWafv2RuleGroup = std::forward<AwsWafv2RuleGroupT>(value); }
    template<typename AwsWafv2RuleGroupT = AwsWafv2RuleGroupDetails>
    ResourceDetails& WithAwsWafv2RuleGroup(AwsWafv2RuleGroupT&& value) { SetAwsWafv2RuleGroup(std::forward<AwsWafv2RuleGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides details about a route table. A route table contains a set of rules,
     * called routes, that determine where to direct network traffic from your subnet
     * or gateway. </p>
     */
    inline const AwsEc2RouteTableDetails& GetAwsEc2RouteTable() const { return m_awsEc2RouteTable; }
    inline bool AwsEc2RouteTableHasBeenSet() const { return m_awsEc2RouteTableHasBeenSet; }
    template<typename AwsEc2RouteTableT = AwsEc2RouteTableDetails>
    void SetAwsEc2RouteTable(AwsEc2RouteTableT&& value) { m_awsEc2RouteTableHasBeenSet = true; m_awsEc2RouteTable = std::forward<AwsEc2RouteTableT>(value); }
    template<typename AwsEc2RouteTableT = AwsEc2RouteTableDetails>
    ResourceDetails& WithAwsEc2RouteTable(AwsEc2RouteTableT&& value) { SetAwsEc2RouteTable(std::forward<AwsEc2RouteTableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides details about AppSync message broker. A message broker allows
     * software applications and components to communicate using various programming
     * languages, operating systems, and formal messaging protocols. </p>
     */
    inline const AwsAmazonMqBrokerDetails& GetAwsAmazonMqBroker() const { return m_awsAmazonMqBroker; }
    inline bool AwsAmazonMqBrokerHasBeenSet() const { return m_awsAmazonMqBrokerHasBeenSet; }
    template<typename AwsAmazonMqBrokerT = AwsAmazonMqBrokerDetails>
    void SetAwsAmazonMqBroker(AwsAmazonMqBrokerT&& value) { m_awsAmazonMqBrokerHasBeenSet = true; m_awsAmazonMqBroker = std::forward<AwsAmazonMqBrokerT>(value); }
    template<typename AwsAmazonMqBrokerT = AwsAmazonMqBrokerDetails>
    ResourceDetails& WithAwsAmazonMqBroker(AwsAmazonMqBrokerT&& value) { SetAwsAmazonMqBroker(std::forward<AwsAmazonMqBrokerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides details about an AppSync Graph QL API, which lets you query
     * multiple databases, microservices, and APIs from a single GraphQL endpoint. </p>
     */
    inline const AwsAppSyncGraphQlApiDetails& GetAwsAppSyncGraphQlApi() const { return m_awsAppSyncGraphQlApi; }
    inline bool AwsAppSyncGraphQlApiHasBeenSet() const { return m_awsAppSyncGraphQlApiHasBeenSet; }
    template<typename AwsAppSyncGraphQlApiT = AwsAppSyncGraphQlApiDetails>
    void SetAwsAppSyncGraphQlApi(AwsAppSyncGraphQlApiT&& value) { m_awsAppSyncGraphQlApiHasBeenSet = true; m_awsAppSyncGraphQlApi = std::forward<AwsAppSyncGraphQlApiT>(value); }
    template<typename AwsAppSyncGraphQlApiT = AwsAppSyncGraphQlApiDetails>
    ResourceDetails& WithAwsAppSyncGraphQlApi(AwsAppSyncGraphQlApiT&& value) { SetAwsAppSyncGraphQlApi(std::forward<AwsAppSyncGraphQlApiT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A schema defines the structure of events that are sent to Amazon
     * EventBridge. Schema registries are containers for schemas. They collect and
     * organize schemas so that your schemas are in logical groups. </p>
     */
    inline const AwsEventSchemasRegistryDetails& GetAwsEventSchemasRegistry() const { return m_awsEventSchemasRegistry; }
    inline bool AwsEventSchemasRegistryHasBeenSet() const { return m_awsEventSchemasRegistryHasBeenSet; }
    template<typename AwsEventSchemasRegistryT = AwsEventSchemasRegistryDetails>
    void SetAwsEventSchemasRegistry(AwsEventSchemasRegistryT&& value) { m_awsEventSchemasRegistryHasBeenSet = true; m_awsEventSchemasRegistry = std::forward<AwsEventSchemasRegistryT>(value); }
    template<typename AwsEventSchemasRegistryT = AwsEventSchemasRegistryDetails>
    ResourceDetails& WithAwsEventSchemasRegistry(AwsEventSchemasRegistryT&& value) { SetAwsEventSchemasRegistry(std::forward<AwsEventSchemasRegistryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides details about an Amazon GuardDuty detector. A detector is an object
     * that represents the GuardDuty service. A detector is required for GuardDuty to
     * become operational. </p>
     */
    inline const AwsGuardDutyDetectorDetails& GetAwsGuardDutyDetector() const { return m_awsGuardDutyDetector; }
    inline bool AwsGuardDutyDetectorHasBeenSet() const { return m_awsGuardDutyDetectorHasBeenSet; }
    template<typename AwsGuardDutyDetectorT = AwsGuardDutyDetectorDetails>
    void SetAwsGuardDutyDetector(AwsGuardDutyDetectorT&& value) { m_awsGuardDutyDetectorHasBeenSet = true; m_awsGuardDutyDetector = std::forward<AwsGuardDutyDetectorT>(value); }
    template<typename AwsGuardDutyDetectorT = AwsGuardDutyDetectorDetails>
    ResourceDetails& WithAwsGuardDutyDetector(AwsGuardDutyDetectorT&& value) { SetAwsGuardDutyDetector(std::forward<AwsGuardDutyDetectorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides details about an Step Functions state machine, which is a workflow
     * consisting of a series of event-driven steps. </p>
     */
    inline const AwsStepFunctionStateMachineDetails& GetAwsStepFunctionStateMachine() const { return m_awsStepFunctionStateMachine; }
    inline bool AwsStepFunctionStateMachineHasBeenSet() const { return m_awsStepFunctionStateMachineHasBeenSet; }
    template<typename AwsStepFunctionStateMachineT = AwsStepFunctionStateMachineDetails>
    void SetAwsStepFunctionStateMachine(AwsStepFunctionStateMachineT&& value) { m_awsStepFunctionStateMachineHasBeenSet = true; m_awsStepFunctionStateMachine = std::forward<AwsStepFunctionStateMachineT>(value); }
    template<typename AwsStepFunctionStateMachineT = AwsStepFunctionStateMachineDetails>
    ResourceDetails& WithAwsStepFunctionStateMachine(AwsStepFunctionStateMachineT&& value) { SetAwsStepFunctionStateMachine(std::forward<AwsStepFunctionStateMachineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides information about an Amazon Athena workgroup. A workgroup helps you
     * separate users, teams, applications, or workloads. It also helps you set limits
     * on data processing and track costs. </p>
     */
    inline const AwsAthenaWorkGroupDetails& GetAwsAthenaWorkGroup() const { return m_awsAthenaWorkGroup; }
    inline bool AwsAthenaWorkGroupHasBeenSet() const { return m_awsAthenaWorkGroupHasBeenSet; }
    template<typename AwsAthenaWorkGroupT = AwsAthenaWorkGroupDetails>
    void SetAwsAthenaWorkGroup(AwsAthenaWorkGroupT&& value) { m_awsAthenaWorkGroupHasBeenSet = true; m_awsAthenaWorkGroup = std::forward<AwsAthenaWorkGroupT>(value); }
    template<typename AwsAthenaWorkGroupT = AwsAthenaWorkGroupDetails>
    ResourceDetails& WithAwsAthenaWorkGroup(AwsAthenaWorkGroupT&& value) { SetAwsAthenaWorkGroup(std::forward<AwsAthenaWorkGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides details about Amazon EventBridge event bus for an endpoint. An
     * event bus is a router that receives events and delivers them to zero or more
     * destinations, or targets.</p>
     */
    inline const AwsEventsEventbusDetails& GetAwsEventsEventbus() const { return m_awsEventsEventbus; }
    inline bool AwsEventsEventbusHasBeenSet() const { return m_awsEventsEventbusHasBeenSet; }
    template<typename AwsEventsEventbusT = AwsEventsEventbusDetails>
    void SetAwsEventsEventbus(AwsEventsEventbusT&& value) { m_awsEventsEventbusHasBeenSet = true; m_awsEventsEventbus = std::forward<AwsEventsEventbusT>(value); }
    template<typename AwsEventsEventbusT = AwsEventsEventbusDetails>
    ResourceDetails& WithAwsEventsEventbus(AwsEventsEventbusT&& value) { SetAwsEventsEventbus(std::forward<AwsEventsEventbusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides details about an Database Migration Service (DMS) endpoint. An
     * endpoint provides connection, data store type, and location information about
     * your data store.</p>
     */
    inline const AwsDmsEndpointDetails& GetAwsDmsEndpoint() const { return m_awsDmsEndpoint; }
    inline bool AwsDmsEndpointHasBeenSet() const { return m_awsDmsEndpointHasBeenSet; }
    template<typename AwsDmsEndpointT = AwsDmsEndpointDetails>
    void SetAwsDmsEndpoint(AwsDmsEndpointT&& value) { m_awsDmsEndpointHasBeenSet = true; m_awsDmsEndpoint = std::forward<AwsDmsEndpointT>(value); }
    template<typename AwsDmsEndpointT = AwsDmsEndpointDetails>
    ResourceDetails& WithAwsDmsEndpoint(AwsDmsEndpointT&& value) { SetAwsDmsEndpoint(std::forward<AwsDmsEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides details about an Amazon EventBridge global endpoint. The endpoint
     * can improve your application’s availability by making it Regional-fault
     * tolerant.</p>
     */
    inline const AwsEventsEndpointDetails& GetAwsEventsEndpoint() const { return m_awsEventsEndpoint; }
    inline bool AwsEventsEndpointHasBeenSet() const { return m_awsEventsEndpointHasBeenSet; }
    template<typename AwsEventsEndpointT = AwsEventsEndpointDetails>
    void SetAwsEventsEndpoint(AwsEventsEndpointT&& value) { m_awsEventsEndpointHasBeenSet = true; m_awsEventsEndpoint = std::forward<AwsEventsEndpointT>(value); }
    template<typename AwsEventsEndpointT = AwsEventsEndpointDetails>
    ResourceDetails& WithAwsEventsEndpoint(AwsEventsEndpointT&& value) { SetAwsEventsEndpoint(std::forward<AwsEventsEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides details about an DMS replication task. A replication task moves a
     * set of data from the source endpoint to the target endpoint.</p>
     */
    inline const AwsDmsReplicationTaskDetails& GetAwsDmsReplicationTask() const { return m_awsDmsReplicationTask; }
    inline bool AwsDmsReplicationTaskHasBeenSet() const { return m_awsDmsReplicationTaskHasBeenSet; }
    template<typename AwsDmsReplicationTaskT = AwsDmsReplicationTaskDetails>
    void SetAwsDmsReplicationTask(AwsDmsReplicationTaskT&& value) { m_awsDmsReplicationTaskHasBeenSet = true; m_awsDmsReplicationTask = std::forward<AwsDmsReplicationTaskT>(value); }
    template<typename AwsDmsReplicationTaskT = AwsDmsReplicationTaskDetails>
    ResourceDetails& WithAwsDmsReplicationTask(AwsDmsReplicationTaskT&& value) { SetAwsDmsReplicationTask(std::forward<AwsDmsReplicationTaskT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides details about an DMS replication instance. DMS uses a replication
     * instance to connect to your source data store, read the source data, and format
     * the data for consumption by the target data store.</p>
     */
    inline const AwsDmsReplicationInstanceDetails& GetAwsDmsReplicationInstance() const { return m_awsDmsReplicationInstance; }
    inline bool AwsDmsReplicationInstanceHasBeenSet() const { return m_awsDmsReplicationInstanceHasBeenSet; }
    template<typename AwsDmsReplicationInstanceT = AwsDmsReplicationInstanceDetails>
    void SetAwsDmsReplicationInstance(AwsDmsReplicationInstanceT&& value) { m_awsDmsReplicationInstanceHasBeenSet = true; m_awsDmsReplicationInstance = std::forward<AwsDmsReplicationInstanceT>(value); }
    template<typename AwsDmsReplicationInstanceT = AwsDmsReplicationInstanceDetails>
    ResourceDetails& WithAwsDmsReplicationInstance(AwsDmsReplicationInstanceT&& value) { SetAwsDmsReplicationInstance(std::forward<AwsDmsReplicationInstanceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides details about an Amazon Route 53 hosted zone, including the four
     * name servers assigned to the hosted zone. A hosted zone represents a collection
     * of records that can be managed together, belonging to a single parent domain
     * name.</p>
     */
    inline const AwsRoute53HostedZoneDetails& GetAwsRoute53HostedZone() const { return m_awsRoute53HostedZone; }
    inline bool AwsRoute53HostedZoneHasBeenSet() const { return m_awsRoute53HostedZoneHasBeenSet; }
    template<typename AwsRoute53HostedZoneT = AwsRoute53HostedZoneDetails>
    void SetAwsRoute53HostedZone(AwsRoute53HostedZoneT&& value) { m_awsRoute53HostedZoneHasBeenSet = true; m_awsRoute53HostedZone = std::forward<AwsRoute53HostedZoneT>(value); }
    template<typename AwsRoute53HostedZoneT = AwsRoute53HostedZoneDetails>
    ResourceDetails& WithAwsRoute53HostedZone(AwsRoute53HostedZoneT&& value) { SetAwsRoute53HostedZone(std::forward<AwsRoute53HostedZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides details about an Amazon Managed Streaming for Apache Kafka (Amazon
     * MSK) cluster.</p>
     */
    inline const AwsMskClusterDetails& GetAwsMskCluster() const { return m_awsMskCluster; }
    inline bool AwsMskClusterHasBeenSet() const { return m_awsMskClusterHasBeenSet; }
    template<typename AwsMskClusterT = AwsMskClusterDetails>
    void SetAwsMskCluster(AwsMskClusterT&& value) { m_awsMskClusterHasBeenSet = true; m_awsMskCluster = std::forward<AwsMskClusterT>(value); }
    template<typename AwsMskClusterT = AwsMskClusterDetails>
    ResourceDetails& WithAwsMskCluster(AwsMskClusterT&& value) { SetAwsMskCluster(std::forward<AwsMskClusterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides details about an Amazon Simple Storage Service (Amazon S3) access
     * point. S3 access points are named network endpoints that are attached to S3
     * buckets that you can use to perform S3 object operations. </p>
     */
    inline const AwsS3AccessPointDetails& GetAwsS3AccessPoint() const { return m_awsS3AccessPoint; }
    inline bool AwsS3AccessPointHasBeenSet() const { return m_awsS3AccessPointHasBeenSet; }
    template<typename AwsS3AccessPointT = AwsS3AccessPointDetails>
    void SetAwsS3AccessPoint(AwsS3AccessPointT&& value) { m_awsS3AccessPointHasBeenSet = true; m_awsS3AccessPoint = std::forward<AwsS3AccessPointT>(value); }
    template<typename AwsS3AccessPointT = AwsS3AccessPointDetails>
    ResourceDetails& WithAwsS3AccessPoint(AwsS3AccessPointT&& value) { SetAwsS3AccessPoint(std::forward<AwsS3AccessPointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides details about an Client VPN endpoint. A Client VPN endpoint is the
     * resource that you create and configure to enable and manage client VPN sessions.
     * It's the termination point for all client VPN sessions. </p>
     */
    inline const AwsEc2ClientVpnEndpointDetails& GetAwsEc2ClientVpnEndpoint() const { return m_awsEc2ClientVpnEndpoint; }
    inline bool AwsEc2ClientVpnEndpointHasBeenSet() const { return m_awsEc2ClientVpnEndpointHasBeenSet; }
    template<typename AwsEc2ClientVpnEndpointT = AwsEc2ClientVpnEndpointDetails>
    void SetAwsEc2ClientVpnEndpoint(AwsEc2ClientVpnEndpointT&& value) { m_awsEc2ClientVpnEndpointHasBeenSet = true; m_awsEc2ClientVpnEndpoint = std::forward<AwsEc2ClientVpnEndpointT>(value); }
    template<typename AwsEc2ClientVpnEndpointT = AwsEc2ClientVpnEndpointDetails>
    ResourceDetails& WithAwsEc2ClientVpnEndpoint(AwsEc2ClientVpnEndpointT&& value) { SetAwsEc2ClientVpnEndpoint(std::forward<AwsEc2ClientVpnEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Details about an external code repository with which you can connect your
     * Amazon Web Services resources. The connection is established through Amazon
     * Inspector. </p>
     */
    inline const CodeRepositoryDetails& GetCodeRepository() const { return m_codeRepository; }
    inline bool CodeRepositoryHasBeenSet() const { return m_codeRepositoryHasBeenSet; }
    template<typename CodeRepositoryT = CodeRepositoryDetails>
    void SetCodeRepository(CodeRepositoryT&& value) { m_codeRepositoryHasBeenSet = true; m_codeRepository = std::forward<CodeRepositoryT>(value); }
    template<typename CodeRepositoryT = CodeRepositoryDetails>
    ResourceDetails& WithCodeRepository(CodeRepositoryT&& value) { SetCodeRepository(std::forward<CodeRepositoryT>(value)); return *this;}
    ///@}
  private:

    AwsAutoScalingAutoScalingGroupDetails m_awsAutoScalingAutoScalingGroup;
    bool m_awsAutoScalingAutoScalingGroupHasBeenSet = false;

    AwsCodeBuildProjectDetails m_awsCodeBuildProject;
    bool m_awsCodeBuildProjectHasBeenSet = false;

    AwsCloudFrontDistributionDetails m_awsCloudFrontDistribution;
    bool m_awsCloudFrontDistributionHasBeenSet = false;

    AwsEc2InstanceDetails m_awsEc2Instance;
    bool m_awsEc2InstanceHasBeenSet = false;

    AwsEc2NetworkInterfaceDetails m_awsEc2NetworkInterface;
    bool m_awsEc2NetworkInterfaceHasBeenSet = false;

    AwsEc2SecurityGroupDetails m_awsEc2SecurityGroup;
    bool m_awsEc2SecurityGroupHasBeenSet = false;

    AwsEc2VolumeDetails m_awsEc2Volume;
    bool m_awsEc2VolumeHasBeenSet = false;

    AwsEc2VpcDetails m_awsEc2Vpc;
    bool m_awsEc2VpcHasBeenSet = false;

    AwsEc2EipDetails m_awsEc2Eip;
    bool m_awsEc2EipHasBeenSet = false;

    AwsEc2SubnetDetails m_awsEc2Subnet;
    bool m_awsEc2SubnetHasBeenSet = false;

    AwsEc2NetworkAclDetails m_awsEc2NetworkAcl;
    bool m_awsEc2NetworkAclHasBeenSet = false;

    AwsElbv2LoadBalancerDetails m_awsElbv2LoadBalancer;
    bool m_awsElbv2LoadBalancerHasBeenSet = false;

    AwsElasticBeanstalkEnvironmentDetails m_awsElasticBeanstalkEnvironment;
    bool m_awsElasticBeanstalkEnvironmentHasBeenSet = false;

    AwsElasticsearchDomainDetails m_awsElasticsearchDomain;
    bool m_awsElasticsearchDomainHasBeenSet = false;

    AwsS3BucketDetails m_awsS3Bucket;
    bool m_awsS3BucketHasBeenSet = false;

    AwsS3AccountPublicAccessBlockDetails m_awsS3AccountPublicAccessBlock;
    bool m_awsS3AccountPublicAccessBlockHasBeenSet = false;

    AwsS3ObjectDetails m_awsS3Object;
    bool m_awsS3ObjectHasBeenSet = false;

    AwsSecretsManagerSecretDetails m_awsSecretsManagerSecret;
    bool m_awsSecretsManagerSecretHasBeenSet = false;

    AwsIamAccessKeyDetails m_awsIamAccessKey;
    bool m_awsIamAccessKeyHasBeenSet = false;

    AwsIamUserDetails m_awsIamUser;
    bool m_awsIamUserHasBeenSet = false;

    AwsIamPolicyDetails m_awsIamPolicy;
    bool m_awsIamPolicyHasBeenSet = false;

    AwsApiGatewayV2StageDetails m_awsApiGatewayV2Stage;
    bool m_awsApiGatewayV2StageHasBeenSet = false;

    AwsApiGatewayV2ApiDetails m_awsApiGatewayV2Api;
    bool m_awsApiGatewayV2ApiHasBeenSet = false;

    AwsDynamoDbTableDetails m_awsDynamoDbTable;
    bool m_awsDynamoDbTableHasBeenSet = false;

    AwsApiGatewayStageDetails m_awsApiGatewayStage;
    bool m_awsApiGatewayStageHasBeenSet = false;

    AwsApiGatewayRestApiDetails m_awsApiGatewayRestApi;
    bool m_awsApiGatewayRestApiHasBeenSet = false;

    AwsCloudTrailTrailDetails m_awsCloudTrailTrail;
    bool m_awsCloudTrailTrailHasBeenSet = false;

    AwsSsmPatchComplianceDetails m_awsSsmPatchCompliance;
    bool m_awsSsmPatchComplianceHasBeenSet = false;

    AwsCertificateManagerCertificateDetails m_awsCertificateManagerCertificate;
    bool m_awsCertificateManagerCertificateHasBeenSet = false;

    AwsRedshiftClusterDetails m_awsRedshiftCluster;
    bool m_awsRedshiftClusterHasBeenSet = false;

    AwsElbLoadBalancerDetails m_awsElbLoadBalancer;
    bool m_awsElbLoadBalancerHasBeenSet = false;

    AwsIamGroupDetails m_awsIamGroup;
    bool m_awsIamGroupHasBeenSet = false;

    AwsIamRoleDetails m_awsIamRole;
    bool m_awsIamRoleHasBeenSet = false;

    AwsKmsKeyDetails m_awsKmsKey;
    bool m_awsKmsKeyHasBeenSet = false;

    AwsLambdaFunctionDetails m_awsLambdaFunction;
    bool m_awsLambdaFunctionHasBeenSet = false;

    AwsLambdaLayerVersionDetails m_awsLambdaLayerVersion;
    bool m_awsLambdaLayerVersionHasBeenSet = false;

    AwsRdsDbInstanceDetails m_awsRdsDbInstance;
    bool m_awsRdsDbInstanceHasBeenSet = false;

    AwsSnsTopicDetails m_awsSnsTopic;
    bool m_awsSnsTopicHasBeenSet = false;

    AwsSqsQueueDetails m_awsSqsQueue;
    bool m_awsSqsQueueHasBeenSet = false;

    AwsWafWebAclDetails m_awsWafWebAcl;
    bool m_awsWafWebAclHasBeenSet = false;

    AwsRdsDbSnapshotDetails m_awsRdsDbSnapshot;
    bool m_awsRdsDbSnapshotHasBeenSet = false;

    AwsRdsDbClusterSnapshotDetails m_awsRdsDbClusterSnapshot;
    bool m_awsRdsDbClusterSnapshotHasBeenSet = false;

    AwsRdsDbClusterDetails m_awsRdsDbCluster;
    bool m_awsRdsDbClusterHasBeenSet = false;

    AwsEcsClusterDetails m_awsEcsCluster;
    bool m_awsEcsClusterHasBeenSet = false;

    AwsEcsContainerDetails m_awsEcsContainer;
    bool m_awsEcsContainerHasBeenSet = false;

    AwsEcsTaskDefinitionDetails m_awsEcsTaskDefinition;
    bool m_awsEcsTaskDefinitionHasBeenSet = false;

    ContainerDetails m_container;
    bool m_containerHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_other;
    bool m_otherHasBeenSet = false;

    AwsRdsEventSubscriptionDetails m_awsRdsEventSubscription;
    bool m_awsRdsEventSubscriptionHasBeenSet = false;

    AwsEcsServiceDetails m_awsEcsService;
    bool m_awsEcsServiceHasBeenSet = false;

    AwsAutoScalingLaunchConfigurationDetails m_awsAutoScalingLaunchConfiguration;
    bool m_awsAutoScalingLaunchConfigurationHasBeenSet = false;

    AwsEc2VpnConnectionDetails m_awsEc2VpnConnection;
    bool m_awsEc2VpnConnectionHasBeenSet = false;

    AwsEcrContainerImageDetails m_awsEcrContainerImage;
    bool m_awsEcrContainerImageHasBeenSet = false;

    AwsOpenSearchServiceDomainDetails m_awsOpenSearchServiceDomain;
    bool m_awsOpenSearchServiceDomainHasBeenSet = false;

    AwsEc2VpcEndpointServiceDetails m_awsEc2VpcEndpointService;
    bool m_awsEc2VpcEndpointServiceHasBeenSet = false;

    AwsXrayEncryptionConfigDetails m_awsXrayEncryptionConfig;
    bool m_awsXrayEncryptionConfigHasBeenSet = false;

    AwsWafRateBasedRuleDetails m_awsWafRateBasedRule;
    bool m_awsWafRateBasedRuleHasBeenSet = false;

    AwsWafRegionalRateBasedRuleDetails m_awsWafRegionalRateBasedRule;
    bool m_awsWafRegionalRateBasedRuleHasBeenSet = false;

    AwsEcrRepositoryDetails m_awsEcrRepository;
    bool m_awsEcrRepositoryHasBeenSet = false;

    AwsEksClusterDetails m_awsEksCluster;
    bool m_awsEksClusterHasBeenSet = false;

    AwsNetworkFirewallFirewallPolicyDetails m_awsNetworkFirewallFirewallPolicy;
    bool m_awsNetworkFirewallFirewallPolicyHasBeenSet = false;

    AwsNetworkFirewallFirewallDetails m_awsNetworkFirewallFirewall;
    bool m_awsNetworkFirewallFirewallHasBeenSet = false;

    AwsNetworkFirewallRuleGroupDetails m_awsNetworkFirewallRuleGroup;
    bool m_awsNetworkFirewallRuleGroupHasBeenSet = false;

    AwsRdsDbSecurityGroupDetails m_awsRdsDbSecurityGroup;
    bool m_awsRdsDbSecurityGroupHasBeenSet = false;

    AwsKinesisStreamDetails m_awsKinesisStream;
    bool m_awsKinesisStreamHasBeenSet = false;

    AwsEc2TransitGatewayDetails m_awsEc2TransitGateway;
    bool m_awsEc2TransitGatewayHasBeenSet = false;

    AwsEfsAccessPointDetails m_awsEfsAccessPoint;
    bool m_awsEfsAccessPointHasBeenSet = false;

    AwsCloudFormationStackDetails m_awsCloudFormationStack;
    bool m_awsCloudFormationStackHasBeenSet = false;

    AwsCloudWatchAlarmDetails m_awsCloudWatchAlarm;
    bool m_awsCloudWatchAlarmHasBeenSet = false;

    AwsEc2VpcPeeringConnectionDetails m_awsEc2VpcPeeringConnection;
    bool m_awsEc2VpcPeeringConnectionHasBeenSet = false;

    AwsWafRegionalRuleGroupDetails m_awsWafRegionalRuleGroup;
    bool m_awsWafRegionalRuleGroupHasBeenSet = false;

    AwsWafRegionalRuleDetails m_awsWafRegionalRule;
    bool m_awsWafRegionalRuleHasBeenSet = false;

    AwsWafRegionalWebAclDetails m_awsWafRegionalWebAcl;
    bool m_awsWafRegionalWebAclHasBeenSet = false;

    AwsWafRuleDetails m_awsWafRule;
    bool m_awsWafRuleHasBeenSet = false;

    AwsWafRuleGroupDetails m_awsWafRuleGroup;
    bool m_awsWafRuleGroupHasBeenSet = false;

    AwsEcsTaskDetails m_awsEcsTask;
    bool m_awsEcsTaskHasBeenSet = false;

    AwsBackupBackupVaultDetails m_awsBackupBackupVault;
    bool m_awsBackupBackupVaultHasBeenSet = false;

    AwsBackupBackupPlanDetails m_awsBackupBackupPlan;
    bool m_awsBackupBackupPlanHasBeenSet = false;

    AwsBackupRecoveryPointDetails m_awsBackupRecoveryPoint;
    bool m_awsBackupRecoveryPointHasBeenSet = false;

    AwsEc2LaunchTemplateDetails m_awsEc2LaunchTemplate;
    bool m_awsEc2LaunchTemplateHasBeenSet = false;

    AwsSageMakerNotebookInstanceDetails m_awsSageMakerNotebookInstance;
    bool m_awsSageMakerNotebookInstanceHasBeenSet = false;

    AwsWafv2WebAclDetails m_awsWafv2WebAcl;
    bool m_awsWafv2WebAclHasBeenSet = false;

    AwsWafv2RuleGroupDetails m_awsWafv2RuleGroup;
    bool m_awsWafv2RuleGroupHasBeenSet = false;

    AwsEc2RouteTableDetails m_awsEc2RouteTable;
    bool m_awsEc2RouteTableHasBeenSet = false;

    AwsAmazonMqBrokerDetails m_awsAmazonMqBroker;
    bool m_awsAmazonMqBrokerHasBeenSet = false;

    AwsAppSyncGraphQlApiDetails m_awsAppSyncGraphQlApi;
    bool m_awsAppSyncGraphQlApiHasBeenSet = false;

    AwsEventSchemasRegistryDetails m_awsEventSchemasRegistry;
    bool m_awsEventSchemasRegistryHasBeenSet = false;

    AwsGuardDutyDetectorDetails m_awsGuardDutyDetector;
    bool m_awsGuardDutyDetectorHasBeenSet = false;

    AwsStepFunctionStateMachineDetails m_awsStepFunctionStateMachine;
    bool m_awsStepFunctionStateMachineHasBeenSet = false;

    AwsAthenaWorkGroupDetails m_awsAthenaWorkGroup;
    bool m_awsAthenaWorkGroupHasBeenSet = false;

    AwsEventsEventbusDetails m_awsEventsEventbus;
    bool m_awsEventsEventbusHasBeenSet = false;

    AwsDmsEndpointDetails m_awsDmsEndpoint;
    bool m_awsDmsEndpointHasBeenSet = false;

    AwsEventsEndpointDetails m_awsEventsEndpoint;
    bool m_awsEventsEndpointHasBeenSet = false;

    AwsDmsReplicationTaskDetails m_awsDmsReplicationTask;
    bool m_awsDmsReplicationTaskHasBeenSet = false;

    AwsDmsReplicationInstanceDetails m_awsDmsReplicationInstance;
    bool m_awsDmsReplicationInstanceHasBeenSet = false;

    AwsRoute53HostedZoneDetails m_awsRoute53HostedZone;
    bool m_awsRoute53HostedZoneHasBeenSet = false;

    AwsMskClusterDetails m_awsMskCluster;
    bool m_awsMskClusterHasBeenSet = false;

    AwsS3AccessPointDetails m_awsS3AccessPoint;
    bool m_awsS3AccessPointHasBeenSet = false;

    AwsEc2ClientVpnEndpointDetails m_awsEc2ClientVpnEndpoint;
    bool m_awsEc2ClientVpnEndpointHasBeenSet = false;

    CodeRepositoryDetails m_codeRepository;
    bool m_codeRepositoryHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
