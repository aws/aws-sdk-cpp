/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Temporarily disable the test on Widnows
#if defined(HAVE_H2_CLIENT) && !defined(_WIN32)

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/core/Aws.h>
#include <aws/core/internal/AWSHttpResourceClient.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/threading/Semaphore.h>
#include <aws/core/platform/FileSystem.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/transcribestreaming/TranscribeStreamingServiceClient.h>
#include <aws/transcribestreaming/model/StartStreamTranscriptionRequest.h>
#include <aws/transcribestreaming/model/StartStreamTranscriptionHandler.h>
#include <fstream>

using namespace Aws;
using namespace Aws::Utils;
using namespace Aws::TranscribeStreamingService;
using namespace Aws::TranscribeStreamingService::Model;

static const char TEST_FILE_NAME[] = "transcribe-test-file.wav";
const char ALLOC_TAG[] = "TranscribestreamingIntegTest";

#define AWS_ADD_FAILURE(MSG) \
ADD_FAILURE() << MSG;        \
TestTraceFailure(MSG);


class TranscribeStreamingTests : public Aws::Testing::AwsCppSdkGTestSuite
{
public:
    TranscribeStreamingTests()
    {
        Aws::Internal::AWSHttpResourceClient httpclient;
        const Aws::Vector<Aws::String> TEST_FILE_NAMES = {"transcribe-test-file.wav", "this_is_a_cpp_test_sample_8kHz_2162ms.wav", "Kant_16kHz_17176ms.wav"};
        for(const auto& toDownload : TEST_FILE_NAMES)
        {
            Aws::String path = "aws-sdk-cpp-builds-sdks-team/test-resources/" + toDownload;
            auto payload = httpclient.GetResource("https://s3.amazonaws.com/" /*endpoint*/,
                                                  path.c_str(), "" /*authToken*/);
            Aws::OFStream testFile(toDownload.c_str(), std::ios_base::out | std::ios_base::binary | std::ios_base::trunc);
            testFile.write(payload.c_str(), payload.size());
            testFile.close();
        }

        Aws::Client::ClientConfiguration config;
#ifdef _WIN32
        // TODO: remove this once we get H2 working with WinHttp client
        config.httpLibOverride = Aws::Http::TransferLibType::WIN_INET_CLIENT;
#endif
        m_client = Aws::MakeUnique<TranscribeStreamingServiceClient>(ALLOC_TAG, config);
        m_clientWithWrongCreds = Aws::MakeUnique<TranscribeStreamingServiceClient>(ALLOC_TAG, Aws::Auth::AWSCredentials("a", "b"), config);
        config.endpointOverride = "https://0xxxabcdefg123456789.com";
        m_clientWithWrongEndpoint = Aws::MakeUnique<TranscribeStreamingServiceClient>(ALLOC_TAG, config);
    }

    ~TranscribeStreamingTests()
    {
        Aws::FileSystem::RemoveFileIfExists(TEST_FILE_NAME);
    }

    Aws::UniquePtr<TranscribeStreamingServiceClient> m_client;
    Aws::UniquePtr<TranscribeStreamingServiceClient> m_clientWithWrongCreds;
    Aws::UniquePtr<TranscribeStreamingServiceClient> m_clientWithWrongEndpoint;

protected:
    Aws::String m_testTraces;
    void TestTrace(Aws::String msg)
    {
        m_testTraces += Aws::Utils::DateTime::Now().ToGmtStringWithMs() + " " + std::move(msg) + "\n";
    };
    void TestTraceFailure(Aws::String msg)
    {
        m_testTraces += "[FAILURE] " + Aws::Utils::DateTime::Now().ToGmtStringWithMs() + " " + std::move(msg) + "\n";
    };
    void SetUp()
    {
    }
    void TearDown()
    {
        if (::testing::Test::HasFailure())
        {
            std::cout << "Test traces: " << m_testTraces << "\n";
        }
        m_testTraces.erase();
    }

    Aws::String RunTestLikeSample(size_t timeoutMs, const Aws::String& fileName, const size_t SampleRate, const size_t chunkLengthToUseMs);
};

TEST_F(TranscribeStreamingTests, TranscribeAudioFile)
{
    const char EXPECTED_MESSAGE[] = "But what if somebody decides to break it? Be careful that you keep adequate coverage.";
    Aws::String transcribedResult;
    StartStreamTranscriptionHandler handler;
    handler.SetTranscriptEventCallback([&transcribedResult](const TranscriptEvent& ev)
    {
        // TODO: only check the result marked as "final"
        const auto& results = ev.GetTranscript().GetResults();
        if (results.empty())
        {
            return;
        }
        const auto& last = results.back();
        const auto& alternatives = last.GetAlternatives();
        if (alternatives.empty())
        {
            return;
        }
        transcribedResult = alternatives.back().GetTranscript();
    });

    handler.SetOnErrorCallback([&transcribedResult, this](const Aws::Client::AWSError<TranscribeStreamingServiceErrors>& errors)
    {
        // we will receive an error because the request was abruptly shutdown (via stream.Close()).
        // However, we cannot delay the call to closing the stream, because HTTP clients such as libcurl buffer the
        // requests before sending them over the wire, so it will keep BUFFER_SIZE bytes in its memory if we don't
        // signal the completion of the stream (by closing it).
        // To discern between that case and a true error, we check if we have received any text back from the service.
        if(transcribedResult.empty())
        {
            AWS_ADD_FAILURE(Aws::String("Received error: ") + errors.GetExceptionName() + ". with msg: " + errors.GetMessage())
        }
    });

    StartStreamTranscriptionRequest request;
    request.SetMediaSampleRateHertz(8000);
    request.SetLanguageCode(LanguageCode::en_US);
    request.SetMediaEncoding(MediaEncoding::pcm);
    request.SetEventStreamHandler(handler);

    auto OnStreamReady = [](AudioStream& stream)
    {
        Aws::FStream file(TEST_FILE_NAME, std::ios_base::in | std::ios_base::binary);
        ASSERT_TRUE(file);
        char buf[1024];
        while(file)
        {
            file.read(buf, sizeof(buf));
            Aws::Vector<unsigned char> bits{buf, buf + file.gcount()};
            AudioEvent event(std::move(bits));
            if (!stream)
            {
                break;
            }
            if (!stream.WriteAudioEvent(event))
            {
                break;
            }
            std::this_thread::sleep_for(std::chrono::milliseconds(60));
        }
        stream.WriteAudioEvent({}); // per the spec, we have to send an empty event (i.e. without a payload) at the end.
        stream.flush();
        // For some reason, this sleep is required in order to not get the empty frame lost.
        std::this_thread::sleep_for(std::chrono::milliseconds(1000)); /* We are investigating why we need this */
        stream.Close();
    };

    Aws::Utils::Threading::Semaphore semaphore(0, 1);
    auto OnResponseCallback = [&semaphore](const TranscribeStreamingServiceClient*,
            const StartStreamTranscriptionRequest&,
            const StartStreamTranscriptionOutcome&,
            const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
    {
        semaphore.ReleaseAll();
    };

    m_client->StartStreamTranscriptionAsync(request, OnStreamReady, OnResponseCallback, nullptr/*context*/);
    semaphore.WaitOne();
    ASSERT_EQ(0u, transcribedResult.find(EXPECTED_MESSAGE)) << "Received message: " << transcribedResult;
}

TEST_F(TranscribeStreamingTests, TranscribeAudioFileWithErrorServiceResponse)
{
    Aws::String transcribedResult;
    StartStreamTranscriptionHandler handler;
    handler.SetTranscriptEventCallback([&transcribedResult](const TranscriptEvent& ev)
    {
        // TODO: only check the result marked as "final"
        const auto& results = ev.GetTranscript().GetResults();
        if (results.empty())
        {
            return;
        }
        const auto& last = results.back();
        const auto& alternatives = last.GetAlternatives();
        if (alternatives.empty())
        {
            return;
        }
        transcribedResult = alternatives.back().GetTranscript();
    });
    bool encounteredError = false;
    handler.SetOnErrorCallback([&encounteredError](const Aws::Client::AWSError<TranscribeStreamingServiceErrors>& )
    {
        encounteredError = true;
    });

    StartStreamTranscriptionRequest request;
    request.SetMediaSampleRateHertz(8000);
    request.SetLanguageCode(LanguageCode::en_US);
    request.SetMediaEncoding(MediaEncoding::pcm);
    request.SetEventStreamHandler(handler);

    bool streamClosedUnexpectedly = false;
    bool streamFinishedSendingBeforeFail = false;
    auto OnStreamReady = [&](AudioStream& stream)
    {
        Aws::FStream file(TEST_FILE_NAME, std::ios_base::in | std::ios_base::binary);
        ASSERT_TRUE(file);
        char buf[1024];
        while(file)
        {
            file.read(buf, sizeof(buf));
            Aws::Vector<unsigned char> bits{buf, buf + file.gcount()};
            AudioEvent event(std::move(bits));
            if (!stream)
            {
                streamClosedUnexpectedly = true;
                break;
            }
            if (!stream.WriteAudioEvent(event))
            {
                streamClosedUnexpectedly = true;
                break;
            }
        }
        if (!streamClosedUnexpectedly)
        {
            streamFinishedSendingBeforeFail = true;
        }
        stream.WriteAudioEvent({}); // per the spec, we have to send an empty event (i.e. without a payload) at the end.
        stream.flush();
        stream.Close();
    };

    Aws::Utils::Threading::Semaphore semaphore(0, 1);
    auto OnResponseCallback = [&semaphore](const TranscribeStreamingServiceClient*,
            const StartStreamTranscriptionRequest&,
            const StartStreamTranscriptionOutcome&,
            const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
    {
        semaphore.ReleaseAll();
    };

    m_clientWithWrongCreds->StartStreamTranscriptionAsync(request, OnStreamReady, OnResponseCallback, nullptr/*context*/);
    semaphore.WaitOne();
    ASSERT_TRUE(encounteredError);
    ASSERT_TRUE(streamClosedUnexpectedly || streamFinishedSendingBeforeFail);
}

TEST_F(TranscribeStreamingTests, TranscribeStreamingWithRequestRetry)
{
    Aws::String transcribedResult;
    StartStreamTranscriptionHandler handler;
    handler.SetTranscriptEventCallback([&transcribedResult](const TranscriptEvent& ev)
    {
        // TODO: only check the result marked as "final"
        const auto& results = ev.GetTranscript().GetResults();
        if (results.empty())
        {
            return;
        }
        const auto& last = results.back();
        const auto& alternatives = last.GetAlternatives();
        if (alternatives.empty())
        {
            return;
        }
        transcribedResult = alternatives.back().GetTranscript();
    });
    handler.SetOnErrorCallback([](const Aws::Client::AWSError<TranscribeStreamingServiceErrors>& )
    {
    });

    StartStreamTranscriptionRequest request;
    request.SetMediaSampleRateHertz(8000);
    request.SetLanguageCode(LanguageCode::en_US);
    request.SetMediaEncoding(MediaEncoding::pcm);
    request.SetEventStreamHandler(handler);

    auto OnStreamReady = [&](AudioStream& stream)
    {
        stream.Close();
        return;
    };

    Aws::Utils::Threading::Semaphore semaphore(0, 1);
    auto OnResponseCallback = [&semaphore](const TranscribeStreamingServiceClient*,
            const StartStreamTranscriptionRequest&,
            const StartStreamTranscriptionOutcome&,
            const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)
    {
        semaphore.ReleaseAll();
    };

    m_clientWithWrongEndpoint->StartStreamTranscriptionAsync(request, OnStreamReady, OnResponseCallback, nullptr/*context*/);
    semaphore.WaitOne();
}

Aws::String TranscribeStreamingTests::RunTestLikeSample(size_t timeoutMs, const Aws::String& fileName, const size_t SampleRate, const size_t chunkLengthToUseMs)
{
    SCOPED_TRACE(Aws::String("File name: ") + fileName);
    SCOPED_TRACE(Aws::String("Sample rate (Hz): ") + Aws::Utils::StringUtils::to_string(SampleRate));
    SCOPED_TRACE(Aws::String("Chunk duration (ms): ") + Aws::Utils::StringUtils::to_string(chunkLengthToUseMs));
    int64_t testStartedMs = Aws::Utils::DateTime::Now().Millis();
    // +1s for the final sleep after the last empty event; still checking why we need this to avoid an error return from a service.
    int64_t testMustEndBeforeMs = testStartedMs + timeoutMs + 1000;
    SCOPED_TRACE(Aws::String("Test start: ") + Aws::Utils::StringUtils::to_string(testStartedMs));
    SCOPED_TRACE(Aws::String("Must end before: ") + Aws::Utils::StringUtils::to_string(testMustEndBeforeMs));
    size_t failedToKeepUpCount = 0;

    Aws::String transcribedResult;

    StartStreamTranscriptionHandler handler;
    handler.SetOnErrorCallback(
            [this](const Aws::Client::AWSError<TranscribeStreamingServiceErrors> &error) {
                    AWS_ADD_FAILURE(Aws::String("OnErrorCallback: ") + error.GetMessage())
            });
    //SetTranscriptEventCallback called for every 'chunk' of file transcripted.
    // Partial results are returned in real time.
    handler.SetTranscriptEventCallback([&transcribedResult, &testMustEndBeforeMs, this](const TranscriptEvent &ev) {
            TestTrace(Aws::String("TranscriptEventCallback: ") + ev.Jsonize().View().WriteCompact());
            if(Aws::Utils::DateTime::Now().Millis() > testMustEndBeforeMs)
            {
                AWS_ADD_FAILURE("Test is taking too long, aborting.");
                return;
            }
            for (auto &&r: ev.GetTranscript().GetResults()) {
                Aws::String alternatives;
                for (auto &&alt: r.GetAlternatives()) {
                    alternatives += alt.GetTranscript();
                }
                if (r.GetIsPartial()) {
                    SCOPED_TRACE(Aws::String("TranscriptEventCallback: ") + "[Partial] " + alternatives);
                }
                else {
                    SCOPED_TRACE(Aws::String("TranscriptEventCallback: ") + "[Final] " + alternatives);
                    if (!transcribedResult.empty())
                      transcribedResult += " ";

                    transcribedResult += alternatives;
                }
            }
    });

    StartStreamTranscriptionRequest request;
    request.SetMediaSampleRateHertz(SampleRate);
    request.SetLanguageCode(LanguageCode::en_US);
    request.SetMediaEncoding(MediaEncoding::pcm); // wav and aiff files are PCM formats.
    request.SetEventStreamHandler(handler);

    auto OnStreamReady = [&fileName, chunkLengthToUseMs, SampleRate, testMustEndBeforeMs, &failedToKeepUpCount, this](AudioStream &stream) {
            TestTrace("OnStreamReady start");
            Aws::FStream file(fileName.c_str(), std::ios_base::in | std::ios_base::binary);
            if (!file.is_open()) {
                FAIL() << "Failed to open " << fileName << '\n';
            }
            const int bufferSize = chunkLengthToUseMs * SampleRate / 1000 * 2;
            Aws::Vector<char> buf(bufferSize);

            int64_t lastAudioEventSentAt = Aws::Utils::DateTime::Now().Millis();
            while (file && file.peek() != -1) {
                if(Aws::Utils::DateTime::Now().Millis() > testMustEndBeforeMs)
                {
                    AWS_ADD_FAILURE("Test is taking too long, aborting.");
                    break;
                }
                int64_t eventStart = Aws::Utils::DateTime::Now().Millis();
                file.read(&buf[0], buf.size());

                if (!file && file.gcount() == 0) {
                    AWS_ADD_FAILURE(Aws::String("Provided file is empty: ") + fileName);
                    break;
                }

                Aws::Vector<unsigned char> bits{buf.begin(), buf.begin() + file.gcount()};
                AudioEvent event(std::move(bits));
                if (!stream) {
                    AWS_ADD_FAILURE("Failed to create a stream");
                    break;
                }

                // The std::basic_istream::gcount() is used to count the characters in the given string. It returns
                // the number of characters extracted by the last read() operation.`
                if (file.gcount() > 0) {
                    int64_t now = Aws::Utils::DateTime::Now().Millis();

                    int64_t sleepForMs = std::max((int64_t) 0l, (int64_t) (chunkLengthToUseMs - (now - lastAudioEventSentAt)));
                    int64_t sleepUntil = now + sleepForMs - 3;
                    while(Aws::Utils::DateTime::Now().Millis() <= sleepUntil)
                    {
                      // just trying to perform a high-precision sleep to simulate real-time streaming
                      // one of our CI hosts actually oversleep in a normal people's sleep
                      std::this_thread::sleep_for(std::chrono::nanoseconds(10));
                    }

                    if (!stream.WriteAudioEvent(event)) {
                        AWS_ADD_FAILURE("Failed to write an audio event");
                        break;
                    }
                    TestTrace(Aws::String("OnStreamReady WriteAudioEvent sent another chunk of ") + Aws::Utils::StringUtils::to_string(event.GetAudioChunk().size()) + " bytes");
                    lastAudioEventSentAt = Aws::Utils::DateTime::Now().Millis();
                    if(Aws::Utils::DateTime::Now().Millis() > testMustEndBeforeMs)
                    {
                        AWS_ADD_FAILURE("Test is taking too long, aborting.");
                        break;
                    }
                    stream.flush();
                    int64_t eventEnd = Aws::Utils::DateTime::Now().Millis();
                    Aws::String eventTook = Aws::Utils::StringUtils::to_string(eventEnd - eventStart);
                    Aws::String sleptForStr = Aws::Utils::StringUtils::to_string(sleepForMs);
                    SCOPED_TRACE(Aws::String("Sending an event took ") + eventTook + " ms, slept for " + sleptForStr + " ms\n");
                    ASSERT_GE(eventEnd, eventStart) << "We have time travelled";
                    if ((size_t)(eventEnd - eventStart) > (chunkLengthToUseMs + 20))
                    {
                      failedToKeepUpCount++;
                    }
                    ASSERT_LT(failedToKeepUpCount, (size_t)10) << "Failing to keep up with \"real time\" transcription!";
                }
                else {
                    break;
                }
            }

            if (!stream.WriteAudioEvent(
                    AudioEvent())) {
                // Per the spec, we have to send an empty event (an event without a payload) at the end.
                AWS_ADD_FAILURE("Failed to send an empty frame");
            }
            else {
                SCOPED_TRACE("Successfully sent the empty frame");
            }
            if(Aws::Utils::DateTime::Now().Millis() > testMustEndBeforeMs)
            {
                AWS_ADD_FAILURE("Test is taking too long, aborting.");
            }
            stream.flush();
            stream.WaitForDrain();
            stream.Close();
     };

    Aws::Utils::Threading::Semaphore signaling(0 /*initialCount*/, 1 /*maxCount*/);
    auto OnResponseCallback = [&signaling, this](
            const TranscribeStreamingServiceClient * /*unused*/,
            const Model::StartStreamTranscriptionRequest & /*unused*/,
            const Model::StartStreamTranscriptionOutcome & outcome,
            const std::shared_ptr<const Aws::Client::AsyncCallerContext> & /*unused*/) {

        if (!outcome.IsSuccess())
        {
            AWS_ADD_FAILURE(Aws::String("ResponseCallback error: ") + outcome.GetError().GetMessage());
        }

        signaling.Release();
    };

    // abort operation taking too long by using this callback
    std::atomic<bool> shouldContinue;
    shouldContinue = true;
    request.SetContinueRequestHandler([&shouldContinue](const Aws::Http::HttpRequest*) { return shouldContinue.load(); });

    m_client->StartStreamTranscriptionAsync(request, OnStreamReady, OnResponseCallback,
                                         nullptr /*context*/);

    EXPECT_TRUE(
        signaling.WaitOneFor(timeoutMs)
        ) << "Did not get a response after " << Aws::Utils::StringUtils::to_string(timeoutMs) << " ms";

    request.GetAudioStream()->Close();
    shouldContinue = false;

    if (failedToKeepUpCount)
        std::cout << "Failed to keep up count: " << failedToKeepUpCount << " \n";

    return transcribedResult;
}

unsigned int LevenshteinDistance(Aws::String s1, Aws::String s2)
{
  // Lowercase and remove punctuation from both
  std::transform(s1.begin(), s1.end(), s1.begin(),
                 [](unsigned char c){ return std::tolower(c); });
  std::transform(s2.begin(), s2.end(), s2.begin(),
                 [](unsigned char c){ return std::tolower(c); });
  auto newEnd = std::remove_if(s1.begin (), s1.end (), ispunct);
  s1.erase(newEnd, s1.end());
  newEnd = std::remove_if(s2.begin (), s2.end (), ispunct);
  s2.erase(newEnd, s2.end());

  // algorithm is taken from
  // https://en.wikibooks.org/wiki/Algorithm_Implementation/Strings/Levenshtein_distance#C++
  const std::size_t len1 = s1.size(), len2 = s2.size();
  Aws::Vector<Aws::Vector<unsigned int>> d(len1 + 1, Aws::Vector<unsigned int>(len2 + 1));

  d[0][0] = 0;
  for(unsigned int i = 1; i <= len1; ++i) d[i][0] = i;
  for(unsigned int i = 1; i <= len2; ++i) d[0][i] = i;

  for(unsigned int i = 1; i <= len1; ++i)
    for(unsigned int j = 1; j <= len2; ++j)
      d[i][j] = std::min({ d[i - 1][j] + 1, d[i][j - 1] + 1, d[i - 1][j - 1] + (s1[i - 1] == s2[j - 1] ? 0 : 1) });
  return d[len1][len2];
}

TEST_F(TranscribeStreamingTests, TranscribeStreamingCppSdkSample)
{
  const Aws::Vector<Aws::String> EXPECTED_ALTERNATIVES = {"This is a C plus plus test sample", "This is a C++ test sample"};
  for(size_t chunkDuration = 50; chunkDuration <= 200; chunkDuration += 25)
  {
    m_testTraces.clear();
    TestTrace(Aws::String("### Starting TranscribeStreamingCppSdkSample with chunks of ") + Aws::Utils::StringUtils::to_string(chunkDuration) + " ms ##");
    int64_t startedAt = Aws::Utils::DateTime::Now().Millis();
    Aws::String result = RunTestLikeSample(4500, "this_is_a_cpp_test_sample_8kHz_2162ms.wav", 8000, chunkDuration);
    int64_t endedAt = Aws::Utils::DateTime::Now().Millis();
    TestTrace(Aws::String("### Done this_is_a_cpp_test_sample_8kHz_2162ms with chunks of ") + Aws::Utils::StringUtils::to_string(chunkDuration) + " ms ##");
    std::cout << "Transcription of TranscribeStreamingCppSdkSample with chunk duration " << chunkDuration << " ms took " << endedAt - startedAt << " ms.\n";

    int minDiff = 999999;
    for(const auto& expected : EXPECTED_ALTERNATIVES)
    {
      int difference = LevenshteinDistance(expected, result);
      minDiff = std::min(std::abs(minDiff), std::abs(difference));
    }
    ASSERT_LT(minDiff, result.length() * 0.2) << "The difference between a resulting transcription and the expectation is too high: " << minDiff << "\nResulted transcription: " << result;
  }
}

TEST_F(TranscribeStreamingTests, TranscribeStreamingKantSample)
{
  static const char expected[] = "Categorical imperative: Act only according to that maxim whereby you can at the same time will that it should become a universal law. "
                                 "Two things fill the mind with ever-increasing wonder and awe, the more often and the more intensely the mind of thought is drawn to them: "
                                 "the starry heavens above me and the moral law within me.";
  for(size_t chunkDuration = 50; chunkDuration <= 200; chunkDuration += 25)
  {
    m_testTraces.clear();
    TestTrace(Aws::String("### Starting TranscribeStreamingKantSample with chunks of ") + Aws::Utils::StringUtils::to_string(chunkDuration) + " ms ##");
    int64_t startedAt = Aws::Utils::DateTime::Now().Millis();
    Aws::String result = RunTestLikeSample(22000, "Kant_16kHz_17176ms.wav", 16000, chunkDuration);
    int64_t endedAt = Aws::Utils::DateTime::Now().Millis();
    TestTrace(Aws::String("### Done TranscribeStreamingKantSample with chunks of ") + Aws::Utils::StringUtils::to_string(chunkDuration) + " ms ##");
    std::cout << "Transcription of Kant_16kHz_17176ms with chunk duration " << chunkDuration << " ms took " << endedAt - startedAt << " ms.\n";

    int difference = LevenshteinDistance(expected, result);
    ASSERT_LT(difference, result.length() * 0.2) << "The difference between a resulting transcription and the expectation is too high: " << difference << "\n"
                                                 << "Expected: " << expected << "\nResulted: " << result;
  }
}

#endif
