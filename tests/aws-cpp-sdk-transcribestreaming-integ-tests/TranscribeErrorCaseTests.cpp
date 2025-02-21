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
  void TestTrace(Aws::String msg) { m_testTraces += Aws::Utils::DateTime::Now().ToGmtStringWithMs() + " " + std::move(msg) + "\n"; };

 protected:
  Aws::String m_testTraces;
  void TestTraceFailure(Aws::String msg) {
    m_testTraces += "[FAILURE] " + Aws::Utils::DateTime::Now().ToGmtStringWithMs() + " " + std::move(msg) + "\n";
  };
  void SetUp() {}
  void TearDown() {
    std::cout << "Test traces: " << m_testTraces << "\n";
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

TEST_F(TranscribeStreamingErrorTests, TranscribeTerminateByLowSpeedLimit) {
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  config.httpLibPerfMode = Http::TransferLibPerformanceMode::REGULAR;
  config.enableHttpClientTrace = true;
  config.lowSpeedLimit = 10;
  config.requestTimeoutMs = 6000;
  config.connectTimeoutMs = 3000;

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
    AWS_ADD_FAILURE(Aws::String("Received error: ") + errors.GetExceptionName() + ". with msg: " + errors.GetMessage())
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
        TestTrace(Aws::String("Sleeping 10s, shoud get terminated"));
        std::this_thread::sleep_for(std::chrono::seconds(10));
      }
    }

    TestTrace(Aws::String("Sending final empty frame"));
    stream.WriteAudioEvent({});
    TestTrace(Aws::String("Flushing and closing the stream"));
    stream.flush();
    stream.Close();
  };

  Aws::Utils::Threading::Semaphore semaphore(0, 1);
  auto OnResponseCallback = [&semaphore, this](const TranscribeStreamingServiceClient*, const StartStreamTranscriptionRequest&,
                                         const StartStreamTranscriptionOutcome& outcome,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) {
    if (outcome.IsSuccess()) {
      TestTrace(Aws::String("OnResponseCallback, success"));
    } else {
      TestTrace(Aws::String("OnResponseCallback, error: ") + outcome.GetError().GetMessage());
    }
    semaphore.ReleaseAll();
  };
  for (size_t i = 0; i < 2; ++i) {
    client->StartStreamTranscriptionAsync(request, OnStreamReady, OnResponseCallback, nullptr /*context*/);
    semaphore.WaitOne();
  }
  EXPECT_FALSE(operationRequestId.empty()) << "Did not receive a request id for the StartStreamTranscription";
}

TEST_F(TranscribeStreamingErrorTests, TranscribeRequestGoesOutOfScope) {
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  config.httpLibPerfMode = Http::TransferLibPerformanceMode::REGULAR;
  config.enableHttpClientTrace = true;

  StartStreamTranscriptionHandler handler;
  handler.SetTranscriptEventCallback([this](const TranscriptEvent& ev) {
    TestTrace(Aws::String("TranscriptEventCallback: ") + ev.Jsonize().View().AsString());
  });
  handler.SetInitialResponseCallback([&](const StartStreamTranscriptionInitialResponse& initialResponse) {
    TestTrace(Aws::String("InitialResponseCallback: ") + initialResponse.Jsonize().View().AsString());
  });
  handler.SetOnErrorCallback([this](const Aws::Client::AWSError<TranscribeStreamingServiceErrors>& errors) {
    TestTrace(Aws::String("OnErrorCallback: ") + errors.GetMessage());
  });
  Aws::UniquePtr<StartStreamTranscriptionRequest> pRequest = Aws::MakeUnique<StartStreamTranscriptionRequest>("TranscribeRequestGoesOutOfScope");
  pRequest->SetMediaSampleRateHertz(8000);
  pRequest->SetLanguageCode(LanguageCode::en_US);
  pRequest->SetMediaEncoding(MediaEncoding::pcm);
  pRequest->SetEventStreamHandler(handler);
  Aws::UniquePtr<StartStreamTranscriptionRequest>* ppRequest = &pRequest;

  std::mutex executorStartMutex;
  std::condition_variable executorSignal;
  bool allowExecutorTaskToStart = false;
  config.configFactories.executorCreateFn = [&executorStartMutex, &executorSignal, &allowExecutorTaskToStart, this, ppRequest]() -> std::shared_ptr<Utils::Threading::Executor> {
    class DelayedDefaultExecutor : public Threading::DefaultExecutor {
    public:
      DelayedDefaultExecutor(std::mutex& executorStartMutex, std::condition_variable& executorSignal, bool& allowExecutorTaskToStart, Aws::UniquePtr<StartStreamTranscriptionRequest>* ppRequest)
      : m_mutex(executorStartMutex), m_signal(executorSignal), m_start(allowExecutorTaskToStart), m_ppRequest(ppRequest) {}
    protected:
      std::mutex& m_mutex;
      std::condition_variable& m_signal;
      bool& m_start;
      Aws::UniquePtr<StartStreamTranscriptionRequest>* m_ppRequest = nullptr;
      bool SubmitToThread(std::function<void()>&& task) override {
        auto newTask = [this, task]() {
          // m_ppRequest->reset(); // destroy request object
          // m_ppRequest = nullptr;
          // std::unique_lock<std::mutex> lock(m_mutex);
          // if (!m_start) {
          //   m_signal.wait_for(lock, std::chrono::seconds(60), [this]() { return m_start; });
          // }
          task(); // call original task
        };
        return DefaultExecutor::SubmitToThread(std::move(newTask));
      }
    };

    return Aws::MakeShared<DelayedDefaultExecutor>("TranscribeRequestGoesOutOfScope", executorStartMutex, executorSignal, allowExecutorTaskToStart, ppRequest);
  };

  Aws::UniquePtr<TranscribeStreamingServiceClient> client = Aws::MakeUnique<TranscribeStreamingServiceClient>(ALLOC_TAG, config);

  std::future<bool> requestDestroyFuture;
  std::atomic<bool> requestAlive = {true};
  auto OnStreamReady = [&](AudioStream&) {
    TestTrace(Aws::String("OnStreamReady"));
    // This is the main thread.
    // the event stream worker thread must be already running at this point because this callback is called after
    // sem->WaitOne(); which is notified by the worker thread.
    std::this_thread::sleep_for(std::chrono::seconds(1));
    requestDestroyFuture = std::async(std::launch::async,
                                    [&]() -> bool {
                                      EXPECT_TRUE(requestAlive.load());
                                      TestTrace(Aws::String("Destroying the request object"));
                                      // destroy request object, simulates some other thread invalidating the request
                                      ppRequest->reset();
                                      ppRequest = nullptr;
                                      TestTrace(Aws::String("The request is destroyed now"));
                                      requestAlive.store(false);
                                      return true;
                                    });
    std::this_thread::sleep_for(std::chrono::seconds(1));
    EXPECT_TRUE(requestAlive.load()) << "Request object destruction had to be delayed for the duration of async execution!";
  };

  Aws::Utils::Threading::Semaphore semaphore(0, 1);
  bool gotError = false;
  auto OnResponseCallback = [&semaphore, &gotError, this](const TranscribeStreamingServiceClient*, const StartStreamTranscriptionRequest&,
                                         const StartStreamTranscriptionOutcome& outcome,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) {
    if (outcome.IsSuccess()) {
      TestTrace(Aws::String("OnResponseCallback, success"));
    } else {
      gotError = true;
      TestTrace(Aws::String("OnResponseCallback, error: ") + outcome.GetError().GetMessage());
    }
    semaphore.ReleaseAll();
  };

  {
    client->StartStreamTranscriptionAsync(*pRequest, OnStreamReady, OnResponseCallback, nullptr /*context*/);
    TestTrace(Aws::String("StartStreamTranscriptionAsync has been submitted"));
  }
  semaphore.WaitOne();
  ASSERT_TRUE(gotError);
  ASSERT_FALSE(requestAlive.load());
}

#endif
