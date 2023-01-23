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
    AWS_SECURITYHUB_API ResourceDetails();
    AWS_SECURITYHUB_API ResourceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ResourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details for an autoscaling group.</p>
     */
    inline const AwsAutoScalingAutoScalingGroupDetails& GetAwsAutoScalingAutoScalingGroup() const{ return m_awsAutoScalingAutoScalingGroup; }

    /**
     * <p>Details for an autoscaling group.</p>
     */
    inline bool AwsAutoScalingAutoScalingGroupHasBeenSet() const { return m_awsAutoScalingAutoScalingGroupHasBeenSet; }

    /**
     * <p>Details for an autoscaling group.</p>
     */
    inline void SetAwsAutoScalingAutoScalingGroup(const AwsAutoScalingAutoScalingGroupDetails& value) { m_awsAutoScalingAutoScalingGroupHasBeenSet = true; m_awsAutoScalingAutoScalingGroup = value; }

    /**
     * <p>Details for an autoscaling group.</p>
     */
    inline void SetAwsAutoScalingAutoScalingGroup(AwsAutoScalingAutoScalingGroupDetails&& value) { m_awsAutoScalingAutoScalingGroupHasBeenSet = true; m_awsAutoScalingAutoScalingGroup = std::move(value); }

    /**
     * <p>Details for an autoscaling group.</p>
     */
    inline ResourceDetails& WithAwsAutoScalingAutoScalingGroup(const AwsAutoScalingAutoScalingGroupDetails& value) { SetAwsAutoScalingAutoScalingGroup(value); return *this;}

    /**
     * <p>Details for an autoscaling group.</p>
     */
    inline ResourceDetails& WithAwsAutoScalingAutoScalingGroup(AwsAutoScalingAutoScalingGroupDetails&& value) { SetAwsAutoScalingAutoScalingGroup(std::move(value)); return *this;}


    /**
     * <p>Details for an CodeBuild project.</p>
     */
    inline const AwsCodeBuildProjectDetails& GetAwsCodeBuildProject() const{ return m_awsCodeBuildProject; }

    /**
     * <p>Details for an CodeBuild project.</p>
     */
    inline bool AwsCodeBuildProjectHasBeenSet() const { return m_awsCodeBuildProjectHasBeenSet; }

    /**
     * <p>Details for an CodeBuild project.</p>
     */
    inline void SetAwsCodeBuildProject(const AwsCodeBuildProjectDetails& value) { m_awsCodeBuildProjectHasBeenSet = true; m_awsCodeBuildProject = value; }

    /**
     * <p>Details for an CodeBuild project.</p>
     */
    inline void SetAwsCodeBuildProject(AwsCodeBuildProjectDetails&& value) { m_awsCodeBuildProjectHasBeenSet = true; m_awsCodeBuildProject = std::move(value); }

    /**
     * <p>Details for an CodeBuild project.</p>
     */
    inline ResourceDetails& WithAwsCodeBuildProject(const AwsCodeBuildProjectDetails& value) { SetAwsCodeBuildProject(value); return *this;}

    /**
     * <p>Details for an CodeBuild project.</p>
     */
    inline ResourceDetails& WithAwsCodeBuildProject(AwsCodeBuildProjectDetails&& value) { SetAwsCodeBuildProject(std::move(value)); return *this;}


    /**
     * <p>Details about a CloudFront distribution.</p>
     */
    inline const AwsCloudFrontDistributionDetails& GetAwsCloudFrontDistribution() const{ return m_awsCloudFrontDistribution; }

    /**
     * <p>Details about a CloudFront distribution.</p>
     */
    inline bool AwsCloudFrontDistributionHasBeenSet() const { return m_awsCloudFrontDistributionHasBeenSet; }

    /**
     * <p>Details about a CloudFront distribution.</p>
     */
    inline void SetAwsCloudFrontDistribution(const AwsCloudFrontDistributionDetails& value) { m_awsCloudFrontDistributionHasBeenSet = true; m_awsCloudFrontDistribution = value; }

    /**
     * <p>Details about a CloudFront distribution.</p>
     */
    inline void SetAwsCloudFrontDistribution(AwsCloudFrontDistributionDetails&& value) { m_awsCloudFrontDistributionHasBeenSet = true; m_awsCloudFrontDistribution = std::move(value); }

    /**
     * <p>Details about a CloudFront distribution.</p>
     */
    inline ResourceDetails& WithAwsCloudFrontDistribution(const AwsCloudFrontDistributionDetails& value) { SetAwsCloudFrontDistribution(value); return *this;}

    /**
     * <p>Details about a CloudFront distribution.</p>
     */
    inline ResourceDetails& WithAwsCloudFrontDistribution(AwsCloudFrontDistributionDetails&& value) { SetAwsCloudFrontDistribution(std::move(value)); return *this;}


    /**
     * <p>Details about an EC2 instance related to a finding.</p>
     */
    inline const AwsEc2InstanceDetails& GetAwsEc2Instance() const{ return m_awsEc2Instance; }

    /**
     * <p>Details about an EC2 instance related to a finding.</p>
     */
    inline bool AwsEc2InstanceHasBeenSet() const { return m_awsEc2InstanceHasBeenSet; }

    /**
     * <p>Details about an EC2 instance related to a finding.</p>
     */
    inline void SetAwsEc2Instance(const AwsEc2InstanceDetails& value) { m_awsEc2InstanceHasBeenSet = true; m_awsEc2Instance = value; }

    /**
     * <p>Details about an EC2 instance related to a finding.</p>
     */
    inline void SetAwsEc2Instance(AwsEc2InstanceDetails&& value) { m_awsEc2InstanceHasBeenSet = true; m_awsEc2Instance = std::move(value); }

    /**
     * <p>Details about an EC2 instance related to a finding.</p>
     */
    inline ResourceDetails& WithAwsEc2Instance(const AwsEc2InstanceDetails& value) { SetAwsEc2Instance(value); return *this;}

    /**
     * <p>Details about an EC2 instance related to a finding.</p>
     */
    inline ResourceDetails& WithAwsEc2Instance(AwsEc2InstanceDetails&& value) { SetAwsEc2Instance(std::move(value)); return *this;}


    /**
     * <p>Details for an EC2 network interface.</p>
     */
    inline const AwsEc2NetworkInterfaceDetails& GetAwsEc2NetworkInterface() const{ return m_awsEc2NetworkInterface; }

    /**
     * <p>Details for an EC2 network interface.</p>
     */
    inline bool AwsEc2NetworkInterfaceHasBeenSet() const { return m_awsEc2NetworkInterfaceHasBeenSet; }

    /**
     * <p>Details for an EC2 network interface.</p>
     */
    inline void SetAwsEc2NetworkInterface(const AwsEc2NetworkInterfaceDetails& value) { m_awsEc2NetworkInterfaceHasBeenSet = true; m_awsEc2NetworkInterface = value; }

    /**
     * <p>Details for an EC2 network interface.</p>
     */
    inline void SetAwsEc2NetworkInterface(AwsEc2NetworkInterfaceDetails&& value) { m_awsEc2NetworkInterfaceHasBeenSet = true; m_awsEc2NetworkInterface = std::move(value); }

    /**
     * <p>Details for an EC2 network interface.</p>
     */
    inline ResourceDetails& WithAwsEc2NetworkInterface(const AwsEc2NetworkInterfaceDetails& value) { SetAwsEc2NetworkInterface(value); return *this;}

    /**
     * <p>Details for an EC2 network interface.</p>
     */
    inline ResourceDetails& WithAwsEc2NetworkInterface(AwsEc2NetworkInterfaceDetails&& value) { SetAwsEc2NetworkInterface(std::move(value)); return *this;}


    /**
     * <p>Details for an EC2 security group.</p>
     */
    inline const AwsEc2SecurityGroupDetails& GetAwsEc2SecurityGroup() const{ return m_awsEc2SecurityGroup; }

    /**
     * <p>Details for an EC2 security group.</p>
     */
    inline bool AwsEc2SecurityGroupHasBeenSet() const { return m_awsEc2SecurityGroupHasBeenSet; }

    /**
     * <p>Details for an EC2 security group.</p>
     */
    inline void SetAwsEc2SecurityGroup(const AwsEc2SecurityGroupDetails& value) { m_awsEc2SecurityGroupHasBeenSet = true; m_awsEc2SecurityGroup = value; }

    /**
     * <p>Details for an EC2 security group.</p>
     */
    inline void SetAwsEc2SecurityGroup(AwsEc2SecurityGroupDetails&& value) { m_awsEc2SecurityGroupHasBeenSet = true; m_awsEc2SecurityGroup = std::move(value); }

    /**
     * <p>Details for an EC2 security group.</p>
     */
    inline ResourceDetails& WithAwsEc2SecurityGroup(const AwsEc2SecurityGroupDetails& value) { SetAwsEc2SecurityGroup(value); return *this;}

    /**
     * <p>Details for an EC2 security group.</p>
     */
    inline ResourceDetails& WithAwsEc2SecurityGroup(AwsEc2SecurityGroupDetails&& value) { SetAwsEc2SecurityGroup(std::move(value)); return *this;}


    /**
     * <p>Details for an Amazon EC2 volume.</p>
     */
    inline const AwsEc2VolumeDetails& GetAwsEc2Volume() const{ return m_awsEc2Volume; }

    /**
     * <p>Details for an Amazon EC2 volume.</p>
     */
    inline bool AwsEc2VolumeHasBeenSet() const { return m_awsEc2VolumeHasBeenSet; }

    /**
     * <p>Details for an Amazon EC2 volume.</p>
     */
    inline void SetAwsEc2Volume(const AwsEc2VolumeDetails& value) { m_awsEc2VolumeHasBeenSet = true; m_awsEc2Volume = value; }

    /**
     * <p>Details for an Amazon EC2 volume.</p>
     */
    inline void SetAwsEc2Volume(AwsEc2VolumeDetails&& value) { m_awsEc2VolumeHasBeenSet = true; m_awsEc2Volume = std::move(value); }

    /**
     * <p>Details for an Amazon EC2 volume.</p>
     */
    inline ResourceDetails& WithAwsEc2Volume(const AwsEc2VolumeDetails& value) { SetAwsEc2Volume(value); return *this;}

    /**
     * <p>Details for an Amazon EC2 volume.</p>
     */
    inline ResourceDetails& WithAwsEc2Volume(AwsEc2VolumeDetails&& value) { SetAwsEc2Volume(std::move(value)); return *this;}


    /**
     * <p>Details for an Amazon EC2 VPC.</p>
     */
    inline const AwsEc2VpcDetails& GetAwsEc2Vpc() const{ return m_awsEc2Vpc; }

    /**
     * <p>Details for an Amazon EC2 VPC.</p>
     */
    inline bool AwsEc2VpcHasBeenSet() const { return m_awsEc2VpcHasBeenSet; }

    /**
     * <p>Details for an Amazon EC2 VPC.</p>
     */
    inline void SetAwsEc2Vpc(const AwsEc2VpcDetails& value) { m_awsEc2VpcHasBeenSet = true; m_awsEc2Vpc = value; }

    /**
     * <p>Details for an Amazon EC2 VPC.</p>
     */
    inline void SetAwsEc2Vpc(AwsEc2VpcDetails&& value) { m_awsEc2VpcHasBeenSet = true; m_awsEc2Vpc = std::move(value); }

    /**
     * <p>Details for an Amazon EC2 VPC.</p>
     */
    inline ResourceDetails& WithAwsEc2Vpc(const AwsEc2VpcDetails& value) { SetAwsEc2Vpc(value); return *this;}

    /**
     * <p>Details for an Amazon EC2 VPC.</p>
     */
    inline ResourceDetails& WithAwsEc2Vpc(AwsEc2VpcDetails&& value) { SetAwsEc2Vpc(std::move(value)); return *this;}


    /**
     * <p>Details about an Elastic IP address.</p>
     */
    inline const AwsEc2EipDetails& GetAwsEc2Eip() const{ return m_awsEc2Eip; }

    /**
     * <p>Details about an Elastic IP address.</p>
     */
    inline bool AwsEc2EipHasBeenSet() const { return m_awsEc2EipHasBeenSet; }

    /**
     * <p>Details about an Elastic IP address.</p>
     */
    inline void SetAwsEc2Eip(const AwsEc2EipDetails& value) { m_awsEc2EipHasBeenSet = true; m_awsEc2Eip = value; }

    /**
     * <p>Details about an Elastic IP address.</p>
     */
    inline void SetAwsEc2Eip(AwsEc2EipDetails&& value) { m_awsEc2EipHasBeenSet = true; m_awsEc2Eip = std::move(value); }

    /**
     * <p>Details about an Elastic IP address.</p>
     */
    inline ResourceDetails& WithAwsEc2Eip(const AwsEc2EipDetails& value) { SetAwsEc2Eip(value); return *this;}

    /**
     * <p>Details about an Elastic IP address.</p>
     */
    inline ResourceDetails& WithAwsEc2Eip(AwsEc2EipDetails&& value) { SetAwsEc2Eip(std::move(value)); return *this;}


    /**
     * <p>Details about a subnet in Amazon EC2.</p>
     */
    inline const AwsEc2SubnetDetails& GetAwsEc2Subnet() const{ return m_awsEc2Subnet; }

    /**
     * <p>Details about a subnet in Amazon EC2.</p>
     */
    inline bool AwsEc2SubnetHasBeenSet() const { return m_awsEc2SubnetHasBeenSet; }

    /**
     * <p>Details about a subnet in Amazon EC2.</p>
     */
    inline void SetAwsEc2Subnet(const AwsEc2SubnetDetails& value) { m_awsEc2SubnetHasBeenSet = true; m_awsEc2Subnet = value; }

    /**
     * <p>Details about a subnet in Amazon EC2.</p>
     */
    inline void SetAwsEc2Subnet(AwsEc2SubnetDetails&& value) { m_awsEc2SubnetHasBeenSet = true; m_awsEc2Subnet = std::move(value); }

    /**
     * <p>Details about a subnet in Amazon EC2.</p>
     */
    inline ResourceDetails& WithAwsEc2Subnet(const AwsEc2SubnetDetails& value) { SetAwsEc2Subnet(value); return *this;}

    /**
     * <p>Details about a subnet in Amazon EC2.</p>
     */
    inline ResourceDetails& WithAwsEc2Subnet(AwsEc2SubnetDetails&& value) { SetAwsEc2Subnet(std::move(value)); return *this;}


    /**
     * <p>Details about an EC2 network access control list (ACL).</p>
     */
    inline const AwsEc2NetworkAclDetails& GetAwsEc2NetworkAcl() const{ return m_awsEc2NetworkAcl; }

    /**
     * <p>Details about an EC2 network access control list (ACL).</p>
     */
    inline bool AwsEc2NetworkAclHasBeenSet() const { return m_awsEc2NetworkAclHasBeenSet; }

    /**
     * <p>Details about an EC2 network access control list (ACL).</p>
     */
    inline void SetAwsEc2NetworkAcl(const AwsEc2NetworkAclDetails& value) { m_awsEc2NetworkAclHasBeenSet = true; m_awsEc2NetworkAcl = value; }

    /**
     * <p>Details about an EC2 network access control list (ACL).</p>
     */
    inline void SetAwsEc2NetworkAcl(AwsEc2NetworkAclDetails&& value) { m_awsEc2NetworkAclHasBeenSet = true; m_awsEc2NetworkAcl = std::move(value); }

    /**
     * <p>Details about an EC2 network access control list (ACL).</p>
     */
    inline ResourceDetails& WithAwsEc2NetworkAcl(const AwsEc2NetworkAclDetails& value) { SetAwsEc2NetworkAcl(value); return *this;}

    /**
     * <p>Details about an EC2 network access control list (ACL).</p>
     */
    inline ResourceDetails& WithAwsEc2NetworkAcl(AwsEc2NetworkAclDetails&& value) { SetAwsEc2NetworkAcl(std::move(value)); return *this;}


    /**
     * <p>Details about a load balancer.</p>
     */
    inline const AwsElbv2LoadBalancerDetails& GetAwsElbv2LoadBalancer() const{ return m_awsElbv2LoadBalancer; }

    /**
     * <p>Details about a load balancer.</p>
     */
    inline bool AwsElbv2LoadBalancerHasBeenSet() const { return m_awsElbv2LoadBalancerHasBeenSet; }

    /**
     * <p>Details about a load balancer.</p>
     */
    inline void SetAwsElbv2LoadBalancer(const AwsElbv2LoadBalancerDetails& value) { m_awsElbv2LoadBalancerHasBeenSet = true; m_awsElbv2LoadBalancer = value; }

    /**
     * <p>Details about a load balancer.</p>
     */
    inline void SetAwsElbv2LoadBalancer(AwsElbv2LoadBalancerDetails&& value) { m_awsElbv2LoadBalancerHasBeenSet = true; m_awsElbv2LoadBalancer = std::move(value); }

    /**
     * <p>Details about a load balancer.</p>
     */
    inline ResourceDetails& WithAwsElbv2LoadBalancer(const AwsElbv2LoadBalancerDetails& value) { SetAwsElbv2LoadBalancer(value); return *this;}

    /**
     * <p>Details about a load balancer.</p>
     */
    inline ResourceDetails& WithAwsElbv2LoadBalancer(AwsElbv2LoadBalancerDetails&& value) { SetAwsElbv2LoadBalancer(std::move(value)); return *this;}


    /**
     * <p>Details about an Elastic Beanstalk environment.</p>
     */
    inline const AwsElasticBeanstalkEnvironmentDetails& GetAwsElasticBeanstalkEnvironment() const{ return m_awsElasticBeanstalkEnvironment; }

    /**
     * <p>Details about an Elastic Beanstalk environment.</p>
     */
    inline bool AwsElasticBeanstalkEnvironmentHasBeenSet() const { return m_awsElasticBeanstalkEnvironmentHasBeenSet; }

    /**
     * <p>Details about an Elastic Beanstalk environment.</p>
     */
    inline void SetAwsElasticBeanstalkEnvironment(const AwsElasticBeanstalkEnvironmentDetails& value) { m_awsElasticBeanstalkEnvironmentHasBeenSet = true; m_awsElasticBeanstalkEnvironment = value; }

    /**
     * <p>Details about an Elastic Beanstalk environment.</p>
     */
    inline void SetAwsElasticBeanstalkEnvironment(AwsElasticBeanstalkEnvironmentDetails&& value) { m_awsElasticBeanstalkEnvironmentHasBeenSet = true; m_awsElasticBeanstalkEnvironment = std::move(value); }

    /**
     * <p>Details about an Elastic Beanstalk environment.</p>
     */
    inline ResourceDetails& WithAwsElasticBeanstalkEnvironment(const AwsElasticBeanstalkEnvironmentDetails& value) { SetAwsElasticBeanstalkEnvironment(value); return *this;}

    /**
     * <p>Details about an Elastic Beanstalk environment.</p>
     */
    inline ResourceDetails& WithAwsElasticBeanstalkEnvironment(AwsElasticBeanstalkEnvironmentDetails&& value) { SetAwsElasticBeanstalkEnvironment(std::move(value)); return *this;}


    /**
     * <p>Details for an Elasticsearch domain.</p>
     */
    inline const AwsElasticsearchDomainDetails& GetAwsElasticsearchDomain() const{ return m_awsElasticsearchDomain; }

    /**
     * <p>Details for an Elasticsearch domain.</p>
     */
    inline bool AwsElasticsearchDomainHasBeenSet() const { return m_awsElasticsearchDomainHasBeenSet; }

    /**
     * <p>Details for an Elasticsearch domain.</p>
     */
    inline void SetAwsElasticsearchDomain(const AwsElasticsearchDomainDetails& value) { m_awsElasticsearchDomainHasBeenSet = true; m_awsElasticsearchDomain = value; }

    /**
     * <p>Details for an Elasticsearch domain.</p>
     */
    inline void SetAwsElasticsearchDomain(AwsElasticsearchDomainDetails&& value) { m_awsElasticsearchDomainHasBeenSet = true; m_awsElasticsearchDomain = std::move(value); }

    /**
     * <p>Details for an Elasticsearch domain.</p>
     */
    inline ResourceDetails& WithAwsElasticsearchDomain(const AwsElasticsearchDomainDetails& value) { SetAwsElasticsearchDomain(value); return *this;}

    /**
     * <p>Details for an Elasticsearch domain.</p>
     */
    inline ResourceDetails& WithAwsElasticsearchDomain(AwsElasticsearchDomainDetails&& value) { SetAwsElasticsearchDomain(std::move(value)); return *this;}


    /**
     * <p>Details about an S3 bucket related to a finding.</p>
     */
    inline const AwsS3BucketDetails& GetAwsS3Bucket() const{ return m_awsS3Bucket; }

    /**
     * <p>Details about an S3 bucket related to a finding.</p>
     */
    inline bool AwsS3BucketHasBeenSet() const { return m_awsS3BucketHasBeenSet; }

    /**
     * <p>Details about an S3 bucket related to a finding.</p>
     */
    inline void SetAwsS3Bucket(const AwsS3BucketDetails& value) { m_awsS3BucketHasBeenSet = true; m_awsS3Bucket = value; }

    /**
     * <p>Details about an S3 bucket related to a finding.</p>
     */
    inline void SetAwsS3Bucket(AwsS3BucketDetails&& value) { m_awsS3BucketHasBeenSet = true; m_awsS3Bucket = std::move(value); }

    /**
     * <p>Details about an S3 bucket related to a finding.</p>
     */
    inline ResourceDetails& WithAwsS3Bucket(const AwsS3BucketDetails& value) { SetAwsS3Bucket(value); return *this;}

    /**
     * <p>Details about an S3 bucket related to a finding.</p>
     */
    inline ResourceDetails& WithAwsS3Bucket(AwsS3BucketDetails&& value) { SetAwsS3Bucket(std::move(value)); return *this;}


    /**
     * <p>Details about the Amazon S3 Public Access Block configuration for an
     * account.</p>
     */
    inline const AwsS3AccountPublicAccessBlockDetails& GetAwsS3AccountPublicAccessBlock() const{ return m_awsS3AccountPublicAccessBlock; }

    /**
     * <p>Details about the Amazon S3 Public Access Block configuration for an
     * account.</p>
     */
    inline bool AwsS3AccountPublicAccessBlockHasBeenSet() const { return m_awsS3AccountPublicAccessBlockHasBeenSet; }

    /**
     * <p>Details about the Amazon S3 Public Access Block configuration for an
     * account.</p>
     */
    inline void SetAwsS3AccountPublicAccessBlock(const AwsS3AccountPublicAccessBlockDetails& value) { m_awsS3AccountPublicAccessBlockHasBeenSet = true; m_awsS3AccountPublicAccessBlock = value; }

    /**
     * <p>Details about the Amazon S3 Public Access Block configuration for an
     * account.</p>
     */
    inline void SetAwsS3AccountPublicAccessBlock(AwsS3AccountPublicAccessBlockDetails&& value) { m_awsS3AccountPublicAccessBlockHasBeenSet = true; m_awsS3AccountPublicAccessBlock = std::move(value); }

    /**
     * <p>Details about the Amazon S3 Public Access Block configuration for an
     * account.</p>
     */
    inline ResourceDetails& WithAwsS3AccountPublicAccessBlock(const AwsS3AccountPublicAccessBlockDetails& value) { SetAwsS3AccountPublicAccessBlock(value); return *this;}

    /**
     * <p>Details about the Amazon S3 Public Access Block configuration for an
     * account.</p>
     */
    inline ResourceDetails& WithAwsS3AccountPublicAccessBlock(AwsS3AccountPublicAccessBlockDetails&& value) { SetAwsS3AccountPublicAccessBlock(std::move(value)); return *this;}


    /**
     * <p>Details about an S3 object related to a finding.</p>
     */
    inline const AwsS3ObjectDetails& GetAwsS3Object() const{ return m_awsS3Object; }

    /**
     * <p>Details about an S3 object related to a finding.</p>
     */
    inline bool AwsS3ObjectHasBeenSet() const { return m_awsS3ObjectHasBeenSet; }

    /**
     * <p>Details about an S3 object related to a finding.</p>
     */
    inline void SetAwsS3Object(const AwsS3ObjectDetails& value) { m_awsS3ObjectHasBeenSet = true; m_awsS3Object = value; }

    /**
     * <p>Details about an S3 object related to a finding.</p>
     */
    inline void SetAwsS3Object(AwsS3ObjectDetails&& value) { m_awsS3ObjectHasBeenSet = true; m_awsS3Object = std::move(value); }

    /**
     * <p>Details about an S3 object related to a finding.</p>
     */
    inline ResourceDetails& WithAwsS3Object(const AwsS3ObjectDetails& value) { SetAwsS3Object(value); return *this;}

    /**
     * <p>Details about an S3 object related to a finding.</p>
     */
    inline ResourceDetails& WithAwsS3Object(AwsS3ObjectDetails&& value) { SetAwsS3Object(std::move(value)); return *this;}


    /**
     * <p>Details about a Secrets Manager secret.</p>
     */
    inline const AwsSecretsManagerSecretDetails& GetAwsSecretsManagerSecret() const{ return m_awsSecretsManagerSecret; }

    /**
     * <p>Details about a Secrets Manager secret.</p>
     */
    inline bool AwsSecretsManagerSecretHasBeenSet() const { return m_awsSecretsManagerSecretHasBeenSet; }

    /**
     * <p>Details about a Secrets Manager secret.</p>
     */
    inline void SetAwsSecretsManagerSecret(const AwsSecretsManagerSecretDetails& value) { m_awsSecretsManagerSecretHasBeenSet = true; m_awsSecretsManagerSecret = value; }

    /**
     * <p>Details about a Secrets Manager secret.</p>
     */
    inline void SetAwsSecretsManagerSecret(AwsSecretsManagerSecretDetails&& value) { m_awsSecretsManagerSecretHasBeenSet = true; m_awsSecretsManagerSecret = std::move(value); }

    /**
     * <p>Details about a Secrets Manager secret.</p>
     */
    inline ResourceDetails& WithAwsSecretsManagerSecret(const AwsSecretsManagerSecretDetails& value) { SetAwsSecretsManagerSecret(value); return *this;}

    /**
     * <p>Details about a Secrets Manager secret.</p>
     */
    inline ResourceDetails& WithAwsSecretsManagerSecret(AwsSecretsManagerSecretDetails&& value) { SetAwsSecretsManagerSecret(std::move(value)); return *this;}


    /**
     * <p>Details about an IAM access key related to a finding.</p>
     */
    inline const AwsIamAccessKeyDetails& GetAwsIamAccessKey() const{ return m_awsIamAccessKey; }

    /**
     * <p>Details about an IAM access key related to a finding.</p>
     */
    inline bool AwsIamAccessKeyHasBeenSet() const { return m_awsIamAccessKeyHasBeenSet; }

    /**
     * <p>Details about an IAM access key related to a finding.</p>
     */
    inline void SetAwsIamAccessKey(const AwsIamAccessKeyDetails& value) { m_awsIamAccessKeyHasBeenSet = true; m_awsIamAccessKey = value; }

    /**
     * <p>Details about an IAM access key related to a finding.</p>
     */
    inline void SetAwsIamAccessKey(AwsIamAccessKeyDetails&& value) { m_awsIamAccessKeyHasBeenSet = true; m_awsIamAccessKey = std::move(value); }

    /**
     * <p>Details about an IAM access key related to a finding.</p>
     */
    inline ResourceDetails& WithAwsIamAccessKey(const AwsIamAccessKeyDetails& value) { SetAwsIamAccessKey(value); return *this;}

    /**
     * <p>Details about an IAM access key related to a finding.</p>
     */
    inline ResourceDetails& WithAwsIamAccessKey(AwsIamAccessKeyDetails&& value) { SetAwsIamAccessKey(std::move(value)); return *this;}


    /**
     * <p>Details about an IAM user.</p>
     */
    inline const AwsIamUserDetails& GetAwsIamUser() const{ return m_awsIamUser; }

    /**
     * <p>Details about an IAM user.</p>
     */
    inline bool AwsIamUserHasBeenSet() const { return m_awsIamUserHasBeenSet; }

    /**
     * <p>Details about an IAM user.</p>
     */
    inline void SetAwsIamUser(const AwsIamUserDetails& value) { m_awsIamUserHasBeenSet = true; m_awsIamUser = value; }

    /**
     * <p>Details about an IAM user.</p>
     */
    inline void SetAwsIamUser(AwsIamUserDetails&& value) { m_awsIamUserHasBeenSet = true; m_awsIamUser = std::move(value); }

    /**
     * <p>Details about an IAM user.</p>
     */
    inline ResourceDetails& WithAwsIamUser(const AwsIamUserDetails& value) { SetAwsIamUser(value); return *this;}

    /**
     * <p>Details about an IAM user.</p>
     */
    inline ResourceDetails& WithAwsIamUser(AwsIamUserDetails&& value) { SetAwsIamUser(std::move(value)); return *this;}


    /**
     * <p>Details about an IAM permissions policy.</p>
     */
    inline const AwsIamPolicyDetails& GetAwsIamPolicy() const{ return m_awsIamPolicy; }

    /**
     * <p>Details about an IAM permissions policy.</p>
     */
    inline bool AwsIamPolicyHasBeenSet() const { return m_awsIamPolicyHasBeenSet; }

    /**
     * <p>Details about an IAM permissions policy.</p>
     */
    inline void SetAwsIamPolicy(const AwsIamPolicyDetails& value) { m_awsIamPolicyHasBeenSet = true; m_awsIamPolicy = value; }

    /**
     * <p>Details about an IAM permissions policy.</p>
     */
    inline void SetAwsIamPolicy(AwsIamPolicyDetails&& value) { m_awsIamPolicyHasBeenSet = true; m_awsIamPolicy = std::move(value); }

    /**
     * <p>Details about an IAM permissions policy.</p>
     */
    inline ResourceDetails& WithAwsIamPolicy(const AwsIamPolicyDetails& value) { SetAwsIamPolicy(value); return *this;}

    /**
     * <p>Details about an IAM permissions policy.</p>
     */
    inline ResourceDetails& WithAwsIamPolicy(AwsIamPolicyDetails&& value) { SetAwsIamPolicy(std::move(value)); return *this;}


    /**
     * <p>Provides information about a version 2 stage for Amazon API Gateway.</p>
     */
    inline const AwsApiGatewayV2StageDetails& GetAwsApiGatewayV2Stage() const{ return m_awsApiGatewayV2Stage; }

    /**
     * <p>Provides information about a version 2 stage for Amazon API Gateway.</p>
     */
    inline bool AwsApiGatewayV2StageHasBeenSet() const { return m_awsApiGatewayV2StageHasBeenSet; }

    /**
     * <p>Provides information about a version 2 stage for Amazon API Gateway.</p>
     */
    inline void SetAwsApiGatewayV2Stage(const AwsApiGatewayV2StageDetails& value) { m_awsApiGatewayV2StageHasBeenSet = true; m_awsApiGatewayV2Stage = value; }

    /**
     * <p>Provides information about a version 2 stage for Amazon API Gateway.</p>
     */
    inline void SetAwsApiGatewayV2Stage(AwsApiGatewayV2StageDetails&& value) { m_awsApiGatewayV2StageHasBeenSet = true; m_awsApiGatewayV2Stage = std::move(value); }

    /**
     * <p>Provides information about a version 2 stage for Amazon API Gateway.</p>
     */
    inline ResourceDetails& WithAwsApiGatewayV2Stage(const AwsApiGatewayV2StageDetails& value) { SetAwsApiGatewayV2Stage(value); return *this;}

    /**
     * <p>Provides information about a version 2 stage for Amazon API Gateway.</p>
     */
    inline ResourceDetails& WithAwsApiGatewayV2Stage(AwsApiGatewayV2StageDetails&& value) { SetAwsApiGatewayV2Stage(std::move(value)); return *this;}


    /**
     * <p>Provides information about a version 2 API in Amazon API Gateway.</p>
     */
    inline const AwsApiGatewayV2ApiDetails& GetAwsApiGatewayV2Api() const{ return m_awsApiGatewayV2Api; }

    /**
     * <p>Provides information about a version 2 API in Amazon API Gateway.</p>
     */
    inline bool AwsApiGatewayV2ApiHasBeenSet() const { return m_awsApiGatewayV2ApiHasBeenSet; }

    /**
     * <p>Provides information about a version 2 API in Amazon API Gateway.</p>
     */
    inline void SetAwsApiGatewayV2Api(const AwsApiGatewayV2ApiDetails& value) { m_awsApiGatewayV2ApiHasBeenSet = true; m_awsApiGatewayV2Api = value; }

    /**
     * <p>Provides information about a version 2 API in Amazon API Gateway.</p>
     */
    inline void SetAwsApiGatewayV2Api(AwsApiGatewayV2ApiDetails&& value) { m_awsApiGatewayV2ApiHasBeenSet = true; m_awsApiGatewayV2Api = std::move(value); }

    /**
     * <p>Provides information about a version 2 API in Amazon API Gateway.</p>
     */
    inline ResourceDetails& WithAwsApiGatewayV2Api(const AwsApiGatewayV2ApiDetails& value) { SetAwsApiGatewayV2Api(value); return *this;}

    /**
     * <p>Provides information about a version 2 API in Amazon API Gateway.</p>
     */
    inline ResourceDetails& WithAwsApiGatewayV2Api(AwsApiGatewayV2ApiDetails&& value) { SetAwsApiGatewayV2Api(std::move(value)); return *this;}


    /**
     * <p>Details about a DynamoDB table.</p>
     */
    inline const AwsDynamoDbTableDetails& GetAwsDynamoDbTable() const{ return m_awsDynamoDbTable; }

    /**
     * <p>Details about a DynamoDB table.</p>
     */
    inline bool AwsDynamoDbTableHasBeenSet() const { return m_awsDynamoDbTableHasBeenSet; }

    /**
     * <p>Details about a DynamoDB table.</p>
     */
    inline void SetAwsDynamoDbTable(const AwsDynamoDbTableDetails& value) { m_awsDynamoDbTableHasBeenSet = true; m_awsDynamoDbTable = value; }

    /**
     * <p>Details about a DynamoDB table.</p>
     */
    inline void SetAwsDynamoDbTable(AwsDynamoDbTableDetails&& value) { m_awsDynamoDbTableHasBeenSet = true; m_awsDynamoDbTable = std::move(value); }

    /**
     * <p>Details about a DynamoDB table.</p>
     */
    inline ResourceDetails& WithAwsDynamoDbTable(const AwsDynamoDbTableDetails& value) { SetAwsDynamoDbTable(value); return *this;}

    /**
     * <p>Details about a DynamoDB table.</p>
     */
    inline ResourceDetails& WithAwsDynamoDbTable(AwsDynamoDbTableDetails&& value) { SetAwsDynamoDbTable(std::move(value)); return *this;}


    /**
     * <p>Provides information about a version 1 Amazon API Gateway stage.</p>
     */
    inline const AwsApiGatewayStageDetails& GetAwsApiGatewayStage() const{ return m_awsApiGatewayStage; }

    /**
     * <p>Provides information about a version 1 Amazon API Gateway stage.</p>
     */
    inline bool AwsApiGatewayStageHasBeenSet() const { return m_awsApiGatewayStageHasBeenSet; }

    /**
     * <p>Provides information about a version 1 Amazon API Gateway stage.</p>
     */
    inline void SetAwsApiGatewayStage(const AwsApiGatewayStageDetails& value) { m_awsApiGatewayStageHasBeenSet = true; m_awsApiGatewayStage = value; }

    /**
     * <p>Provides information about a version 1 Amazon API Gateway stage.</p>
     */
    inline void SetAwsApiGatewayStage(AwsApiGatewayStageDetails&& value) { m_awsApiGatewayStageHasBeenSet = true; m_awsApiGatewayStage = std::move(value); }

    /**
     * <p>Provides information about a version 1 Amazon API Gateway stage.</p>
     */
    inline ResourceDetails& WithAwsApiGatewayStage(const AwsApiGatewayStageDetails& value) { SetAwsApiGatewayStage(value); return *this;}

    /**
     * <p>Provides information about a version 1 Amazon API Gateway stage.</p>
     */
    inline ResourceDetails& WithAwsApiGatewayStage(AwsApiGatewayStageDetails&& value) { SetAwsApiGatewayStage(std::move(value)); return *this;}


    /**
     * <p>Provides information about a REST API in version 1 of Amazon API Gateway.</p>
     */
    inline const AwsApiGatewayRestApiDetails& GetAwsApiGatewayRestApi() const{ return m_awsApiGatewayRestApi; }

    /**
     * <p>Provides information about a REST API in version 1 of Amazon API Gateway.</p>
     */
    inline bool AwsApiGatewayRestApiHasBeenSet() const { return m_awsApiGatewayRestApiHasBeenSet; }

    /**
     * <p>Provides information about a REST API in version 1 of Amazon API Gateway.</p>
     */
    inline void SetAwsApiGatewayRestApi(const AwsApiGatewayRestApiDetails& value) { m_awsApiGatewayRestApiHasBeenSet = true; m_awsApiGatewayRestApi = value; }

    /**
     * <p>Provides information about a REST API in version 1 of Amazon API Gateway.</p>
     */
    inline void SetAwsApiGatewayRestApi(AwsApiGatewayRestApiDetails&& value) { m_awsApiGatewayRestApiHasBeenSet = true; m_awsApiGatewayRestApi = std::move(value); }

    /**
     * <p>Provides information about a REST API in version 1 of Amazon API Gateway.</p>
     */
    inline ResourceDetails& WithAwsApiGatewayRestApi(const AwsApiGatewayRestApiDetails& value) { SetAwsApiGatewayRestApi(value); return *this;}

    /**
     * <p>Provides information about a REST API in version 1 of Amazon API Gateway.</p>
     */
    inline ResourceDetails& WithAwsApiGatewayRestApi(AwsApiGatewayRestApiDetails&& value) { SetAwsApiGatewayRestApi(std::move(value)); return *this;}


    /**
     * <p>Provides details about a CloudTrail trail.</p>
     */
    inline const AwsCloudTrailTrailDetails& GetAwsCloudTrailTrail() const{ return m_awsCloudTrailTrail; }

    /**
     * <p>Provides details about a CloudTrail trail.</p>
     */
    inline bool AwsCloudTrailTrailHasBeenSet() const { return m_awsCloudTrailTrailHasBeenSet; }

    /**
     * <p>Provides details about a CloudTrail trail.</p>
     */
    inline void SetAwsCloudTrailTrail(const AwsCloudTrailTrailDetails& value) { m_awsCloudTrailTrailHasBeenSet = true; m_awsCloudTrailTrail = value; }

    /**
     * <p>Provides details about a CloudTrail trail.</p>
     */
    inline void SetAwsCloudTrailTrail(AwsCloudTrailTrailDetails&& value) { m_awsCloudTrailTrailHasBeenSet = true; m_awsCloudTrailTrail = std::move(value); }

    /**
     * <p>Provides details about a CloudTrail trail.</p>
     */
    inline ResourceDetails& WithAwsCloudTrailTrail(const AwsCloudTrailTrailDetails& value) { SetAwsCloudTrailTrail(value); return *this;}

    /**
     * <p>Provides details about a CloudTrail trail.</p>
     */
    inline ResourceDetails& WithAwsCloudTrailTrail(AwsCloudTrailTrailDetails&& value) { SetAwsCloudTrailTrail(std::move(value)); return *this;}


    /**
     * <p>Provides information about the state of a patch on an instance based on the
     * patch baseline that was used to patch the instance.</p>
     */
    inline const AwsSsmPatchComplianceDetails& GetAwsSsmPatchCompliance() const{ return m_awsSsmPatchCompliance; }

    /**
     * <p>Provides information about the state of a patch on an instance based on the
     * patch baseline that was used to patch the instance.</p>
     */
    inline bool AwsSsmPatchComplianceHasBeenSet() const { return m_awsSsmPatchComplianceHasBeenSet; }

    /**
     * <p>Provides information about the state of a patch on an instance based on the
     * patch baseline that was used to patch the instance.</p>
     */
    inline void SetAwsSsmPatchCompliance(const AwsSsmPatchComplianceDetails& value) { m_awsSsmPatchComplianceHasBeenSet = true; m_awsSsmPatchCompliance = value; }

    /**
     * <p>Provides information about the state of a patch on an instance based on the
     * patch baseline that was used to patch the instance.</p>
     */
    inline void SetAwsSsmPatchCompliance(AwsSsmPatchComplianceDetails&& value) { m_awsSsmPatchComplianceHasBeenSet = true; m_awsSsmPatchCompliance = std::move(value); }

    /**
     * <p>Provides information about the state of a patch on an instance based on the
     * patch baseline that was used to patch the instance.</p>
     */
    inline ResourceDetails& WithAwsSsmPatchCompliance(const AwsSsmPatchComplianceDetails& value) { SetAwsSsmPatchCompliance(value); return *this;}

    /**
     * <p>Provides information about the state of a patch on an instance based on the
     * patch baseline that was used to patch the instance.</p>
     */
    inline ResourceDetails& WithAwsSsmPatchCompliance(AwsSsmPatchComplianceDetails&& value) { SetAwsSsmPatchCompliance(std::move(value)); return *this;}


    /**
     * <p>Provides details about an Certificate Manager certificate.</p>
     */
    inline const AwsCertificateManagerCertificateDetails& GetAwsCertificateManagerCertificate() const{ return m_awsCertificateManagerCertificate; }

    /**
     * <p>Provides details about an Certificate Manager certificate.</p>
     */
    inline bool AwsCertificateManagerCertificateHasBeenSet() const { return m_awsCertificateManagerCertificateHasBeenSet; }

    /**
     * <p>Provides details about an Certificate Manager certificate.</p>
     */
    inline void SetAwsCertificateManagerCertificate(const AwsCertificateManagerCertificateDetails& value) { m_awsCertificateManagerCertificateHasBeenSet = true; m_awsCertificateManagerCertificate = value; }

    /**
     * <p>Provides details about an Certificate Manager certificate.</p>
     */
    inline void SetAwsCertificateManagerCertificate(AwsCertificateManagerCertificateDetails&& value) { m_awsCertificateManagerCertificateHasBeenSet = true; m_awsCertificateManagerCertificate = std::move(value); }

    /**
     * <p>Provides details about an Certificate Manager certificate.</p>
     */
    inline ResourceDetails& WithAwsCertificateManagerCertificate(const AwsCertificateManagerCertificateDetails& value) { SetAwsCertificateManagerCertificate(value); return *this;}

    /**
     * <p>Provides details about an Certificate Manager certificate.</p>
     */
    inline ResourceDetails& WithAwsCertificateManagerCertificate(AwsCertificateManagerCertificateDetails&& value) { SetAwsCertificateManagerCertificate(std::move(value)); return *this;}


    /**
     * <p>Contains details about an Amazon Redshift cluster.</p>
     */
    inline const AwsRedshiftClusterDetails& GetAwsRedshiftCluster() const{ return m_awsRedshiftCluster; }

    /**
     * <p>Contains details about an Amazon Redshift cluster.</p>
     */
    inline bool AwsRedshiftClusterHasBeenSet() const { return m_awsRedshiftClusterHasBeenSet; }

    /**
     * <p>Contains details about an Amazon Redshift cluster.</p>
     */
    inline void SetAwsRedshiftCluster(const AwsRedshiftClusterDetails& value) { m_awsRedshiftClusterHasBeenSet = true; m_awsRedshiftCluster = value; }

    /**
     * <p>Contains details about an Amazon Redshift cluster.</p>
     */
    inline void SetAwsRedshiftCluster(AwsRedshiftClusterDetails&& value) { m_awsRedshiftClusterHasBeenSet = true; m_awsRedshiftCluster = std::move(value); }

    /**
     * <p>Contains details about an Amazon Redshift cluster.</p>
     */
    inline ResourceDetails& WithAwsRedshiftCluster(const AwsRedshiftClusterDetails& value) { SetAwsRedshiftCluster(value); return *this;}

    /**
     * <p>Contains details about an Amazon Redshift cluster.</p>
     */
    inline ResourceDetails& WithAwsRedshiftCluster(AwsRedshiftClusterDetails&& value) { SetAwsRedshiftCluster(std::move(value)); return *this;}


    /**
     * <p>Contains details about a Classic Load Balancer.</p>
     */
    inline const AwsElbLoadBalancerDetails& GetAwsElbLoadBalancer() const{ return m_awsElbLoadBalancer; }

    /**
     * <p>Contains details about a Classic Load Balancer.</p>
     */
    inline bool AwsElbLoadBalancerHasBeenSet() const { return m_awsElbLoadBalancerHasBeenSet; }

    /**
     * <p>Contains details about a Classic Load Balancer.</p>
     */
    inline void SetAwsElbLoadBalancer(const AwsElbLoadBalancerDetails& value) { m_awsElbLoadBalancerHasBeenSet = true; m_awsElbLoadBalancer = value; }

    /**
     * <p>Contains details about a Classic Load Balancer.</p>
     */
    inline void SetAwsElbLoadBalancer(AwsElbLoadBalancerDetails&& value) { m_awsElbLoadBalancerHasBeenSet = true; m_awsElbLoadBalancer = std::move(value); }

    /**
     * <p>Contains details about a Classic Load Balancer.</p>
     */
    inline ResourceDetails& WithAwsElbLoadBalancer(const AwsElbLoadBalancerDetails& value) { SetAwsElbLoadBalancer(value); return *this;}

    /**
     * <p>Contains details about a Classic Load Balancer.</p>
     */
    inline ResourceDetails& WithAwsElbLoadBalancer(AwsElbLoadBalancerDetails&& value) { SetAwsElbLoadBalancer(std::move(value)); return *this;}


    /**
     * <p>Contains details about an IAM group.</p>
     */
    inline const AwsIamGroupDetails& GetAwsIamGroup() const{ return m_awsIamGroup; }

    /**
     * <p>Contains details about an IAM group.</p>
     */
    inline bool AwsIamGroupHasBeenSet() const { return m_awsIamGroupHasBeenSet; }

    /**
     * <p>Contains details about an IAM group.</p>
     */
    inline void SetAwsIamGroup(const AwsIamGroupDetails& value) { m_awsIamGroupHasBeenSet = true; m_awsIamGroup = value; }

    /**
     * <p>Contains details about an IAM group.</p>
     */
    inline void SetAwsIamGroup(AwsIamGroupDetails&& value) { m_awsIamGroupHasBeenSet = true; m_awsIamGroup = std::move(value); }

    /**
     * <p>Contains details about an IAM group.</p>
     */
    inline ResourceDetails& WithAwsIamGroup(const AwsIamGroupDetails& value) { SetAwsIamGroup(value); return *this;}

    /**
     * <p>Contains details about an IAM group.</p>
     */
    inline ResourceDetails& WithAwsIamGroup(AwsIamGroupDetails&& value) { SetAwsIamGroup(std::move(value)); return *this;}


    /**
     * <p>Details about an IAM role.</p>
     */
    inline const AwsIamRoleDetails& GetAwsIamRole() const{ return m_awsIamRole; }

    /**
     * <p>Details about an IAM role.</p>
     */
    inline bool AwsIamRoleHasBeenSet() const { return m_awsIamRoleHasBeenSet; }

    /**
     * <p>Details about an IAM role.</p>
     */
    inline void SetAwsIamRole(const AwsIamRoleDetails& value) { m_awsIamRoleHasBeenSet = true; m_awsIamRole = value; }

    /**
     * <p>Details about an IAM role.</p>
     */
    inline void SetAwsIamRole(AwsIamRoleDetails&& value) { m_awsIamRoleHasBeenSet = true; m_awsIamRole = std::move(value); }

    /**
     * <p>Details about an IAM role.</p>
     */
    inline ResourceDetails& WithAwsIamRole(const AwsIamRoleDetails& value) { SetAwsIamRole(value); return *this;}

    /**
     * <p>Details about an IAM role.</p>
     */
    inline ResourceDetails& WithAwsIamRole(AwsIamRoleDetails&& value) { SetAwsIamRole(std::move(value)); return *this;}


    /**
     * <p>Details about an KMS key.</p>
     */
    inline const AwsKmsKeyDetails& GetAwsKmsKey() const{ return m_awsKmsKey; }

    /**
     * <p>Details about an KMS key.</p>
     */
    inline bool AwsKmsKeyHasBeenSet() const { return m_awsKmsKeyHasBeenSet; }

    /**
     * <p>Details about an KMS key.</p>
     */
    inline void SetAwsKmsKey(const AwsKmsKeyDetails& value) { m_awsKmsKeyHasBeenSet = true; m_awsKmsKey = value; }

    /**
     * <p>Details about an KMS key.</p>
     */
    inline void SetAwsKmsKey(AwsKmsKeyDetails&& value) { m_awsKmsKeyHasBeenSet = true; m_awsKmsKey = std::move(value); }

    /**
     * <p>Details about an KMS key.</p>
     */
    inline ResourceDetails& WithAwsKmsKey(const AwsKmsKeyDetails& value) { SetAwsKmsKey(value); return *this;}

    /**
     * <p>Details about an KMS key.</p>
     */
    inline ResourceDetails& WithAwsKmsKey(AwsKmsKeyDetails&& value) { SetAwsKmsKey(std::move(value)); return *this;}


    /**
     * <p>Details about a Lambda function.</p>
     */
    inline const AwsLambdaFunctionDetails& GetAwsLambdaFunction() const{ return m_awsLambdaFunction; }

    /**
     * <p>Details about a Lambda function.</p>
     */
    inline bool AwsLambdaFunctionHasBeenSet() const { return m_awsLambdaFunctionHasBeenSet; }

    /**
     * <p>Details about a Lambda function.</p>
     */
    inline void SetAwsLambdaFunction(const AwsLambdaFunctionDetails& value) { m_awsLambdaFunctionHasBeenSet = true; m_awsLambdaFunction = value; }

    /**
     * <p>Details about a Lambda function.</p>
     */
    inline void SetAwsLambdaFunction(AwsLambdaFunctionDetails&& value) { m_awsLambdaFunctionHasBeenSet = true; m_awsLambdaFunction = std::move(value); }

    /**
     * <p>Details about a Lambda function.</p>
     */
    inline ResourceDetails& WithAwsLambdaFunction(const AwsLambdaFunctionDetails& value) { SetAwsLambdaFunction(value); return *this;}

    /**
     * <p>Details about a Lambda function.</p>
     */
    inline ResourceDetails& WithAwsLambdaFunction(AwsLambdaFunctionDetails&& value) { SetAwsLambdaFunction(std::move(value)); return *this;}


    /**
     * <p>Details for a Lambda layer version.</p>
     */
    inline const AwsLambdaLayerVersionDetails& GetAwsLambdaLayerVersion() const{ return m_awsLambdaLayerVersion; }

    /**
     * <p>Details for a Lambda layer version.</p>
     */
    inline bool AwsLambdaLayerVersionHasBeenSet() const { return m_awsLambdaLayerVersionHasBeenSet; }

    /**
     * <p>Details for a Lambda layer version.</p>
     */
    inline void SetAwsLambdaLayerVersion(const AwsLambdaLayerVersionDetails& value) { m_awsLambdaLayerVersionHasBeenSet = true; m_awsLambdaLayerVersion = value; }

    /**
     * <p>Details for a Lambda layer version.</p>
     */
    inline void SetAwsLambdaLayerVersion(AwsLambdaLayerVersionDetails&& value) { m_awsLambdaLayerVersionHasBeenSet = true; m_awsLambdaLayerVersion = std::move(value); }

    /**
     * <p>Details for a Lambda layer version.</p>
     */
    inline ResourceDetails& WithAwsLambdaLayerVersion(const AwsLambdaLayerVersionDetails& value) { SetAwsLambdaLayerVersion(value); return *this;}

    /**
     * <p>Details for a Lambda layer version.</p>
     */
    inline ResourceDetails& WithAwsLambdaLayerVersion(AwsLambdaLayerVersionDetails&& value) { SetAwsLambdaLayerVersion(std::move(value)); return *this;}


    /**
     * <p>Details about an Amazon RDS database instance.</p>
     */
    inline const AwsRdsDbInstanceDetails& GetAwsRdsDbInstance() const{ return m_awsRdsDbInstance; }

    /**
     * <p>Details about an Amazon RDS database instance.</p>
     */
    inline bool AwsRdsDbInstanceHasBeenSet() const { return m_awsRdsDbInstanceHasBeenSet; }

    /**
     * <p>Details about an Amazon RDS database instance.</p>
     */
    inline void SetAwsRdsDbInstance(const AwsRdsDbInstanceDetails& value) { m_awsRdsDbInstanceHasBeenSet = true; m_awsRdsDbInstance = value; }

    /**
     * <p>Details about an Amazon RDS database instance.</p>
     */
    inline void SetAwsRdsDbInstance(AwsRdsDbInstanceDetails&& value) { m_awsRdsDbInstanceHasBeenSet = true; m_awsRdsDbInstance = std::move(value); }

    /**
     * <p>Details about an Amazon RDS database instance.</p>
     */
    inline ResourceDetails& WithAwsRdsDbInstance(const AwsRdsDbInstanceDetails& value) { SetAwsRdsDbInstance(value); return *this;}

    /**
     * <p>Details about an Amazon RDS database instance.</p>
     */
    inline ResourceDetails& WithAwsRdsDbInstance(AwsRdsDbInstanceDetails&& value) { SetAwsRdsDbInstance(std::move(value)); return *this;}


    /**
     * <p>Details about an SNS topic.</p>
     */
    inline const AwsSnsTopicDetails& GetAwsSnsTopic() const{ return m_awsSnsTopic; }

    /**
     * <p>Details about an SNS topic.</p>
     */
    inline bool AwsSnsTopicHasBeenSet() const { return m_awsSnsTopicHasBeenSet; }

    /**
     * <p>Details about an SNS topic.</p>
     */
    inline void SetAwsSnsTopic(const AwsSnsTopicDetails& value) { m_awsSnsTopicHasBeenSet = true; m_awsSnsTopic = value; }

    /**
     * <p>Details about an SNS topic.</p>
     */
    inline void SetAwsSnsTopic(AwsSnsTopicDetails&& value) { m_awsSnsTopicHasBeenSet = true; m_awsSnsTopic = std::move(value); }

    /**
     * <p>Details about an SNS topic.</p>
     */
    inline ResourceDetails& WithAwsSnsTopic(const AwsSnsTopicDetails& value) { SetAwsSnsTopic(value); return *this;}

    /**
     * <p>Details about an SNS topic.</p>
     */
    inline ResourceDetails& WithAwsSnsTopic(AwsSnsTopicDetails&& value) { SetAwsSnsTopic(std::move(value)); return *this;}


    /**
     * <p>Details about an SQS queue.</p>
     */
    inline const AwsSqsQueueDetails& GetAwsSqsQueue() const{ return m_awsSqsQueue; }

    /**
     * <p>Details about an SQS queue.</p>
     */
    inline bool AwsSqsQueueHasBeenSet() const { return m_awsSqsQueueHasBeenSet; }

    /**
     * <p>Details about an SQS queue.</p>
     */
    inline void SetAwsSqsQueue(const AwsSqsQueueDetails& value) { m_awsSqsQueueHasBeenSet = true; m_awsSqsQueue = value; }

    /**
     * <p>Details about an SQS queue.</p>
     */
    inline void SetAwsSqsQueue(AwsSqsQueueDetails&& value) { m_awsSqsQueueHasBeenSet = true; m_awsSqsQueue = std::move(value); }

    /**
     * <p>Details about an SQS queue.</p>
     */
    inline ResourceDetails& WithAwsSqsQueue(const AwsSqsQueueDetails& value) { SetAwsSqsQueue(value); return *this;}

    /**
     * <p>Details about an SQS queue.</p>
     */
    inline ResourceDetails& WithAwsSqsQueue(AwsSqsQueueDetails&& value) { SetAwsSqsQueue(std::move(value)); return *this;}


    /**
     * <p>Details for an WAF web ACL.</p>
     */
    inline const AwsWafWebAclDetails& GetAwsWafWebAcl() const{ return m_awsWafWebAcl; }

    /**
     * <p>Details for an WAF web ACL.</p>
     */
    inline bool AwsWafWebAclHasBeenSet() const { return m_awsWafWebAclHasBeenSet; }

    /**
     * <p>Details for an WAF web ACL.</p>
     */
    inline void SetAwsWafWebAcl(const AwsWafWebAclDetails& value) { m_awsWafWebAclHasBeenSet = true; m_awsWafWebAcl = value; }

    /**
     * <p>Details for an WAF web ACL.</p>
     */
    inline void SetAwsWafWebAcl(AwsWafWebAclDetails&& value) { m_awsWafWebAclHasBeenSet = true; m_awsWafWebAcl = std::move(value); }

    /**
     * <p>Details for an WAF web ACL.</p>
     */
    inline ResourceDetails& WithAwsWafWebAcl(const AwsWafWebAclDetails& value) { SetAwsWafWebAcl(value); return *this;}

    /**
     * <p>Details for an WAF web ACL.</p>
     */
    inline ResourceDetails& WithAwsWafWebAcl(AwsWafWebAclDetails&& value) { SetAwsWafWebAcl(std::move(value)); return *this;}


    /**
     * <p>Details about an Amazon RDS database snapshot.</p>
     */
    inline const AwsRdsDbSnapshotDetails& GetAwsRdsDbSnapshot() const{ return m_awsRdsDbSnapshot; }

    /**
     * <p>Details about an Amazon RDS database snapshot.</p>
     */
    inline bool AwsRdsDbSnapshotHasBeenSet() const { return m_awsRdsDbSnapshotHasBeenSet; }

    /**
     * <p>Details about an Amazon RDS database snapshot.</p>
     */
    inline void SetAwsRdsDbSnapshot(const AwsRdsDbSnapshotDetails& value) { m_awsRdsDbSnapshotHasBeenSet = true; m_awsRdsDbSnapshot = value; }

    /**
     * <p>Details about an Amazon RDS database snapshot.</p>
     */
    inline void SetAwsRdsDbSnapshot(AwsRdsDbSnapshotDetails&& value) { m_awsRdsDbSnapshotHasBeenSet = true; m_awsRdsDbSnapshot = std::move(value); }

    /**
     * <p>Details about an Amazon RDS database snapshot.</p>
     */
    inline ResourceDetails& WithAwsRdsDbSnapshot(const AwsRdsDbSnapshotDetails& value) { SetAwsRdsDbSnapshot(value); return *this;}

    /**
     * <p>Details about an Amazon RDS database snapshot.</p>
     */
    inline ResourceDetails& WithAwsRdsDbSnapshot(AwsRdsDbSnapshotDetails&& value) { SetAwsRdsDbSnapshot(std::move(value)); return *this;}


    /**
     * <p>Details about an Amazon RDS database cluster snapshot.</p>
     */
    inline const AwsRdsDbClusterSnapshotDetails& GetAwsRdsDbClusterSnapshot() const{ return m_awsRdsDbClusterSnapshot; }

    /**
     * <p>Details about an Amazon RDS database cluster snapshot.</p>
     */
    inline bool AwsRdsDbClusterSnapshotHasBeenSet() const { return m_awsRdsDbClusterSnapshotHasBeenSet; }

    /**
     * <p>Details about an Amazon RDS database cluster snapshot.</p>
     */
    inline void SetAwsRdsDbClusterSnapshot(const AwsRdsDbClusterSnapshotDetails& value) { m_awsRdsDbClusterSnapshotHasBeenSet = true; m_awsRdsDbClusterSnapshot = value; }

    /**
     * <p>Details about an Amazon RDS database cluster snapshot.</p>
     */
    inline void SetAwsRdsDbClusterSnapshot(AwsRdsDbClusterSnapshotDetails&& value) { m_awsRdsDbClusterSnapshotHasBeenSet = true; m_awsRdsDbClusterSnapshot = std::move(value); }

    /**
     * <p>Details about an Amazon RDS database cluster snapshot.</p>
     */
    inline ResourceDetails& WithAwsRdsDbClusterSnapshot(const AwsRdsDbClusterSnapshotDetails& value) { SetAwsRdsDbClusterSnapshot(value); return *this;}

    /**
     * <p>Details about an Amazon RDS database cluster snapshot.</p>
     */
    inline ResourceDetails& WithAwsRdsDbClusterSnapshot(AwsRdsDbClusterSnapshotDetails&& value) { SetAwsRdsDbClusterSnapshot(std::move(value)); return *this;}


    /**
     * <p>Details about an Amazon RDS database cluster.</p>
     */
    inline const AwsRdsDbClusterDetails& GetAwsRdsDbCluster() const{ return m_awsRdsDbCluster; }

    /**
     * <p>Details about an Amazon RDS database cluster.</p>
     */
    inline bool AwsRdsDbClusterHasBeenSet() const { return m_awsRdsDbClusterHasBeenSet; }

    /**
     * <p>Details about an Amazon RDS database cluster.</p>
     */
    inline void SetAwsRdsDbCluster(const AwsRdsDbClusterDetails& value) { m_awsRdsDbClusterHasBeenSet = true; m_awsRdsDbCluster = value; }

    /**
     * <p>Details about an Amazon RDS database cluster.</p>
     */
    inline void SetAwsRdsDbCluster(AwsRdsDbClusterDetails&& value) { m_awsRdsDbClusterHasBeenSet = true; m_awsRdsDbCluster = std::move(value); }

    /**
     * <p>Details about an Amazon RDS database cluster.</p>
     */
    inline ResourceDetails& WithAwsRdsDbCluster(const AwsRdsDbClusterDetails& value) { SetAwsRdsDbCluster(value); return *this;}

    /**
     * <p>Details about an Amazon RDS database cluster.</p>
     */
    inline ResourceDetails& WithAwsRdsDbCluster(AwsRdsDbClusterDetails&& value) { SetAwsRdsDbCluster(std::move(value)); return *this;}


    /**
     * <p>Details about an Amazon ECS cluster.</p>
     */
    inline const AwsEcsClusterDetails& GetAwsEcsCluster() const{ return m_awsEcsCluster; }

    /**
     * <p>Details about an Amazon ECS cluster.</p>
     */
    inline bool AwsEcsClusterHasBeenSet() const { return m_awsEcsClusterHasBeenSet; }

    /**
     * <p>Details about an Amazon ECS cluster.</p>
     */
    inline void SetAwsEcsCluster(const AwsEcsClusterDetails& value) { m_awsEcsClusterHasBeenSet = true; m_awsEcsCluster = value; }

    /**
     * <p>Details about an Amazon ECS cluster.</p>
     */
    inline void SetAwsEcsCluster(AwsEcsClusterDetails&& value) { m_awsEcsClusterHasBeenSet = true; m_awsEcsCluster = std::move(value); }

    /**
     * <p>Details about an Amazon ECS cluster.</p>
     */
    inline ResourceDetails& WithAwsEcsCluster(const AwsEcsClusterDetails& value) { SetAwsEcsCluster(value); return *this;}

    /**
     * <p>Details about an Amazon ECS cluster.</p>
     */
    inline ResourceDetails& WithAwsEcsCluster(AwsEcsClusterDetails&& value) { SetAwsEcsCluster(std::move(value)); return *this;}


    /**
     * <p>Provides information about a Docker container that's part of a task. </p>
     */
    inline const AwsEcsContainerDetails& GetAwsEcsContainer() const{ return m_awsEcsContainer; }

    /**
     * <p>Provides information about a Docker container that's part of a task. </p>
     */
    inline bool AwsEcsContainerHasBeenSet() const { return m_awsEcsContainerHasBeenSet; }

    /**
     * <p>Provides information about a Docker container that's part of a task. </p>
     */
    inline void SetAwsEcsContainer(const AwsEcsContainerDetails& value) { m_awsEcsContainerHasBeenSet = true; m_awsEcsContainer = value; }

    /**
     * <p>Provides information about a Docker container that's part of a task. </p>
     */
    inline void SetAwsEcsContainer(AwsEcsContainerDetails&& value) { m_awsEcsContainerHasBeenSet = true; m_awsEcsContainer = std::move(value); }

    /**
     * <p>Provides information about a Docker container that's part of a task. </p>
     */
    inline ResourceDetails& WithAwsEcsContainer(const AwsEcsContainerDetails& value) { SetAwsEcsContainer(value); return *this;}

    /**
     * <p>Provides information about a Docker container that's part of a task. </p>
     */
    inline ResourceDetails& WithAwsEcsContainer(AwsEcsContainerDetails&& value) { SetAwsEcsContainer(std::move(value)); return *this;}


    /**
     * <p>Details about a task definition. A task definition describes the container
     * and volume definitions of an Amazon Elastic Container Service task.</p>
     */
    inline const AwsEcsTaskDefinitionDetails& GetAwsEcsTaskDefinition() const{ return m_awsEcsTaskDefinition; }

    /**
     * <p>Details about a task definition. A task definition describes the container
     * and volume definitions of an Amazon Elastic Container Service task.</p>
     */
    inline bool AwsEcsTaskDefinitionHasBeenSet() const { return m_awsEcsTaskDefinitionHasBeenSet; }

    /**
     * <p>Details about a task definition. A task definition describes the container
     * and volume definitions of an Amazon Elastic Container Service task.</p>
     */
    inline void SetAwsEcsTaskDefinition(const AwsEcsTaskDefinitionDetails& value) { m_awsEcsTaskDefinitionHasBeenSet = true; m_awsEcsTaskDefinition = value; }

    /**
     * <p>Details about a task definition. A task definition describes the container
     * and volume definitions of an Amazon Elastic Container Service task.</p>
     */
    inline void SetAwsEcsTaskDefinition(AwsEcsTaskDefinitionDetails&& value) { m_awsEcsTaskDefinitionHasBeenSet = true; m_awsEcsTaskDefinition = std::move(value); }

    /**
     * <p>Details about a task definition. A task definition describes the container
     * and volume definitions of an Amazon Elastic Container Service task.</p>
     */
    inline ResourceDetails& WithAwsEcsTaskDefinition(const AwsEcsTaskDefinitionDetails& value) { SetAwsEcsTaskDefinition(value); return *this;}

    /**
     * <p>Details about a task definition. A task definition describes the container
     * and volume definitions of an Amazon Elastic Container Service task.</p>
     */
    inline ResourceDetails& WithAwsEcsTaskDefinition(AwsEcsTaskDefinitionDetails&& value) { SetAwsEcsTaskDefinition(std::move(value)); return *this;}


    /**
     * <p>Details about a container resource related to a finding.</p>
     */
    inline const ContainerDetails& GetContainer() const{ return m_container; }

    /**
     * <p>Details about a container resource related to a finding.</p>
     */
    inline bool ContainerHasBeenSet() const { return m_containerHasBeenSet; }

    /**
     * <p>Details about a container resource related to a finding.</p>
     */
    inline void SetContainer(const ContainerDetails& value) { m_containerHasBeenSet = true; m_container = value; }

    /**
     * <p>Details about a container resource related to a finding.</p>
     */
    inline void SetContainer(ContainerDetails&& value) { m_containerHasBeenSet = true; m_container = std::move(value); }

    /**
     * <p>Details about a container resource related to a finding.</p>
     */
    inline ResourceDetails& WithContainer(const ContainerDetails& value) { SetContainer(value); return *this;}

    /**
     * <p>Details about a container resource related to a finding.</p>
     */
    inline ResourceDetails& WithContainer(ContainerDetails&& value) { SetContainer(std::move(value)); return *this;}


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
    inline const Aws::Map<Aws::String, Aws::String>& GetOther() const{ return m_other; }

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
    inline bool OtherHasBeenSet() const { return m_otherHasBeenSet; }

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
    inline void SetOther(const Aws::Map<Aws::String, Aws::String>& value) { m_otherHasBeenSet = true; m_other = value; }

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
    inline void SetOther(Aws::Map<Aws::String, Aws::String>&& value) { m_otherHasBeenSet = true; m_other = std::move(value); }

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
    inline ResourceDetails& WithOther(const Aws::Map<Aws::String, Aws::String>& value) { SetOther(value); return *this;}

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
    inline ResourceDetails& WithOther(Aws::Map<Aws::String, Aws::String>&& value) { SetOther(std::move(value)); return *this;}

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
    inline ResourceDetails& AddOther(const Aws::String& key, const Aws::String& value) { m_otherHasBeenSet = true; m_other.emplace(key, value); return *this; }

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
    inline ResourceDetails& AddOther(Aws::String&& key, const Aws::String& value) { m_otherHasBeenSet = true; m_other.emplace(std::move(key), value); return *this; }

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
    inline ResourceDetails& AddOther(const Aws::String& key, Aws::String&& value) { m_otherHasBeenSet = true; m_other.emplace(key, std::move(value)); return *this; }

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
    inline ResourceDetails& AddOther(Aws::String&& key, Aws::String&& value) { m_otherHasBeenSet = true; m_other.emplace(std::move(key), std::move(value)); return *this; }

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
    inline ResourceDetails& AddOther(const char* key, Aws::String&& value) { m_otherHasBeenSet = true; m_other.emplace(key, std::move(value)); return *this; }

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
    inline ResourceDetails& AddOther(Aws::String&& key, const char* value) { m_otherHasBeenSet = true; m_other.emplace(std::move(key), value); return *this; }

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
    inline ResourceDetails& AddOther(const char* key, const char* value) { m_otherHasBeenSet = true; m_other.emplace(key, value); return *this; }


    /**
     * <p>Details about an RDS event notification subscription.</p>
     */
    inline const AwsRdsEventSubscriptionDetails& GetAwsRdsEventSubscription() const{ return m_awsRdsEventSubscription; }

    /**
     * <p>Details about an RDS event notification subscription.</p>
     */
    inline bool AwsRdsEventSubscriptionHasBeenSet() const { return m_awsRdsEventSubscriptionHasBeenSet; }

    /**
     * <p>Details about an RDS event notification subscription.</p>
     */
    inline void SetAwsRdsEventSubscription(const AwsRdsEventSubscriptionDetails& value) { m_awsRdsEventSubscriptionHasBeenSet = true; m_awsRdsEventSubscription = value; }

    /**
     * <p>Details about an RDS event notification subscription.</p>
     */
    inline void SetAwsRdsEventSubscription(AwsRdsEventSubscriptionDetails&& value) { m_awsRdsEventSubscriptionHasBeenSet = true; m_awsRdsEventSubscription = std::move(value); }

    /**
     * <p>Details about an RDS event notification subscription.</p>
     */
    inline ResourceDetails& WithAwsRdsEventSubscription(const AwsRdsEventSubscriptionDetails& value) { SetAwsRdsEventSubscription(value); return *this;}

    /**
     * <p>Details about an RDS event notification subscription.</p>
     */
    inline ResourceDetails& WithAwsRdsEventSubscription(AwsRdsEventSubscriptionDetails&& value) { SetAwsRdsEventSubscription(std::move(value)); return *this;}


    /**
     * <p>Details about a service within an ECS cluster.</p>
     */
    inline const AwsEcsServiceDetails& GetAwsEcsService() const{ return m_awsEcsService; }

    /**
     * <p>Details about a service within an ECS cluster.</p>
     */
    inline bool AwsEcsServiceHasBeenSet() const { return m_awsEcsServiceHasBeenSet; }

    /**
     * <p>Details about a service within an ECS cluster.</p>
     */
    inline void SetAwsEcsService(const AwsEcsServiceDetails& value) { m_awsEcsServiceHasBeenSet = true; m_awsEcsService = value; }

    /**
     * <p>Details about a service within an ECS cluster.</p>
     */
    inline void SetAwsEcsService(AwsEcsServiceDetails&& value) { m_awsEcsServiceHasBeenSet = true; m_awsEcsService = std::move(value); }

    /**
     * <p>Details about a service within an ECS cluster.</p>
     */
    inline ResourceDetails& WithAwsEcsService(const AwsEcsServiceDetails& value) { SetAwsEcsService(value); return *this;}

    /**
     * <p>Details about a service within an ECS cluster.</p>
     */
    inline ResourceDetails& WithAwsEcsService(AwsEcsServiceDetails&& value) { SetAwsEcsService(std::move(value)); return *this;}


    /**
     * <p>Provides details about a launch configuration.</p>
     */
    inline const AwsAutoScalingLaunchConfigurationDetails& GetAwsAutoScalingLaunchConfiguration() const{ return m_awsAutoScalingLaunchConfiguration; }

    /**
     * <p>Provides details about a launch configuration.</p>
     */
    inline bool AwsAutoScalingLaunchConfigurationHasBeenSet() const { return m_awsAutoScalingLaunchConfigurationHasBeenSet; }

    /**
     * <p>Provides details about a launch configuration.</p>
     */
    inline void SetAwsAutoScalingLaunchConfiguration(const AwsAutoScalingLaunchConfigurationDetails& value) { m_awsAutoScalingLaunchConfigurationHasBeenSet = true; m_awsAutoScalingLaunchConfiguration = value; }

    /**
     * <p>Provides details about a launch configuration.</p>
     */
    inline void SetAwsAutoScalingLaunchConfiguration(AwsAutoScalingLaunchConfigurationDetails&& value) { m_awsAutoScalingLaunchConfigurationHasBeenSet = true; m_awsAutoScalingLaunchConfiguration = std::move(value); }

    /**
     * <p>Provides details about a launch configuration.</p>
     */
    inline ResourceDetails& WithAwsAutoScalingLaunchConfiguration(const AwsAutoScalingLaunchConfigurationDetails& value) { SetAwsAutoScalingLaunchConfiguration(value); return *this;}

    /**
     * <p>Provides details about a launch configuration.</p>
     */
    inline ResourceDetails& WithAwsAutoScalingLaunchConfiguration(AwsAutoScalingLaunchConfigurationDetails&& value) { SetAwsAutoScalingLaunchConfiguration(std::move(value)); return *this;}


    /**
     * <p>Details about an Amazon EC2 VPN connection.</p>
     */
    inline const AwsEc2VpnConnectionDetails& GetAwsEc2VpnConnection() const{ return m_awsEc2VpnConnection; }

    /**
     * <p>Details about an Amazon EC2 VPN connection.</p>
     */
    inline bool AwsEc2VpnConnectionHasBeenSet() const { return m_awsEc2VpnConnectionHasBeenSet; }

    /**
     * <p>Details about an Amazon EC2 VPN connection.</p>
     */
    inline void SetAwsEc2VpnConnection(const AwsEc2VpnConnectionDetails& value) { m_awsEc2VpnConnectionHasBeenSet = true; m_awsEc2VpnConnection = value; }

    /**
     * <p>Details about an Amazon EC2 VPN connection.</p>
     */
    inline void SetAwsEc2VpnConnection(AwsEc2VpnConnectionDetails&& value) { m_awsEc2VpnConnectionHasBeenSet = true; m_awsEc2VpnConnection = std::move(value); }

    /**
     * <p>Details about an Amazon EC2 VPN connection.</p>
     */
    inline ResourceDetails& WithAwsEc2VpnConnection(const AwsEc2VpnConnectionDetails& value) { SetAwsEc2VpnConnection(value); return *this;}

    /**
     * <p>Details about an Amazon EC2 VPN connection.</p>
     */
    inline ResourceDetails& WithAwsEc2VpnConnection(AwsEc2VpnConnectionDetails&& value) { SetAwsEc2VpnConnection(std::move(value)); return *this;}


    /**
     * <p>Information about an Amazon ECR image.</p>
     */
    inline const AwsEcrContainerImageDetails& GetAwsEcrContainerImage() const{ return m_awsEcrContainerImage; }

    /**
     * <p>Information about an Amazon ECR image.</p>
     */
    inline bool AwsEcrContainerImageHasBeenSet() const { return m_awsEcrContainerImageHasBeenSet; }

    /**
     * <p>Information about an Amazon ECR image.</p>
     */
    inline void SetAwsEcrContainerImage(const AwsEcrContainerImageDetails& value) { m_awsEcrContainerImageHasBeenSet = true; m_awsEcrContainerImage = value; }

    /**
     * <p>Information about an Amazon ECR image.</p>
     */
    inline void SetAwsEcrContainerImage(AwsEcrContainerImageDetails&& value) { m_awsEcrContainerImageHasBeenSet = true; m_awsEcrContainerImage = std::move(value); }

    /**
     * <p>Information about an Amazon ECR image.</p>
     */
    inline ResourceDetails& WithAwsEcrContainerImage(const AwsEcrContainerImageDetails& value) { SetAwsEcrContainerImage(value); return *this;}

    /**
     * <p>Information about an Amazon ECR image.</p>
     */
    inline ResourceDetails& WithAwsEcrContainerImage(AwsEcrContainerImageDetails&& value) { SetAwsEcrContainerImage(std::move(value)); return *this;}


    /**
     * <p>Details about an Amazon OpenSearch Service domain.</p>
     */
    inline const AwsOpenSearchServiceDomainDetails& GetAwsOpenSearchServiceDomain() const{ return m_awsOpenSearchServiceDomain; }

    /**
     * <p>Details about an Amazon OpenSearch Service domain.</p>
     */
    inline bool AwsOpenSearchServiceDomainHasBeenSet() const { return m_awsOpenSearchServiceDomainHasBeenSet; }

    /**
     * <p>Details about an Amazon OpenSearch Service domain.</p>
     */
    inline void SetAwsOpenSearchServiceDomain(const AwsOpenSearchServiceDomainDetails& value) { m_awsOpenSearchServiceDomainHasBeenSet = true; m_awsOpenSearchServiceDomain = value; }

    /**
     * <p>Details about an Amazon OpenSearch Service domain.</p>
     */
    inline void SetAwsOpenSearchServiceDomain(AwsOpenSearchServiceDomainDetails&& value) { m_awsOpenSearchServiceDomainHasBeenSet = true; m_awsOpenSearchServiceDomain = std::move(value); }

    /**
     * <p>Details about an Amazon OpenSearch Service domain.</p>
     */
    inline ResourceDetails& WithAwsOpenSearchServiceDomain(const AwsOpenSearchServiceDomainDetails& value) { SetAwsOpenSearchServiceDomain(value); return *this;}

    /**
     * <p>Details about an Amazon OpenSearch Service domain.</p>
     */
    inline ResourceDetails& WithAwsOpenSearchServiceDomain(AwsOpenSearchServiceDomainDetails&& value) { SetAwsOpenSearchServiceDomain(std::move(value)); return *this;}


    /**
     * <p>Details about the service configuration for a VPC endpoint service.</p>
     */
    inline const AwsEc2VpcEndpointServiceDetails& GetAwsEc2VpcEndpointService() const{ return m_awsEc2VpcEndpointService; }

    /**
     * <p>Details about the service configuration for a VPC endpoint service.</p>
     */
    inline bool AwsEc2VpcEndpointServiceHasBeenSet() const { return m_awsEc2VpcEndpointServiceHasBeenSet; }

    /**
     * <p>Details about the service configuration for a VPC endpoint service.</p>
     */
    inline void SetAwsEc2VpcEndpointService(const AwsEc2VpcEndpointServiceDetails& value) { m_awsEc2VpcEndpointServiceHasBeenSet = true; m_awsEc2VpcEndpointService = value; }

    /**
     * <p>Details about the service configuration for a VPC endpoint service.</p>
     */
    inline void SetAwsEc2VpcEndpointService(AwsEc2VpcEndpointServiceDetails&& value) { m_awsEc2VpcEndpointServiceHasBeenSet = true; m_awsEc2VpcEndpointService = std::move(value); }

    /**
     * <p>Details about the service configuration for a VPC endpoint service.</p>
     */
    inline ResourceDetails& WithAwsEc2VpcEndpointService(const AwsEc2VpcEndpointServiceDetails& value) { SetAwsEc2VpcEndpointService(value); return *this;}

    /**
     * <p>Details about the service configuration for a VPC endpoint service.</p>
     */
    inline ResourceDetails& WithAwsEc2VpcEndpointService(AwsEc2VpcEndpointServiceDetails&& value) { SetAwsEc2VpcEndpointService(std::move(value)); return *this;}


    /**
     * <p>Information about the encryption configuration for X-Ray.</p>
     */
    inline const AwsXrayEncryptionConfigDetails& GetAwsXrayEncryptionConfig() const{ return m_awsXrayEncryptionConfig; }

    /**
     * <p>Information about the encryption configuration for X-Ray.</p>
     */
    inline bool AwsXrayEncryptionConfigHasBeenSet() const { return m_awsXrayEncryptionConfigHasBeenSet; }

    /**
     * <p>Information about the encryption configuration for X-Ray.</p>
     */
    inline void SetAwsXrayEncryptionConfig(const AwsXrayEncryptionConfigDetails& value) { m_awsXrayEncryptionConfigHasBeenSet = true; m_awsXrayEncryptionConfig = value; }

    /**
     * <p>Information about the encryption configuration for X-Ray.</p>
     */
    inline void SetAwsXrayEncryptionConfig(AwsXrayEncryptionConfigDetails&& value) { m_awsXrayEncryptionConfigHasBeenSet = true; m_awsXrayEncryptionConfig = std::move(value); }

    /**
     * <p>Information about the encryption configuration for X-Ray.</p>
     */
    inline ResourceDetails& WithAwsXrayEncryptionConfig(const AwsXrayEncryptionConfigDetails& value) { SetAwsXrayEncryptionConfig(value); return *this;}

    /**
     * <p>Information about the encryption configuration for X-Ray.</p>
     */
    inline ResourceDetails& WithAwsXrayEncryptionConfig(AwsXrayEncryptionConfigDetails&& value) { SetAwsXrayEncryptionConfig(std::move(value)); return *this;}


    /**
     * <p>Details about a rate-based rule for global resources.</p>
     */
    inline const AwsWafRateBasedRuleDetails& GetAwsWafRateBasedRule() const{ return m_awsWafRateBasedRule; }

    /**
     * <p>Details about a rate-based rule for global resources.</p>
     */
    inline bool AwsWafRateBasedRuleHasBeenSet() const { return m_awsWafRateBasedRuleHasBeenSet; }

    /**
     * <p>Details about a rate-based rule for global resources.</p>
     */
    inline void SetAwsWafRateBasedRule(const AwsWafRateBasedRuleDetails& value) { m_awsWafRateBasedRuleHasBeenSet = true; m_awsWafRateBasedRule = value; }

    /**
     * <p>Details about a rate-based rule for global resources.</p>
     */
    inline void SetAwsWafRateBasedRule(AwsWafRateBasedRuleDetails&& value) { m_awsWafRateBasedRuleHasBeenSet = true; m_awsWafRateBasedRule = std::move(value); }

    /**
     * <p>Details about a rate-based rule for global resources.</p>
     */
    inline ResourceDetails& WithAwsWafRateBasedRule(const AwsWafRateBasedRuleDetails& value) { SetAwsWafRateBasedRule(value); return *this;}

    /**
     * <p>Details about a rate-based rule for global resources.</p>
     */
    inline ResourceDetails& WithAwsWafRateBasedRule(AwsWafRateBasedRuleDetails&& value) { SetAwsWafRateBasedRule(std::move(value)); return *this;}


    /**
     * <p>Details about a rate-based rule for Regional resources.</p>
     */
    inline const AwsWafRegionalRateBasedRuleDetails& GetAwsWafRegionalRateBasedRule() const{ return m_awsWafRegionalRateBasedRule; }

    /**
     * <p>Details about a rate-based rule for Regional resources.</p>
     */
    inline bool AwsWafRegionalRateBasedRuleHasBeenSet() const { return m_awsWafRegionalRateBasedRuleHasBeenSet; }

    /**
     * <p>Details about a rate-based rule for Regional resources.</p>
     */
    inline void SetAwsWafRegionalRateBasedRule(const AwsWafRegionalRateBasedRuleDetails& value) { m_awsWafRegionalRateBasedRuleHasBeenSet = true; m_awsWafRegionalRateBasedRule = value; }

    /**
     * <p>Details about a rate-based rule for Regional resources.</p>
     */
    inline void SetAwsWafRegionalRateBasedRule(AwsWafRegionalRateBasedRuleDetails&& value) { m_awsWafRegionalRateBasedRuleHasBeenSet = true; m_awsWafRegionalRateBasedRule = std::move(value); }

    /**
     * <p>Details about a rate-based rule for Regional resources.</p>
     */
    inline ResourceDetails& WithAwsWafRegionalRateBasedRule(const AwsWafRegionalRateBasedRuleDetails& value) { SetAwsWafRegionalRateBasedRule(value); return *this;}

    /**
     * <p>Details about a rate-based rule for Regional resources.</p>
     */
    inline ResourceDetails& WithAwsWafRegionalRateBasedRule(AwsWafRegionalRateBasedRuleDetails&& value) { SetAwsWafRegionalRateBasedRule(std::move(value)); return *this;}


    /**
     * <p>Information about an Amazon Elastic Container Registry repository.</p>
     */
    inline const AwsEcrRepositoryDetails& GetAwsEcrRepository() const{ return m_awsEcrRepository; }

    /**
     * <p>Information about an Amazon Elastic Container Registry repository.</p>
     */
    inline bool AwsEcrRepositoryHasBeenSet() const { return m_awsEcrRepositoryHasBeenSet; }

    /**
     * <p>Information about an Amazon Elastic Container Registry repository.</p>
     */
    inline void SetAwsEcrRepository(const AwsEcrRepositoryDetails& value) { m_awsEcrRepositoryHasBeenSet = true; m_awsEcrRepository = value; }

    /**
     * <p>Information about an Amazon Elastic Container Registry repository.</p>
     */
    inline void SetAwsEcrRepository(AwsEcrRepositoryDetails&& value) { m_awsEcrRepositoryHasBeenSet = true; m_awsEcrRepository = std::move(value); }

    /**
     * <p>Information about an Amazon Elastic Container Registry repository.</p>
     */
    inline ResourceDetails& WithAwsEcrRepository(const AwsEcrRepositoryDetails& value) { SetAwsEcrRepository(value); return *this;}

    /**
     * <p>Information about an Amazon Elastic Container Registry repository.</p>
     */
    inline ResourceDetails& WithAwsEcrRepository(AwsEcrRepositoryDetails&& value) { SetAwsEcrRepository(std::move(value)); return *this;}


    /**
     * <p>Details about an Amazon EKS cluster.</p>
     */
    inline const AwsEksClusterDetails& GetAwsEksCluster() const{ return m_awsEksCluster; }

    /**
     * <p>Details about an Amazon EKS cluster.</p>
     */
    inline bool AwsEksClusterHasBeenSet() const { return m_awsEksClusterHasBeenSet; }

    /**
     * <p>Details about an Amazon EKS cluster.</p>
     */
    inline void SetAwsEksCluster(const AwsEksClusterDetails& value) { m_awsEksClusterHasBeenSet = true; m_awsEksCluster = value; }

    /**
     * <p>Details about an Amazon EKS cluster.</p>
     */
    inline void SetAwsEksCluster(AwsEksClusterDetails&& value) { m_awsEksClusterHasBeenSet = true; m_awsEksCluster = std::move(value); }

    /**
     * <p>Details about an Amazon EKS cluster.</p>
     */
    inline ResourceDetails& WithAwsEksCluster(const AwsEksClusterDetails& value) { SetAwsEksCluster(value); return *this;}

    /**
     * <p>Details about an Amazon EKS cluster.</p>
     */
    inline ResourceDetails& WithAwsEksCluster(AwsEksClusterDetails&& value) { SetAwsEksCluster(std::move(value)); return *this;}


    /**
     * <p>Details about an Network Firewall firewall policy.</p>
     */
    inline const AwsNetworkFirewallFirewallPolicyDetails& GetAwsNetworkFirewallFirewallPolicy() const{ return m_awsNetworkFirewallFirewallPolicy; }

    /**
     * <p>Details about an Network Firewall firewall policy.</p>
     */
    inline bool AwsNetworkFirewallFirewallPolicyHasBeenSet() const { return m_awsNetworkFirewallFirewallPolicyHasBeenSet; }

    /**
     * <p>Details about an Network Firewall firewall policy.</p>
     */
    inline void SetAwsNetworkFirewallFirewallPolicy(const AwsNetworkFirewallFirewallPolicyDetails& value) { m_awsNetworkFirewallFirewallPolicyHasBeenSet = true; m_awsNetworkFirewallFirewallPolicy = value; }

    /**
     * <p>Details about an Network Firewall firewall policy.</p>
     */
    inline void SetAwsNetworkFirewallFirewallPolicy(AwsNetworkFirewallFirewallPolicyDetails&& value) { m_awsNetworkFirewallFirewallPolicyHasBeenSet = true; m_awsNetworkFirewallFirewallPolicy = std::move(value); }

    /**
     * <p>Details about an Network Firewall firewall policy.</p>
     */
    inline ResourceDetails& WithAwsNetworkFirewallFirewallPolicy(const AwsNetworkFirewallFirewallPolicyDetails& value) { SetAwsNetworkFirewallFirewallPolicy(value); return *this;}

    /**
     * <p>Details about an Network Firewall firewall policy.</p>
     */
    inline ResourceDetails& WithAwsNetworkFirewallFirewallPolicy(AwsNetworkFirewallFirewallPolicyDetails&& value) { SetAwsNetworkFirewallFirewallPolicy(std::move(value)); return *this;}


    /**
     * <p>Details about an Network Firewall firewall.</p>
     */
    inline const AwsNetworkFirewallFirewallDetails& GetAwsNetworkFirewallFirewall() const{ return m_awsNetworkFirewallFirewall; }

    /**
     * <p>Details about an Network Firewall firewall.</p>
     */
    inline bool AwsNetworkFirewallFirewallHasBeenSet() const { return m_awsNetworkFirewallFirewallHasBeenSet; }

    /**
     * <p>Details about an Network Firewall firewall.</p>
     */
    inline void SetAwsNetworkFirewallFirewall(const AwsNetworkFirewallFirewallDetails& value) { m_awsNetworkFirewallFirewallHasBeenSet = true; m_awsNetworkFirewallFirewall = value; }

    /**
     * <p>Details about an Network Firewall firewall.</p>
     */
    inline void SetAwsNetworkFirewallFirewall(AwsNetworkFirewallFirewallDetails&& value) { m_awsNetworkFirewallFirewallHasBeenSet = true; m_awsNetworkFirewallFirewall = std::move(value); }

    /**
     * <p>Details about an Network Firewall firewall.</p>
     */
    inline ResourceDetails& WithAwsNetworkFirewallFirewall(const AwsNetworkFirewallFirewallDetails& value) { SetAwsNetworkFirewallFirewall(value); return *this;}

    /**
     * <p>Details about an Network Firewall firewall.</p>
     */
    inline ResourceDetails& WithAwsNetworkFirewallFirewall(AwsNetworkFirewallFirewallDetails&& value) { SetAwsNetworkFirewallFirewall(std::move(value)); return *this;}


    /**
     * <p>Details about an Network Firewall rule group.</p>
     */
    inline const AwsNetworkFirewallRuleGroupDetails& GetAwsNetworkFirewallRuleGroup() const{ return m_awsNetworkFirewallRuleGroup; }

    /**
     * <p>Details about an Network Firewall rule group.</p>
     */
    inline bool AwsNetworkFirewallRuleGroupHasBeenSet() const { return m_awsNetworkFirewallRuleGroupHasBeenSet; }

    /**
     * <p>Details about an Network Firewall rule group.</p>
     */
    inline void SetAwsNetworkFirewallRuleGroup(const AwsNetworkFirewallRuleGroupDetails& value) { m_awsNetworkFirewallRuleGroupHasBeenSet = true; m_awsNetworkFirewallRuleGroup = value; }

    /**
     * <p>Details about an Network Firewall rule group.</p>
     */
    inline void SetAwsNetworkFirewallRuleGroup(AwsNetworkFirewallRuleGroupDetails&& value) { m_awsNetworkFirewallRuleGroupHasBeenSet = true; m_awsNetworkFirewallRuleGroup = std::move(value); }

    /**
     * <p>Details about an Network Firewall rule group.</p>
     */
    inline ResourceDetails& WithAwsNetworkFirewallRuleGroup(const AwsNetworkFirewallRuleGroupDetails& value) { SetAwsNetworkFirewallRuleGroup(value); return *this;}

    /**
     * <p>Details about an Network Firewall rule group.</p>
     */
    inline ResourceDetails& WithAwsNetworkFirewallRuleGroup(AwsNetworkFirewallRuleGroupDetails&& value) { SetAwsNetworkFirewallRuleGroup(std::move(value)); return *this;}


    /**
     * <p>Details about an Amazon RDS DB security group.</p>
     */
    inline const AwsRdsDbSecurityGroupDetails& GetAwsRdsDbSecurityGroup() const{ return m_awsRdsDbSecurityGroup; }

    /**
     * <p>Details about an Amazon RDS DB security group.</p>
     */
    inline bool AwsRdsDbSecurityGroupHasBeenSet() const { return m_awsRdsDbSecurityGroupHasBeenSet; }

    /**
     * <p>Details about an Amazon RDS DB security group.</p>
     */
    inline void SetAwsRdsDbSecurityGroup(const AwsRdsDbSecurityGroupDetails& value) { m_awsRdsDbSecurityGroupHasBeenSet = true; m_awsRdsDbSecurityGroup = value; }

    /**
     * <p>Details about an Amazon RDS DB security group.</p>
     */
    inline void SetAwsRdsDbSecurityGroup(AwsRdsDbSecurityGroupDetails&& value) { m_awsRdsDbSecurityGroupHasBeenSet = true; m_awsRdsDbSecurityGroup = std::move(value); }

    /**
     * <p>Details about an Amazon RDS DB security group.</p>
     */
    inline ResourceDetails& WithAwsRdsDbSecurityGroup(const AwsRdsDbSecurityGroupDetails& value) { SetAwsRdsDbSecurityGroup(value); return *this;}

    /**
     * <p>Details about an Amazon RDS DB security group.</p>
     */
    inline ResourceDetails& WithAwsRdsDbSecurityGroup(AwsRdsDbSecurityGroupDetails&& value) { SetAwsRdsDbSecurityGroup(std::move(value)); return *this;}


    /**
     * <p>Details about an Amazon Kinesis data stream.</p>
     */
    inline const AwsKinesisStreamDetails& GetAwsKinesisStream() const{ return m_awsKinesisStream; }

    /**
     * <p>Details about an Amazon Kinesis data stream.</p>
     */
    inline bool AwsKinesisStreamHasBeenSet() const { return m_awsKinesisStreamHasBeenSet; }

    /**
     * <p>Details about an Amazon Kinesis data stream.</p>
     */
    inline void SetAwsKinesisStream(const AwsKinesisStreamDetails& value) { m_awsKinesisStreamHasBeenSet = true; m_awsKinesisStream = value; }

    /**
     * <p>Details about an Amazon Kinesis data stream.</p>
     */
    inline void SetAwsKinesisStream(AwsKinesisStreamDetails&& value) { m_awsKinesisStreamHasBeenSet = true; m_awsKinesisStream = std::move(value); }

    /**
     * <p>Details about an Amazon Kinesis data stream.</p>
     */
    inline ResourceDetails& WithAwsKinesisStream(const AwsKinesisStreamDetails& value) { SetAwsKinesisStream(value); return *this;}

    /**
     * <p>Details about an Amazon Kinesis data stream.</p>
     */
    inline ResourceDetails& WithAwsKinesisStream(AwsKinesisStreamDetails&& value) { SetAwsKinesisStream(std::move(value)); return *this;}


    /**
     * <p>Details about an Amazon EC2 transit gateway that interconnects your virtual
     * private clouds (VPC) and on-premises networks.</p>
     */
    inline const AwsEc2TransitGatewayDetails& GetAwsEc2TransitGateway() const{ return m_awsEc2TransitGateway; }

    /**
     * <p>Details about an Amazon EC2 transit gateway that interconnects your virtual
     * private clouds (VPC) and on-premises networks.</p>
     */
    inline bool AwsEc2TransitGatewayHasBeenSet() const { return m_awsEc2TransitGatewayHasBeenSet; }

    /**
     * <p>Details about an Amazon EC2 transit gateway that interconnects your virtual
     * private clouds (VPC) and on-premises networks.</p>
     */
    inline void SetAwsEc2TransitGateway(const AwsEc2TransitGatewayDetails& value) { m_awsEc2TransitGatewayHasBeenSet = true; m_awsEc2TransitGateway = value; }

    /**
     * <p>Details about an Amazon EC2 transit gateway that interconnects your virtual
     * private clouds (VPC) and on-premises networks.</p>
     */
    inline void SetAwsEc2TransitGateway(AwsEc2TransitGatewayDetails&& value) { m_awsEc2TransitGatewayHasBeenSet = true; m_awsEc2TransitGateway = std::move(value); }

    /**
     * <p>Details about an Amazon EC2 transit gateway that interconnects your virtual
     * private clouds (VPC) and on-premises networks.</p>
     */
    inline ResourceDetails& WithAwsEc2TransitGateway(const AwsEc2TransitGatewayDetails& value) { SetAwsEc2TransitGateway(value); return *this;}

    /**
     * <p>Details about an Amazon EC2 transit gateway that interconnects your virtual
     * private clouds (VPC) and on-premises networks.</p>
     */
    inline ResourceDetails& WithAwsEc2TransitGateway(AwsEc2TransitGatewayDetails&& value) { SetAwsEc2TransitGateway(std::move(value)); return *this;}


    /**
     * <p>Details about an Amazon EFS access point. An access point is an
     * application-specific view into an EFS file system that applies an operating
     * system user and group, and a file system path, to any file system request made
     * through the access point. </p>
     */
    inline const AwsEfsAccessPointDetails& GetAwsEfsAccessPoint() const{ return m_awsEfsAccessPoint; }

    /**
     * <p>Details about an Amazon EFS access point. An access point is an
     * application-specific view into an EFS file system that applies an operating
     * system user and group, and a file system path, to any file system request made
     * through the access point. </p>
     */
    inline bool AwsEfsAccessPointHasBeenSet() const { return m_awsEfsAccessPointHasBeenSet; }

    /**
     * <p>Details about an Amazon EFS access point. An access point is an
     * application-specific view into an EFS file system that applies an operating
     * system user and group, and a file system path, to any file system request made
     * through the access point. </p>
     */
    inline void SetAwsEfsAccessPoint(const AwsEfsAccessPointDetails& value) { m_awsEfsAccessPointHasBeenSet = true; m_awsEfsAccessPoint = value; }

    /**
     * <p>Details about an Amazon EFS access point. An access point is an
     * application-specific view into an EFS file system that applies an operating
     * system user and group, and a file system path, to any file system request made
     * through the access point. </p>
     */
    inline void SetAwsEfsAccessPoint(AwsEfsAccessPointDetails&& value) { m_awsEfsAccessPointHasBeenSet = true; m_awsEfsAccessPoint = std::move(value); }

    /**
     * <p>Details about an Amazon EFS access point. An access point is an
     * application-specific view into an EFS file system that applies an operating
     * system user and group, and a file system path, to any file system request made
     * through the access point. </p>
     */
    inline ResourceDetails& WithAwsEfsAccessPoint(const AwsEfsAccessPointDetails& value) { SetAwsEfsAccessPoint(value); return *this;}

    /**
     * <p>Details about an Amazon EFS access point. An access point is an
     * application-specific view into an EFS file system that applies an operating
     * system user and group, and a file system path, to any file system request made
     * through the access point. </p>
     */
    inline ResourceDetails& WithAwsEfsAccessPoint(AwsEfsAccessPointDetails&& value) { SetAwsEfsAccessPoint(std::move(value)); return *this;}


    /**
     * <p>Details about an CloudFormation stack. A stack is a collection of Amazon Web
     * Services resources that you can manage as a single unit.</p>
     */
    inline const AwsCloudFormationStackDetails& GetAwsCloudFormationStack() const{ return m_awsCloudFormationStack; }

    /**
     * <p>Details about an CloudFormation stack. A stack is a collection of Amazon Web
     * Services resources that you can manage as a single unit.</p>
     */
    inline bool AwsCloudFormationStackHasBeenSet() const { return m_awsCloudFormationStackHasBeenSet; }

    /**
     * <p>Details about an CloudFormation stack. A stack is a collection of Amazon Web
     * Services resources that you can manage as a single unit.</p>
     */
    inline void SetAwsCloudFormationStack(const AwsCloudFormationStackDetails& value) { m_awsCloudFormationStackHasBeenSet = true; m_awsCloudFormationStack = value; }

    /**
     * <p>Details about an CloudFormation stack. A stack is a collection of Amazon Web
     * Services resources that you can manage as a single unit.</p>
     */
    inline void SetAwsCloudFormationStack(AwsCloudFormationStackDetails&& value) { m_awsCloudFormationStackHasBeenSet = true; m_awsCloudFormationStack = std::move(value); }

    /**
     * <p>Details about an CloudFormation stack. A stack is a collection of Amazon Web
     * Services resources that you can manage as a single unit.</p>
     */
    inline ResourceDetails& WithAwsCloudFormationStack(const AwsCloudFormationStackDetails& value) { SetAwsCloudFormationStack(value); return *this;}

    /**
     * <p>Details about an CloudFormation stack. A stack is a collection of Amazon Web
     * Services resources that you can manage as a single unit.</p>
     */
    inline ResourceDetails& WithAwsCloudFormationStack(AwsCloudFormationStackDetails&& value) { SetAwsCloudFormationStack(std::move(value)); return *this;}


    /**
     * <p>Details about an Amazon CloudWatch alarm. An alarm allows you to monitor and
     * receive alerts about your Amazon Web Services resources and applications across
     * multiple Regions.</p>
     */
    inline const AwsCloudWatchAlarmDetails& GetAwsCloudWatchAlarm() const{ return m_awsCloudWatchAlarm; }

    /**
     * <p>Details about an Amazon CloudWatch alarm. An alarm allows you to monitor and
     * receive alerts about your Amazon Web Services resources and applications across
     * multiple Regions.</p>
     */
    inline bool AwsCloudWatchAlarmHasBeenSet() const { return m_awsCloudWatchAlarmHasBeenSet; }

    /**
     * <p>Details about an Amazon CloudWatch alarm. An alarm allows you to monitor and
     * receive alerts about your Amazon Web Services resources and applications across
     * multiple Regions.</p>
     */
    inline void SetAwsCloudWatchAlarm(const AwsCloudWatchAlarmDetails& value) { m_awsCloudWatchAlarmHasBeenSet = true; m_awsCloudWatchAlarm = value; }

    /**
     * <p>Details about an Amazon CloudWatch alarm. An alarm allows you to monitor and
     * receive alerts about your Amazon Web Services resources and applications across
     * multiple Regions.</p>
     */
    inline void SetAwsCloudWatchAlarm(AwsCloudWatchAlarmDetails&& value) { m_awsCloudWatchAlarmHasBeenSet = true; m_awsCloudWatchAlarm = std::move(value); }

    /**
     * <p>Details about an Amazon CloudWatch alarm. An alarm allows you to monitor and
     * receive alerts about your Amazon Web Services resources and applications across
     * multiple Regions.</p>
     */
    inline ResourceDetails& WithAwsCloudWatchAlarm(const AwsCloudWatchAlarmDetails& value) { SetAwsCloudWatchAlarm(value); return *this;}

    /**
     * <p>Details about an Amazon CloudWatch alarm. An alarm allows you to monitor and
     * receive alerts about your Amazon Web Services resources and applications across
     * multiple Regions.</p>
     */
    inline ResourceDetails& WithAwsCloudWatchAlarm(AwsCloudWatchAlarmDetails&& value) { SetAwsCloudWatchAlarm(std::move(value)); return *this;}


    /**
     * <p>Details about an Amazon EC2 VPC peering connection. A VPC peering connection
     * is a networking connection between two VPCs that enables you to route traffic
     * between them privately. </p>
     */
    inline const AwsEc2VpcPeeringConnectionDetails& GetAwsEc2VpcPeeringConnection() const{ return m_awsEc2VpcPeeringConnection; }

    /**
     * <p>Details about an Amazon EC2 VPC peering connection. A VPC peering connection
     * is a networking connection between two VPCs that enables you to route traffic
     * between them privately. </p>
     */
    inline bool AwsEc2VpcPeeringConnectionHasBeenSet() const { return m_awsEc2VpcPeeringConnectionHasBeenSet; }

    /**
     * <p>Details about an Amazon EC2 VPC peering connection. A VPC peering connection
     * is a networking connection between two VPCs that enables you to route traffic
     * between them privately. </p>
     */
    inline void SetAwsEc2VpcPeeringConnection(const AwsEc2VpcPeeringConnectionDetails& value) { m_awsEc2VpcPeeringConnectionHasBeenSet = true; m_awsEc2VpcPeeringConnection = value; }

    /**
     * <p>Details about an Amazon EC2 VPC peering connection. A VPC peering connection
     * is a networking connection between two VPCs that enables you to route traffic
     * between them privately. </p>
     */
    inline void SetAwsEc2VpcPeeringConnection(AwsEc2VpcPeeringConnectionDetails&& value) { m_awsEc2VpcPeeringConnectionHasBeenSet = true; m_awsEc2VpcPeeringConnection = std::move(value); }

    /**
     * <p>Details about an Amazon EC2 VPC peering connection. A VPC peering connection
     * is a networking connection between two VPCs that enables you to route traffic
     * between them privately. </p>
     */
    inline ResourceDetails& WithAwsEc2VpcPeeringConnection(const AwsEc2VpcPeeringConnectionDetails& value) { SetAwsEc2VpcPeeringConnection(value); return *this;}

    /**
     * <p>Details about an Amazon EC2 VPC peering connection. A VPC peering connection
     * is a networking connection between two VPCs that enables you to route traffic
     * between them privately. </p>
     */
    inline ResourceDetails& WithAwsEc2VpcPeeringConnection(AwsEc2VpcPeeringConnectionDetails&& value) { SetAwsEc2VpcPeeringConnection(std::move(value)); return *this;}


    /**
     * <p>Details about an WAF rule group for Regional resources. </p>
     */
    inline const AwsWafRegionalRuleGroupDetails& GetAwsWafRegionalRuleGroup() const{ return m_awsWafRegionalRuleGroup; }

    /**
     * <p>Details about an WAF rule group for Regional resources. </p>
     */
    inline bool AwsWafRegionalRuleGroupHasBeenSet() const { return m_awsWafRegionalRuleGroupHasBeenSet; }

    /**
     * <p>Details about an WAF rule group for Regional resources. </p>
     */
    inline void SetAwsWafRegionalRuleGroup(const AwsWafRegionalRuleGroupDetails& value) { m_awsWafRegionalRuleGroupHasBeenSet = true; m_awsWafRegionalRuleGroup = value; }

    /**
     * <p>Details about an WAF rule group for Regional resources. </p>
     */
    inline void SetAwsWafRegionalRuleGroup(AwsWafRegionalRuleGroupDetails&& value) { m_awsWafRegionalRuleGroupHasBeenSet = true; m_awsWafRegionalRuleGroup = std::move(value); }

    /**
     * <p>Details about an WAF rule group for Regional resources. </p>
     */
    inline ResourceDetails& WithAwsWafRegionalRuleGroup(const AwsWafRegionalRuleGroupDetails& value) { SetAwsWafRegionalRuleGroup(value); return *this;}

    /**
     * <p>Details about an WAF rule group for Regional resources. </p>
     */
    inline ResourceDetails& WithAwsWafRegionalRuleGroup(AwsWafRegionalRuleGroupDetails&& value) { SetAwsWafRegionalRuleGroup(std::move(value)); return *this;}


    /**
     * <p>Details about an WAF rule for Regional resources. </p>
     */
    inline const AwsWafRegionalRuleDetails& GetAwsWafRegionalRule() const{ return m_awsWafRegionalRule; }

    /**
     * <p>Details about an WAF rule for Regional resources. </p>
     */
    inline bool AwsWafRegionalRuleHasBeenSet() const { return m_awsWafRegionalRuleHasBeenSet; }

    /**
     * <p>Details about an WAF rule for Regional resources. </p>
     */
    inline void SetAwsWafRegionalRule(const AwsWafRegionalRuleDetails& value) { m_awsWafRegionalRuleHasBeenSet = true; m_awsWafRegionalRule = value; }

    /**
     * <p>Details about an WAF rule for Regional resources. </p>
     */
    inline void SetAwsWafRegionalRule(AwsWafRegionalRuleDetails&& value) { m_awsWafRegionalRuleHasBeenSet = true; m_awsWafRegionalRule = std::move(value); }

    /**
     * <p>Details about an WAF rule for Regional resources. </p>
     */
    inline ResourceDetails& WithAwsWafRegionalRule(const AwsWafRegionalRuleDetails& value) { SetAwsWafRegionalRule(value); return *this;}

    /**
     * <p>Details about an WAF rule for Regional resources. </p>
     */
    inline ResourceDetails& WithAwsWafRegionalRule(AwsWafRegionalRuleDetails&& value) { SetAwsWafRegionalRule(std::move(value)); return *this;}


    /**
     * <p>Details about an WAF web access control list (web ACL) for Regional
     * resources. </p>
     */
    inline const AwsWafRegionalWebAclDetails& GetAwsWafRegionalWebAcl() const{ return m_awsWafRegionalWebAcl; }

    /**
     * <p>Details about an WAF web access control list (web ACL) for Regional
     * resources. </p>
     */
    inline bool AwsWafRegionalWebAclHasBeenSet() const { return m_awsWafRegionalWebAclHasBeenSet; }

    /**
     * <p>Details about an WAF web access control list (web ACL) for Regional
     * resources. </p>
     */
    inline void SetAwsWafRegionalWebAcl(const AwsWafRegionalWebAclDetails& value) { m_awsWafRegionalWebAclHasBeenSet = true; m_awsWafRegionalWebAcl = value; }

    /**
     * <p>Details about an WAF web access control list (web ACL) for Regional
     * resources. </p>
     */
    inline void SetAwsWafRegionalWebAcl(AwsWafRegionalWebAclDetails&& value) { m_awsWafRegionalWebAclHasBeenSet = true; m_awsWafRegionalWebAcl = std::move(value); }

    /**
     * <p>Details about an WAF web access control list (web ACL) for Regional
     * resources. </p>
     */
    inline ResourceDetails& WithAwsWafRegionalWebAcl(const AwsWafRegionalWebAclDetails& value) { SetAwsWafRegionalWebAcl(value); return *this;}

    /**
     * <p>Details about an WAF web access control list (web ACL) for Regional
     * resources. </p>
     */
    inline ResourceDetails& WithAwsWafRegionalWebAcl(AwsWafRegionalWebAclDetails&& value) { SetAwsWafRegionalWebAcl(std::move(value)); return *this;}


    /**
     * <p>Details about an WAF rule for global resources. </p>
     */
    inline const AwsWafRuleDetails& GetAwsWafRule() const{ return m_awsWafRule; }

    /**
     * <p>Details about an WAF rule for global resources. </p>
     */
    inline bool AwsWafRuleHasBeenSet() const { return m_awsWafRuleHasBeenSet; }

    /**
     * <p>Details about an WAF rule for global resources. </p>
     */
    inline void SetAwsWafRule(const AwsWafRuleDetails& value) { m_awsWafRuleHasBeenSet = true; m_awsWafRule = value; }

    /**
     * <p>Details about an WAF rule for global resources. </p>
     */
    inline void SetAwsWafRule(AwsWafRuleDetails&& value) { m_awsWafRuleHasBeenSet = true; m_awsWafRule = std::move(value); }

    /**
     * <p>Details about an WAF rule for global resources. </p>
     */
    inline ResourceDetails& WithAwsWafRule(const AwsWafRuleDetails& value) { SetAwsWafRule(value); return *this;}

    /**
     * <p>Details about an WAF rule for global resources. </p>
     */
    inline ResourceDetails& WithAwsWafRule(AwsWafRuleDetails&& value) { SetAwsWafRule(std::move(value)); return *this;}


    /**
     * <p>Details about an WAF rule group for global resources. </p>
     */
    inline const AwsWafRuleGroupDetails& GetAwsWafRuleGroup() const{ return m_awsWafRuleGroup; }

    /**
     * <p>Details about an WAF rule group for global resources. </p>
     */
    inline bool AwsWafRuleGroupHasBeenSet() const { return m_awsWafRuleGroupHasBeenSet; }

    /**
     * <p>Details about an WAF rule group for global resources. </p>
     */
    inline void SetAwsWafRuleGroup(const AwsWafRuleGroupDetails& value) { m_awsWafRuleGroupHasBeenSet = true; m_awsWafRuleGroup = value; }

    /**
     * <p>Details about an WAF rule group for global resources. </p>
     */
    inline void SetAwsWafRuleGroup(AwsWafRuleGroupDetails&& value) { m_awsWafRuleGroupHasBeenSet = true; m_awsWafRuleGroup = std::move(value); }

    /**
     * <p>Details about an WAF rule group for global resources. </p>
     */
    inline ResourceDetails& WithAwsWafRuleGroup(const AwsWafRuleGroupDetails& value) { SetAwsWafRuleGroup(value); return *this;}

    /**
     * <p>Details about an WAF rule group for global resources. </p>
     */
    inline ResourceDetails& WithAwsWafRuleGroup(AwsWafRuleGroupDetails&& value) { SetAwsWafRuleGroup(std::move(value)); return *this;}


    /**
     * <p>Details about a task in a cluster. </p>
     */
    inline const AwsEcsTaskDetails& GetAwsEcsTask() const{ return m_awsEcsTask; }

    /**
     * <p>Details about a task in a cluster. </p>
     */
    inline bool AwsEcsTaskHasBeenSet() const { return m_awsEcsTaskHasBeenSet; }

    /**
     * <p>Details about a task in a cluster. </p>
     */
    inline void SetAwsEcsTask(const AwsEcsTaskDetails& value) { m_awsEcsTaskHasBeenSet = true; m_awsEcsTask = value; }

    /**
     * <p>Details about a task in a cluster. </p>
     */
    inline void SetAwsEcsTask(AwsEcsTaskDetails&& value) { m_awsEcsTaskHasBeenSet = true; m_awsEcsTask = std::move(value); }

    /**
     * <p>Details about a task in a cluster. </p>
     */
    inline ResourceDetails& WithAwsEcsTask(const AwsEcsTaskDetails& value) { SetAwsEcsTask(value); return *this;}

    /**
     * <p>Details about a task in a cluster. </p>
     */
    inline ResourceDetails& WithAwsEcsTask(AwsEcsTaskDetails&& value) { SetAwsEcsTask(std::move(value)); return *this;}


    /**
     * <p>Provides details about an Backup backup vault. </p>
     */
    inline const AwsBackupBackupVaultDetails& GetAwsBackupBackupVault() const{ return m_awsBackupBackupVault; }

    /**
     * <p>Provides details about an Backup backup vault. </p>
     */
    inline bool AwsBackupBackupVaultHasBeenSet() const { return m_awsBackupBackupVaultHasBeenSet; }

    /**
     * <p>Provides details about an Backup backup vault. </p>
     */
    inline void SetAwsBackupBackupVault(const AwsBackupBackupVaultDetails& value) { m_awsBackupBackupVaultHasBeenSet = true; m_awsBackupBackupVault = value; }

    /**
     * <p>Provides details about an Backup backup vault. </p>
     */
    inline void SetAwsBackupBackupVault(AwsBackupBackupVaultDetails&& value) { m_awsBackupBackupVaultHasBeenSet = true; m_awsBackupBackupVault = std::move(value); }

    /**
     * <p>Provides details about an Backup backup vault. </p>
     */
    inline ResourceDetails& WithAwsBackupBackupVault(const AwsBackupBackupVaultDetails& value) { SetAwsBackupBackupVault(value); return *this;}

    /**
     * <p>Provides details about an Backup backup vault. </p>
     */
    inline ResourceDetails& WithAwsBackupBackupVault(AwsBackupBackupVaultDetails&& value) { SetAwsBackupBackupVault(std::move(value)); return *this;}


    /**
     * <p>Provides details about an Backup backup plan. </p>
     */
    inline const AwsBackupBackupPlanDetails& GetAwsBackupBackupPlan() const{ return m_awsBackupBackupPlan; }

    /**
     * <p>Provides details about an Backup backup plan. </p>
     */
    inline bool AwsBackupBackupPlanHasBeenSet() const { return m_awsBackupBackupPlanHasBeenSet; }

    /**
     * <p>Provides details about an Backup backup plan. </p>
     */
    inline void SetAwsBackupBackupPlan(const AwsBackupBackupPlanDetails& value) { m_awsBackupBackupPlanHasBeenSet = true; m_awsBackupBackupPlan = value; }

    /**
     * <p>Provides details about an Backup backup plan. </p>
     */
    inline void SetAwsBackupBackupPlan(AwsBackupBackupPlanDetails&& value) { m_awsBackupBackupPlanHasBeenSet = true; m_awsBackupBackupPlan = std::move(value); }

    /**
     * <p>Provides details about an Backup backup plan. </p>
     */
    inline ResourceDetails& WithAwsBackupBackupPlan(const AwsBackupBackupPlanDetails& value) { SetAwsBackupBackupPlan(value); return *this;}

    /**
     * <p>Provides details about an Backup backup plan. </p>
     */
    inline ResourceDetails& WithAwsBackupBackupPlan(AwsBackupBackupPlanDetails&& value) { SetAwsBackupBackupPlan(std::move(value)); return *this;}


    /**
     * <p>Provides details about an Backup backup, or recovery point. </p>
     */
    inline const AwsBackupRecoveryPointDetails& GetAwsBackupRecoveryPoint() const{ return m_awsBackupRecoveryPoint; }

    /**
     * <p>Provides details about an Backup backup, or recovery point. </p>
     */
    inline bool AwsBackupRecoveryPointHasBeenSet() const { return m_awsBackupRecoveryPointHasBeenSet; }

    /**
     * <p>Provides details about an Backup backup, or recovery point. </p>
     */
    inline void SetAwsBackupRecoveryPoint(const AwsBackupRecoveryPointDetails& value) { m_awsBackupRecoveryPointHasBeenSet = true; m_awsBackupRecoveryPoint = value; }

    /**
     * <p>Provides details about an Backup backup, or recovery point. </p>
     */
    inline void SetAwsBackupRecoveryPoint(AwsBackupRecoveryPointDetails&& value) { m_awsBackupRecoveryPointHasBeenSet = true; m_awsBackupRecoveryPoint = std::move(value); }

    /**
     * <p>Provides details about an Backup backup, or recovery point. </p>
     */
    inline ResourceDetails& WithAwsBackupRecoveryPoint(const AwsBackupRecoveryPointDetails& value) { SetAwsBackupRecoveryPoint(value); return *this;}

    /**
     * <p>Provides details about an Backup backup, or recovery point. </p>
     */
    inline ResourceDetails& WithAwsBackupRecoveryPoint(AwsBackupRecoveryPointDetails&& value) { SetAwsBackupRecoveryPoint(std::move(value)); return *this;}


    
    inline const AwsEc2LaunchTemplateDetails& GetAwsEc2LaunchTemplate() const{ return m_awsEc2LaunchTemplate; }

    
    inline bool AwsEc2LaunchTemplateHasBeenSet() const { return m_awsEc2LaunchTemplateHasBeenSet; }

    
    inline void SetAwsEc2LaunchTemplate(const AwsEc2LaunchTemplateDetails& value) { m_awsEc2LaunchTemplateHasBeenSet = true; m_awsEc2LaunchTemplate = value; }

    
    inline void SetAwsEc2LaunchTemplate(AwsEc2LaunchTemplateDetails&& value) { m_awsEc2LaunchTemplateHasBeenSet = true; m_awsEc2LaunchTemplate = std::move(value); }

    
    inline ResourceDetails& WithAwsEc2LaunchTemplate(const AwsEc2LaunchTemplateDetails& value) { SetAwsEc2LaunchTemplate(value); return *this;}

    
    inline ResourceDetails& WithAwsEc2LaunchTemplate(AwsEc2LaunchTemplateDetails&& value) { SetAwsEc2LaunchTemplate(std::move(value)); return *this;}


    
    inline const AwsSageMakerNotebookInstanceDetails& GetAwsSageMakerNotebookInstance() const{ return m_awsSageMakerNotebookInstance; }

    
    inline bool AwsSageMakerNotebookInstanceHasBeenSet() const { return m_awsSageMakerNotebookInstanceHasBeenSet; }

    
    inline void SetAwsSageMakerNotebookInstance(const AwsSageMakerNotebookInstanceDetails& value) { m_awsSageMakerNotebookInstanceHasBeenSet = true; m_awsSageMakerNotebookInstance = value; }

    
    inline void SetAwsSageMakerNotebookInstance(AwsSageMakerNotebookInstanceDetails&& value) { m_awsSageMakerNotebookInstanceHasBeenSet = true; m_awsSageMakerNotebookInstance = std::move(value); }

    
    inline ResourceDetails& WithAwsSageMakerNotebookInstance(const AwsSageMakerNotebookInstanceDetails& value) { SetAwsSageMakerNotebookInstance(value); return *this;}

    
    inline ResourceDetails& WithAwsSageMakerNotebookInstance(AwsSageMakerNotebookInstanceDetails&& value) { SetAwsSageMakerNotebookInstance(std::move(value)); return *this;}


    
    inline const AwsWafv2WebAclDetails& GetAwsWafv2WebAcl() const{ return m_awsWafv2WebAcl; }

    
    inline bool AwsWafv2WebAclHasBeenSet() const { return m_awsWafv2WebAclHasBeenSet; }

    
    inline void SetAwsWafv2WebAcl(const AwsWafv2WebAclDetails& value) { m_awsWafv2WebAclHasBeenSet = true; m_awsWafv2WebAcl = value; }

    
    inline void SetAwsWafv2WebAcl(AwsWafv2WebAclDetails&& value) { m_awsWafv2WebAclHasBeenSet = true; m_awsWafv2WebAcl = std::move(value); }

    
    inline ResourceDetails& WithAwsWafv2WebAcl(const AwsWafv2WebAclDetails& value) { SetAwsWafv2WebAcl(value); return *this;}

    
    inline ResourceDetails& WithAwsWafv2WebAcl(AwsWafv2WebAclDetails&& value) { SetAwsWafv2WebAcl(std::move(value)); return *this;}


    
    inline const AwsWafv2RuleGroupDetails& GetAwsWafv2RuleGroup() const{ return m_awsWafv2RuleGroup; }

    
    inline bool AwsWafv2RuleGroupHasBeenSet() const { return m_awsWafv2RuleGroupHasBeenSet; }

    
    inline void SetAwsWafv2RuleGroup(const AwsWafv2RuleGroupDetails& value) { m_awsWafv2RuleGroupHasBeenSet = true; m_awsWafv2RuleGroup = value; }

    
    inline void SetAwsWafv2RuleGroup(AwsWafv2RuleGroupDetails&& value) { m_awsWafv2RuleGroupHasBeenSet = true; m_awsWafv2RuleGroup = std::move(value); }

    
    inline ResourceDetails& WithAwsWafv2RuleGroup(const AwsWafv2RuleGroupDetails& value) { SetAwsWafv2RuleGroup(value); return *this;}

    
    inline ResourceDetails& WithAwsWafv2RuleGroup(AwsWafv2RuleGroupDetails&& value) { SetAwsWafv2RuleGroup(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
