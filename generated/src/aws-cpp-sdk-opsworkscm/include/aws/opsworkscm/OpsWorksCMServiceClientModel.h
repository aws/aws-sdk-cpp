/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/opsworkscm/OpsWorksCMErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/opsworkscm/OpsWorksCMEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in OpsWorksCMClient header */
#include <aws/opsworkscm/model/AssociateNodeResult.h>
#include <aws/opsworkscm/model/CreateBackupResult.h>
#include <aws/opsworkscm/model/CreateServerResult.h>
#include <aws/opsworkscm/model/DeleteBackupResult.h>
#include <aws/opsworkscm/model/DeleteServerResult.h>
#include <aws/opsworkscm/model/DescribeAccountAttributesResult.h>
#include <aws/opsworkscm/model/DescribeBackupsResult.h>
#include <aws/opsworkscm/model/DescribeEventsResult.h>
#include <aws/opsworkscm/model/DescribeNodeAssociationStatusResult.h>
#include <aws/opsworkscm/model/DescribeServersResult.h>
#include <aws/opsworkscm/model/DisassociateNodeResult.h>
#include <aws/opsworkscm/model/ExportServerEngineAttributeResult.h>
#include <aws/opsworkscm/model/ListTagsForResourceResult.h>
#include <aws/opsworkscm/model/RestoreServerResult.h>
#include <aws/opsworkscm/model/StartMaintenanceResult.h>
#include <aws/opsworkscm/model/TagResourceResult.h>
#include <aws/opsworkscm/model/UntagResourceResult.h>
#include <aws/opsworkscm/model/UpdateServerResult.h>
#include <aws/opsworkscm/model/UpdateServerEngineAttributesResult.h>
/* End of service model headers required in OpsWorksCMClient header */

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

  namespace OpsWorksCM
  {
    using OpsWorksCMClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using OpsWorksCMEndpointProviderBase = Aws::OpsWorksCM::Endpoint::OpsWorksCMEndpointProviderBase;
    using OpsWorksCMEndpointProvider = Aws::OpsWorksCM::Endpoint::OpsWorksCMEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in OpsWorksCMClient header */
      class AssociateNodeRequest;
      class CreateBackupRequest;
      class CreateServerRequest;
      class DeleteBackupRequest;
      class DeleteServerRequest;
      class DescribeAccountAttributesRequest;
      class DescribeBackupsRequest;
      class DescribeEventsRequest;
      class DescribeNodeAssociationStatusRequest;
      class DescribeServersRequest;
      class DisassociateNodeRequest;
      class ExportServerEngineAttributeRequest;
      class ListTagsForResourceRequest;
      class RestoreServerRequest;
      class StartMaintenanceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateServerRequest;
      class UpdateServerEngineAttributesRequest;
      /* End of service model forward declarations required in OpsWorksCMClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateNodeResult, OpsWorksCMError> AssociateNodeOutcome;
      typedef Aws::Utils::Outcome<CreateBackupResult, OpsWorksCMError> CreateBackupOutcome;
      typedef Aws::Utils::Outcome<CreateServerResult, OpsWorksCMError> CreateServerOutcome;
      typedef Aws::Utils::Outcome<DeleteBackupResult, OpsWorksCMError> DeleteBackupOutcome;
      typedef Aws::Utils::Outcome<DeleteServerResult, OpsWorksCMError> DeleteServerOutcome;
      typedef Aws::Utils::Outcome<DescribeAccountAttributesResult, OpsWorksCMError> DescribeAccountAttributesOutcome;
      typedef Aws::Utils::Outcome<DescribeBackupsResult, OpsWorksCMError> DescribeBackupsOutcome;
      typedef Aws::Utils::Outcome<DescribeEventsResult, OpsWorksCMError> DescribeEventsOutcome;
      typedef Aws::Utils::Outcome<DescribeNodeAssociationStatusResult, OpsWorksCMError> DescribeNodeAssociationStatusOutcome;
      typedef Aws::Utils::Outcome<DescribeServersResult, OpsWorksCMError> DescribeServersOutcome;
      typedef Aws::Utils::Outcome<DisassociateNodeResult, OpsWorksCMError> DisassociateNodeOutcome;
      typedef Aws::Utils::Outcome<ExportServerEngineAttributeResult, OpsWorksCMError> ExportServerEngineAttributeOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, OpsWorksCMError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<RestoreServerResult, OpsWorksCMError> RestoreServerOutcome;
      typedef Aws::Utils::Outcome<StartMaintenanceResult, OpsWorksCMError> StartMaintenanceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, OpsWorksCMError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, OpsWorksCMError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateServerResult, OpsWorksCMError> UpdateServerOutcome;
      typedef Aws::Utils::Outcome<UpdateServerEngineAttributesResult, OpsWorksCMError> UpdateServerEngineAttributesOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateNodeOutcome> AssociateNodeOutcomeCallable;
      typedef std::future<CreateBackupOutcome> CreateBackupOutcomeCallable;
      typedef std::future<CreateServerOutcome> CreateServerOutcomeCallable;
      typedef std::future<DeleteBackupOutcome> DeleteBackupOutcomeCallable;
      typedef std::future<DeleteServerOutcome> DeleteServerOutcomeCallable;
      typedef std::future<DescribeAccountAttributesOutcome> DescribeAccountAttributesOutcomeCallable;
      typedef std::future<DescribeBackupsOutcome> DescribeBackupsOutcomeCallable;
      typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
      typedef std::future<DescribeNodeAssociationStatusOutcome> DescribeNodeAssociationStatusOutcomeCallable;
      typedef std::future<DescribeServersOutcome> DescribeServersOutcomeCallable;
      typedef std::future<DisassociateNodeOutcome> DisassociateNodeOutcomeCallable;
      typedef std::future<ExportServerEngineAttributeOutcome> ExportServerEngineAttributeOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<RestoreServerOutcome> RestoreServerOutcomeCallable;
      typedef std::future<StartMaintenanceOutcome> StartMaintenanceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateServerOutcome> UpdateServerOutcomeCallable;
      typedef std::future<UpdateServerEngineAttributesOutcome> UpdateServerEngineAttributesOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class OpsWorksCMClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const OpsWorksCMClient*, const Model::AssociateNodeRequest&, const Model::AssociateNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateNodeResponseReceivedHandler;
    typedef std::function<void(const OpsWorksCMClient*, const Model::CreateBackupRequest&, const Model::CreateBackupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBackupResponseReceivedHandler;
    typedef std::function<void(const OpsWorksCMClient*, const Model::CreateServerRequest&, const Model::CreateServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateServerResponseReceivedHandler;
    typedef std::function<void(const OpsWorksCMClient*, const Model::DeleteBackupRequest&, const Model::DeleteBackupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBackupResponseReceivedHandler;
    typedef std::function<void(const OpsWorksCMClient*, const Model::DeleteServerRequest&, const Model::DeleteServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServerResponseReceivedHandler;
    typedef std::function<void(const OpsWorksCMClient*, const Model::DescribeAccountAttributesRequest&, const Model::DescribeAccountAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountAttributesResponseReceivedHandler;
    typedef std::function<void(const OpsWorksCMClient*, const Model::DescribeBackupsRequest&, const Model::DescribeBackupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBackupsResponseReceivedHandler;
    typedef std::function<void(const OpsWorksCMClient*, const Model::DescribeEventsRequest&, const Model::DescribeEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventsResponseReceivedHandler;
    typedef std::function<void(const OpsWorksCMClient*, const Model::DescribeNodeAssociationStatusRequest&, const Model::DescribeNodeAssociationStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNodeAssociationStatusResponseReceivedHandler;
    typedef std::function<void(const OpsWorksCMClient*, const Model::DescribeServersRequest&, const Model::DescribeServersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeServersResponseReceivedHandler;
    typedef std::function<void(const OpsWorksCMClient*, const Model::DisassociateNodeRequest&, const Model::DisassociateNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateNodeResponseReceivedHandler;
    typedef std::function<void(const OpsWorksCMClient*, const Model::ExportServerEngineAttributeRequest&, const Model::ExportServerEngineAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportServerEngineAttributeResponseReceivedHandler;
    typedef std::function<void(const OpsWorksCMClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const OpsWorksCMClient*, const Model::RestoreServerRequest&, const Model::RestoreServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreServerResponseReceivedHandler;
    typedef std::function<void(const OpsWorksCMClient*, const Model::StartMaintenanceRequest&, const Model::StartMaintenanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMaintenanceResponseReceivedHandler;
    typedef std::function<void(const OpsWorksCMClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const OpsWorksCMClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const OpsWorksCMClient*, const Model::UpdateServerRequest&, const Model::UpdateServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServerResponseReceivedHandler;
    typedef std::function<void(const OpsWorksCMClient*, const Model::UpdateServerEngineAttributesRequest&, const Model::UpdateServerEngineAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServerEngineAttributesResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace OpsWorksCM
} // namespace Aws
