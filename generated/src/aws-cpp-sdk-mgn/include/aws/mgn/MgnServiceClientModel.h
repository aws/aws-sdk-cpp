/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/mgn/MgnErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/mgn/MgnEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in MgnClient header */
#include <aws/mgn/model/ArchiveApplicationResult.h>
#include <aws/mgn/model/ArchiveWaveResult.h>
#include <aws/mgn/model/AssociateApplicationsResult.h>
#include <aws/mgn/model/AssociateSourceServersResult.h>
#include <aws/mgn/model/ChangeServerLifeCycleStateResult.h>
#include <aws/mgn/model/CreateApplicationResult.h>
#include <aws/mgn/model/CreateLaunchConfigurationTemplateResult.h>
#include <aws/mgn/model/CreateReplicationConfigurationTemplateResult.h>
#include <aws/mgn/model/CreateWaveResult.h>
#include <aws/mgn/model/DeleteApplicationResult.h>
#include <aws/mgn/model/DeleteJobResult.h>
#include <aws/mgn/model/DeleteLaunchConfigurationTemplateResult.h>
#include <aws/mgn/model/DeleteReplicationConfigurationTemplateResult.h>
#include <aws/mgn/model/DeleteSourceServerResult.h>
#include <aws/mgn/model/DeleteWaveResult.h>
#include <aws/mgn/model/DescribeJobLogItemsResult.h>
#include <aws/mgn/model/DescribeJobsResult.h>
#include <aws/mgn/model/DescribeLaunchConfigurationTemplatesResult.h>
#include <aws/mgn/model/DescribeReplicationConfigurationTemplatesResult.h>
#include <aws/mgn/model/DescribeSourceServersResult.h>
#include <aws/mgn/model/DescribeVcenterClientsResult.h>
#include <aws/mgn/model/DisassociateApplicationsResult.h>
#include <aws/mgn/model/DisassociateSourceServersResult.h>
#include <aws/mgn/model/DisconnectFromServiceResult.h>
#include <aws/mgn/model/FinalizeCutoverResult.h>
#include <aws/mgn/model/GetLaunchConfigurationResult.h>
#include <aws/mgn/model/GetReplicationConfigurationResult.h>
#include <aws/mgn/model/InitializeServiceResult.h>
#include <aws/mgn/model/ListApplicationsResult.h>
#include <aws/mgn/model/ListSourceServerActionsResult.h>
#include <aws/mgn/model/ListTagsForResourceResult.h>
#include <aws/mgn/model/ListTemplateActionsResult.h>
#include <aws/mgn/model/ListWavesResult.h>
#include <aws/mgn/model/MarkAsArchivedResult.h>
#include <aws/mgn/model/PutSourceServerActionResult.h>
#include <aws/mgn/model/PutTemplateActionResult.h>
#include <aws/mgn/model/RemoveSourceServerActionResult.h>
#include <aws/mgn/model/RemoveTemplateActionResult.h>
#include <aws/mgn/model/RetryDataReplicationResult.h>
#include <aws/mgn/model/StartCutoverResult.h>
#include <aws/mgn/model/StartReplicationResult.h>
#include <aws/mgn/model/StartTestResult.h>
#include <aws/mgn/model/TerminateTargetInstancesResult.h>
#include <aws/mgn/model/UnarchiveApplicationResult.h>
#include <aws/mgn/model/UnarchiveWaveResult.h>
#include <aws/mgn/model/UpdateApplicationResult.h>
#include <aws/mgn/model/UpdateLaunchConfigurationResult.h>
#include <aws/mgn/model/UpdateLaunchConfigurationTemplateResult.h>
#include <aws/mgn/model/UpdateReplicationConfigurationResult.h>
#include <aws/mgn/model/UpdateReplicationConfigurationTemplateResult.h>
#include <aws/mgn/model/UpdateSourceServerReplicationTypeResult.h>
#include <aws/mgn/model/UpdateWaveResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in MgnClient header */

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

  namespace mgn
  {
    using MgnClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using MgnEndpointProviderBase = Aws::mgn::Endpoint::MgnEndpointProviderBase;
    using MgnEndpointProvider = Aws::mgn::Endpoint::MgnEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in MgnClient header */
      class ArchiveApplicationRequest;
      class ArchiveWaveRequest;
      class AssociateApplicationsRequest;
      class AssociateSourceServersRequest;
      class ChangeServerLifeCycleStateRequest;
      class CreateApplicationRequest;
      class CreateLaunchConfigurationTemplateRequest;
      class CreateReplicationConfigurationTemplateRequest;
      class CreateWaveRequest;
      class DeleteApplicationRequest;
      class DeleteJobRequest;
      class DeleteLaunchConfigurationTemplateRequest;
      class DeleteReplicationConfigurationTemplateRequest;
      class DeleteSourceServerRequest;
      class DeleteVcenterClientRequest;
      class DeleteWaveRequest;
      class DescribeJobLogItemsRequest;
      class DescribeJobsRequest;
      class DescribeLaunchConfigurationTemplatesRequest;
      class DescribeReplicationConfigurationTemplatesRequest;
      class DescribeSourceServersRequest;
      class DescribeVcenterClientsRequest;
      class DisassociateApplicationsRequest;
      class DisassociateSourceServersRequest;
      class DisconnectFromServiceRequest;
      class FinalizeCutoverRequest;
      class GetLaunchConfigurationRequest;
      class GetReplicationConfigurationRequest;
      class InitializeServiceRequest;
      class ListApplicationsRequest;
      class ListSourceServerActionsRequest;
      class ListTagsForResourceRequest;
      class ListTemplateActionsRequest;
      class ListWavesRequest;
      class MarkAsArchivedRequest;
      class PutSourceServerActionRequest;
      class PutTemplateActionRequest;
      class RemoveSourceServerActionRequest;
      class RemoveTemplateActionRequest;
      class RetryDataReplicationRequest;
      class StartCutoverRequest;
      class StartReplicationRequest;
      class StartTestRequest;
      class TagResourceRequest;
      class TerminateTargetInstancesRequest;
      class UnarchiveApplicationRequest;
      class UnarchiveWaveRequest;
      class UntagResourceRequest;
      class UpdateApplicationRequest;
      class UpdateLaunchConfigurationRequest;
      class UpdateLaunchConfigurationTemplateRequest;
      class UpdateReplicationConfigurationRequest;
      class UpdateReplicationConfigurationTemplateRequest;
      class UpdateSourceServerReplicationTypeRequest;
      class UpdateWaveRequest;
      /* End of service model forward declarations required in MgnClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<ArchiveApplicationResult, MgnError> ArchiveApplicationOutcome;
      typedef Aws::Utils::Outcome<ArchiveWaveResult, MgnError> ArchiveWaveOutcome;
      typedef Aws::Utils::Outcome<AssociateApplicationsResult, MgnError> AssociateApplicationsOutcome;
      typedef Aws::Utils::Outcome<AssociateSourceServersResult, MgnError> AssociateSourceServersOutcome;
      typedef Aws::Utils::Outcome<ChangeServerLifeCycleStateResult, MgnError> ChangeServerLifeCycleStateOutcome;
      typedef Aws::Utils::Outcome<CreateApplicationResult, MgnError> CreateApplicationOutcome;
      typedef Aws::Utils::Outcome<CreateLaunchConfigurationTemplateResult, MgnError> CreateLaunchConfigurationTemplateOutcome;
      typedef Aws::Utils::Outcome<CreateReplicationConfigurationTemplateResult, MgnError> CreateReplicationConfigurationTemplateOutcome;
      typedef Aws::Utils::Outcome<CreateWaveResult, MgnError> CreateWaveOutcome;
      typedef Aws::Utils::Outcome<DeleteApplicationResult, MgnError> DeleteApplicationOutcome;
      typedef Aws::Utils::Outcome<DeleteJobResult, MgnError> DeleteJobOutcome;
      typedef Aws::Utils::Outcome<DeleteLaunchConfigurationTemplateResult, MgnError> DeleteLaunchConfigurationTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteReplicationConfigurationTemplateResult, MgnError> DeleteReplicationConfigurationTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteSourceServerResult, MgnError> DeleteSourceServerOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, MgnError> DeleteVcenterClientOutcome;
      typedef Aws::Utils::Outcome<DeleteWaveResult, MgnError> DeleteWaveOutcome;
      typedef Aws::Utils::Outcome<DescribeJobLogItemsResult, MgnError> DescribeJobLogItemsOutcome;
      typedef Aws::Utils::Outcome<DescribeJobsResult, MgnError> DescribeJobsOutcome;
      typedef Aws::Utils::Outcome<DescribeLaunchConfigurationTemplatesResult, MgnError> DescribeLaunchConfigurationTemplatesOutcome;
      typedef Aws::Utils::Outcome<DescribeReplicationConfigurationTemplatesResult, MgnError> DescribeReplicationConfigurationTemplatesOutcome;
      typedef Aws::Utils::Outcome<DescribeSourceServersResult, MgnError> DescribeSourceServersOutcome;
      typedef Aws::Utils::Outcome<DescribeVcenterClientsResult, MgnError> DescribeVcenterClientsOutcome;
      typedef Aws::Utils::Outcome<DisassociateApplicationsResult, MgnError> DisassociateApplicationsOutcome;
      typedef Aws::Utils::Outcome<DisassociateSourceServersResult, MgnError> DisassociateSourceServersOutcome;
      typedef Aws::Utils::Outcome<DisconnectFromServiceResult, MgnError> DisconnectFromServiceOutcome;
      typedef Aws::Utils::Outcome<FinalizeCutoverResult, MgnError> FinalizeCutoverOutcome;
      typedef Aws::Utils::Outcome<GetLaunchConfigurationResult, MgnError> GetLaunchConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetReplicationConfigurationResult, MgnError> GetReplicationConfigurationOutcome;
      typedef Aws::Utils::Outcome<InitializeServiceResult, MgnError> InitializeServiceOutcome;
      typedef Aws::Utils::Outcome<ListApplicationsResult, MgnError> ListApplicationsOutcome;
      typedef Aws::Utils::Outcome<ListSourceServerActionsResult, MgnError> ListSourceServerActionsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, MgnError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTemplateActionsResult, MgnError> ListTemplateActionsOutcome;
      typedef Aws::Utils::Outcome<ListWavesResult, MgnError> ListWavesOutcome;
      typedef Aws::Utils::Outcome<MarkAsArchivedResult, MgnError> MarkAsArchivedOutcome;
      typedef Aws::Utils::Outcome<PutSourceServerActionResult, MgnError> PutSourceServerActionOutcome;
      typedef Aws::Utils::Outcome<PutTemplateActionResult, MgnError> PutTemplateActionOutcome;
      typedef Aws::Utils::Outcome<RemoveSourceServerActionResult, MgnError> RemoveSourceServerActionOutcome;
      typedef Aws::Utils::Outcome<RemoveTemplateActionResult, MgnError> RemoveTemplateActionOutcome;
      typedef Aws::Utils::Outcome<RetryDataReplicationResult, MgnError> RetryDataReplicationOutcome;
      typedef Aws::Utils::Outcome<StartCutoverResult, MgnError> StartCutoverOutcome;
      typedef Aws::Utils::Outcome<StartReplicationResult, MgnError> StartReplicationOutcome;
      typedef Aws::Utils::Outcome<StartTestResult, MgnError> StartTestOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, MgnError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<TerminateTargetInstancesResult, MgnError> TerminateTargetInstancesOutcome;
      typedef Aws::Utils::Outcome<UnarchiveApplicationResult, MgnError> UnarchiveApplicationOutcome;
      typedef Aws::Utils::Outcome<UnarchiveWaveResult, MgnError> UnarchiveWaveOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, MgnError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateApplicationResult, MgnError> UpdateApplicationOutcome;
      typedef Aws::Utils::Outcome<UpdateLaunchConfigurationResult, MgnError> UpdateLaunchConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateLaunchConfigurationTemplateResult, MgnError> UpdateLaunchConfigurationTemplateOutcome;
      typedef Aws::Utils::Outcome<UpdateReplicationConfigurationResult, MgnError> UpdateReplicationConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateReplicationConfigurationTemplateResult, MgnError> UpdateReplicationConfigurationTemplateOutcome;
      typedef Aws::Utils::Outcome<UpdateSourceServerReplicationTypeResult, MgnError> UpdateSourceServerReplicationTypeOutcome;
      typedef Aws::Utils::Outcome<UpdateWaveResult, MgnError> UpdateWaveOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<ArchiveApplicationOutcome> ArchiveApplicationOutcomeCallable;
      typedef std::future<ArchiveWaveOutcome> ArchiveWaveOutcomeCallable;
      typedef std::future<AssociateApplicationsOutcome> AssociateApplicationsOutcomeCallable;
      typedef std::future<AssociateSourceServersOutcome> AssociateSourceServersOutcomeCallable;
      typedef std::future<ChangeServerLifeCycleStateOutcome> ChangeServerLifeCycleStateOutcomeCallable;
      typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
      typedef std::future<CreateLaunchConfigurationTemplateOutcome> CreateLaunchConfigurationTemplateOutcomeCallable;
      typedef std::future<CreateReplicationConfigurationTemplateOutcome> CreateReplicationConfigurationTemplateOutcomeCallable;
      typedef std::future<CreateWaveOutcome> CreateWaveOutcomeCallable;
      typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
      typedef std::future<DeleteJobOutcome> DeleteJobOutcomeCallable;
      typedef std::future<DeleteLaunchConfigurationTemplateOutcome> DeleteLaunchConfigurationTemplateOutcomeCallable;
      typedef std::future<DeleteReplicationConfigurationTemplateOutcome> DeleteReplicationConfigurationTemplateOutcomeCallable;
      typedef std::future<DeleteSourceServerOutcome> DeleteSourceServerOutcomeCallable;
      typedef std::future<DeleteVcenterClientOutcome> DeleteVcenterClientOutcomeCallable;
      typedef std::future<DeleteWaveOutcome> DeleteWaveOutcomeCallable;
      typedef std::future<DescribeJobLogItemsOutcome> DescribeJobLogItemsOutcomeCallable;
      typedef std::future<DescribeJobsOutcome> DescribeJobsOutcomeCallable;
      typedef std::future<DescribeLaunchConfigurationTemplatesOutcome> DescribeLaunchConfigurationTemplatesOutcomeCallable;
      typedef std::future<DescribeReplicationConfigurationTemplatesOutcome> DescribeReplicationConfigurationTemplatesOutcomeCallable;
      typedef std::future<DescribeSourceServersOutcome> DescribeSourceServersOutcomeCallable;
      typedef std::future<DescribeVcenterClientsOutcome> DescribeVcenterClientsOutcomeCallable;
      typedef std::future<DisassociateApplicationsOutcome> DisassociateApplicationsOutcomeCallable;
      typedef std::future<DisassociateSourceServersOutcome> DisassociateSourceServersOutcomeCallable;
      typedef std::future<DisconnectFromServiceOutcome> DisconnectFromServiceOutcomeCallable;
      typedef std::future<FinalizeCutoverOutcome> FinalizeCutoverOutcomeCallable;
      typedef std::future<GetLaunchConfigurationOutcome> GetLaunchConfigurationOutcomeCallable;
      typedef std::future<GetReplicationConfigurationOutcome> GetReplicationConfigurationOutcomeCallable;
      typedef std::future<InitializeServiceOutcome> InitializeServiceOutcomeCallable;
      typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
      typedef std::future<ListSourceServerActionsOutcome> ListSourceServerActionsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTemplateActionsOutcome> ListTemplateActionsOutcomeCallable;
      typedef std::future<ListWavesOutcome> ListWavesOutcomeCallable;
      typedef std::future<MarkAsArchivedOutcome> MarkAsArchivedOutcomeCallable;
      typedef std::future<PutSourceServerActionOutcome> PutSourceServerActionOutcomeCallable;
      typedef std::future<PutTemplateActionOutcome> PutTemplateActionOutcomeCallable;
      typedef std::future<RemoveSourceServerActionOutcome> RemoveSourceServerActionOutcomeCallable;
      typedef std::future<RemoveTemplateActionOutcome> RemoveTemplateActionOutcomeCallable;
      typedef std::future<RetryDataReplicationOutcome> RetryDataReplicationOutcomeCallable;
      typedef std::future<StartCutoverOutcome> StartCutoverOutcomeCallable;
      typedef std::future<StartReplicationOutcome> StartReplicationOutcomeCallable;
      typedef std::future<StartTestOutcome> StartTestOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<TerminateTargetInstancesOutcome> TerminateTargetInstancesOutcomeCallable;
      typedef std::future<UnarchiveApplicationOutcome> UnarchiveApplicationOutcomeCallable;
      typedef std::future<UnarchiveWaveOutcome> UnarchiveWaveOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
      typedef std::future<UpdateLaunchConfigurationOutcome> UpdateLaunchConfigurationOutcomeCallable;
      typedef std::future<UpdateLaunchConfigurationTemplateOutcome> UpdateLaunchConfigurationTemplateOutcomeCallable;
      typedef std::future<UpdateReplicationConfigurationOutcome> UpdateReplicationConfigurationOutcomeCallable;
      typedef std::future<UpdateReplicationConfigurationTemplateOutcome> UpdateReplicationConfigurationTemplateOutcomeCallable;
      typedef std::future<UpdateSourceServerReplicationTypeOutcome> UpdateSourceServerReplicationTypeOutcomeCallable;
      typedef std::future<UpdateWaveOutcome> UpdateWaveOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class MgnClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const MgnClient*, const Model::ArchiveApplicationRequest&, const Model::ArchiveApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ArchiveApplicationResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::ArchiveWaveRequest&, const Model::ArchiveWaveOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ArchiveWaveResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::AssociateApplicationsRequest&, const Model::AssociateApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateApplicationsResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::AssociateSourceServersRequest&, const Model::AssociateSourceServersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateSourceServersResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::ChangeServerLifeCycleStateRequest&, const Model::ChangeServerLifeCycleStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ChangeServerLifeCycleStateResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::CreateLaunchConfigurationTemplateRequest&, const Model::CreateLaunchConfigurationTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLaunchConfigurationTemplateResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::CreateReplicationConfigurationTemplateRequest&, const Model::CreateReplicationConfigurationTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReplicationConfigurationTemplateResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::CreateWaveRequest&, const Model::CreateWaveOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWaveResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::DeleteJobRequest&, const Model::DeleteJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteJobResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::DeleteLaunchConfigurationTemplateRequest&, const Model::DeleteLaunchConfigurationTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLaunchConfigurationTemplateResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::DeleteReplicationConfigurationTemplateRequest&, const Model::DeleteReplicationConfigurationTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReplicationConfigurationTemplateResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::DeleteSourceServerRequest&, const Model::DeleteSourceServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSourceServerResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::DeleteVcenterClientRequest&, const Model::DeleteVcenterClientOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVcenterClientResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::DeleteWaveRequest&, const Model::DeleteWaveOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWaveResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::DescribeJobLogItemsRequest&, const Model::DescribeJobLogItemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobLogItemsResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::DescribeJobsRequest&, const Model::DescribeJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobsResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::DescribeLaunchConfigurationTemplatesRequest&, const Model::DescribeLaunchConfigurationTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLaunchConfigurationTemplatesResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::DescribeReplicationConfigurationTemplatesRequest&, const Model::DescribeReplicationConfigurationTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReplicationConfigurationTemplatesResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::DescribeSourceServersRequest&, const Model::DescribeSourceServersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSourceServersResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::DescribeVcenterClientsRequest&, const Model::DescribeVcenterClientsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVcenterClientsResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::DisassociateApplicationsRequest&, const Model::DisassociateApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateApplicationsResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::DisassociateSourceServersRequest&, const Model::DisassociateSourceServersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateSourceServersResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::DisconnectFromServiceRequest&, const Model::DisconnectFromServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisconnectFromServiceResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::FinalizeCutoverRequest&, const Model::FinalizeCutoverOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > FinalizeCutoverResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::GetLaunchConfigurationRequest&, const Model::GetLaunchConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLaunchConfigurationResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::GetReplicationConfigurationRequest&, const Model::GetReplicationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReplicationConfigurationResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::InitializeServiceRequest&, const Model::InitializeServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InitializeServiceResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::ListApplicationsRequest&, const Model::ListApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationsResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::ListSourceServerActionsRequest&, const Model::ListSourceServerActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSourceServerActionsResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::ListTemplateActionsRequest&, const Model::ListTemplateActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTemplateActionsResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::ListWavesRequest&, const Model::ListWavesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWavesResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::MarkAsArchivedRequest&, const Model::MarkAsArchivedOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > MarkAsArchivedResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::PutSourceServerActionRequest&, const Model::PutSourceServerActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutSourceServerActionResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::PutTemplateActionRequest&, const Model::PutTemplateActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutTemplateActionResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::RemoveSourceServerActionRequest&, const Model::RemoveSourceServerActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveSourceServerActionResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::RemoveTemplateActionRequest&, const Model::RemoveTemplateActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTemplateActionResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::RetryDataReplicationRequest&, const Model::RetryDataReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RetryDataReplicationResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::StartCutoverRequest&, const Model::StartCutoverOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartCutoverResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::StartReplicationRequest&, const Model::StartReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartReplicationResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::StartTestRequest&, const Model::StartTestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTestResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::TerminateTargetInstancesRequest&, const Model::TerminateTargetInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateTargetInstancesResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::UnarchiveApplicationRequest&, const Model::UnarchiveApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnarchiveApplicationResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::UnarchiveWaveRequest&, const Model::UnarchiveWaveOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnarchiveWaveResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::UpdateLaunchConfigurationRequest&, const Model::UpdateLaunchConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLaunchConfigurationResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::UpdateLaunchConfigurationTemplateRequest&, const Model::UpdateLaunchConfigurationTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLaunchConfigurationTemplateResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::UpdateReplicationConfigurationRequest&, const Model::UpdateReplicationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateReplicationConfigurationResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::UpdateReplicationConfigurationTemplateRequest&, const Model::UpdateReplicationConfigurationTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateReplicationConfigurationTemplateResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::UpdateSourceServerReplicationTypeRequest&, const Model::UpdateSourceServerReplicationTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSourceServerReplicationTypeResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::UpdateWaveRequest&, const Model::UpdateWaveOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWaveResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace mgn
} // namespace Aws
