/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/sms/SMSErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/sms/SMSEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SMSClient header */
#include <aws/sms/model/CreateAppResult.h>
#include <aws/sms/model/CreateReplicationJobResult.h>
#include <aws/sms/model/DeleteAppResult.h>
#include <aws/sms/model/DeleteAppLaunchConfigurationResult.h>
#include <aws/sms/model/DeleteAppReplicationConfigurationResult.h>
#include <aws/sms/model/DeleteAppValidationConfigurationResult.h>
#include <aws/sms/model/DeleteReplicationJobResult.h>
#include <aws/sms/model/DeleteServerCatalogResult.h>
#include <aws/sms/model/DisassociateConnectorResult.h>
#include <aws/sms/model/GenerateChangeSetResult.h>
#include <aws/sms/model/GenerateTemplateResult.h>
#include <aws/sms/model/GetAppResult.h>
#include <aws/sms/model/GetAppLaunchConfigurationResult.h>
#include <aws/sms/model/GetAppReplicationConfigurationResult.h>
#include <aws/sms/model/GetAppValidationConfigurationResult.h>
#include <aws/sms/model/GetAppValidationOutputResult.h>
#include <aws/sms/model/GetConnectorsResult.h>
#include <aws/sms/model/GetReplicationJobsResult.h>
#include <aws/sms/model/GetReplicationRunsResult.h>
#include <aws/sms/model/GetServersResult.h>
#include <aws/sms/model/ImportAppCatalogResult.h>
#include <aws/sms/model/ImportServerCatalogResult.h>
#include <aws/sms/model/LaunchAppResult.h>
#include <aws/sms/model/ListAppsResult.h>
#include <aws/sms/model/NotifyAppValidationOutputResult.h>
#include <aws/sms/model/PutAppLaunchConfigurationResult.h>
#include <aws/sms/model/PutAppReplicationConfigurationResult.h>
#include <aws/sms/model/PutAppValidationConfigurationResult.h>
#include <aws/sms/model/StartAppReplicationResult.h>
#include <aws/sms/model/StartOnDemandAppReplicationResult.h>
#include <aws/sms/model/StartOnDemandReplicationRunResult.h>
#include <aws/sms/model/StopAppReplicationResult.h>
#include <aws/sms/model/TerminateAppResult.h>
#include <aws/sms/model/UpdateAppResult.h>
#include <aws/sms/model/UpdateReplicationJobResult.h>
/* End of service model headers required in SMSClient header */

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

  namespace SMS
  {
    using SMSClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using SMSEndpointProviderBase = Aws::SMS::Endpoint::SMSEndpointProviderBase;
    using SMSEndpointProvider = Aws::SMS::Endpoint::SMSEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SMSClient header */
      class CreateAppRequest;
      class CreateReplicationJobRequest;
      class DeleteAppRequest;
      class DeleteAppLaunchConfigurationRequest;
      class DeleteAppReplicationConfigurationRequest;
      class DeleteAppValidationConfigurationRequest;
      class DeleteReplicationJobRequest;
      class DeleteServerCatalogRequest;
      class DisassociateConnectorRequest;
      class GenerateChangeSetRequest;
      class GenerateTemplateRequest;
      class GetAppRequest;
      class GetAppLaunchConfigurationRequest;
      class GetAppReplicationConfigurationRequest;
      class GetAppValidationConfigurationRequest;
      class GetAppValidationOutputRequest;
      class GetConnectorsRequest;
      class GetReplicationJobsRequest;
      class GetReplicationRunsRequest;
      class GetServersRequest;
      class ImportAppCatalogRequest;
      class ImportServerCatalogRequest;
      class LaunchAppRequest;
      class ListAppsRequest;
      class NotifyAppValidationOutputRequest;
      class PutAppLaunchConfigurationRequest;
      class PutAppReplicationConfigurationRequest;
      class PutAppValidationConfigurationRequest;
      class StartAppReplicationRequest;
      class StartOnDemandAppReplicationRequest;
      class StartOnDemandReplicationRunRequest;
      class StopAppReplicationRequest;
      class TerminateAppRequest;
      class UpdateAppRequest;
      class UpdateReplicationJobRequest;
      /* End of service model forward declarations required in SMSClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateAppResult, SMSError> CreateAppOutcome;
      typedef Aws::Utils::Outcome<CreateReplicationJobResult, SMSError> CreateReplicationJobOutcome;
      typedef Aws::Utils::Outcome<DeleteAppResult, SMSError> DeleteAppOutcome;
      typedef Aws::Utils::Outcome<DeleteAppLaunchConfigurationResult, SMSError> DeleteAppLaunchConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteAppReplicationConfigurationResult, SMSError> DeleteAppReplicationConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteAppValidationConfigurationResult, SMSError> DeleteAppValidationConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteReplicationJobResult, SMSError> DeleteReplicationJobOutcome;
      typedef Aws::Utils::Outcome<DeleteServerCatalogResult, SMSError> DeleteServerCatalogOutcome;
      typedef Aws::Utils::Outcome<DisassociateConnectorResult, SMSError> DisassociateConnectorOutcome;
      typedef Aws::Utils::Outcome<GenerateChangeSetResult, SMSError> GenerateChangeSetOutcome;
      typedef Aws::Utils::Outcome<GenerateTemplateResult, SMSError> GenerateTemplateOutcome;
      typedef Aws::Utils::Outcome<GetAppResult, SMSError> GetAppOutcome;
      typedef Aws::Utils::Outcome<GetAppLaunchConfigurationResult, SMSError> GetAppLaunchConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetAppReplicationConfigurationResult, SMSError> GetAppReplicationConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetAppValidationConfigurationResult, SMSError> GetAppValidationConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetAppValidationOutputResult, SMSError> GetAppValidationOutputOutcome;
      typedef Aws::Utils::Outcome<GetConnectorsResult, SMSError> GetConnectorsOutcome;
      typedef Aws::Utils::Outcome<GetReplicationJobsResult, SMSError> GetReplicationJobsOutcome;
      typedef Aws::Utils::Outcome<GetReplicationRunsResult, SMSError> GetReplicationRunsOutcome;
      typedef Aws::Utils::Outcome<GetServersResult, SMSError> GetServersOutcome;
      typedef Aws::Utils::Outcome<ImportAppCatalogResult, SMSError> ImportAppCatalogOutcome;
      typedef Aws::Utils::Outcome<ImportServerCatalogResult, SMSError> ImportServerCatalogOutcome;
      typedef Aws::Utils::Outcome<LaunchAppResult, SMSError> LaunchAppOutcome;
      typedef Aws::Utils::Outcome<ListAppsResult, SMSError> ListAppsOutcome;
      typedef Aws::Utils::Outcome<NotifyAppValidationOutputResult, SMSError> NotifyAppValidationOutputOutcome;
      typedef Aws::Utils::Outcome<PutAppLaunchConfigurationResult, SMSError> PutAppLaunchConfigurationOutcome;
      typedef Aws::Utils::Outcome<PutAppReplicationConfigurationResult, SMSError> PutAppReplicationConfigurationOutcome;
      typedef Aws::Utils::Outcome<PutAppValidationConfigurationResult, SMSError> PutAppValidationConfigurationOutcome;
      typedef Aws::Utils::Outcome<StartAppReplicationResult, SMSError> StartAppReplicationOutcome;
      typedef Aws::Utils::Outcome<StartOnDemandAppReplicationResult, SMSError> StartOnDemandAppReplicationOutcome;
      typedef Aws::Utils::Outcome<StartOnDemandReplicationRunResult, SMSError> StartOnDemandReplicationRunOutcome;
      typedef Aws::Utils::Outcome<StopAppReplicationResult, SMSError> StopAppReplicationOutcome;
      typedef Aws::Utils::Outcome<TerminateAppResult, SMSError> TerminateAppOutcome;
      typedef Aws::Utils::Outcome<UpdateAppResult, SMSError> UpdateAppOutcome;
      typedef Aws::Utils::Outcome<UpdateReplicationJobResult, SMSError> UpdateReplicationJobOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateAppOutcome> CreateAppOutcomeCallable;
      typedef std::future<CreateReplicationJobOutcome> CreateReplicationJobOutcomeCallable;
      typedef std::future<DeleteAppOutcome> DeleteAppOutcomeCallable;
      typedef std::future<DeleteAppLaunchConfigurationOutcome> DeleteAppLaunchConfigurationOutcomeCallable;
      typedef std::future<DeleteAppReplicationConfigurationOutcome> DeleteAppReplicationConfigurationOutcomeCallable;
      typedef std::future<DeleteAppValidationConfigurationOutcome> DeleteAppValidationConfigurationOutcomeCallable;
      typedef std::future<DeleteReplicationJobOutcome> DeleteReplicationJobOutcomeCallable;
      typedef std::future<DeleteServerCatalogOutcome> DeleteServerCatalogOutcomeCallable;
      typedef std::future<DisassociateConnectorOutcome> DisassociateConnectorOutcomeCallable;
      typedef std::future<GenerateChangeSetOutcome> GenerateChangeSetOutcomeCallable;
      typedef std::future<GenerateTemplateOutcome> GenerateTemplateOutcomeCallable;
      typedef std::future<GetAppOutcome> GetAppOutcomeCallable;
      typedef std::future<GetAppLaunchConfigurationOutcome> GetAppLaunchConfigurationOutcomeCallable;
      typedef std::future<GetAppReplicationConfigurationOutcome> GetAppReplicationConfigurationOutcomeCallable;
      typedef std::future<GetAppValidationConfigurationOutcome> GetAppValidationConfigurationOutcomeCallable;
      typedef std::future<GetAppValidationOutputOutcome> GetAppValidationOutputOutcomeCallable;
      typedef std::future<GetConnectorsOutcome> GetConnectorsOutcomeCallable;
      typedef std::future<GetReplicationJobsOutcome> GetReplicationJobsOutcomeCallable;
      typedef std::future<GetReplicationRunsOutcome> GetReplicationRunsOutcomeCallable;
      typedef std::future<GetServersOutcome> GetServersOutcomeCallable;
      typedef std::future<ImportAppCatalogOutcome> ImportAppCatalogOutcomeCallable;
      typedef std::future<ImportServerCatalogOutcome> ImportServerCatalogOutcomeCallable;
      typedef std::future<LaunchAppOutcome> LaunchAppOutcomeCallable;
      typedef std::future<ListAppsOutcome> ListAppsOutcomeCallable;
      typedef std::future<NotifyAppValidationOutputOutcome> NotifyAppValidationOutputOutcomeCallable;
      typedef std::future<PutAppLaunchConfigurationOutcome> PutAppLaunchConfigurationOutcomeCallable;
      typedef std::future<PutAppReplicationConfigurationOutcome> PutAppReplicationConfigurationOutcomeCallable;
      typedef std::future<PutAppValidationConfigurationOutcome> PutAppValidationConfigurationOutcomeCallable;
      typedef std::future<StartAppReplicationOutcome> StartAppReplicationOutcomeCallable;
      typedef std::future<StartOnDemandAppReplicationOutcome> StartOnDemandAppReplicationOutcomeCallable;
      typedef std::future<StartOnDemandReplicationRunOutcome> StartOnDemandReplicationRunOutcomeCallable;
      typedef std::future<StopAppReplicationOutcome> StopAppReplicationOutcomeCallable;
      typedef std::future<TerminateAppOutcome> TerminateAppOutcomeCallable;
      typedef std::future<UpdateAppOutcome> UpdateAppOutcomeCallable;
      typedef std::future<UpdateReplicationJobOutcome> UpdateReplicationJobOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SMSClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SMSClient*, const Model::CreateAppRequest&, const Model::CreateAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAppResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::CreateReplicationJobRequest&, const Model::CreateReplicationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReplicationJobResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::DeleteAppRequest&, const Model::DeleteAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::DeleteAppLaunchConfigurationRequest&, const Model::DeleteAppLaunchConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppLaunchConfigurationResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::DeleteAppReplicationConfigurationRequest&, const Model::DeleteAppReplicationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppReplicationConfigurationResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::DeleteAppValidationConfigurationRequest&, const Model::DeleteAppValidationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppValidationConfigurationResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::DeleteReplicationJobRequest&, const Model::DeleteReplicationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReplicationJobResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::DeleteServerCatalogRequest&, const Model::DeleteServerCatalogOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServerCatalogResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::DisassociateConnectorRequest&, const Model::DisassociateConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateConnectorResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::GenerateChangeSetRequest&, const Model::GenerateChangeSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GenerateChangeSetResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::GenerateTemplateRequest&, const Model::GenerateTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GenerateTemplateResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::GetAppRequest&, const Model::GetAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAppResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::GetAppLaunchConfigurationRequest&, const Model::GetAppLaunchConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAppLaunchConfigurationResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::GetAppReplicationConfigurationRequest&, const Model::GetAppReplicationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAppReplicationConfigurationResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::GetAppValidationConfigurationRequest&, const Model::GetAppValidationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAppValidationConfigurationResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::GetAppValidationOutputRequest&, const Model::GetAppValidationOutputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAppValidationOutputResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::GetConnectorsRequest&, const Model::GetConnectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConnectorsResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::GetReplicationJobsRequest&, const Model::GetReplicationJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReplicationJobsResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::GetReplicationRunsRequest&, const Model::GetReplicationRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReplicationRunsResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::GetServersRequest&, const Model::GetServersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServersResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::ImportAppCatalogRequest&, const Model::ImportAppCatalogOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportAppCatalogResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::ImportServerCatalogRequest&, const Model::ImportServerCatalogOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportServerCatalogResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::LaunchAppRequest&, const Model::LaunchAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > LaunchAppResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::ListAppsRequest&, const Model::ListAppsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAppsResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::NotifyAppValidationOutputRequest&, const Model::NotifyAppValidationOutputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > NotifyAppValidationOutputResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::PutAppLaunchConfigurationRequest&, const Model::PutAppLaunchConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAppLaunchConfigurationResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::PutAppReplicationConfigurationRequest&, const Model::PutAppReplicationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAppReplicationConfigurationResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::PutAppValidationConfigurationRequest&, const Model::PutAppValidationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAppValidationConfigurationResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::StartAppReplicationRequest&, const Model::StartAppReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartAppReplicationResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::StartOnDemandAppReplicationRequest&, const Model::StartOnDemandAppReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartOnDemandAppReplicationResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::StartOnDemandReplicationRunRequest&, const Model::StartOnDemandReplicationRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartOnDemandReplicationRunResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::StopAppReplicationRequest&, const Model::StopAppReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopAppReplicationResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::TerminateAppRequest&, const Model::TerminateAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateAppResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::UpdateAppRequest&, const Model::UpdateAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAppResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::UpdateReplicationJobRequest&, const Model::UpdateReplicationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateReplicationJobResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace SMS
} // namespace Aws
