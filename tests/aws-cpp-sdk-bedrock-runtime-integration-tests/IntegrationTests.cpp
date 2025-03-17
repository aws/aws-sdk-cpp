/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/testing/MemoryTesting.h>
#include <algorithm>
#include <thread>

#include <aws/bedrock-runtime/BedrockRuntimeClient.h>
#include <aws/bedrock-runtime/BedrockRuntimeErrors.h>
#include <aws/bedrock-runtime/model/ConverseStreamRequest.h>
#include <aws/bedrock-runtime/model/ConverseStreamHandler.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/Outcome.h>
#include <aws/testing/TestingEnvironment.h>
#include <aws/core/platform/Environment.h>
#include <condition_variable>
#include <chrono>

using namespace Aws::BedrockRuntime;
using namespace Aws::BedrockRuntime::Model;
using namespace Aws::Client;
using namespace Aws::Region;


namespace
{
static const char* ALLOCATION_TAG = "BedrockRuntimeTests";

class BedrockRuntimeTests : public ::testing::Test
{
protected:
    std::shared_ptr<BedrockRuntimeClient> m_client;

    void SetUp()
    {
        Aws::Client::ClientConfiguration config;
        config.region = AWS_TEST_REGION;
        m_client = Aws::MakeShared<BedrockRuntimeClient>(ALLOCATION_TAG, config);
    }

};

TEST_F(BedrockRuntimeTests, TestStreaming)
{
    std::shared_ptr<Aws::BedrockRuntime::Model::ConverseStreamHandler> streamHandler = Aws::MakeShared<Aws::BedrockRuntime::Model::ConverseStreamHandler>(ALLOCATION_TAG);

    Aws::BedrockRuntime::Model::ConverseStreamRequest bedrockRequest;
    // other request setup
    std::mutex mutex;
    std::condition_variable cv;
    auto startTime = std::chrono::system_clock::now();
    bool responseReceived = false;
    streamHandler->SetInitialResponseCallbackEx([&](const Aws::BedrockRuntime::Model::ConverseStreamInitialResponse& , const Aws::Utils::Event::InitialResponseType awsResponseType)
    {
        std::unique_lock<std::mutex> lock(mutex);
        if (awsResponseType == Aws::Utils::Event::InitialResponseType::ON_RESPONSE) {
            responseReceived = true;
            cv.notify_one();
        }
    });

    bedrockRequest.SetEventStreamHandler(*streamHandler);
    bedrockRequest.SetModelId("dummy model");
    bedrockRequest.SetMessages({});
    Aws::BedrockRuntime::Model::ConverseStreamOutcome outcome = m_client->ConverseStream(bedrockRequest);
    ASSERT_FALSE(outcome.IsSuccess());
    std::unique_lock<std::mutex> lock(mutex);
    cv.wait_until(lock, startTime + std::chrono::seconds(10), [&] { 
            return responseReceived; }); 
    ASSERT_TRUE(responseReceived);
}
}
