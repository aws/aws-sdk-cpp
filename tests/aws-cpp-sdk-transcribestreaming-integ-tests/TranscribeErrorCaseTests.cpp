/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// WinHTTP SDK client does not work with streaming
#if defined(HAVE_H2_CLIENT) && !defined(_WIN32)
#include <aws/core/Aws.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/transcribestreaming/TranscribeStreamingServiceClient.h>
#include <aws/transcribestreaming/model/StartStreamTranscriptionHandler.h>
#include <aws/transcribestreaming/model/StartStreamTranscriptionRequest.h>

#include <fstream>

using namespace Aws;
using namespace Aws::Utils;
using namespace Aws::TranscribeStreamingService;
using namespace Aws::TranscribeStreamingService::Model;

static const char ALLOC_TAG[] = "TranscribeStreamingErrorTests";
static const char TEST_FILE_NAME[] = "transcribe-test-file.wav";

#define AWS_ADD_FAILURE(MSG) \
  ADD_FAILURE() << MSG;      \
  TestTraceFailure(MSG);

class TranscribeStreamingErrorTests : public Aws::Testing::AwsCppSdkGTestSuite {
 public:
  TranscribeStreamingErrorTests() = default;

 protected:
  Aws::String m_testTraces;
  void TestTrace(Aws::String msg) { m_testTraces += Aws::Utils::DateTime::Now().ToGmtStringWithMs() + " " + std::move(msg) + "\n"; };
  void TestTraceFailure(Aws::String msg) {
    m_testTraces += "[FAILURE] " + Aws::Utils::DateTime::Now().ToGmtStringWithMs() + " " + std::move(msg) + "\n";
  };
  void SetUp() {}
  void TearDown() {
    if (::testing::Test::HasFailure()) {
      std::cout << "Test traces: " << m_testTraces << "\n";
    }
    m_testTraces.erase();
  }
};

TEST_F(TranscribeStreamingErrorTests, TranscribeAudioFile) {
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  config.httpLibPerfMode = Http::TransferLibPerformanceMode::REGULAR;
  config.enableHttpClientTrace = true;
  Aws::UniquePtr<TranscribeStreamingServiceClient> client = Aws::MakeUnique<TranscribeStreamingServiceClient>(ALLOC_TAG, config);

  Aws::String transcribedResult;
  StartStreamTranscriptionHandler handler;
  handler.SetTranscriptEventCallback([&transcribedResult](const TranscriptEvent& ev) {
    const auto& results = ev.GetTranscript().GetResults();
    if (results.empty()) {
      return;
    }
    const auto& last = results.back();
    const auto& alternatives = last.GetAlternatives();
    if (alternatives.empty()) {
      return;
    }
    transcribedResult = alternatives.back().GetTranscript();
  });

  Aws::String operationRequestId;
  handler.SetInitialResponseCallback([&](const StartStreamTranscriptionInitialResponse& initialResponse) {
    operationRequestId = initialResponse.GetRequestId();
    if (operationRequestId.empty()) {
      AWS_ADD_FAILURE("InitialResponseCallback is called but received empty RequestId");
      TestTrace(Aws::String("initialResponse was: ") + initialResponse.Jsonize().View().AsString());
    }
    TestTrace(Aws::String("InitialResponse aws RequestId: ") + operationRequestId);
    TestTrace(Aws::String("InitialResponse transcribe SessionId: ") + initialResponse.GetSessionId());
  });
  handler.SetOnErrorCallback([&transcribedResult, this](const Aws::Client::AWSError<TranscribeStreamingServiceErrors>& errors) {
    // we will receive an error because the request was abruptly shutdown (via stream.Close()).
    // However, we cannot delay the call to closing the stream, because HTTP clients such as libcurl buffer the
    // requests before sending them over the wire, so it will keep BUFFER_SIZE bytes in its memory if we don't
    // signal the completion of the stream (by closing it).
    // To discern between that case and a true error, we check if we have received any text back from the service.
    if (transcribedResult.empty()) {
      AWS_ADD_FAILURE(Aws::String("Received error: ") + errors.GetExceptionName() + ". with msg: " + errors.GetMessage())
    }
  });

  StartStreamTranscriptionRequest request;
  request.SetMediaSampleRateHertz(8000);
  request.SetLanguageCode(LanguageCode::en_US);
  request.SetMediaEncoding(MediaEncoding::pcm);
  request.SetEventStreamHandler(handler);

  auto OnStreamReady = [this](AudioStream& stream) {
    TestTrace(Aws::String("OnStreamReady"));

    for (size_t i = 0; i < 2; ++i) {
      Aws::FStream file(TEST_FILE_NAME, std::ios_base::in | std::ios_base::binary);
      ASSERT_TRUE(file);
      char buf[2048];
      while (file) {
        file.read(buf, sizeof(buf));
        Aws::Vector<unsigned char> bits{buf, buf + file.gcount()};
        AudioEvent event(std::move(bits));
        if (!stream) {
          break;
        }
        TestTrace(Aws::String("Writing good event"));
        if (!stream.WriteAudioEvent(event)) {
          AWS_ADD_FAILURE("Failed to write an audio event");
          break;
        }
      }
      if (i == 0) {
        TestTrace(Aws::String("Writing large bad event"));
        Aws::Utils::Event::Message msg;
        msg.InsertEventHeader(":message-type", Aws::String("event"));
        msg.InsertEventHeader(":event-type", Aws::String("AudioEvent"));
        msg.InsertEventHeader(":content-type", Aws::String("application/octet-stream"));
        msg.WriteEventPayload([]() {
          Aws::String payload;
          for (size_t j = 0; j < 3000; ++j) {
            payload += "very bad event ";
          }
          return payload;
        }());
        stream.WriteEvent(msg);
        if (!stream) {
          AWS_ADD_FAILURE("Failed to write a bad event");
          break;
        }
      }
    }

    TestTrace(Aws::String("Sending final empty frame"));
    stream.WriteAudioEvent({});
    TestTrace(Aws::String("Flushing and closing the stream"));
    stream.flush();
    stream.Close();
  };

  Aws::Utils::Threading::Semaphore semaphore(0, 1);
  auto OnResponseCallback = [&semaphore](const TranscribeStreamingServiceClient*, const StartStreamTranscriptionRequest&,
                                         const StartStreamTranscriptionOutcome&,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) { semaphore.ReleaseAll(); };

  client->StartStreamTranscriptionAsync(request, OnStreamReady, OnResponseCallback, nullptr /*context*/);
  semaphore.WaitOne();

  EXPECT_FALSE(operationRequestId.empty()) << "Did not receive a request id for the StartStreamTranscription";
}

#endif
