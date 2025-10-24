﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-metrics/SageMakerMetricsEndpointProvider.h>
#include <aws/sagemaker-metrics/SageMakerMetricsErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in SageMakerMetricsClient header */
#include <aws/sagemaker-metrics/model/BatchGetMetricsResult.h>
#include <aws/sagemaker-metrics/model/BatchPutMetricsResult.h>
/* End of service model headers required in SageMakerMetricsClient header */

namespace Aws {
namespace Http {
class HttpClient;
class HttpClientFactory;
}  // namespace Http

namespace Utils {
template <typename R, typename E>
class Outcome;

namespace Threading {
class Executor;
}  // namespace Threading
}  // namespace Utils

namespace Auth {
class AWSCredentials;
class AWSCredentialsProvider;
}  // namespace Auth

namespace Client {
class RetryStrategy;
}  // namespace Client

namespace SageMakerMetrics {
using SageMakerMetricsClientConfiguration = Aws::Client::GenericClientConfiguration;
using SageMakerMetricsEndpointProviderBase = Aws::SageMakerMetrics::Endpoint::SageMakerMetricsEndpointProviderBase;
using SageMakerMetricsEndpointProvider = Aws::SageMakerMetrics::Endpoint::SageMakerMetricsEndpointProvider;

namespace Model {
/* Service model forward declarations required in SageMakerMetricsClient header */
class BatchGetMetricsRequest;
class BatchPutMetricsRequest;
/* End of service model forward declarations required in SageMakerMetricsClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<BatchGetMetricsResult, SageMakerMetricsError> BatchGetMetricsOutcome;
typedef Aws::Utils::Outcome<BatchPutMetricsResult, SageMakerMetricsError> BatchPutMetricsOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<BatchGetMetricsOutcome> BatchGetMetricsOutcomeCallable;
typedef std::future<BatchPutMetricsOutcome> BatchPutMetricsOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class SageMakerMetricsClient;

/* Service model async handlers definitions */
typedef std::function<void(const SageMakerMetricsClient*, const Model::BatchGetMetricsRequest&, const Model::BatchGetMetricsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchGetMetricsResponseReceivedHandler;
typedef std::function<void(const SageMakerMetricsClient*, const Model::BatchPutMetricsRequest&, const Model::BatchPutMetricsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchPutMetricsResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace SageMakerMetrics
}  // namespace Aws
