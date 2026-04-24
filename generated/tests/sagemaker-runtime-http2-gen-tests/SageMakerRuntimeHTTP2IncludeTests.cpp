/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2Client.h>
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2EndpointProvider.h>
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2EndpointRules.h>
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2ErrorMarshaller.h>
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2Errors.h>
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2Request.h>
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2ServiceClientModel.h>
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2_EXPORTS.h>
#include <aws/sagemaker-runtime-http2/model/InputValidationError.h>
#include <aws/sagemaker-runtime-http2/model/InternalServerError.h>
#include <aws/sagemaker-runtime-http2/model/InvokeEndpointWithBidirectionalStreamHandler.h>
#include <aws/sagemaker-runtime-http2/model/InvokeEndpointWithBidirectionalStreamInitialResponse.h>
#include <aws/sagemaker-runtime-http2/model/InvokeEndpointWithBidirectionalStreamRequest.h>
#include <aws/sagemaker-runtime-http2/model/ModelError.h>
#include <aws/sagemaker-runtime-http2/model/ModelStreamError.h>
#include <aws/sagemaker-runtime-http2/model/RequestPayloadPart.h>
#include <aws/sagemaker-runtime-http2/model/RequestStreamEvent.h>
#include <aws/sagemaker-runtime-http2/model/ResponsePayloadPart.h>
#include <aws/sagemaker-runtime-http2/model/ResponseStreamEvent.h>
#include <aws/sagemaker-runtime-http2/model/ServiceUnavailableError.h>

using SageMakerRuntimeHTTP2IncludeTest = ::testing::Test;

TEST_F(SageMakerRuntimeHTTP2IncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::SageMakerRuntimeHTTP2::SageMakerRuntimeHTTP2Client>("SageMakerRuntimeHTTP2IncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
