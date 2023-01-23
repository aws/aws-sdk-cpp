/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/opsworks/OpsWorksErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/opsworks/OpsWorksEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in OpsWorksClient header */
#include <aws/opsworks/model/CloneStackResult.h>
#include <aws/opsworks/model/CreateAppResult.h>
#include <aws/opsworks/model/CreateDeploymentResult.h>
#include <aws/opsworks/model/CreateInstanceResult.h>
#include <aws/opsworks/model/CreateLayerResult.h>
#include <aws/opsworks/model/CreateStackResult.h>
#include <aws/opsworks/model/CreateUserProfileResult.h>
#include <aws/opsworks/model/DescribeAgentVersionsResult.h>
#include <aws/opsworks/model/DescribeAppsResult.h>
#include <aws/opsworks/model/DescribeCommandsResult.h>
#include <aws/opsworks/model/DescribeDeploymentsResult.h>
#include <aws/opsworks/model/DescribeEcsClustersResult.h>
#include <aws/opsworks/model/DescribeElasticIpsResult.h>
#include <aws/opsworks/model/DescribeElasticLoadBalancersResult.h>
#include <aws/opsworks/model/DescribeInstancesResult.h>
#include <aws/opsworks/model/DescribeLayersResult.h>
#include <aws/opsworks/model/DescribeLoadBasedAutoScalingResult.h>
#include <aws/opsworks/model/DescribeMyUserProfileResult.h>
#include <aws/opsworks/model/DescribeOperatingSystemsResult.h>
#include <aws/opsworks/model/DescribePermissionsResult.h>
#include <aws/opsworks/model/DescribeRaidArraysResult.h>
#include <aws/opsworks/model/DescribeRdsDbInstancesResult.h>
#include <aws/opsworks/model/DescribeServiceErrorsResult.h>
#include <aws/opsworks/model/DescribeStackProvisioningParametersResult.h>
#include <aws/opsworks/model/DescribeStackSummaryResult.h>
#include <aws/opsworks/model/DescribeStacksResult.h>
#include <aws/opsworks/model/DescribeTimeBasedAutoScalingResult.h>
#include <aws/opsworks/model/DescribeUserProfilesResult.h>
#include <aws/opsworks/model/DescribeVolumesResult.h>
#include <aws/opsworks/model/GetHostnameSuggestionResult.h>
#include <aws/opsworks/model/GrantAccessResult.h>
#include <aws/opsworks/model/ListTagsResult.h>
#include <aws/opsworks/model/RegisterEcsClusterResult.h>
#include <aws/opsworks/model/RegisterElasticIpResult.h>
#include <aws/opsworks/model/RegisterInstanceResult.h>
#include <aws/opsworks/model/RegisterVolumeResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in OpsWorksClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace OpsWorks
  {
    using OpsWorksClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using OpsWorksEndpointProviderBase = Aws::OpsWorks::Endpoint::OpsWorksEndpointProviderBase;
    using OpsWorksEndpointProvider = Aws::OpsWorks::Endpoint::OpsWorksEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in OpsWorksClient header */
      class AssignInstanceRequest;
      class AssignVolumeRequest;
      class AssociateElasticIpRequest;
      class AttachElasticLoadBalancerRequest;
      class CloneStackRequest;
      class CreateAppRequest;
      class CreateDeploymentRequest;
      class CreateInstanceRequest;
      class CreateLayerRequest;
      class CreateStackRequest;
      class CreateUserProfileRequest;
      class DeleteAppRequest;
      class DeleteInstanceRequest;
      class DeleteLayerRequest;
      class DeleteStackRequest;
      class DeleteUserProfileRequest;
      class DeregisterEcsClusterRequest;
      class DeregisterElasticIpRequest;
      class DeregisterInstanceRequest;
      class DeregisterRdsDbInstanceRequest;
      class DeregisterVolumeRequest;
      class DescribeAgentVersionsRequest;
      class DescribeAppsRequest;
      class DescribeCommandsRequest;
      class DescribeDeploymentsRequest;
      class DescribeEcsClustersRequest;
      class DescribeElasticIpsRequest;
      class DescribeElasticLoadBalancersRequest;
      class DescribeInstancesRequest;
      class DescribeLayersRequest;
      class DescribeLoadBasedAutoScalingRequest;
      class DescribePermissionsRequest;
      class DescribeRaidArraysRequest;
      class DescribeRdsDbInstancesRequest;
      class DescribeServiceErrorsRequest;
      class DescribeStackProvisioningParametersRequest;
      class DescribeStackSummaryRequest;
      class DescribeStacksRequest;
      class DescribeTimeBasedAutoScalingRequest;
      class DescribeUserProfilesRequest;
      class DescribeVolumesRequest;
      class DetachElasticLoadBalancerRequest;
      class DisassociateElasticIpRequest;
      class GetHostnameSuggestionRequest;
      class GrantAccessRequest;
      class ListTagsRequest;
      class RebootInstanceRequest;
      class RegisterEcsClusterRequest;
      class RegisterElasticIpRequest;
      class RegisterInstanceRequest;
      class RegisterRdsDbInstanceRequest;
      class RegisterVolumeRequest;
      class SetLoadBasedAutoScalingRequest;
      class SetPermissionRequest;
      class SetTimeBasedAutoScalingRequest;
      class StartInstanceRequest;
      class StartStackRequest;
      class StopInstanceRequest;
      class StopStackRequest;
      class TagResourceRequest;
      class UnassignInstanceRequest;
      class UnassignVolumeRequest;
      class UntagResourceRequest;
      class UpdateAppRequest;
      class UpdateElasticIpRequest;
      class UpdateInstanceRequest;
      class UpdateLayerRequest;
      class UpdateMyUserProfileRequest;
      class UpdateRdsDbInstanceRequest;
      class UpdateStackRequest;
      class UpdateUserProfileRequest;
      class UpdateVolumeRequest;
      /* End of service model forward declarations required in OpsWorksClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> AssignInstanceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> AssignVolumeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> AssociateElasticIpOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> AttachElasticLoadBalancerOutcome;
      typedef Aws::Utils::Outcome<CloneStackResult, OpsWorksError> CloneStackOutcome;
      typedef Aws::Utils::Outcome<CreateAppResult, OpsWorksError> CreateAppOutcome;
      typedef Aws::Utils::Outcome<CreateDeploymentResult, OpsWorksError> CreateDeploymentOutcome;
      typedef Aws::Utils::Outcome<CreateInstanceResult, OpsWorksError> CreateInstanceOutcome;
      typedef Aws::Utils::Outcome<CreateLayerResult, OpsWorksError> CreateLayerOutcome;
      typedef Aws::Utils::Outcome<CreateStackResult, OpsWorksError> CreateStackOutcome;
      typedef Aws::Utils::Outcome<CreateUserProfileResult, OpsWorksError> CreateUserProfileOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> DeleteAppOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> DeleteInstanceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> DeleteLayerOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> DeleteStackOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> DeleteUserProfileOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> DeregisterEcsClusterOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> DeregisterElasticIpOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> DeregisterInstanceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> DeregisterRdsDbInstanceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> DeregisterVolumeOutcome;
      typedef Aws::Utils::Outcome<DescribeAgentVersionsResult, OpsWorksError> DescribeAgentVersionsOutcome;
      typedef Aws::Utils::Outcome<DescribeAppsResult, OpsWorksError> DescribeAppsOutcome;
      typedef Aws::Utils::Outcome<DescribeCommandsResult, OpsWorksError> DescribeCommandsOutcome;
      typedef Aws::Utils::Outcome<DescribeDeploymentsResult, OpsWorksError> DescribeDeploymentsOutcome;
      typedef Aws::Utils::Outcome<DescribeEcsClustersResult, OpsWorksError> DescribeEcsClustersOutcome;
      typedef Aws::Utils::Outcome<DescribeElasticIpsResult, OpsWorksError> DescribeElasticIpsOutcome;
      typedef Aws::Utils::Outcome<DescribeElasticLoadBalancersResult, OpsWorksError> DescribeElasticLoadBalancersOutcome;
      typedef Aws::Utils::Outcome<DescribeInstancesResult, OpsWorksError> DescribeInstancesOutcome;
      typedef Aws::Utils::Outcome<DescribeLayersResult, OpsWorksError> DescribeLayersOutcome;
      typedef Aws::Utils::Outcome<DescribeLoadBasedAutoScalingResult, OpsWorksError> DescribeLoadBasedAutoScalingOutcome;
      typedef Aws::Utils::Outcome<DescribeMyUserProfileResult, OpsWorksError> DescribeMyUserProfileOutcome;
      typedef Aws::Utils::Outcome<DescribeOperatingSystemsResult, OpsWorksError> DescribeOperatingSystemsOutcome;
      typedef Aws::Utils::Outcome<DescribePermissionsResult, OpsWorksError> DescribePermissionsOutcome;
      typedef Aws::Utils::Outcome<DescribeRaidArraysResult, OpsWorksError> DescribeRaidArraysOutcome;
      typedef Aws::Utils::Outcome<DescribeRdsDbInstancesResult, OpsWorksError> DescribeRdsDbInstancesOutcome;
      typedef Aws::Utils::Outcome<DescribeServiceErrorsResult, OpsWorksError> DescribeServiceErrorsOutcome;
      typedef Aws::Utils::Outcome<DescribeStackProvisioningParametersResult, OpsWorksError> DescribeStackProvisioningParametersOutcome;
      typedef Aws::Utils::Outcome<DescribeStackSummaryResult, OpsWorksError> DescribeStackSummaryOutcome;
      typedef Aws::Utils::Outcome<DescribeStacksResult, OpsWorksError> DescribeStacksOutcome;
      typedef Aws::Utils::Outcome<DescribeTimeBasedAutoScalingResult, OpsWorksError> DescribeTimeBasedAutoScalingOutcome;
      typedef Aws::Utils::Outcome<DescribeUserProfilesResult, OpsWorksError> DescribeUserProfilesOutcome;
      typedef Aws::Utils::Outcome<DescribeVolumesResult, OpsWorksError> DescribeVolumesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> DetachElasticLoadBalancerOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> DisassociateElasticIpOutcome;
      typedef Aws::Utils::Outcome<GetHostnameSuggestionResult, OpsWorksError> GetHostnameSuggestionOutcome;
      typedef Aws::Utils::Outcome<GrantAccessResult, OpsWorksError> GrantAccessOutcome;
      typedef Aws::Utils::Outcome<ListTagsResult, OpsWorksError> ListTagsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> RebootInstanceOutcome;
      typedef Aws::Utils::Outcome<RegisterEcsClusterResult, OpsWorksError> RegisterEcsClusterOutcome;
      typedef Aws::Utils::Outcome<RegisterElasticIpResult, OpsWorksError> RegisterElasticIpOutcome;
      typedef Aws::Utils::Outcome<RegisterInstanceResult, OpsWorksError> RegisterInstanceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> RegisterRdsDbInstanceOutcome;
      typedef Aws::Utils::Outcome<RegisterVolumeResult, OpsWorksError> RegisterVolumeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> SetLoadBasedAutoScalingOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> SetPermissionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> SetTimeBasedAutoScalingOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> StartInstanceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> StartStackOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> StopInstanceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> StopStackOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> UnassignInstanceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> UnassignVolumeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> UpdateAppOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> UpdateElasticIpOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> UpdateInstanceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> UpdateLayerOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> UpdateMyUserProfileOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> UpdateRdsDbInstanceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> UpdateStackOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> UpdateUserProfileOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpsWorksError> UpdateVolumeOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssignInstanceOutcome> AssignInstanceOutcomeCallable;
      typedef std::future<AssignVolumeOutcome> AssignVolumeOutcomeCallable;
      typedef std::future<AssociateElasticIpOutcome> AssociateElasticIpOutcomeCallable;
      typedef std::future<AttachElasticLoadBalancerOutcome> AttachElasticLoadBalancerOutcomeCallable;
      typedef std::future<CloneStackOutcome> CloneStackOutcomeCallable;
      typedef std::future<CreateAppOutcome> CreateAppOutcomeCallable;
      typedef std::future<CreateDeploymentOutcome> CreateDeploymentOutcomeCallable;
      typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
      typedef std::future<CreateLayerOutcome> CreateLayerOutcomeCallable;
      typedef std::future<CreateStackOutcome> CreateStackOutcomeCallable;
      typedef std::future<CreateUserProfileOutcome> CreateUserProfileOutcomeCallable;
      typedef std::future<DeleteAppOutcome> DeleteAppOutcomeCallable;
      typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
      typedef std::future<DeleteLayerOutcome> DeleteLayerOutcomeCallable;
      typedef std::future<DeleteStackOutcome> DeleteStackOutcomeCallable;
      typedef std::future<DeleteUserProfileOutcome> DeleteUserProfileOutcomeCallable;
      typedef std::future<DeregisterEcsClusterOutcome> DeregisterEcsClusterOutcomeCallable;
      typedef std::future<DeregisterElasticIpOutcome> DeregisterElasticIpOutcomeCallable;
      typedef std::future<DeregisterInstanceOutcome> DeregisterInstanceOutcomeCallable;
      typedef std::future<DeregisterRdsDbInstanceOutcome> DeregisterRdsDbInstanceOutcomeCallable;
      typedef std::future<DeregisterVolumeOutcome> DeregisterVolumeOutcomeCallable;
      typedef std::future<DescribeAgentVersionsOutcome> DescribeAgentVersionsOutcomeCallable;
      typedef std::future<DescribeAppsOutcome> DescribeAppsOutcomeCallable;
      typedef std::future<DescribeCommandsOutcome> DescribeCommandsOutcomeCallable;
      typedef std::future<DescribeDeploymentsOutcome> DescribeDeploymentsOutcomeCallable;
      typedef std::future<DescribeEcsClustersOutcome> DescribeEcsClustersOutcomeCallable;
      typedef std::future<DescribeElasticIpsOutcome> DescribeElasticIpsOutcomeCallable;
      typedef std::future<DescribeElasticLoadBalancersOutcome> DescribeElasticLoadBalancersOutcomeCallable;
      typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
      typedef std::future<DescribeLayersOutcome> DescribeLayersOutcomeCallable;
      typedef std::future<DescribeLoadBasedAutoScalingOutcome> DescribeLoadBasedAutoScalingOutcomeCallable;
      typedef std::future<DescribeMyUserProfileOutcome> DescribeMyUserProfileOutcomeCallable;
      typedef std::future<DescribeOperatingSystemsOutcome> DescribeOperatingSystemsOutcomeCallable;
      typedef std::future<DescribePermissionsOutcome> DescribePermissionsOutcomeCallable;
      typedef std::future<DescribeRaidArraysOutcome> DescribeRaidArraysOutcomeCallable;
      typedef std::future<DescribeRdsDbInstancesOutcome> DescribeRdsDbInstancesOutcomeCallable;
      typedef std::future<DescribeServiceErrorsOutcome> DescribeServiceErrorsOutcomeCallable;
      typedef std::future<DescribeStackProvisioningParametersOutcome> DescribeStackProvisioningParametersOutcomeCallable;
      typedef std::future<DescribeStackSummaryOutcome> DescribeStackSummaryOutcomeCallable;
      typedef std::future<DescribeStacksOutcome> DescribeStacksOutcomeCallable;
      typedef std::future<DescribeTimeBasedAutoScalingOutcome> DescribeTimeBasedAutoScalingOutcomeCallable;
      typedef std::future<DescribeUserProfilesOutcome> DescribeUserProfilesOutcomeCallable;
      typedef std::future<DescribeVolumesOutcome> DescribeVolumesOutcomeCallable;
      typedef std::future<DetachElasticLoadBalancerOutcome> DetachElasticLoadBalancerOutcomeCallable;
      typedef std::future<DisassociateElasticIpOutcome> DisassociateElasticIpOutcomeCallable;
      typedef std::future<GetHostnameSuggestionOutcome> GetHostnameSuggestionOutcomeCallable;
      typedef std::future<GrantAccessOutcome> GrantAccessOutcomeCallable;
      typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
      typedef std::future<RebootInstanceOutcome> RebootInstanceOutcomeCallable;
      typedef std::future<RegisterEcsClusterOutcome> RegisterEcsClusterOutcomeCallable;
      typedef std::future<RegisterElasticIpOutcome> RegisterElasticIpOutcomeCallable;
      typedef std::future<RegisterInstanceOutcome> RegisterInstanceOutcomeCallable;
      typedef std::future<RegisterRdsDbInstanceOutcome> RegisterRdsDbInstanceOutcomeCallable;
      typedef std::future<RegisterVolumeOutcome> RegisterVolumeOutcomeCallable;
      typedef std::future<SetLoadBasedAutoScalingOutcome> SetLoadBasedAutoScalingOutcomeCallable;
      typedef std::future<SetPermissionOutcome> SetPermissionOutcomeCallable;
      typedef std::future<SetTimeBasedAutoScalingOutcome> SetTimeBasedAutoScalingOutcomeCallable;
      typedef std::future<StartInstanceOutcome> StartInstanceOutcomeCallable;
      typedef std::future<StartStackOutcome> StartStackOutcomeCallable;
      typedef std::future<StopInstanceOutcome> StopInstanceOutcomeCallable;
      typedef std::future<StopStackOutcome> StopStackOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UnassignInstanceOutcome> UnassignInstanceOutcomeCallable;
      typedef std::future<UnassignVolumeOutcome> UnassignVolumeOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAppOutcome> UpdateAppOutcomeCallable;
      typedef std::future<UpdateElasticIpOutcome> UpdateElasticIpOutcomeCallable;
      typedef std::future<UpdateInstanceOutcome> UpdateInstanceOutcomeCallable;
      typedef std::future<UpdateLayerOutcome> UpdateLayerOutcomeCallable;
      typedef std::future<UpdateMyUserProfileOutcome> UpdateMyUserProfileOutcomeCallable;
      typedef std::future<UpdateRdsDbInstanceOutcome> UpdateRdsDbInstanceOutcomeCallable;
      typedef std::future<UpdateStackOutcome> UpdateStackOutcomeCallable;
      typedef std::future<UpdateUserProfileOutcome> UpdateUserProfileOutcomeCallable;
      typedef std::future<UpdateVolumeOutcome> UpdateVolumeOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class OpsWorksClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const OpsWorksClient*, const Model::AssignInstanceRequest&, const Model::AssignInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssignInstanceResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::AssignVolumeRequest&, const Model::AssignVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssignVolumeResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::AssociateElasticIpRequest&, const Model::AssociateElasticIpOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateElasticIpResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::AttachElasticLoadBalancerRequest&, const Model::AttachElasticLoadBalancerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachElasticLoadBalancerResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::CloneStackRequest&, const Model::CloneStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CloneStackResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::CreateAppRequest&, const Model::CreateAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAppResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::CreateDeploymentRequest&, const Model::CreateDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeploymentResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::CreateInstanceRequest&, const Model::CreateInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInstanceResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::CreateLayerRequest&, const Model::CreateLayerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLayerResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::CreateStackRequest&, const Model::CreateStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStackResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::CreateUserProfileRequest&, const Model::CreateUserProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserProfileResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DeleteAppRequest&, const Model::DeleteAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DeleteInstanceRequest&, const Model::DeleteInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInstanceResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DeleteLayerRequest&, const Model::DeleteLayerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLayerResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DeleteStackRequest&, const Model::DeleteStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStackResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DeleteUserProfileRequest&, const Model::DeleteUserProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserProfileResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DeregisterEcsClusterRequest&, const Model::DeregisterEcsClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterEcsClusterResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DeregisterElasticIpRequest&, const Model::DeregisterElasticIpOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterElasticIpResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DeregisterInstanceRequest&, const Model::DeregisterInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterInstanceResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DeregisterRdsDbInstanceRequest&, const Model::DeregisterRdsDbInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterRdsDbInstanceResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DeregisterVolumeRequest&, const Model::DeregisterVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterVolumeResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeAgentVersionsRequest&, const Model::DescribeAgentVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAgentVersionsResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeAppsRequest&, const Model::DescribeAppsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAppsResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeCommandsRequest&, const Model::DescribeCommandsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCommandsResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeDeploymentsRequest&, const Model::DescribeDeploymentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDeploymentsResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeEcsClustersRequest&, const Model::DescribeEcsClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEcsClustersResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeElasticIpsRequest&, const Model::DescribeElasticIpsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeElasticIpsResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeElasticLoadBalancersRequest&, const Model::DescribeElasticLoadBalancersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeElasticLoadBalancersResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeInstancesRequest&, const Model::DescribeInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstancesResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeLayersRequest&, const Model::DescribeLayersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLayersResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeLoadBasedAutoScalingRequest&, const Model::DescribeLoadBasedAutoScalingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLoadBasedAutoScalingResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeMyUserProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMyUserProfileResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeOperatingSystemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOperatingSystemsResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribePermissionsRequest&, const Model::DescribePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePermissionsResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeRaidArraysRequest&, const Model::DescribeRaidArraysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRaidArraysResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeRdsDbInstancesRequest&, const Model::DescribeRdsDbInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRdsDbInstancesResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeServiceErrorsRequest&, const Model::DescribeServiceErrorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeServiceErrorsResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeStackProvisioningParametersRequest&, const Model::DescribeStackProvisioningParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStackProvisioningParametersResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeStackSummaryRequest&, const Model::DescribeStackSummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStackSummaryResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeStacksRequest&, const Model::DescribeStacksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStacksResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeTimeBasedAutoScalingRequest&, const Model::DescribeTimeBasedAutoScalingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTimeBasedAutoScalingResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeUserProfilesRequest&, const Model::DescribeUserProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserProfilesResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeVolumesRequest&, const Model::DescribeVolumesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVolumesResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DetachElasticLoadBalancerRequest&, const Model::DetachElasticLoadBalancerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachElasticLoadBalancerResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DisassociateElasticIpRequest&, const Model::DisassociateElasticIpOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateElasticIpResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::GetHostnameSuggestionRequest&, const Model::GetHostnameSuggestionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetHostnameSuggestionResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::GrantAccessRequest&, const Model::GrantAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GrantAccessResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::ListTagsRequest&, const Model::ListTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::RebootInstanceRequest&, const Model::RebootInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebootInstanceResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::RegisterEcsClusterRequest&, const Model::RegisterEcsClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterEcsClusterResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::RegisterElasticIpRequest&, const Model::RegisterElasticIpOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterElasticIpResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::RegisterInstanceRequest&, const Model::RegisterInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterInstanceResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::RegisterRdsDbInstanceRequest&, const Model::RegisterRdsDbInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterRdsDbInstanceResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::RegisterVolumeRequest&, const Model::RegisterVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterVolumeResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::SetLoadBasedAutoScalingRequest&, const Model::SetLoadBasedAutoScalingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetLoadBasedAutoScalingResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::SetPermissionRequest&, const Model::SetPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetPermissionResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::SetTimeBasedAutoScalingRequest&, const Model::SetTimeBasedAutoScalingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetTimeBasedAutoScalingResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::StartInstanceRequest&, const Model::StartInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartInstanceResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::StartStackRequest&, const Model::StartStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartStackResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::StopInstanceRequest&, const Model::StopInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopInstanceResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::StopStackRequest&, const Model::StopStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopStackResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::UnassignInstanceRequest&, const Model::UnassignInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnassignInstanceResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::UnassignVolumeRequest&, const Model::UnassignVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnassignVolumeResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::UpdateAppRequest&, const Model::UpdateAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAppResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::UpdateElasticIpRequest&, const Model::UpdateElasticIpOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateElasticIpResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::UpdateInstanceRequest&, const Model::UpdateInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInstanceResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::UpdateLayerRequest&, const Model::UpdateLayerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLayerResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::UpdateMyUserProfileRequest&, const Model::UpdateMyUserProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMyUserProfileResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::UpdateRdsDbInstanceRequest&, const Model::UpdateRdsDbInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRdsDbInstanceResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::UpdateStackRequest&, const Model::UpdateStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStackResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::UpdateUserProfileRequest&, const Model::UpdateUserProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserProfileResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::UpdateVolumeRequest&, const Model::UpdateVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVolumeResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace OpsWorks
} // namespace Aws
