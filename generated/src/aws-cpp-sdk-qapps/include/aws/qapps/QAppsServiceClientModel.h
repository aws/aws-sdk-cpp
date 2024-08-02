/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/qapps/QAppsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/qapps/QAppsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in QAppsClient header */
#include <aws/qapps/model/CreateLibraryItemResult.h>
#include <aws/qapps/model/CreateQAppResult.h>
#include <aws/qapps/model/GetLibraryItemResult.h>
#include <aws/qapps/model/GetQAppResult.h>
#include <aws/qapps/model/GetQAppSessionResult.h>
#include <aws/qapps/model/ImportDocumentResult.h>
#include <aws/qapps/model/ListLibraryItemsResult.h>
#include <aws/qapps/model/ListQAppsResult.h>
#include <aws/qapps/model/ListTagsForResourceResult.h>
#include <aws/qapps/model/PredictQAppResult.h>
#include <aws/qapps/model/StartQAppSessionResult.h>
#include <aws/qapps/model/TagResourceResult.h>
#include <aws/qapps/model/UntagResourceResult.h>
#include <aws/qapps/model/UpdateLibraryItemResult.h>
#include <aws/qapps/model/UpdateQAppResult.h>
#include <aws/qapps/model/UpdateQAppSessionResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in QAppsClient header */

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

  namespace QApps
  {
    using QAppsClientConfiguration = Aws::Client::GenericClientConfiguration;
    using QAppsEndpointProviderBase = Aws::QApps::Endpoint::QAppsEndpointProviderBase;
    using QAppsEndpointProvider = Aws::QApps::Endpoint::QAppsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in QAppsClient header */
      class AssociateLibraryItemReviewRequest;
      class AssociateQAppWithUserRequest;
      class CreateLibraryItemRequest;
      class CreateQAppRequest;
      class DeleteLibraryItemRequest;
      class DeleteQAppRequest;
      class DisassociateLibraryItemReviewRequest;
      class DisassociateQAppFromUserRequest;
      class GetLibraryItemRequest;
      class GetQAppRequest;
      class GetQAppSessionRequest;
      class ImportDocumentRequest;
      class ListLibraryItemsRequest;
      class ListQAppsRequest;
      class ListTagsForResourceRequest;
      class PredictQAppRequest;
      class StartQAppSessionRequest;
      class StopQAppSessionRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateLibraryItemRequest;
      class UpdateQAppRequest;
      class UpdateQAppSessionRequest;
      /* End of service model forward declarations required in QAppsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, QAppsError> AssociateLibraryItemReviewOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, QAppsError> AssociateQAppWithUserOutcome;
      typedef Aws::Utils::Outcome<CreateLibraryItemResult, QAppsError> CreateLibraryItemOutcome;
      typedef Aws::Utils::Outcome<CreateQAppResult, QAppsError> CreateQAppOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, QAppsError> DeleteLibraryItemOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, QAppsError> DeleteQAppOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, QAppsError> DisassociateLibraryItemReviewOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, QAppsError> DisassociateQAppFromUserOutcome;
      typedef Aws::Utils::Outcome<GetLibraryItemResult, QAppsError> GetLibraryItemOutcome;
      typedef Aws::Utils::Outcome<GetQAppResult, QAppsError> GetQAppOutcome;
      typedef Aws::Utils::Outcome<GetQAppSessionResult, QAppsError> GetQAppSessionOutcome;
      typedef Aws::Utils::Outcome<ImportDocumentResult, QAppsError> ImportDocumentOutcome;
      typedef Aws::Utils::Outcome<ListLibraryItemsResult, QAppsError> ListLibraryItemsOutcome;
      typedef Aws::Utils::Outcome<ListQAppsResult, QAppsError> ListQAppsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, QAppsError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PredictQAppResult, QAppsError> PredictQAppOutcome;
      typedef Aws::Utils::Outcome<StartQAppSessionResult, QAppsError> StartQAppSessionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, QAppsError> StopQAppSessionOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, QAppsError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, QAppsError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateLibraryItemResult, QAppsError> UpdateLibraryItemOutcome;
      typedef Aws::Utils::Outcome<UpdateQAppResult, QAppsError> UpdateQAppOutcome;
      typedef Aws::Utils::Outcome<UpdateQAppSessionResult, QAppsError> UpdateQAppSessionOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateLibraryItemReviewOutcome> AssociateLibraryItemReviewOutcomeCallable;
      typedef std::future<AssociateQAppWithUserOutcome> AssociateQAppWithUserOutcomeCallable;
      typedef std::future<CreateLibraryItemOutcome> CreateLibraryItemOutcomeCallable;
      typedef std::future<CreateQAppOutcome> CreateQAppOutcomeCallable;
      typedef std::future<DeleteLibraryItemOutcome> DeleteLibraryItemOutcomeCallable;
      typedef std::future<DeleteQAppOutcome> DeleteQAppOutcomeCallable;
      typedef std::future<DisassociateLibraryItemReviewOutcome> DisassociateLibraryItemReviewOutcomeCallable;
      typedef std::future<DisassociateQAppFromUserOutcome> DisassociateQAppFromUserOutcomeCallable;
      typedef std::future<GetLibraryItemOutcome> GetLibraryItemOutcomeCallable;
      typedef std::future<GetQAppOutcome> GetQAppOutcomeCallable;
      typedef std::future<GetQAppSessionOutcome> GetQAppSessionOutcomeCallable;
      typedef std::future<ImportDocumentOutcome> ImportDocumentOutcomeCallable;
      typedef std::future<ListLibraryItemsOutcome> ListLibraryItemsOutcomeCallable;
      typedef std::future<ListQAppsOutcome> ListQAppsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PredictQAppOutcome> PredictQAppOutcomeCallable;
      typedef std::future<StartQAppSessionOutcome> StartQAppSessionOutcomeCallable;
      typedef std::future<StopQAppSessionOutcome> StopQAppSessionOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateLibraryItemOutcome> UpdateLibraryItemOutcomeCallable;
      typedef std::future<UpdateQAppOutcome> UpdateQAppOutcomeCallable;
      typedef std::future<UpdateQAppSessionOutcome> UpdateQAppSessionOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class QAppsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const QAppsClient*, const Model::AssociateLibraryItemReviewRequest&, const Model::AssociateLibraryItemReviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateLibraryItemReviewResponseReceivedHandler;
    typedef std::function<void(const QAppsClient*, const Model::AssociateQAppWithUserRequest&, const Model::AssociateQAppWithUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateQAppWithUserResponseReceivedHandler;
    typedef std::function<void(const QAppsClient*, const Model::CreateLibraryItemRequest&, const Model::CreateLibraryItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLibraryItemResponseReceivedHandler;
    typedef std::function<void(const QAppsClient*, const Model::CreateQAppRequest&, const Model::CreateQAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateQAppResponseReceivedHandler;
    typedef std::function<void(const QAppsClient*, const Model::DeleteLibraryItemRequest&, const Model::DeleteLibraryItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLibraryItemResponseReceivedHandler;
    typedef std::function<void(const QAppsClient*, const Model::DeleteQAppRequest&, const Model::DeleteQAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteQAppResponseReceivedHandler;
    typedef std::function<void(const QAppsClient*, const Model::DisassociateLibraryItemReviewRequest&, const Model::DisassociateLibraryItemReviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateLibraryItemReviewResponseReceivedHandler;
    typedef std::function<void(const QAppsClient*, const Model::DisassociateQAppFromUserRequest&, const Model::DisassociateQAppFromUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateQAppFromUserResponseReceivedHandler;
    typedef std::function<void(const QAppsClient*, const Model::GetLibraryItemRequest&, const Model::GetLibraryItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLibraryItemResponseReceivedHandler;
    typedef std::function<void(const QAppsClient*, const Model::GetQAppRequest&, const Model::GetQAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQAppResponseReceivedHandler;
    typedef std::function<void(const QAppsClient*, const Model::GetQAppSessionRequest&, const Model::GetQAppSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQAppSessionResponseReceivedHandler;
    typedef std::function<void(const QAppsClient*, const Model::ImportDocumentRequest&, const Model::ImportDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportDocumentResponseReceivedHandler;
    typedef std::function<void(const QAppsClient*, const Model::ListLibraryItemsRequest&, const Model::ListLibraryItemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLibraryItemsResponseReceivedHandler;
    typedef std::function<void(const QAppsClient*, const Model::ListQAppsRequest&, const Model::ListQAppsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListQAppsResponseReceivedHandler;
    typedef std::function<void(const QAppsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const QAppsClient*, const Model::PredictQAppRequest&, const Model::PredictQAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PredictQAppResponseReceivedHandler;
    typedef std::function<void(const QAppsClient*, const Model::StartQAppSessionRequest&, const Model::StartQAppSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartQAppSessionResponseReceivedHandler;
    typedef std::function<void(const QAppsClient*, const Model::StopQAppSessionRequest&, const Model::StopQAppSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopQAppSessionResponseReceivedHandler;
    typedef std::function<void(const QAppsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const QAppsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const QAppsClient*, const Model::UpdateLibraryItemRequest&, const Model::UpdateLibraryItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLibraryItemResponseReceivedHandler;
    typedef std::function<void(const QAppsClient*, const Model::UpdateQAppRequest&, const Model::UpdateQAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateQAppResponseReceivedHandler;
    typedef std::function<void(const QAppsClient*, const Model::UpdateQAppSessionRequest&, const Model::UpdateQAppSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateQAppSessionResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace QApps
} // namespace Aws
