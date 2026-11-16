/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/opensearchmemory/OpenSearchMemoryClient.h>
#include <aws/opensearchmemory/OpenSearchMemoryClientPagination.h>
#include <aws/opensearchmemory/OpenSearchMemoryEndpointProvider.h>
#include <aws/opensearchmemory/OpenSearchMemoryErrorMarshaller.h>
#include <aws/opensearchmemory/OpenSearchMemoryErrors.h>
#include <aws/opensearchmemory/OpenSearchMemoryPaginationBase.h>
#include <aws/opensearchmemory/OpenSearchMemoryRequest.h>
#include <aws/opensearchmemory/OpenSearchMemoryServiceClientModel.h>
#include <aws/opensearchmemory/OpenSearchMemoryWaiter.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>
#include <aws/opensearchmemory/internal/OpenSearchMemoryEndpointRules.h>
#include <aws/opensearchmemory/model/BatchGetEventError.h>
#include <aws/opensearchmemory/model/BatchGetEventErrorCode.h>
#include <aws/opensearchmemory/model/BatchGetEventRequest.h>
#include <aws/opensearchmemory/model/BatchGetEventResult.h>
#include <aws/opensearchmemory/model/BlobContentType.h>
#include <aws/opensearchmemory/model/BlobPayload.h>
#include <aws/opensearchmemory/model/BlobSource.h>
#include <aws/opensearchmemory/model/ConflictException.h>
#include <aws/opensearchmemory/model/ConversationalPayload.h>
#include <aws/opensearchmemory/model/CreateEventRequest.h>
#include <aws/opensearchmemory/model/CreateEventResult.h>
#include <aws/opensearchmemory/model/CreateMemoryDetail.h>
#include <aws/opensearchmemory/model/CreateMemoryRequest.h>
#include <aws/opensearchmemory/model/CreateMemoryResult.h>
#include <aws/opensearchmemory/model/CreateSpaceRequest.h>
#include <aws/opensearchmemory/model/CreateSpaceResult.h>
#include <aws/opensearchmemory/model/DeleteEventRequest.h>
#include <aws/opensearchmemory/model/DeleteEventResult.h>
#include <aws/opensearchmemory/model/DeleteMemoryRequest.h>
#include <aws/opensearchmemory/model/DeleteMemoryResult.h>
#include <aws/opensearchmemory/model/DeleteSpaceRequest.h>
#include <aws/opensearchmemory/model/DeleteSpaceResult.h>
#include <aws/opensearchmemory/model/EncryptionConfiguration.h>
#include <aws/opensearchmemory/model/Event.h>
#include <aws/opensearchmemory/model/EventDetail.h>
#include <aws/opensearchmemory/model/EventPayload.h>
#include <aws/opensearchmemory/model/EventSearchSummary.h>
#include <aws/opensearchmemory/model/EventSummary.h>
#include <aws/opensearchmemory/model/GetEventRequest.h>
#include <aws/opensearchmemory/model/GetEventResult.h>
#include <aws/opensearchmemory/model/GetMemoryRequest.h>
#include <aws/opensearchmemory/model/GetMemoryResult.h>
#include <aws/opensearchmemory/model/GetSpaceRequest.h>
#include <aws/opensearchmemory/model/GetSpaceResult.h>
#include <aws/opensearchmemory/model/ListEventsPaginationTraits.h>
#include <aws/opensearchmemory/model/ListEventsRequest.h>
#include <aws/opensearchmemory/model/ListEventsResult.h>
#include <aws/opensearchmemory/model/ListMemoriesPaginationTraits.h>
#include <aws/opensearchmemory/model/ListMemoriesRequest.h>
#include <aws/opensearchmemory/model/ListMemoriesResult.h>
#include <aws/opensearchmemory/model/ListSpacesPaginationTraits.h>
#include <aws/opensearchmemory/model/ListSpacesRequest.h>
#include <aws/opensearchmemory/model/ListSpacesResult.h>
#include <aws/opensearchmemory/model/ListTagsForResourceRequest.h>
#include <aws/opensearchmemory/model/ListTagsForResourceResult.h>
#include <aws/opensearchmemory/model/Memory.h>
#include <aws/opensearchmemory/model/MemoryListSummary.h>
#include <aws/opensearchmemory/model/MemorySearchSummary.h>
#include <aws/opensearchmemory/model/MemorySortField.h>
#include <aws/opensearchmemory/model/MemoryStrategy.h>
#include <aws/opensearchmemory/model/MemoryStrategyConfiguration.h>
#include <aws/opensearchmemory/model/MemoryStrategyType.h>
#include <aws/opensearchmemory/model/MemoryType.h>
#include <aws/opensearchmemory/model/Message.h>
#include <aws/opensearchmemory/model/MessageContent.h>
#include <aws/opensearchmemory/model/MessageRole.h>
#include <aws/opensearchmemory/model/MetadataMode.h>
#include <aws/opensearchmemory/model/ResourceNotFoundException.h>
#include <aws/opensearchmemory/model/S3Location.h>
#include <aws/opensearchmemory/model/SearchEventsPaginationTraits.h>
#include <aws/opensearchmemory/model/SearchEventsRequest.h>
#include <aws/opensearchmemory/model/SearchEventsResult.h>
#include <aws/opensearchmemory/model/SearchMemoriesPaginationTraits.h>
#include <aws/opensearchmemory/model/SearchMemoriesRequest.h>
#include <aws/opensearchmemory/model/SearchMemoriesResult.h>
#include <aws/opensearchmemory/model/ServiceQuotaExceededException.h>
#include <aws/opensearchmemory/model/SortOrder.h>
#include <aws/opensearchmemory/model/SpaceStatus.h>
#include <aws/opensearchmemory/model/SpaceSummary.h>
#include <aws/opensearchmemory/model/StrategySelector.h>
#include <aws/opensearchmemory/model/StructuredDataPayload.h>
#include <aws/opensearchmemory/model/StructuredDataSource.h>
#include <aws/opensearchmemory/model/SystemMetadata.h>
#include <aws/opensearchmemory/model/Tag.h>
#include <aws/opensearchmemory/model/TagResourceRequest.h>
#include <aws/opensearchmemory/model/TagResourceResult.h>
#include <aws/opensearchmemory/model/ThrottlingException.h>
#include <aws/opensearchmemory/model/UnifiedConversational.h>
#include <aws/opensearchmemory/model/UnifiedConversationalObject.h>
#include <aws/opensearchmemory/model/UnifiedConversationalSource.h>
#include <aws/opensearchmemory/model/UntagResourceRequest.h>
#include <aws/opensearchmemory/model/UntagResourceResult.h>
#include <aws/opensearchmemory/model/UpdateMemoryRequest.h>
#include <aws/opensearchmemory/model/UpdateMemoryResult.h>
#include <aws/opensearchmemory/model/UpdateSpaceRequest.h>
#include <aws/opensearchmemory/model/UpdateSpaceResult.h>
#include <aws/opensearchmemory/model/ValidationException.h>
#include <aws/opensearchmemory/model/ValidationExceptionField.h>
#include <aws/opensearchmemory/model/ValidationExceptionReason.h>

using OpenSearchMemoryIncludeTest = ::testing::Test;

TEST_F(OpenSearchMemoryIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::OpenSearchMemory::OpenSearchMemoryClient>("OpenSearchMemoryIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
