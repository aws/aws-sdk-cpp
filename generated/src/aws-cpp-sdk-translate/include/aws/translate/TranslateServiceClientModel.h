/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/translate/TranslateErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/translate/TranslateEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in TranslateClient header */
#include <aws/translate/model/CreateParallelDataResult.h>
#include <aws/translate/model/DeleteParallelDataResult.h>
#include <aws/translate/model/DescribeTextTranslationJobResult.h>
#include <aws/translate/model/GetParallelDataResult.h>
#include <aws/translate/model/GetTerminologyResult.h>
#include <aws/translate/model/ImportTerminologyResult.h>
#include <aws/translate/model/ListLanguagesResult.h>
#include <aws/translate/model/ListParallelDataResult.h>
#include <aws/translate/model/ListTagsForResourceResult.h>
#include <aws/translate/model/ListTerminologiesResult.h>
#include <aws/translate/model/ListTextTranslationJobsResult.h>
#include <aws/translate/model/StartTextTranslationJobResult.h>
#include <aws/translate/model/StopTextTranslationJobResult.h>
#include <aws/translate/model/TagResourceResult.h>
#include <aws/translate/model/TranslateTextResult.h>
#include <aws/translate/model/UntagResourceResult.h>
#include <aws/translate/model/UpdateParallelDataResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in TranslateClient header */

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

  namespace Translate
  {
    using TranslateClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using TranslateEndpointProviderBase = Aws::Translate::Endpoint::TranslateEndpointProviderBase;
    using TranslateEndpointProvider = Aws::Translate::Endpoint::TranslateEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in TranslateClient header */
      class CreateParallelDataRequest;
      class DeleteParallelDataRequest;
      class DeleteTerminologyRequest;
      class DescribeTextTranslationJobRequest;
      class GetParallelDataRequest;
      class GetTerminologyRequest;
      class ImportTerminologyRequest;
      class ListLanguagesRequest;
      class ListParallelDataRequest;
      class ListTagsForResourceRequest;
      class ListTerminologiesRequest;
      class ListTextTranslationJobsRequest;
      class StartTextTranslationJobRequest;
      class StopTextTranslationJobRequest;
      class TagResourceRequest;
      class TranslateTextRequest;
      class UntagResourceRequest;
      class UpdateParallelDataRequest;
      /* End of service model forward declarations required in TranslateClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateParallelDataResult, TranslateError> CreateParallelDataOutcome;
      typedef Aws::Utils::Outcome<DeleteParallelDataResult, TranslateError> DeleteParallelDataOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TranslateError> DeleteTerminologyOutcome;
      typedef Aws::Utils::Outcome<DescribeTextTranslationJobResult, TranslateError> DescribeTextTranslationJobOutcome;
      typedef Aws::Utils::Outcome<GetParallelDataResult, TranslateError> GetParallelDataOutcome;
      typedef Aws::Utils::Outcome<GetTerminologyResult, TranslateError> GetTerminologyOutcome;
      typedef Aws::Utils::Outcome<ImportTerminologyResult, TranslateError> ImportTerminologyOutcome;
      typedef Aws::Utils::Outcome<ListLanguagesResult, TranslateError> ListLanguagesOutcome;
      typedef Aws::Utils::Outcome<ListParallelDataResult, TranslateError> ListParallelDataOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, TranslateError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTerminologiesResult, TranslateError> ListTerminologiesOutcome;
      typedef Aws::Utils::Outcome<ListTextTranslationJobsResult, TranslateError> ListTextTranslationJobsOutcome;
      typedef Aws::Utils::Outcome<StartTextTranslationJobResult, TranslateError> StartTextTranslationJobOutcome;
      typedef Aws::Utils::Outcome<StopTextTranslationJobResult, TranslateError> StopTextTranslationJobOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, TranslateError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<TranslateTextResult, TranslateError> TranslateTextOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, TranslateError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateParallelDataResult, TranslateError> UpdateParallelDataOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateParallelDataOutcome> CreateParallelDataOutcomeCallable;
      typedef std::future<DeleteParallelDataOutcome> DeleteParallelDataOutcomeCallable;
      typedef std::future<DeleteTerminologyOutcome> DeleteTerminologyOutcomeCallable;
      typedef std::future<DescribeTextTranslationJobOutcome> DescribeTextTranslationJobOutcomeCallable;
      typedef std::future<GetParallelDataOutcome> GetParallelDataOutcomeCallable;
      typedef std::future<GetTerminologyOutcome> GetTerminologyOutcomeCallable;
      typedef std::future<ImportTerminologyOutcome> ImportTerminologyOutcomeCallable;
      typedef std::future<ListLanguagesOutcome> ListLanguagesOutcomeCallable;
      typedef std::future<ListParallelDataOutcome> ListParallelDataOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTerminologiesOutcome> ListTerminologiesOutcomeCallable;
      typedef std::future<ListTextTranslationJobsOutcome> ListTextTranslationJobsOutcomeCallable;
      typedef std::future<StartTextTranslationJobOutcome> StartTextTranslationJobOutcomeCallable;
      typedef std::future<StopTextTranslationJobOutcome> StopTextTranslationJobOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<TranslateTextOutcome> TranslateTextOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateParallelDataOutcome> UpdateParallelDataOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class TranslateClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const TranslateClient*, const Model::CreateParallelDataRequest&, const Model::CreateParallelDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateParallelDataResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::DeleteParallelDataRequest&, const Model::DeleteParallelDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteParallelDataResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::DeleteTerminologyRequest&, const Model::DeleteTerminologyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTerminologyResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::DescribeTextTranslationJobRequest&, const Model::DescribeTextTranslationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTextTranslationJobResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::GetParallelDataRequest&, const Model::GetParallelDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetParallelDataResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::GetTerminologyRequest&, const Model::GetTerminologyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTerminologyResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::ImportTerminologyRequest&, const Model::ImportTerminologyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportTerminologyResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::ListLanguagesRequest&, const Model::ListLanguagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLanguagesResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::ListParallelDataRequest&, const Model::ListParallelDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListParallelDataResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::ListTerminologiesRequest&, const Model::ListTerminologiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTerminologiesResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::ListTextTranslationJobsRequest&, const Model::ListTextTranslationJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTextTranslationJobsResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::StartTextTranslationJobRequest&, const Model::StartTextTranslationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTextTranslationJobResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::StopTextTranslationJobRequest&, const Model::StopTextTranslationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopTextTranslationJobResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::TranslateTextRequest&, const Model::TranslateTextOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TranslateTextResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::UpdateParallelDataRequest&, const Model::UpdateParallelDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateParallelDataResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Translate
} // namespace Aws
