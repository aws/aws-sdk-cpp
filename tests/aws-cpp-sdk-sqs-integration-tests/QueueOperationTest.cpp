/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/testing/ProxyConfig.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sqs/SQSClient.h>
#include <aws/sqs/model/CreateQueueRequest.h>
#include <aws/sqs/model/ListQueuesRequest.h>
#include <aws/sqs/model/DeleteQueueRequest.h>
#include <aws/sqs/model/GetQueueUrlRequest.h>
#include <aws/sqs/model/SendMessageRequest.h>
#include <aws/sqs/model/ReceiveMessageRequest.h>
#include <aws/sqs/model/DeleteMessageRequest.h>
#include <aws/sqs/model/GetQueueAttributesRequest.h>
#include <aws/sqs/model/SetQueueAttributesRequest.h>
#include <aws/sqs/model/AddPermissionRequest.h>
#include <aws/sqs/model/RemovePermissionRequest.h>
#include <aws/sqs/model/ListDeadLetterSourceQueuesRequest.h>
#include <aws/core/utils/Outcome.h>
#include <aws/testing/ProxyConfig.h>
#include <aws/sqs/model/ChangeMessageVisibilityBatchRequestEntry.h>
#include <aws/sqs/model/ChangeMessageVisibilityBatchRequest.h>
#include <aws/sqs/model/SendMessageBatchRequestEntry.h>
#include <aws/sqs/model/SendMessageBatchRequest.h>
#include <aws/access-management/AccessManagementClient.h>
#include <aws/iam/IAMClient.h>
#include <aws/cognito-identity/CognitoIdentityClient.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/testing/TestingEnvironment.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/platform/Environment.h>
#include <aws/sqs/model/TagQueueRequest.h>
#include <aws/sqs/model/ListQueueTagsRequest.h>
#include <thread>

using namespace Aws::Http;
using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SQS;
using namespace Aws::SQS::Model;
using namespace Aws::Utils;
using namespace Aws::Utils::Json;
using namespace Aws::Region;

namespace
{
#define TEST_QUEUE_PREFIX "Test_"
static const char BASE_SIMPLE_QUEUE_NAME[]                          = TEST_QUEUE_PREFIX "Simple";
static const char BASE_SEND_RECEIVE_QUEUE_NAME[]                    = TEST_QUEUE_PREFIX "SendReceive";
static const char BASE_ATTRIBUTES_QUEUE_NAME[]                      = TEST_QUEUE_PREFIX "Attributes";
static const char BASE_PERMISSIONS_QUEUE_NAME[]                     = TEST_QUEUE_PREFIX "Permissions";
static const char BASE_DEAD_LETTER_QUEUE_NAME[]                     = TEST_QUEUE_PREFIX "DeadLetter";
static const char BASE_DEAD_LETTER_SOURCE_QUEUE_NAME[]              = TEST_QUEUE_PREFIX "DeadLetterSource";
static const char BASE_CHANGE_MESSAGE_VISIBILITY_BATCH_QUEUE_NAME[] = TEST_QUEUE_PREFIX "ChangeMsgVisBatch";
static const char BASE_TAG_QUEUE_NAME[]                             = TEST_QUEUE_PREFIX "SimpleForTagging";
static const char BASE_NON_EXISTING_QUEUE_NAME[]                    = TEST_QUEUE_PREFIX "NonExisting";
static const char ALLOCATION_TAG[]                                  = "QueueOperationTest";

class QueueOperationTest : public ::testing::Test
{

public:
    static std::shared_ptr<SQSClient> sqsClient;

protected:

    Aws::String BuildResourceName(const char* baseName)
    {
        return Aws::Testing::GetAwsResourcePrefix() + GetRandomUUID() + baseName;
    }

    static Aws::String BuildResourcePrefix()
    {
        return Aws::Testing::GetAwsResourcePrefix() + GetRandomUUID() + TEST_QUEUE_PREFIX;
    }

    // the entire reason for this function is workaround the memory-allocator being initialized after static variables.
    static Aws::String GetRandomUUID()
    {
        static const Aws::Utils::UUID resourceUUID = Aws::Utils::UUID::RandomUUID();
        return resourceUUID;
    }

    static ClientConfiguration GetConfig()
    {
        ClientConfiguration config("default");
        config.region = AWS_TEST_REGION;

#if USE_PROXY_FOR_TESTS
        config.scheme = Scheme::HTTP;
        config.proxyHost = PROXY_HOST;
        config.proxyPort = PROXY_PORT;
#endif
        config.requestTimeoutMs = 20000;
        return config;
    }

    void SetUp()
    {
        sqsClient = Aws::MakeShared<SQSClient>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG), GetConfig());
    }

    void TearDown()
    {
        DeleteQueueRequest deleteQueueRequest;
        for(const auto& queueUrl : m_allTestQueues)
        {
            deleteQueueRequest.SetQueueUrl(queueUrl);
            DeleteQueueOutcome deleteQueueOutcome = sqsClient->DeleteQueue(deleteQueueRequest);
            AWS_ASSERT_SUCCESS(deleteQueueOutcome);
            std::this_thread::sleep_for(std::chrono::seconds(1)); // Cheap throttle avoidance
        }
        sqsClient = nullptr;
    }

    Aws::String CreateDefaultQueue(Aws::String name)
    {
        CreateQueueRequest request;
        request.SetQueueName(name);

        bool shouldContinue = true;
        while (shouldContinue)
        {
            CreateQueueOutcome outcome = sqsClient->CreateQueue(request);
            if (outcome.IsSuccess())
            {
                m_allTestQueues.insert(outcome.GetResult().GetQueueUrl());
                return outcome.GetResult().GetQueueUrl();
            }
            if (outcome.GetError().GetErrorType() != SQSErrors::QUEUE_DELETED_RECENTLY)
            {
                return {};
            }
            std::this_thread::sleep_for(std::chrono::seconds(10));
        }

        return {};
    }

    static void DeleteAllTestQueues()
    {
        ListQueuesRequest listQueueRequest;
        listQueueRequest.WithQueueNamePrefix(BuildResourcePrefix());
        listQueueRequest.WithMaxResults(10);

        ListQueuesOutcome listQueuesOutcome = sqsClient->ListQueues(listQueueRequest);
        ListQueuesResult listQueuesResult = listQueuesOutcome.GetResult();
        Aws::Vector<Aws::String> urls = listQueuesResult.GetQueueUrls();
        for (auto& url : listQueuesResult.GetQueueUrls())
        {
            DeleteQueueRequest deleteQueueRequest;
            deleteQueueRequest.WithQueueUrl(url);
            DeleteQueueOutcome deleteQueueOutcome = sqsClient->DeleteQueue(deleteQueueRequest);
            AWS_ASSERT_SUCCESS(deleteQueueOutcome);
        }
    }

    Aws::String GetAwsAccountId()
    {
        auto accountId = Aws::Environment::GetEnv("CATAPULT_TEST_ACCOUNT");
        if (accountId.empty()) {
            auto cognitoClient = Aws::MakeShared<Aws::CognitoIdentity::CognitoIdentityClient>(ALLOCATION_TAG, GetConfig());
            auto iamClient = Aws::MakeShared<Aws::IAM::IAMClient>(ALLOCATION_TAG, GetConfig());
            Aws::AccessManagement::AccessManagementClient accessManagementClient(iamClient, cognitoClient);
            accountId = accessManagementClient.GetAccountId();
        }
        return accountId;
    }

    Aws::Set<Aws::String> m_allTestQueues;
};

std::shared_ptr<SQSClient> QueueOperationTest::sqsClient(nullptr);

} // anonymous namespace

TEST_F(QueueOperationTest, TestCreateQueue)
{
    CreateQueueRequest createQueueRequest;
    createQueueRequest.SetQueueName(BuildResourceName(BASE_SIMPLE_QUEUE_NAME));

    CreateQueueOutcome createQueueOutcome;
    bool shouldContinue = true;
    while (shouldContinue)
    {
        createQueueOutcome = sqsClient->CreateQueue(createQueueRequest);
        if (createQueueOutcome.IsSuccess())
        {
            m_allTestQueues.insert(createQueueOutcome.GetResult().GetQueueUrl());
            break;
        }
        if (createQueueOutcome.GetError().GetErrorType() == SQSErrors::QUEUE_DELETED_RECENTLY)
        {
            std::this_thread::sleep_for(std::chrono::seconds(10));
        }
        else
        {
            FAIL() << "Unexpected error response: " << createQueueOutcome.GetError().GetMessage();
        }
    }

    Aws::String queueUrl = createQueueOutcome.GetResult().GetQueueUrl();

    ASSERT_TRUE(queueUrl.find(createQueueRequest.GetQueueName()) != Aws::String::npos);

    createQueueRequest.AddAttributes(QueueAttributeName::VisibilityTimeout, "50");

    createQueueOutcome = sqsClient->CreateQueue(createQueueRequest);
    ASSERT_FALSE(createQueueOutcome.IsSuccess());
#if ENABLE_CURL_CLIENT
    ASSERT_FALSE(createQueueOutcome.GetError().GetRemoteHostIpAddress().empty());
#endif
    ASSERT_FALSE(createQueueOutcome.GetError().GetRequestId().empty());
    SQSErrors error = createQueueOutcome.GetError().GetErrorType();
    EXPECT_TRUE(SQSErrors::QUEUE_NAME_EXISTS == error || SQSErrors::QUEUE_DELETED_RECENTLY == error);


    // This call is eventually consistent (sometimes over 1 min), so try it a few times
    for (int attempt = 0; ; attempt++)
    {
        ListQueuesRequest listQueueRequest;
        listQueueRequest.WithQueueNamePrefix(BuildResourcePrefix());

        ListQueuesOutcome listQueuesOutcome = sqsClient->ListQueues(listQueueRequest);
        if (listQueuesOutcome.IsSuccess())
        {
            ListQueuesResult listQueuesResult = listQueuesOutcome.GetResult();
            if (listQueuesResult.GetQueueUrls().size() == 1)
            {
                EXPECT_EQ(queueUrl, listQueuesResult.GetQueueUrls()[0]);
                EXPECT_TRUE(listQueuesResult.GetResponseMetadata().GetRequestId().length() > 0);
                break; // success!
            }
        }
        if (attempt >= 10) FAIL();
        std::this_thread::sleep_for(std::chrono::seconds(10));
    }
}

TEST_F(QueueOperationTest, TestSendReceiveDelete)
{
    Aws::String queueName = BuildResourceName(BASE_SEND_RECEIVE_QUEUE_NAME);
    Aws::String queueUrl = CreateDefaultQueue(queueName);
    ASSERT_TRUE(queueUrl.find(queueName) != Aws::String::npos);

    SendMessageRequest sendMessageRequest;
    sendMessageRequest.SetMessageBody(" TestMessageBody<tag>info\"\"</tag>\r\n ");
    MessageAttributeValue stringAttributeValue;
    stringAttributeValue.SetStringValue("TestString");
    stringAttributeValue.SetDataType("String");
    sendMessageRequest.AddMessageAttributes("TestStringAttribute", stringAttributeValue);

    MessageAttributeValue binaryAttributeValue;
    Aws::Utils::ByteBuffer byteBuffer(10);
    for(unsigned i = 0; i < 10; ++i)
    {
        byteBuffer[i] = (unsigned char)i;
    }

    binaryAttributeValue.SetBinaryValue(byteBuffer);
    binaryAttributeValue.SetDataType("Binary");
    sendMessageRequest.AddMessageAttributes("TestBinaryAttribute", binaryAttributeValue);

    sendMessageRequest.SetQueueUrl(queueUrl);

    SendMessageOutcome sendMessageOutcome = sqsClient->SendMessage(sendMessageRequest);
    AWS_ASSERT_SUCCESS(sendMessageOutcome);
    EXPECT_TRUE(sendMessageOutcome.GetResult().GetMessageId().length() > 0);

    ReceiveMessageRequest receiveMessageRequest;
    receiveMessageRequest.SetMaxNumberOfMessages(1);
    receiveMessageRequest.SetQueueUrl(queueUrl);
    receiveMessageRequest.AddMessageAttributeNames("All");

    ReceiveMessageOutcome receiveMessageOutcome = sqsClient->ReceiveMessage(receiveMessageRequest);
    AWS_ASSERT_SUCCESS(receiveMessageOutcome);
    ReceiveMessageResult receiveMessageResult = receiveMessageOutcome.GetResult();
    ASSERT_EQ(1uL, receiveMessageResult.GetMessages().size());
    Aws::String receivedMessage = receiveMessageResult.GetMessages()[0].GetBody();
    EXPECT_STREQ(" TestMessageBody<tag>info\"\"</tag>\r\n ", receivedMessage.c_str());
    EXPECT_STREQ(HashingUtils::HexEncode(HashingUtils::CalculateMD5(receivedMessage)).c_str(), receiveMessageResult.GetMessages()[0].GetMD5OfBody().c_str());
    Aws::Map<Aws::String, MessageAttributeValue> messageAttributes = receiveMessageResult.GetMessages()[0].GetMessageAttributes();
    ASSERT_TRUE(messageAttributes.find("TestStringAttribute") != messageAttributes.end());
    EXPECT_EQ(stringAttributeValue.GetStringValue(), messageAttributes["TestStringAttribute"].GetStringValue());
    ASSERT_TRUE(messageAttributes.find("TestBinaryAttribute") != messageAttributes.end());
    EXPECT_EQ(byteBuffer, messageAttributes["TestBinaryAttribute"].GetBinaryValue());

    DeleteMessageRequest deleteMessageRequest;
    deleteMessageRequest.SetQueueUrl(queueUrl);
    deleteMessageRequest.SetReceiptHandle(receiveMessageResult.GetMessages()[0].GetReceiptHandle());

    DeleteMessageOutcome deleteMessageOutcome = sqsClient->DeleteMessage(deleteMessageRequest);
    AWS_ASSERT_SUCCESS(deleteMessageOutcome);

    receiveMessageOutcome = sqsClient->ReceiveMessage(receiveMessageRequest);
    EXPECT_EQ(0uL, receiveMessageOutcome.GetResult().GetMessages().size());
}


TEST_F(QueueOperationTest, TestQueueAttributes)
{
    CreateQueueRequest createQueueRequest;
    createQueueRequest.SetQueueName(BuildResourceName(BASE_ATTRIBUTES_QUEUE_NAME));
    createQueueRequest.AddAttributes(QueueAttributeName::DelaySeconds, "45");

    CreateQueueOutcome createQueueOutcome = sqsClient->CreateQueue(createQueueRequest);
    AWS_ASSERT_SUCCESS(createQueueOutcome);
    Aws::String queueUrl = createQueueOutcome.GetResult().GetQueueUrl();
    m_allTestQueues.insert(queueUrl);
    ASSERT_TRUE(queueUrl.find(createQueueRequest.GetQueueName()) != Aws::String::npos);

    GetQueueAttributesRequest queueAttributesRequest;
    queueAttributesRequest.AddAttributeNames(QueueAttributeName::DelaySeconds).WithQueueUrl(queueUrl);
    GetQueueAttributesOutcome queueAttributesOutcome = sqsClient->GetQueueAttributes(queueAttributesRequest);
    AWS_ASSERT_SUCCESS(queueAttributesOutcome);
    EXPECT_EQ("45", queueAttributesOutcome.GetResult().GetAttributes().find(QueueAttributeName::DelaySeconds)->second);

    SetQueueAttributesRequest setQueueAttributesRequest;
    setQueueAttributesRequest.AddAttributes(QueueAttributeName::VisibilityTimeout, "42").WithQueueUrl(queueUrl);
    SetQueueAttributesOutcome setQueueAttributesOutcome = sqsClient->SetQueueAttributes(setQueueAttributesRequest);
    AWS_ASSERT_SUCCESS(setQueueAttributesOutcome);

    queueAttributesRequest.AddAttributeNames(QueueAttributeName::VisibilityTimeout).WithQueueUrl(queueUrl);
    queueAttributesOutcome = sqsClient->GetQueueAttributes(queueAttributesRequest);
    AWS_ASSERT_SUCCESS(queueAttributesOutcome);
    EXPECT_EQ("45", queueAttributesOutcome.GetResult().GetAttributes().find(QueueAttributeName::DelaySeconds)->second);
    EXPECT_EQ("42", queueAttributesOutcome.GetResult().GetAttributes().find(QueueAttributeName::VisibilityTimeout)->second);
}

TEST_F(QueueOperationTest, TestPermissions)
{
    Aws::String queueName = BuildResourceName(BASE_PERMISSIONS_QUEUE_NAME);
    Aws::String queueUrl = CreateDefaultQueue(queueName);
    ASSERT_TRUE(queueUrl.find(queueName) != Aws::String::npos);

    AddPermissionRequest addPermissionRequest;
    addPermissionRequest.AddAWSAccountIds(GetAwsAccountId()).AddActions("ReceiveMessage").WithLabel("Test").WithQueueUrl(
            queueUrl);
    AddPermissionOutcome permissionOutcome = sqsClient->AddPermission(addPermissionRequest);
    AWS_ASSERT_SUCCESS(permissionOutcome);

    GetQueueAttributesRequest queueAttributesRequest;
    queueAttributesRequest.AddAttributeNames(QueueAttributeName::Policy).WithQueueUrl(queueUrl);
    GetQueueAttributesOutcome queueAttributesOutcome = sqsClient->GetQueueAttributes(queueAttributesRequest);
    AWS_ASSERT_SUCCESS(queueAttributesOutcome);

    Aws::String policyString = queueAttributesOutcome.GetResult().GetAttributes().find(QueueAttributeName::Policy)->second;
    EXPECT_TRUE(policyString.length() > 0);
    JsonValue policy(policyString);
    auto policyView = policy.View();
    EXPECT_EQ(addPermissionRequest.GetLabel(), policyView.GetArray("Statement")[0].GetString("Sid"));
    Aws::StringStream expectedValue;
    expectedValue << "arn:aws:iam::" << GetAwsAccountId() << ":root";
    EXPECT_EQ(expectedValue.str(), policyView.GetArray("Statement")[0].GetObject("Principal").GetString("AWS"));
    EXPECT_EQ("SQS:ReceiveMessage", policyView.GetArray("Statement")[0].GetString("Action"));

    RemovePermissionRequest removePermissionRequest;
    removePermissionRequest.WithLabel("Test").WithQueueUrl(queueUrl);
    RemovePermissionOutcome removePermissionOutcome = sqsClient->RemovePermission(removePermissionRequest);
    AWS_ASSERT_SUCCESS(removePermissionOutcome);

    queueAttributesOutcome = sqsClient->GetQueueAttributes(queueAttributesRequest);
    AWS_ASSERT_SUCCESS(queueAttributesOutcome);

    EXPECT_TRUE(queueAttributesOutcome.GetResult().GetAttributes().find(QueueAttributeName::Policy) == queueAttributesOutcome.GetResult().GetAttributes().end());
}

TEST_F(QueueOperationTest, TestListDeadLetterSourceQueues)
{
    Aws::String sourceQueueName = BuildResourceName(BASE_DEAD_LETTER_SOURCE_QUEUE_NAME);

    CreateQueueRequest createQueueRequest;
    createQueueRequest.SetQueueName(sourceQueueName);

    CreateQueueOutcome createQueueOutcome = sqsClient->CreateQueue(createQueueRequest);
    AWS_ASSERT_SUCCESS(createQueueOutcome);
    Aws::String queueUrl = createQueueOutcome.GetResult().GetQueueUrl();
    m_allTestQueues.insert(queueUrl);

    Aws::String queueName = BuildResourceName(BASE_DEAD_LETTER_QUEUE_NAME);
    createQueueRequest.SetQueueName(queueName);
    createQueueOutcome = sqsClient->CreateQueue(createQueueRequest);
    AWS_ASSERT_SUCCESS(createQueueOutcome);
    Aws::String deadLetterQueueUrl = createQueueOutcome.GetResult().GetQueueUrl();
    m_allTestQueues.insert(deadLetterQueueUrl);

    GetQueueAttributesRequest queueAttributesRequest;
    queueAttributesRequest.AddAttributeNames(QueueAttributeName::QueueArn).WithQueueUrl(deadLetterQueueUrl);
    GetQueueAttributesOutcome queueAttributesOutcome = sqsClient->GetQueueAttributes(queueAttributesRequest);
    AWS_ASSERT_SUCCESS(queueAttributesOutcome);
    Aws::String redrivePolicy = "{\"maxReceiveCount\":\"5\", \"deadLetterTargetArn\":\""
            + queueAttributesOutcome.GetResult().GetAttributes().find(QueueAttributeName::QueueArn)->second + "\"}";

    SetQueueAttributesRequest setQueueAttributesRequest;
    setQueueAttributesRequest.AddAttributes(QueueAttributeName::RedrivePolicy, redrivePolicy).WithQueueUrl(queueUrl);
    SetQueueAttributesOutcome setQueueAttributesOutcome = sqsClient->SetQueueAttributes(setQueueAttributesRequest);
    AWS_ASSERT_SUCCESS(setQueueAttributesOutcome);

    ListDeadLetterSourceQueuesRequest listDeadLetterQueuesRequest;
    listDeadLetterQueuesRequest.WithQueueUrl(deadLetterQueueUrl);
    ListDeadLetterSourceQueuesOutcome listDeadLetterQueuesOutcome = sqsClient->ListDeadLetterSourceQueues(listDeadLetterQueuesRequest);
    AWS_ASSERT_SUCCESS(listDeadLetterQueuesOutcome);

    //deadletter queue stuff is eventually consistent, let's try for 100 seconds or so.
    unsigned count = 0;
    bool found = listDeadLetterQueuesOutcome.GetResult().GetQueueUrls().size() == 1uL;

    while (listDeadLetterQueuesOutcome.IsSuccess() && !found && count++ < 100)
    {
        if (listDeadLetterQueuesOutcome.GetResult().GetQueueUrls().size() == 1uL)
        {
            found = true;
        }

        std::this_thread::sleep_for(std::chrono::seconds(1));
        listDeadLetterQueuesOutcome = sqsClient->ListDeadLetterSourceQueues(listDeadLetterQueuesRequest);
    }

    ASSERT_TRUE(found);
    EXPECT_EQ(queueUrl, listDeadLetterQueuesOutcome.GetResult().GetQueueUrls()[0]);
}

TEST_F(QueueOperationTest, ChangeMessageVisibilityBatch)
{
  CreateQueueRequest createQueueRequest;
  createQueueRequest.SetQueueName(BuildResourceName(BASE_CHANGE_MESSAGE_VISIBILITY_BATCH_QUEUE_NAME));
  auto createQueueOutcome = sqsClient->CreateQueue(createQueueRequest);
  AWS_ASSERT_SUCCESS(createQueueOutcome);
  auto queueUrl = createQueueOutcome.GetResult().GetQueueUrl();
  m_allTestQueues.insert(queueUrl);

  SendMessageBatchRequestEntry sendMessageBatchRequestEntry_1;
  SendMessageBatchRequestEntry sendMessageBatchRequestEntry_2;
  SendMessageBatchRequestEntry sendMessageBatchRequestEntry_3;
  SendMessageBatchRequest sendMessageBatchRequest;
  sendMessageBatchRequest
    .AddEntries(sendMessageBatchRequestEntry_1.WithMessageBody("TestMessageBody_1").WithId("TestMessageId_1"))
    .AddEntries(sendMessageBatchRequestEntry_2.WithMessageBody("TestMessageBody_2").WithId("TestMessageId_2"))
    .AddEntries(sendMessageBatchRequestEntry_3.WithMessageBody("TestMessageBody_3").WithId("TestMessageId_3"))
    .WithQueueUrl(queueUrl);

  auto sendMessageBatchOutcome = sqsClient->SendMessageBatch(sendMessageBatchRequest);
  AWS_ASSERT_SUCCESS(sendMessageBatchOutcome);
  ASSERT_EQ(3u, sendMessageBatchOutcome.GetResult().GetSuccessful().size());

  ReceiveMessageRequest receiveMessageRequest;
  receiveMessageRequest
    .WithQueueUrl(queueUrl)
    .WithMaxNumberOfMessages(3);

  Vector<Message> messages;
  while (messages.size() < 3u)
  {
    auto receiveMessageOutcome = sqsClient->ReceiveMessage(receiveMessageRequest);
    AWS_ASSERT_SUCCESS(receiveMessageOutcome);
    for (auto& message : receiveMessageOutcome.GetResult().GetMessages())
    {
      messages.push_back(message);
    }
  }
  ASSERT_EQ(3u, messages.size());

  ChangeMessageVisibilityBatchRequest changeMessageVisibilityBatchRequest;
  auto haveSetOneValidTime = false;
  for (auto& message : messages)
  {
    ChangeMessageVisibilityBatchRequestEntry changeMessageVisibilityBatchRequestEntry;
    changeMessageVisibilityBatchRequestEntry
      .WithId(message.GetMessageId())
      .WithReceiptHandle(message.GetReceiptHandle());
    if (haveSetOneValidTime)
    {
      // Not legal. There's a maximum time of 12 hours.
      changeMessageVisibilityBatchRequestEntry.SetVisibilityTimeout(50000);
    }
    else
    {
      // Legal
      changeMessageVisibilityBatchRequestEntry.SetVisibilityTimeout(1000);
      haveSetOneValidTime = true;
    }
    changeMessageVisibilityBatchRequest.AddEntries(changeMessageVisibilityBatchRequestEntry);
  }
  changeMessageVisibilityBatchRequest.WithQueueUrl(queueUrl);
  auto changeMessageVisibilityBatchOutcome = sqsClient->ChangeMessageVisibilityBatch(changeMessageVisibilityBatchRequest);
  AWS_ASSERT_SUCCESS(changeMessageVisibilityBatchOutcome);
  EXPECT_EQ(2u, changeMessageVisibilityBatchOutcome.GetResult().GetFailed().size());
  EXPECT_EQ(1u, changeMessageVisibilityBatchOutcome.GetResult().GetSuccessful().size());

  for (auto& batchResultErrorEntry : changeMessageVisibilityBatchOutcome.GetResult().GetFailed())
  {
    EXPECT_EQ("InvalidParameterValue", batchResultErrorEntry.GetCode());
    EXPECT_TRUE(batchResultErrorEntry.GetSenderFault());
  }
}

TEST_F(QueueOperationTest, TagQueueTest)
{
  CreateQueueRequest createQueueRequest;
  createQueueRequest.SetQueueName(BuildResourceName(BASE_TAG_QUEUE_NAME));
  auto createQueueOutcome = sqsClient->CreateQueue(createQueueRequest);
  AWS_ASSERT_SUCCESS(createQueueOutcome);
  auto queueUrl = createQueueOutcome.GetResult().GetQueueUrl();
  m_allTestQueues.insert(queueUrl);

  TagQueueRequest tagQueueRequest;
  tagQueueRequest.SetQueueUrl(queueUrl);
  Aws::Map<Aws::String, Aws::String> tagsToSet;
  tagsToSet["MyCustomTag1"] = "MyCustomTag1Value";

  tagQueueRequest.SetTags(tagsToSet);
  TagQueueOutcome tagQueueOutcome = sqsClient->TagQueue(tagQueueRequest);
  AWS_ASSERT_SUCCESS(tagQueueOutcome);

  ListQueueTagsRequest listQueuesTagsRequest;
  listQueuesTagsRequest.SetQueueUrl(queueUrl);
  const ListQueueTagsOutcome listQueueTagsOutcome = sqsClient->ListQueueTags(listQueuesTagsRequest);
  AWS_ASSERT_SUCCESS(listQueueTagsOutcome);

  const Aws::Map<Aws::String, Aws::String>& listQueueTags = listQueueTagsOutcome.GetResult().GetTags();
  for(const auto& expectedTag : tagsToSet)
  {
      const auto& foundExpectedTagIt = listQueueTags.find(expectedTag.first);
      ASSERT_TRUE(foundExpectedTagIt != listQueueTags.end());
      ASSERT_EQ(foundExpectedTagIt->second, expectedTag.second);
  }

  // Set tags second time
  tagsToSet["MyCustomTag2"] = "MyCustomTag2Value";
  tagsToSet["MyAnotherCustomTag2"] = "MyCustomTag2Value";
  tagQueueRequest.SetTags(tagsToSet);
  TagQueueOutcome tagQueueOutcome2 = sqsClient->TagQueue(tagQueueRequest);

  AWS_ASSERT_SUCCESS(tagQueueOutcome2);

  const ListQueueTagsOutcome listQueueTagsOutcome2 = sqsClient->ListQueueTags(listQueuesTagsRequest);
  AWS_ASSERT_SUCCESS(listQueueTagsOutcome2);

  const Aws::Map<Aws::String, Aws::String>& listQueueTags2 = listQueueTagsOutcome2.GetResult().GetTags();
  for(const auto& expectedTag : tagsToSet)
  {
    const auto& foundExpectedTagIt = listQueueTags2.find(expectedTag.first);
    ASSERT_TRUE(foundExpectedTagIt != listQueueTags2.end());
    ASSERT_EQ(foundExpectedTagIt->second, expectedTag.second);
  }
}

TEST_F(QueueOperationTest, ErrorCode)
{
    GetQueueUrlRequest getQueueUrlRequest;
    getQueueUrlRequest.SetQueueName(BASE_NON_EXISTING_QUEUE_NAME);

    auto getQueueUrlOutcome = sqsClient->GetQueueUrl(getQueueUrlRequest);

    ASSERT_FALSE(getQueueUrlOutcome.IsSuccess());
    EXPECT_EQ(SQSErrors::QUEUE_DOES_NOT_EXIST, getQueueUrlOutcome.GetError().GetErrorType());
    EXPECT_EQ("AWS.SimpleQueueService.NonExistentQueue", getQueueUrlOutcome.GetError().GetExceptionName());
}
