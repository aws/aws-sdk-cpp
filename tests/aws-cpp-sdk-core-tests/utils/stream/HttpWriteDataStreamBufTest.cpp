/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/stream/HttpWriteDataStreamBuf.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/mocks/http/MockHttpClient.h>

namespace {
const char* TEST_ALLOCATION_LOG_TAG = "HttpWriteDataStreamBufTest";
}

class HttpWriteDataStreamBufTest : public Aws::Testing::AwsCppSdkGTestSuite {
 protected:
  void SetUp() override {
    auto options = GetSdkOptions();
    options.httpOptions.httpClientFactory_create_fn = [this]() -> std::shared_ptr<Aws::Http::HttpClientFactory> {
      client_factory_->SetClient(client_);
      return client_factory_;
    };
    Aws::InitAPI(options);
    client_factory_ = Aws::MakeShared<MockHttpClientFactory>(TEST_ALLOCATION_LOG_TAG);
    client_ = Aws::MakeShared<MockHttpClient>(TEST_ALLOCATION_LOG_TAG);
  };

  void TearDown() override { Aws::ShutdownAPI(GetSdkOptions()); }

  std::shared_ptr<MockHttpClientFactory> client_factory_;
  std::shared_ptr<MockHttpClient> client_;
};

TEST_F(HttpWriteDataStreamBufTest, TestShouldWriteData) {
  auto output = Aws::MakeShared<Aws::StringStream>(TEST_ALLOCATION_LOG_TAG);
  auto request = Aws::Http::CreateHttpRequest(Aws::String{"http://www.amazon.com/"}, Aws::Http::HttpMethod::HTTP_POST,
                                              []() -> Aws::IOStream* { return Aws::New<Aws::StringStream>(TEST_ALLOCATION_LOG_TAG); });
  auto response = Aws::MakeShared<Aws::Http::Standard::StandardHttpResponse>(TEST_ALLOCATION_LOG_TAG, request);
  ConnectionTestCase testCase{};
  testCase.writeDataStream = output;
  testCase.response = response;
  client_->SetConnectionTestCase(testCase);
  {
    Aws::Utils::Stream::HttpWriteDataStreamBuf data_stream_buf{client_, 10};
    data_stream_buf.Initialize(request);
    Aws::IOStream stream(&data_stream_buf);
    stream << "I backed my car into a cop car the other day ";
    stream << "Well, he just drove off, sometimes life's okay ";
    stream << "I ran my mouth off a bit too much, oh, what did I say? ";
    stream << "Well, you just laughed it off, it was all okay ";
    stream << "And we'll all float on, okay";
  }

  EXPECT_STREQ(output->str().c_str(),
               "I backed my car into a cop car the other day Well, he just drove off, sometimes life's okay I ran my mouth off a bit too "
               "much, oh, what did I say? Well, you just laughed it off, it was all okay And we'll all float on, okay");
}

TEST_F(HttpWriteDataStreamBufTest, TestConnectionAcquireFailure) {
  auto request = Aws::Http::CreateHttpRequest(Aws::String{"http://www.amazon.com/"}, Aws::Http::HttpMethod::HTTP_POST,
                                              []() -> Aws::IOStream* { return Aws::New<Aws::StringStream>(TEST_ALLOCATION_LOG_TAG); });
  ConnectionTestCase testCase{};
  testCase.connectionErrorCode = 1;
  client_->SetConnectionTestCase(testCase);

  Aws::Utils::Stream::HttpWriteDataStreamBuf data_stream_buf{client_, 10};
  auto error = data_stream_buf.Initialize(request);
  ASSERT_TRUE(error.has_value());
  EXPECT_EQ(error->GetErrorType(), Aws::Client::CoreErrors::NETWORK_CONNECTION);
}

TEST_F(HttpWriteDataStreamBufTest, TestWriteDataCallbackError) {
  auto output = Aws::MakeShared<Aws::StringStream>(TEST_ALLOCATION_LOG_TAG);
  auto request = Aws::Http::CreateHttpRequest(Aws::String{"http://www.amazon.com/"}, Aws::Http::HttpMethod::HTTP_POST,
                                              []() -> Aws::IOStream* { return Aws::New<Aws::StringStream>(TEST_ALLOCATION_LOG_TAG); });
  auto response = Aws::MakeShared<Aws::Http::Standard::StandardHttpResponse>(TEST_ALLOCATION_LOG_TAG, request);
  ConnectionTestCase testCase{};
  testCase.writeDataStream = output;
  testCase.writeDataCompleteErrorCode = 1;
  testCase.response = response;
  client_->SetConnectionTestCase(testCase);

  Aws::Utils::Stream::HttpWriteDataStreamBuf data_stream_buf{client_, 10};
  data_stream_buf.Initialize(request);
  Aws::IOStream stream(&data_stream_buf);
  stream << "Eating snowflakes with plastic forks ";
  EXPECT_TRUE(stream.fail() || output->str().size() < 38);
}

TEST_F(HttpWriteDataStreamBufTest, TestSingleCharOverflow) {
  auto output = Aws::MakeShared<Aws::StringStream>(TEST_ALLOCATION_LOG_TAG);
  auto request = Aws::Http::CreateHttpRequest(Aws::String{"http://www.amazon.com/"}, Aws::Http::HttpMethod::HTTP_POST,
                                              []() -> Aws::IOStream* { return Aws::New<Aws::StringStream>(TEST_ALLOCATION_LOG_TAG); });
  auto response = Aws::MakeShared<Aws::Http::Standard::StandardHttpResponse>(TEST_ALLOCATION_LOG_TAG, request);
  ConnectionTestCase testCase{};
  testCase.writeDataStream = output;
  testCase.response = response;
  client_->SetConnectionTestCase(testCase);
  {
    // Buffer of 1 forces overflow on every character
    Aws::Utils::Stream::HttpWriteDataStreamBuf data_stream_buf{client_, 1};
    data_stream_buf.Initialize(request);
    Aws::IOStream stream(&data_stream_buf);
    stream << "Everything that keeps me together is falling apart";
  }

  EXPECT_STREQ(output->str().c_str(), "Everything that keeps me together is falling apart");
}

TEST_F(HttpWriteDataStreamBufTest, TestLargeBufferNoFlushUntilClose) {
  auto output = Aws::MakeShared<Aws::StringStream>(TEST_ALLOCATION_LOG_TAG);
  auto request = Aws::Http::CreateHttpRequest(Aws::String{"http://www.amazon.com/"}, Aws::Http::HttpMethod::HTTP_POST,
                                              []() -> Aws::IOStream* { return Aws::New<Aws::StringStream>(TEST_ALLOCATION_LOG_TAG); });
  auto response = Aws::MakeShared<Aws::Http::Standard::StandardHttpResponse>(TEST_ALLOCATION_LOG_TAG, request);
  ConnectionTestCase testCase{};
  testCase.writeDataStream = output;
  testCase.response = response;
  client_->SetConnectionTestCase(testCase);
  {
    // Buffer larger than the data, so it all flushes on Close
    Aws::Utils::Stream::HttpWriteDataStreamBuf data_stream_buf{client_, 4096};
    data_stream_buf.Initialize(request);
    Aws::IOStream stream(&data_stream_buf);
    stream << "The universe is shaped exactly like the earth";
    EXPECT_STREQ(output->str().c_str(), "");
  }

  EXPECT_STREQ(output->str().c_str(), "The universe is shaped exactly like the earth");
}

TEST_F(HttpWriteDataStreamBufTest, TestEmptyWrite) {
  auto output = Aws::MakeShared<Aws::StringStream>(TEST_ALLOCATION_LOG_TAG);
  auto request = Aws::Http::CreateHttpRequest(Aws::String{"http://www.amazon.com/"}, Aws::Http::HttpMethod::HTTP_POST,
                                              []() -> Aws::IOStream* { return Aws::New<Aws::StringStream>(TEST_ALLOCATION_LOG_TAG); });
  auto response = Aws::MakeShared<Aws::Http::Standard::StandardHttpResponse>(TEST_ALLOCATION_LOG_TAG, request);
  ConnectionTestCase testCase{};
  testCase.writeDataStream = output;
  testCase.response = response;
  client_->SetConnectionTestCase(testCase);
  {
    Aws::Utils::Stream::HttpWriteDataStreamBuf data_stream_buf{client_, 10};
    data_stream_buf.Initialize(request);
    Aws::IOStream stream(&data_stream_buf);
  }

  EXPECT_STREQ(output->str().c_str(), "");
}

TEST_F(HttpWriteDataStreamBufTest, TestGetResponse) {
  auto request = Aws::Http::CreateHttpRequest(Aws::String{"http://www.amazon.com/"}, Aws::Http::HttpMethod::HTTP_POST,
                                              []() -> Aws::IOStream* { return Aws::New<Aws::StringStream>(TEST_ALLOCATION_LOG_TAG); });
  auto response = Aws::MakeShared<Aws::Http::Standard::StandardHttpResponse>(TEST_ALLOCATION_LOG_TAG, request);
  response->SetResponseCode(Aws::Http::HttpResponseCode::OK);
  auto output = Aws::MakeShared<Aws::StringStream>(TEST_ALLOCATION_LOG_TAG);
  ConnectionTestCase testCase{};
  testCase.writeDataStream = output;
  testCase.response = response;
  client_->SetConnectionTestCase(testCase);

  Aws::Utils::Stream::HttpWriteDataStreamBuf data_stream_buf{client_, 10};
  data_stream_buf.Initialize(request);
  auto resp = data_stream_buf.GetResponse();
  ASSERT_NE(resp, nullptr);
  EXPECT_EQ(resp->GetResponseCode(), Aws::Http::HttpResponseCode::OK);
}

TEST_F(HttpWriteDataStreamBufTest, TestExactBufferBoundary) {
  auto output = Aws::MakeShared<Aws::StringStream>(TEST_ALLOCATION_LOG_TAG);
  auto request = Aws::Http::CreateHttpRequest(Aws::String{"http://www.amazon.com/"}, Aws::Http::HttpMethod::HTTP_POST,
                                              []() -> Aws::IOStream* { return Aws::New<Aws::StringStream>(TEST_ALLOCATION_LOG_TAG); });
  auto response = Aws::MakeShared<Aws::Http::Standard::StandardHttpResponse>(TEST_ALLOCATION_LOG_TAG, request);
  ConnectionTestCase testCase{};
  testCase.writeDataStream = output;
  testCase.response = response;
  client_->SetConnectionTestCase(testCase);
  {
    Aws::Utils::Stream::HttpWriteDataStreamBuf data_stream_buf{client_, 10};
    data_stream_buf.Initialize(request);
    Aws::IOStream stream(&data_stream_buf);
    stream << "well we are";
  }

  EXPECT_STREQ(output->str().c_str(), "well we are");
}
