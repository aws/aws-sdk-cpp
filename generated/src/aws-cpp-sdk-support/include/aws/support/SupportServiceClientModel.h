/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/support/SupportErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/support/SupportEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SupportClient header */
#include <aws/support/model/AddAttachmentsToSetResult.h>
#include <aws/support/model/AddCommunicationToCaseResult.h>
#include <aws/support/model/CreateCaseResult.h>
#include <aws/support/model/DescribeAttachmentResult.h>
#include <aws/support/model/DescribeCasesResult.h>
#include <aws/support/model/DescribeCommunicationsResult.h>
#include <aws/support/model/DescribeServicesResult.h>
#include <aws/support/model/DescribeSeverityLevelsResult.h>
#include <aws/support/model/DescribeTrustedAdvisorCheckRefreshStatusesResult.h>
#include <aws/support/model/DescribeTrustedAdvisorCheckResultResult.h>
#include <aws/support/model/DescribeTrustedAdvisorCheckSummariesResult.h>
#include <aws/support/model/DescribeTrustedAdvisorChecksResult.h>
#include <aws/support/model/RefreshTrustedAdvisorCheckResult.h>
#include <aws/support/model/ResolveCaseResult.h>
/* End of service model headers required in SupportClient header */

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

  namespace Support
  {
    using SupportClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using SupportEndpointProviderBase = Aws::Support::Endpoint::SupportEndpointProviderBase;
    using SupportEndpointProvider = Aws::Support::Endpoint::SupportEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SupportClient header */
      class AddAttachmentsToSetRequest;
      class AddCommunicationToCaseRequest;
      class CreateCaseRequest;
      class DescribeAttachmentRequest;
      class DescribeCasesRequest;
      class DescribeCommunicationsRequest;
      class DescribeServicesRequest;
      class DescribeSeverityLevelsRequest;
      class DescribeTrustedAdvisorCheckRefreshStatusesRequest;
      class DescribeTrustedAdvisorCheckResultRequest;
      class DescribeTrustedAdvisorCheckSummariesRequest;
      class DescribeTrustedAdvisorChecksRequest;
      class RefreshTrustedAdvisorCheckRequest;
      class ResolveCaseRequest;
      /* End of service model forward declarations required in SupportClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AddAttachmentsToSetResult, SupportError> AddAttachmentsToSetOutcome;
      typedef Aws::Utils::Outcome<AddCommunicationToCaseResult, SupportError> AddCommunicationToCaseOutcome;
      typedef Aws::Utils::Outcome<CreateCaseResult, SupportError> CreateCaseOutcome;
      typedef Aws::Utils::Outcome<DescribeAttachmentResult, SupportError> DescribeAttachmentOutcome;
      typedef Aws::Utils::Outcome<DescribeCasesResult, SupportError> DescribeCasesOutcome;
      typedef Aws::Utils::Outcome<DescribeCommunicationsResult, SupportError> DescribeCommunicationsOutcome;
      typedef Aws::Utils::Outcome<DescribeServicesResult, SupportError> DescribeServicesOutcome;
      typedef Aws::Utils::Outcome<DescribeSeverityLevelsResult, SupportError> DescribeSeverityLevelsOutcome;
      typedef Aws::Utils::Outcome<DescribeTrustedAdvisorCheckRefreshStatusesResult, SupportError> DescribeTrustedAdvisorCheckRefreshStatusesOutcome;
      typedef Aws::Utils::Outcome<DescribeTrustedAdvisorCheckResultResult, SupportError> DescribeTrustedAdvisorCheckResultOutcome;
      typedef Aws::Utils::Outcome<DescribeTrustedAdvisorCheckSummariesResult, SupportError> DescribeTrustedAdvisorCheckSummariesOutcome;
      typedef Aws::Utils::Outcome<DescribeTrustedAdvisorChecksResult, SupportError> DescribeTrustedAdvisorChecksOutcome;
      typedef Aws::Utils::Outcome<RefreshTrustedAdvisorCheckResult, SupportError> RefreshTrustedAdvisorCheckOutcome;
      typedef Aws::Utils::Outcome<ResolveCaseResult, SupportError> ResolveCaseOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AddAttachmentsToSetOutcome> AddAttachmentsToSetOutcomeCallable;
      typedef std::future<AddCommunicationToCaseOutcome> AddCommunicationToCaseOutcomeCallable;
      typedef std::future<CreateCaseOutcome> CreateCaseOutcomeCallable;
      typedef std::future<DescribeAttachmentOutcome> DescribeAttachmentOutcomeCallable;
      typedef std::future<DescribeCasesOutcome> DescribeCasesOutcomeCallable;
      typedef std::future<DescribeCommunicationsOutcome> DescribeCommunicationsOutcomeCallable;
      typedef std::future<DescribeServicesOutcome> DescribeServicesOutcomeCallable;
      typedef std::future<DescribeSeverityLevelsOutcome> DescribeSeverityLevelsOutcomeCallable;
      typedef std::future<DescribeTrustedAdvisorCheckRefreshStatusesOutcome> DescribeTrustedAdvisorCheckRefreshStatusesOutcomeCallable;
      typedef std::future<DescribeTrustedAdvisorCheckResultOutcome> DescribeTrustedAdvisorCheckResultOutcomeCallable;
      typedef std::future<DescribeTrustedAdvisorCheckSummariesOutcome> DescribeTrustedAdvisorCheckSummariesOutcomeCallable;
      typedef std::future<DescribeTrustedAdvisorChecksOutcome> DescribeTrustedAdvisorChecksOutcomeCallable;
      typedef std::future<RefreshTrustedAdvisorCheckOutcome> RefreshTrustedAdvisorCheckOutcomeCallable;
      typedef std::future<ResolveCaseOutcome> ResolveCaseOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SupportClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SupportClient*, const Model::AddAttachmentsToSetRequest&, const Model::AddAttachmentsToSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddAttachmentsToSetResponseReceivedHandler;
    typedef std::function<void(const SupportClient*, const Model::AddCommunicationToCaseRequest&, const Model::AddCommunicationToCaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddCommunicationToCaseResponseReceivedHandler;
    typedef std::function<void(const SupportClient*, const Model::CreateCaseRequest&, const Model::CreateCaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCaseResponseReceivedHandler;
    typedef std::function<void(const SupportClient*, const Model::DescribeAttachmentRequest&, const Model::DescribeAttachmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAttachmentResponseReceivedHandler;
    typedef std::function<void(const SupportClient*, const Model::DescribeCasesRequest&, const Model::DescribeCasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCasesResponseReceivedHandler;
    typedef std::function<void(const SupportClient*, const Model::DescribeCommunicationsRequest&, const Model::DescribeCommunicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCommunicationsResponseReceivedHandler;
    typedef std::function<void(const SupportClient*, const Model::DescribeServicesRequest&, const Model::DescribeServicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeServicesResponseReceivedHandler;
    typedef std::function<void(const SupportClient*, const Model::DescribeSeverityLevelsRequest&, const Model::DescribeSeverityLevelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSeverityLevelsResponseReceivedHandler;
    typedef std::function<void(const SupportClient*, const Model::DescribeTrustedAdvisorCheckRefreshStatusesRequest&, const Model::DescribeTrustedAdvisorCheckRefreshStatusesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTrustedAdvisorCheckRefreshStatusesResponseReceivedHandler;
    typedef std::function<void(const SupportClient*, const Model::DescribeTrustedAdvisorCheckResultRequest&, const Model::DescribeTrustedAdvisorCheckResultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTrustedAdvisorCheckResultResponseReceivedHandler;
    typedef std::function<void(const SupportClient*, const Model::DescribeTrustedAdvisorCheckSummariesRequest&, const Model::DescribeTrustedAdvisorCheckSummariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTrustedAdvisorCheckSummariesResponseReceivedHandler;
    typedef std::function<void(const SupportClient*, const Model::DescribeTrustedAdvisorChecksRequest&, const Model::DescribeTrustedAdvisorChecksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTrustedAdvisorChecksResponseReceivedHandler;
    typedef std::function<void(const SupportClient*, const Model::RefreshTrustedAdvisorCheckRequest&, const Model::RefreshTrustedAdvisorCheckOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RefreshTrustedAdvisorCheckResponseReceivedHandler;
    typedef std::function<void(const SupportClient*, const Model::ResolveCaseRequest&, const Model::ResolveCaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResolveCaseResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Support
} // namespace Aws
