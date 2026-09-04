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
#include <aws/bedrock-runtime/model/InvokeModelRequest.h>
#include <aws/bedrock-runtime/model/InvokeModelWithBidirectionalStreamRequest.h>
#include <aws/bedrock-runtime/model/InvokeModelWithBidirectionalStreamHandler.h>
#include <aws/bedrock-runtime/model/BidirectionalInputPayloadPart.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/Outcome.h>
#include <aws/testing/TestingEnvironment.h>
#include <aws/core/platform/Environment.h>
#include <atomic>
#include <condition_variable>
#include <mutex>
#include <chrono>
#include <vector>

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
        config.connectTimeoutMs = 30000;
        config.requestTimeoutMs = 30000;
        config.region = AWS_TEST_REGION;
        m_client = Aws::MakeShared<BedrockRuntimeClient>(ALLOCATION_TAG, config);
    }

};

using Aws::Utils::Json::JsonValue;

Aws::String WrapEvent(JsonValue&& ev)
{
    JsonValue w;
    w.WithObject("event", std::move(ev));
    return w.View().WriteCompact();
}
Aws::String SessionStart()
{
    JsonValue inf;
    inf.WithInteger("maxTokens", 1024).WithDouble("topP", 0.9).WithDouble("temperature", 0.7);
    JsonValue s; s.WithObject("inferenceConfiguration", inf);
    JsonValue ev; ev.WithObject("sessionStart", s);
    return WrapEvent(std::move(ev));
}
Aws::String PromptStart(const Aws::String& promptName)
{
    JsonValue textCfg; textCfg.WithString("mediaType", "text/plain");
    JsonValue audioCfg;
    audioCfg.WithString("mediaType", "audio/lpcm")
            .WithInteger("sampleRateHertz", 24000)
            .WithInteger("sampleSizeBits", 16)
            .WithInteger("channelCount", 1)
            .WithString("voiceId", "matthew")
            .WithString("encoding", "base64")
            .WithString("audioType", "SPEECH");
    JsonValue ps;
    ps.WithString("promptName", promptName)
      .WithObject("textOutputConfiguration", textCfg)
      .WithObject("audioOutputConfiguration", audioCfg);
    JsonValue ev; ev.WithObject("promptStart", ps);
    return WrapEvent(std::move(ev));
}
Aws::String TextContentStart(const Aws::String& promptName, const Aws::String& contentName)
{
    JsonValue cfg; cfg.WithString("mediaType", "text/plain");
    JsonValue cs;
    cs.WithString("promptName", promptName)
      .WithString("contentName", contentName)
      .WithString("type", "TEXT")
      .WithBool("interactive", false)
      .WithString("role", "SYSTEM")
      .WithObject("textInputConfiguration", cfg);
    JsonValue ev; ev.WithObject("contentStart", cs);
    return WrapEvent(std::move(ev));
}
Aws::String TextInput(const Aws::String& promptName, const Aws::String& contentName, const Aws::String& text)
{
    JsonValue ti;
    ti.WithString("promptName", promptName).WithString("contentName", contentName).WithString("content", text);
    JsonValue ev; ev.WithObject("textInput", ti);
    return WrapEvent(std::move(ev));
}
Aws::String AudioContentStart(const Aws::String& promptName, const Aws::String& contentName)
{
    JsonValue cfg;
    cfg.WithString("mediaType", "audio/lpcm")
       .WithInteger("sampleRateHertz", 16000)
       .WithInteger("sampleSizeBits", 16)
       .WithInteger("channelCount", 1)
       .WithString("audioType", "SPEECH")
       .WithString("encoding", "base64");
    JsonValue cs;
    cs.WithString("promptName", promptName)
      .WithString("contentName", contentName)
      .WithString("type", "AUDIO")
      .WithBool("interactive", true)
      .WithString("role", "USER")
      .WithObject("audioInputConfiguration", cfg);
    JsonValue ev; ev.WithObject("contentStart", cs);
    return WrapEvent(std::move(ev));
}
Aws::String AudioInput(const Aws::String& promptName, const Aws::String& contentName, const uint8_t* pcm, size_t len)
{
    Aws::String b64 = Aws::Utils::HashingUtils::Base64Encode(Aws::Utils::ByteBuffer(pcm, len));
    JsonValue ai;
    ai.WithString("promptName", promptName).WithString("contentName", contentName).WithString("content", b64);
    JsonValue ev; ev.WithObject("audioInput", ai);
    return WrapEvent(std::move(ev));
}
Aws::String ContentEnd(const Aws::String& promptName, const Aws::String& contentName)
{
    JsonValue ce; ce.WithString("promptName", promptName).WithString("contentName", contentName);
    JsonValue ev; ev.WithObject("contentEnd", ce);
    return WrapEvent(std::move(ev));
}
Aws::String PromptEnd(const Aws::String& promptName)
{
    JsonValue pe; pe.WithString("promptName", promptName);
    JsonValue ev; ev.WithObject("promptEnd", pe);
    return WrapEvent(std::move(ev));
}

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

TEST_F(BedrockRuntimeTests, TestInvokeModel)
{
  auto bedrockRequest = Aws::BedrockRuntime::Model::InvokeModelRequest{}.WithModelId("us.amazon.nova-2-lite-v1:0").WithAccept("application/json");

  bedrockRequest.SetBody(Aws::MakeShared<Aws::StringStream>(
        "BedrockRuntimeTests::TestInvokeModel",
        R"({"messages":[{"role":"user","content":[{"text":"Why is the Mets baseball team so bad?"}]}]})"));
  bedrockRequest.SetContentType("application/json");

  Aws::BedrockRuntime::Model::InvokeModelOutcome outcome = m_client->InvokeModel(bedrockRequest);
  EXPECT_TRUE(outcome.IsSuccess()) << outcome.GetError().GetExceptionName() << " - " << outcome.GetError().GetMessage();
  Aws::StringStream ss;
  ss << outcome.GetResult().GetBody().rdbuf();
  ASSERT_FALSE(ss.str().empty());
}

TEST_F(BedrockRuntimeTests, TestInvokeModelWithBidirectionalStreamCompletesForShutdown)
{
    const Aws::String promptName = Aws::Utils::UUID::RandomUUID();
    const Aws::String textName   = Aws::Utils::UUID::RandomUUID();
    const Aws::String audioName  = Aws::Utils::UUID::RandomUUID();

    Aws::BedrockRuntime::Model::InvokeModelWithBidirectionalStreamRequest request;
    request.SetModelId("amazon.nova-sonic-v1:0");

    std::mutex mutex;
    std::condition_variable cv;
    bool httpDone = false;

    Aws::BedrockRuntime::Model::InvokeModelWithBidirectionalStreamHandler handler;
    handler.SetInitialResponseCallbackEx(
        [](const Aws::BedrockRuntime::Model::InvokeModelWithBidirectionalStreamInitialResponse&,
           const Aws::Utils::Event::InitialResponseType) {});
    handler.SetBidirectionalOutputPayloadPartCallback(
        [](const Aws::BedrockRuntime::Model::BidirectionalOutputPayloadPart&) {});
    handler.SetOnErrorCallback([](const Aws::Client::AWSError<BedrockRuntimeErrors>&) {
        // A service/stream error still completes the stream, which is all this test
        // needs; correctness of the conversation is not under test here.
    });
    request.SetEventStreamHandler(handler);

    auto streamReadyHandler =
        [&](Aws::BedrockRuntime::Model::InvokeModelWithBidirectionalStreamInput& input) {
            auto send = [&](const Aws::String& json) {
                Aws::BedrockRuntime::Model::BidirectionalInputPayloadPart part;
                part.SetBytes(Aws::Utils::CryptoBuffer(
                    reinterpret_cast<const unsigned char*>(json.c_str()), json.size()));
                input.WriteBidirectionalInputPayloadPart(part);
            };

            send(SessionStart());
            send(PromptStart(promptName));
            send(TextContentStart(promptName, textName));
            send(TextInput(promptName, textName, "Keep responses short."));
            send(ContentEnd(promptName, textName));
            send(AudioContentStart(promptName, audioName));
            // 100ms of 16kHz mono silence -- enough to be a valid input turn.
            std::vector<int16_t> silence(1600, 0);
            send(AudioInput(promptName, audioName,
                            reinterpret_cast<const uint8_t*>(silence.data()),
                            silence.size() * sizeof(int16_t)));
            send(ContentEnd(promptName, audioName));
            send(PromptEnd(promptName));

            // Close the write side so the server completes the stream and the
            // background streaming task returns. This is the step whose downstream
            // completion issue #3911 is about.
            input.Close();
        };

    auto responseHandler =
        [&](const BedrockRuntimeClient*,
            const Aws::BedrockRuntime::Model::InvokeModelWithBidirectionalStreamRequest&,
            const Aws::BedrockRuntime::Model::InvokeModelWithBidirectionalStreamOutcome&,
            const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) {
            std::lock_guard<std::mutex> lock(mutex);
            httpDone = true;
            cv.notify_all();
        };

    m_client->InvokeModelWithBidirectionalStreamAsync(request, streamReadyHandler, responseHandler, nullptr);

    std::unique_lock<std::mutex> lock(mutex);
    const bool completed = cv.wait_for(lock, std::chrono::seconds(60), [&] { return httpDone; });
    ASSERT_TRUE(completed)
        << "Bidirectional stream never completed after the input was closed; "
        << "Aws::ShutdownAPI() would hang at process exit (issue #3911).";
}

}
