/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/eventbridgev2/EventBridgeV2Client.h>
#include <aws/eventbridgev2/EventBridgeV2ClientConfiguration.h>
#include <aws/eventbridgev2/EventBridgeV2ClientPagination.h>
#include <aws/eventbridgev2/EventBridgeV2EndpointProvider.h>
#include <aws/eventbridgev2/EventBridgeV2ErrorMarshaller.h>
#include <aws/eventbridgev2/EventBridgeV2Errors.h>
#include <aws/eventbridgev2/EventBridgeV2PaginationBase.h>
#include <aws/eventbridgev2/EventBridgeV2Request.h>
#include <aws/eventbridgev2/EventBridgeV2ServiceClientModel.h>
#include <aws/eventbridgev2/EventBridgeV2Waiter.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/internal/EventBridgeV2EndpointRules.h>
#include <aws/eventbridgev2/model/AwsServiceEventsSourceConfiguration.h>
#include <aws/eventbridgev2/model/BatchConfiguration.h>
#include <aws/eventbridgev2/model/BusState.h>
#include <aws/eventbridgev2/model/ConfluentPublicRegistryConfiguration.h>
#include <aws/eventbridgev2/model/CreateEventBusRequest.h>
#include <aws/eventbridgev2/model/CreateEventBusResult.h>
#include <aws/eventbridgev2/model/CreateEventSourceRequest.h>
#include <aws/eventbridgev2/model/CreateEventSourceResult.h>
#include <aws/eventbridgev2/model/CreateSubscriberRequest.h>
#include <aws/eventbridgev2/model/CreateSubscriberResult.h>
#include <aws/eventbridgev2/model/DeduplicationConfiguration.h>
#include <aws/eventbridgev2/model/DeduplicationType.h>
#include <aws/eventbridgev2/model/DeleteEventBusRequest.h>
#include <aws/eventbridgev2/model/DeleteEventBusResult.h>
#include <aws/eventbridgev2/model/DeleteEventSourceRequest.h>
#include <aws/eventbridgev2/model/DeleteEventSourceResult.h>
#include <aws/eventbridgev2/model/DeleteResourcePolicyRequest.h>
#include <aws/eventbridgev2/model/DeleteResourcePolicyResult.h>
#include <aws/eventbridgev2/model/DeleteSubscriberRequest.h>
#include <aws/eventbridgev2/model/DeleteSubscriberResult.h>
#include <aws/eventbridgev2/model/DescribeEventBusRequest.h>
#include <aws/eventbridgev2/model/DescribeEventBusResult.h>
#include <aws/eventbridgev2/model/DescribeEventSourceRequest.h>
#include <aws/eventbridgev2/model/DescribeEventSourceResult.h>
#include <aws/eventbridgev2/model/DescribeSubscriberRequest.h>
#include <aws/eventbridgev2/model/DescribeSubscriberResult.h>
#include <aws/eventbridgev2/model/EncryptionConfiguration.h>
#include <aws/eventbridgev2/model/EventBusSummary.h>
#include <aws/eventbridgev2/model/EventBusV2Parameters.h>
#include <aws/eventbridgev2/model/EventBusV2SystemMetadata.h>
#include <aws/eventbridgev2/model/EventSourceConfiguration.h>
#include <aws/eventbridgev2/model/EventSourceState.h>
#include <aws/eventbridgev2/model/EventSourceSummary.h>
#include <aws/eventbridgev2/model/EventSourceType.h>
#include <aws/eventbridgev2/model/Filter.h>
#include <aws/eventbridgev2/model/FilterConfiguration.h>
#include <aws/eventbridgev2/model/FilterLanguage.h>
#include <aws/eventbridgev2/model/FilterScope.h>
#include <aws/eventbridgev2/model/GetResourcePolicyRequest.h>
#include <aws/eventbridgev2/model/GetResourcePolicyResult.h>
#include <aws/eventbridgev2/model/HttpParameters.h>
#include <aws/eventbridgev2/model/IncludePayload.h>
#include <aws/eventbridgev2/model/InvocationType.h>
#include <aws/eventbridgev2/model/InvokeConfiguration.h>
#include <aws/eventbridgev2/model/JsonataConfiguration.h>
#include <aws/eventbridgev2/model/KinesisParameters.h>
#include <aws/eventbridgev2/model/LambdaParameters.h>
#include <aws/eventbridgev2/model/ListEventBusesPaginationTraits.h>
#include <aws/eventbridgev2/model/ListEventBusesRequest.h>
#include <aws/eventbridgev2/model/ListEventBusesResult.h>
#include <aws/eventbridgev2/model/ListEventSourcesPaginationTraits.h>
#include <aws/eventbridgev2/model/ListEventSourcesRequest.h>
#include <aws/eventbridgev2/model/ListEventSourcesResult.h>
#include <aws/eventbridgev2/model/ListResourcePoliciesPaginationTraits.h>
#include <aws/eventbridgev2/model/ListResourcePoliciesRequest.h>
#include <aws/eventbridgev2/model/ListResourcePoliciesResult.h>
#include <aws/eventbridgev2/model/ListSubscribersPaginationTraits.h>
#include <aws/eventbridgev2/model/ListSubscribersRequest.h>
#include <aws/eventbridgev2/model/ListSubscribersResult.h>
#include <aws/eventbridgev2/model/ListTagsForResourceRequest.h>
#include <aws/eventbridgev2/model/ListTagsForResourceResult.h>
#include <aws/eventbridgev2/model/LogConfiguration.h>
#include <aws/eventbridgev2/model/LogLevel.h>
#include <aws/eventbridgev2/model/OnFailureConfiguration.h>
#include <aws/eventbridgev2/model/OrderingType.h>
#include <aws/eventbridgev2/model/PartnerEventsSourceConfiguration.h>
#include <aws/eventbridgev2/model/PointInTimeConfiguration.h>
#include <aws/eventbridgev2/model/PointType.h>
#include <aws/eventbridgev2/model/PutEventsRequest.h>
#include <aws/eventbridgev2/model/PutEventsRequestEntry.h>
#include <aws/eventbridgev2/model/PutEventsResult.h>
#include <aws/eventbridgev2/model/PutEventsResultEntry.h>
#include <aws/eventbridgev2/model/PutEventsSystemMetadata.h>
#include <aws/eventbridgev2/model/PutRawEventsRequest.h>
#include <aws/eventbridgev2/model/PutRawEventsRequestEntry.h>
#include <aws/eventbridgev2/model/PutRawEventsResult.h>
#include <aws/eventbridgev2/model/PutRawEventsResultEntry.h>
#include <aws/eventbridgev2/model/PutRawEventsSystemMetadata.h>
#include <aws/eventbridgev2/model/PutResourcePolicyRequest.h>
#include <aws/eventbridgev2/model/PutResourcePolicyResult.h>
#include <aws/eventbridgev2/model/ResourcePolicySummary.h>
#include <aws/eventbridgev2/model/ResumePosition.h>
#include <aws/eventbridgev2/model/RetryPolicy.h>
#include <aws/eventbridgev2/model/RetryStrategy.h>
#include <aws/eventbridgev2/model/RevokeResourceRequest.h>
#include <aws/eventbridgev2/model/RevokeResourceResult.h>
#include <aws/eventbridgev2/model/SchemaRegistryConfiguration.h>
#include <aws/eventbridgev2/model/SnsMessageAttributeValue.h>
#include <aws/eventbridgev2/model/SnsParameters.h>
#include <aws/eventbridgev2/model/SqsMessageAttributeValue.h>
#include <aws/eventbridgev2/model/SqsParameters.h>
#include <aws/eventbridgev2/model/StartingPosition.h>
#include <aws/eventbridgev2/model/StepFunctionsParameters.h>
#include <aws/eventbridgev2/model/StorageConfiguration.h>
#include <aws/eventbridgev2/model/StorageConfigurationOutput.h>
#include <aws/eventbridgev2/model/SubscriberState.h>
#include <aws/eventbridgev2/model/SubscriberSummary.h>
#include <aws/eventbridgev2/model/SuccessCode.h>
#include <aws/eventbridgev2/model/TagResourceRequest.h>
#include <aws/eventbridgev2/model/TagResourceResult.h>
#include <aws/eventbridgev2/model/Transformer.h>
#include <aws/eventbridgev2/model/TransformerType.h>
#include <aws/eventbridgev2/model/UniversalTargetParameters.h>
#include <aws/eventbridgev2/model/UntagResourceRequest.h>
#include <aws/eventbridgev2/model/UntagResourceResult.h>
#include <aws/eventbridgev2/model/UpdateEventBusRequest.h>
#include <aws/eventbridgev2/model/UpdateEventBusResult.h>
#include <aws/eventbridgev2/model/UpdateEventSourceRequest.h>
#include <aws/eventbridgev2/model/UpdateEventSourceResult.h>
#include <aws/eventbridgev2/model/UpdateInvokeConfiguration.h>
#include <aws/eventbridgev2/model/UpdateSubscriberRequest.h>
#include <aws/eventbridgev2/model/UpdateSubscriberResult.h>

using EventBridgeV2IncludeTest = ::testing::Test;

TEST_F(EventBridgeV2IncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::EventBridgeV2::EventBridgeV2Client>("EventBridgeV2IncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
