/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/logs/CloudWatchLogsClient.h>
#include <aws/logs/model/CreateLogGroupRequest.h>
#include <aws/logs/model/CreateLogStreamRequest.h>
#include <aws/logs/model/GetLogEventsRequest.h>
#include <aws/logs/model/PutLogEventsRequest.h>
#include <aws/logs/model/DeleteLogGroupRequest.h>
#include <aws/logs/model/StartLiveTailHandler.h>
#include <aws/logs/model/StartLiveTailRequest.h>
#include <aws/access-management/AccessManagementClient.h>
#include <aws/iam/IAMClient.h>
#include <aws/cognito-identity/CognitoIdentityClient.h>
#include <aws/testing/TestingEnvironment.h>

#include <chrono>
#include <thread>

using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;
using namespace Aws::CloudWatchLogs;
using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Region;

namespace
{
    static const char ALLOCATION_TAG[] = "CloudWatchLogsTest";
    static const char BASE_CLOUD_WATCH_LOGS_GROUP[] = "CppSDKIntegrationTestCWLGroup";
    static const char BASE_CLOUD_WATCH_LOGS_STREAM[] = "testLogs";
    static const int SECONDS_TO_WAIT = 120;

    class CloudWatchLogsOperationTest : public ::testing::Test
    {
    protected:
        Aws::UniquePtr<Aws::CloudWatchLogs::CloudWatchLogsClient> m_client;
        Aws::String m_UUID;
        Aws::String m_accountId;

        Aws::String BuildResourceName(const char *baseName)
        {
            return Aws::Testing::GetAwsResourcePrefix() + baseName + m_UUID;
        }

        void SetUp()
        {
            m_UUID = Aws::Utils::UUID::RandomUUID();
            ClientConfiguration config;
            config.scheme = Scheme::HTTPS;
            config.region = AWS_TEST_REGION;
            m_client = Aws::MakeUnique<Aws::CloudWatchLogs::CloudWatchLogsClient>(ALLOCATION_TAG, config);
            CreateLogsGroup(BuildResourceName(BASE_CLOUD_WATCH_LOGS_GROUP));

            auto accountId = Aws::Environment::GetEnv("CATAPULT_TEST_ACCOUNT");
            if(accountId.empty()) {
                config.region = Aws::Region::US_EAST_1;
                auto iamClient = Aws::MakeShared<Aws::IAM::IAMClient>(ALLOCATION_TAG, config);
                auto cognitoClient = Aws::MakeShared<Aws::CognitoIdentity::CognitoIdentityClient>(ALLOCATION_TAG, config);
                Aws::AccessManagement::AccessManagementClient accessManagementClient(iamClient, cognitoClient);
                accountId = accessManagementClient.GetAccountId();
            }
            m_accountId = accountId;
        }

        void TearDown()
        {
            DeleteLogsGroup(BuildResourceName(BASE_CLOUD_WATCH_LOGS_GROUP));
        }

        void DeleteLogsGroup(const Aws::String& groupName)
        {
            DeleteLogGroupRequest deleteRequest;
            deleteRequest.SetLogGroupName(groupName);
            auto deleteOutcome = m_client->DeleteLogGroup(deleteRequest);
            AWS_ASSERT_SUCCESS(deleteOutcome);
        }

        void CreateLogsGroup(const Aws::String& groupName)
        {
            CreateLogGroupRequest createRequest;
            createRequest.SetLogGroupName(groupName);
            auto createOutcome = m_client->CreateLogGroup(createRequest);
            AWS_ASSERT_SUCCESS(createOutcome);
        }
    };

    TEST_F(CloudWatchLogsOperationTest, PutLogEventsTests)
    {
        CreateLogStreamRequest createStreamRequest;
        createStreamRequest.WithLogGroupName(BuildResourceName(BASE_CLOUD_WATCH_LOGS_GROUP))
                            .WithLogStreamName(BuildResourceName(BASE_CLOUD_WATCH_LOGS_STREAM));
        auto createStreamOutcome = m_client->CreateLogStream(createStreamRequest);
        AWS_ASSERT_SUCCESS(createStreamOutcome);

        PutLogEventsRequest putRequest;
        putRequest.WithLogGroupName(BuildResourceName(BASE_CLOUD_WATCH_LOGS_GROUP))
                    .WithLogStreamName(BuildResourceName(BASE_CLOUD_WATCH_LOGS_STREAM));

        InputLogEvent e1;
        e1.WithTimestamp(Aws::Utils::DateTime::Now().Millis()).WithMessage("Test Message 1");
        InputLogEvent e2;
        // Make sure the timestamp of e2 is greater than that of e1.
        e2.WithTimestamp(Aws::Utils::DateTime::Now().Millis()+1).WithMessage("Test Message 2");

        putRequest.AddLogEvents(e1).AddLogEvents(e2);
        auto putOutcome = m_client->PutLogEvents(putRequest);
        AWS_ASSERT_SUCCESS(putOutcome);
        auto nextSeqToken = putOutcome.GetResult().GetNextSequenceToken();

        InputLogEvent e3;
        e3.WithTimestamp(Aws::Utils::DateTime::Now().Millis()).WithMessage("Test Message 3");
        InputLogEvent e4;
        // Make sure the timestamp of e4 is greater than that of e3.
        e4.WithTimestamp(Aws::Utils::DateTime::Now().Millis()+1).WithMessage("Test Message 4");
        putRequest.AddLogEvents(e3).AddLogEvents(e4);
        putRequest.WithSequenceToken(nextSeqToken);
        putOutcome = m_client->PutLogEvents(putRequest);
        AWS_ASSERT_SUCCESS(putOutcome);

        //There should be in total 6 events in the stream. with messages ended with 1,2,1,2,3,4;
        GetLogEventsRequest getRequest;
        getRequest.WithLogGroupName(BuildResourceName(BASE_CLOUD_WATCH_LOGS_GROUP))
                    .WithLogStreamName(BuildResourceName(BASE_CLOUD_WATCH_LOGS_STREAM))
                    .WithStartFromHead(true);
        size_t eventsCount = 0;
        size_t retry = 0;
        while (retry < SECONDS_TO_WAIT)
        {
            auto getOutcome = m_client->GetLogEvents(getRequest);
            AWS_ASSERT_SUCCESS(getOutcome);
            auto outputEvents = getOutcome.GetResult().GetEvents();
            eventsCount = outputEvents.size();
            if (eventsCount == 6)
            {
                Aws::Vector<Aws::String> msgs = {"Test Message 1", "Test Message 1", "Test Message 2",
                "Test Message 2","Test Message 3","Test Message 4",};
                for (int i = 0; i < 6; i++)
                {
                    ASSERT_STREQ(msgs[i].c_str(), outputEvents[i].GetMessage().c_str());
                }
                break;
            }

            std::this_thread::sleep_for(std::chrono::seconds(1));
            retry++;
        }
        ASSERT_EQ(6u, eventsCount);
    }

    TEST_F(CloudWatchLogsOperationTest, StartLiveTailTest)
    {
        CreateLogStreamRequest createStreamRequest;
        createStreamRequest.WithLogGroupName(BuildResourceName(BASE_CLOUD_WATCH_LOGS_GROUP))
                            .WithLogStreamName(BuildResourceName(BASE_CLOUD_WATCH_LOGS_STREAM));
        auto createStreamOutcome = m_client->CreateLogStream(createStreamRequest);
        AWS_ASSERT_SUCCESS(createStreamOutcome);

        StartLiveTailHandler handler;

        auto OnResponseCallback = [](
            const CloudWatchLogsClient* /*unused*/,
            const StartLiveTailRequest& /*unused*/,
            const StartLiveTailOutcome& outcome,
            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& /*unused*/) {
            // Unfortunately the only way to end stream right now is to cancel
            // it, so StartLiveTail api currently cannot end successfully. 
            ASSERT_EQ(outcome.IsSuccess(), false);
        };

        StartLiveTailRequest request;

        Aws::StringStream ss;
        ss << "arn:aws:logs:" << AWS_TEST_REGION << ":" << m_accountId << ":log-group:" << BuildResourceName(BASE_CLOUD_WATCH_LOGS_GROUP);
        request.SetLogGroupIdentifiers({ss.str()});
        request.SetLogStreamNames({BuildResourceName(BASE_CLOUD_WATCH_LOGS_STREAM)});
        request.SetLogEventFilterPattern("ERROR");
        request.SetEventStreamHandler(handler);

        std::atomic<bool> keep_going(true);
        request.SetContinueRequestHandler([&keep_going](const Aws::Http::HttpRequest*) {
            return keep_going.load();
        });

        m_client->StartLiveTailAsync(request, OnResponseCallback);

        //let it run for a little bit
        std::this_thread::sleep_for(std::chrono::seconds(6));

        keep_going.store(false);

        //note: continue request handler takes a while to stop a request, so
        //wait some time for request to stop before exiting the test
        std::this_thread::sleep_for(std::chrono::seconds(30));
    }
}


