/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/textract/TextractErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/textract/TextractEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in TextractClient header */
#include <aws/textract/model/AnalyzeDocumentResult.h>
#include <aws/textract/model/AnalyzeExpenseResult.h>
#include <aws/textract/model/AnalyzeIDResult.h>
#include <aws/textract/model/DetectDocumentTextResult.h>
#include <aws/textract/model/GetDocumentAnalysisResult.h>
#include <aws/textract/model/GetDocumentTextDetectionResult.h>
#include <aws/textract/model/GetExpenseAnalysisResult.h>
#include <aws/textract/model/GetLendingAnalysisResult.h>
#include <aws/textract/model/GetLendingAnalysisSummaryResult.h>
#include <aws/textract/model/StartDocumentAnalysisResult.h>
#include <aws/textract/model/StartDocumentTextDetectionResult.h>
#include <aws/textract/model/StartExpenseAnalysisResult.h>
#include <aws/textract/model/StartLendingAnalysisResult.h>
/* End of service model headers required in TextractClient header */

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

  namespace Textract
  {
    using TextractClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using TextractEndpointProviderBase = Aws::Textract::Endpoint::TextractEndpointProviderBase;
    using TextractEndpointProvider = Aws::Textract::Endpoint::TextractEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in TextractClient header */
      class AnalyzeDocumentRequest;
      class AnalyzeExpenseRequest;
      class AnalyzeIDRequest;
      class DetectDocumentTextRequest;
      class GetDocumentAnalysisRequest;
      class GetDocumentTextDetectionRequest;
      class GetExpenseAnalysisRequest;
      class GetLendingAnalysisRequest;
      class GetLendingAnalysisSummaryRequest;
      class StartDocumentAnalysisRequest;
      class StartDocumentTextDetectionRequest;
      class StartExpenseAnalysisRequest;
      class StartLendingAnalysisRequest;
      /* End of service model forward declarations required in TextractClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AnalyzeDocumentResult, TextractError> AnalyzeDocumentOutcome;
      typedef Aws::Utils::Outcome<AnalyzeExpenseResult, TextractError> AnalyzeExpenseOutcome;
      typedef Aws::Utils::Outcome<AnalyzeIDResult, TextractError> AnalyzeIDOutcome;
      typedef Aws::Utils::Outcome<DetectDocumentTextResult, TextractError> DetectDocumentTextOutcome;
      typedef Aws::Utils::Outcome<GetDocumentAnalysisResult, TextractError> GetDocumentAnalysisOutcome;
      typedef Aws::Utils::Outcome<GetDocumentTextDetectionResult, TextractError> GetDocumentTextDetectionOutcome;
      typedef Aws::Utils::Outcome<GetExpenseAnalysisResult, TextractError> GetExpenseAnalysisOutcome;
      typedef Aws::Utils::Outcome<GetLendingAnalysisResult, TextractError> GetLendingAnalysisOutcome;
      typedef Aws::Utils::Outcome<GetLendingAnalysisSummaryResult, TextractError> GetLendingAnalysisSummaryOutcome;
      typedef Aws::Utils::Outcome<StartDocumentAnalysisResult, TextractError> StartDocumentAnalysisOutcome;
      typedef Aws::Utils::Outcome<StartDocumentTextDetectionResult, TextractError> StartDocumentTextDetectionOutcome;
      typedef Aws::Utils::Outcome<StartExpenseAnalysisResult, TextractError> StartExpenseAnalysisOutcome;
      typedef Aws::Utils::Outcome<StartLendingAnalysisResult, TextractError> StartLendingAnalysisOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AnalyzeDocumentOutcome> AnalyzeDocumentOutcomeCallable;
      typedef std::future<AnalyzeExpenseOutcome> AnalyzeExpenseOutcomeCallable;
      typedef std::future<AnalyzeIDOutcome> AnalyzeIDOutcomeCallable;
      typedef std::future<DetectDocumentTextOutcome> DetectDocumentTextOutcomeCallable;
      typedef std::future<GetDocumentAnalysisOutcome> GetDocumentAnalysisOutcomeCallable;
      typedef std::future<GetDocumentTextDetectionOutcome> GetDocumentTextDetectionOutcomeCallable;
      typedef std::future<GetExpenseAnalysisOutcome> GetExpenseAnalysisOutcomeCallable;
      typedef std::future<GetLendingAnalysisOutcome> GetLendingAnalysisOutcomeCallable;
      typedef std::future<GetLendingAnalysisSummaryOutcome> GetLendingAnalysisSummaryOutcomeCallable;
      typedef std::future<StartDocumentAnalysisOutcome> StartDocumentAnalysisOutcomeCallable;
      typedef std::future<StartDocumentTextDetectionOutcome> StartDocumentTextDetectionOutcomeCallable;
      typedef std::future<StartExpenseAnalysisOutcome> StartExpenseAnalysisOutcomeCallable;
      typedef std::future<StartLendingAnalysisOutcome> StartLendingAnalysisOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class TextractClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const TextractClient*, const Model::AnalyzeDocumentRequest&, const Model::AnalyzeDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AnalyzeDocumentResponseReceivedHandler;
    typedef std::function<void(const TextractClient*, const Model::AnalyzeExpenseRequest&, const Model::AnalyzeExpenseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AnalyzeExpenseResponseReceivedHandler;
    typedef std::function<void(const TextractClient*, const Model::AnalyzeIDRequest&, const Model::AnalyzeIDOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AnalyzeIDResponseReceivedHandler;
    typedef std::function<void(const TextractClient*, const Model::DetectDocumentTextRequest&, const Model::DetectDocumentTextOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectDocumentTextResponseReceivedHandler;
    typedef std::function<void(const TextractClient*, const Model::GetDocumentAnalysisRequest&, const Model::GetDocumentAnalysisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDocumentAnalysisResponseReceivedHandler;
    typedef std::function<void(const TextractClient*, const Model::GetDocumentTextDetectionRequest&, const Model::GetDocumentTextDetectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDocumentTextDetectionResponseReceivedHandler;
    typedef std::function<void(const TextractClient*, const Model::GetExpenseAnalysisRequest&, const Model::GetExpenseAnalysisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetExpenseAnalysisResponseReceivedHandler;
    typedef std::function<void(const TextractClient*, const Model::GetLendingAnalysisRequest&, const Model::GetLendingAnalysisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLendingAnalysisResponseReceivedHandler;
    typedef std::function<void(const TextractClient*, const Model::GetLendingAnalysisSummaryRequest&, const Model::GetLendingAnalysisSummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLendingAnalysisSummaryResponseReceivedHandler;
    typedef std::function<void(const TextractClient*, const Model::StartDocumentAnalysisRequest&, const Model::StartDocumentAnalysisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDocumentAnalysisResponseReceivedHandler;
    typedef std::function<void(const TextractClient*, const Model::StartDocumentTextDetectionRequest&, const Model::StartDocumentTextDetectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDocumentTextDetectionResponseReceivedHandler;
    typedef std::function<void(const TextractClient*, const Model::StartExpenseAnalysisRequest&, const Model::StartExpenseAnalysisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartExpenseAnalysisResponseReceivedHandler;
    typedef std::function<void(const TextractClient*, const Model::StartLendingAnalysisRequest&, const Model::StartLendingAnalysisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartLendingAnalysisResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Textract
} // namespace Aws
