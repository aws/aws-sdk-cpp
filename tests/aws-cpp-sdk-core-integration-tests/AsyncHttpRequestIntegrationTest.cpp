/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Aws.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpRequest.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <gtest/gtest.h>

#include <chrono>
#include <condition_variable>
#include <mutex>

using namespace Aws;
using namespace Aws::Client;
using namespace Aws::Http;

static const char ENDPOINT[] = "https://checkip.amazonaws.com";

class AsyncHttpRequestIntegrationTest : public testing::Test
{
protected:
    AsyncHttpRequestIntegrationTest()
    {
        InitAPI(m_options);
    }

    ~AsyncHttpRequestIntegrationTest()
    {
        ShutdownAPI(m_options);
    }

    SDKOptions m_options;
};

TEST_F(AsyncHttpRequestIntegrationTest, SynchronousGet)
{
    auto client = CreateHttpClient(ClientConfiguration());
    auto request = CreateHttpRequest(Aws::String(ENDPOINT), HttpMethod::HTTP_GET,
                                     Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);

    auto response = client->MakeRequest(request);

    ASSERT_NE(nullptr, response);
    ASSERT_FALSE(response->HasClientError()) << "sync GET returned a client error";
    EXPECT_EQ(HttpResponseCode::OK, response->GetResponseCode());
}

#if AWS_SDK_USE_CRT_HTTP
TEST_F(AsyncHttpRequestIntegrationTest, AsynchronousGet)
{
    std::mutex mutex;
    std::condition_variable cv;
    bool done = false;
    std::shared_ptr<HttpResponse> asyncResponse;

    auto client = CreateHttpClient(ClientConfiguration());
    auto request = CreateHttpRequest(Aws::String(ENDPOINT), HttpMethod::HTTP_GET,
                                     Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);

    auto error = client->MakeRequestAsync(request,
        [&](std::shared_ptr<HttpResponse> response)
        {
            std::lock_guard<std::mutex> lock(mutex);
            asyncResponse = std::move(response);
            done = true;
            cv.notify_one();
        });

    ASSERT_FALSE(error.has_value()) << error->GetMessage();

    std::unique_lock<std::mutex> lock(mutex);
    ASSERT_TRUE(cv.wait_for(lock, std::chrono::seconds(30), [&] { return done; }))
        << "async GET did not complete within 30 seconds";

    ASSERT_NE(nullptr, asyncResponse);
    ASSERT_FALSE(asyncResponse->HasClientError()) << "async GET returned a client error";
    EXPECT_EQ(HttpResponseCode::OK, asyncResponse->GetResponseCode());
}
#endif

#if AWS_SDK_USE_CRT_HTTP && !defined(_WIN32)

#include <aws/core/client/CoreErrors.h>

#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>

#include <atomic>
#include <future>
#include <string>
#include <thread>

TEST_F(AsyncHttpRequestIntegrationTest, RequestTimeoutClosesConnectionAndDrains)
{
    int listenFd = socket(AF_INET, SOCK_STREAM, 0);
    ASSERT_GE(listenFd, 0);

    sockaddr_in addr{};
    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = htonl(INADDR_LOOPBACK);
    addr.sin_port = 0;
    ASSERT_EQ(0, bind(listenFd, reinterpret_cast<sockaddr*>(&addr), sizeof(addr)));
    ASSERT_EQ(0, listen(listenFd, 1));

    socklen_t addrLen = sizeof(addr);
    ASSERT_EQ(0, getsockname(listenFd, reinterpret_cast<sockaddr*>(&addr), &addrLen));
    unsigned short port = ntohs(addr.sin_port);

    std::atomic<int> acceptedFd{-1};
    std::thread accepter([listenFd, &acceptedFd]
    {
        acceptedFd.store(accept(listenFd, nullptr, nullptr));
    });

    ClientConfiguration config;
    config.requestTimeoutMs = 500;
    config.connectTimeoutMs = 5000;

    std::string uri = "http://127.0.0.1:" + std::to_string(port) + "/";
    auto client = CreateHttpClient(config);
    auto request = CreateHttpRequest(Aws::String(uri.c_str()), HttpMethod::HTTP_GET,
                                     Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);

    auto response = client->MakeRequest(request);

    ASSERT_NE(nullptr, response);
    ASSERT_TRUE(response->HasClientError()) << "expected the stalled request to time out";
    EXPECT_EQ(CoreErrors::REQUEST_TIMEOUT, response->GetClientErrorType());

    auto drained = std::async(std::launch::async, [&] { client.reset(); });
    ASSERT_EQ(std::future_status::ready, drained.wait_for(std::chrono::seconds(10)))
        << "~CRTHttpClient hung draining a timed-out request";

    accepter.join();
    int fd = acceptedFd.load();
    if (fd >= 0)
    {
        close(fd);
    }
    close(listenFd);
}
#endif
