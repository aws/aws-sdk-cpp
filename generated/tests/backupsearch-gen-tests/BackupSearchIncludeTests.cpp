/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/backupsearch/BackupSearchClient.h>
#include <aws/backupsearch/BackupSearchEndpointProvider.h>
#include <aws/backupsearch/BackupSearchEndpointRules.h>
#include <aws/backupsearch/BackupSearchErrorMarshaller.h>
#include <aws/backupsearch/BackupSearchErrors.h>
#include <aws/backupsearch/BackupSearchRequest.h>
#include <aws/backupsearch/BackupSearchServiceClientModel.h>
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/backupsearch/model/BackupCreationTimeFilter.h>
#include <aws/backupsearch/model/ConflictException.h>
#include <aws/backupsearch/model/CurrentSearchProgress.h>
#include <aws/backupsearch/model/EBSItemFilter.h>
#include <aws/backupsearch/model/EBSResultItem.h>
#include <aws/backupsearch/model/ExportJobStatus.h>
#include <aws/backupsearch/model/ExportJobSummary.h>
#include <aws/backupsearch/model/ExportSpecification.h>
#include <aws/backupsearch/model/GetSearchJobRequest.h>
#include <aws/backupsearch/model/GetSearchJobResult.h>
#include <aws/backupsearch/model/GetSearchResultExportJobRequest.h>
#include <aws/backupsearch/model/GetSearchResultExportJobResult.h>
#include <aws/backupsearch/model/InternalServerException.h>
#include <aws/backupsearch/model/ItemFilters.h>
#include <aws/backupsearch/model/ListSearchJobBackupsRequest.h>
#include <aws/backupsearch/model/ListSearchJobBackupsResult.h>
#include <aws/backupsearch/model/ListSearchJobResultsRequest.h>
#include <aws/backupsearch/model/ListSearchJobResultsResult.h>
#include <aws/backupsearch/model/ListSearchJobsRequest.h>
#include <aws/backupsearch/model/ListSearchJobsResult.h>
#include <aws/backupsearch/model/ListSearchResultExportJobsRequest.h>
#include <aws/backupsearch/model/ListSearchResultExportJobsResult.h>
#include <aws/backupsearch/model/ListTagsForResourceRequest.h>
#include <aws/backupsearch/model/ListTagsForResourceResult.h>
#include <aws/backupsearch/model/LongCondition.h>
#include <aws/backupsearch/model/LongConditionOperator.h>
#include <aws/backupsearch/model/ResourceNotFoundException.h>
#include <aws/backupsearch/model/ResourceType.h>
#include <aws/backupsearch/model/ResultItem.h>
#include <aws/backupsearch/model/S3ExportSpecification.h>
#include <aws/backupsearch/model/S3ItemFilter.h>
#include <aws/backupsearch/model/S3ResultItem.h>
#include <aws/backupsearch/model/SearchJobBackupsResult.h>
#include <aws/backupsearch/model/SearchJobState.h>
#include <aws/backupsearch/model/SearchJobSummary.h>
#include <aws/backupsearch/model/SearchScope.h>
#include <aws/backupsearch/model/SearchScopeSummary.h>
#include <aws/backupsearch/model/ServiceQuotaExceededException.h>
#include <aws/backupsearch/model/StartSearchJobRequest.h>
#include <aws/backupsearch/model/StartSearchJobResult.h>
#include <aws/backupsearch/model/StartSearchResultExportJobRequest.h>
#include <aws/backupsearch/model/StartSearchResultExportJobResult.h>
#include <aws/backupsearch/model/StopSearchJobRequest.h>
#include <aws/backupsearch/model/StopSearchJobResult.h>
#include <aws/backupsearch/model/StringCondition.h>
#include <aws/backupsearch/model/StringConditionOperator.h>
#include <aws/backupsearch/model/TagResourceRequest.h>
#include <aws/backupsearch/model/TagResourceResult.h>
#include <aws/backupsearch/model/ThrottlingException.h>
#include <aws/backupsearch/model/TimeCondition.h>
#include <aws/backupsearch/model/TimeConditionOperator.h>
#include <aws/backupsearch/model/UntagResourceRequest.h>
#include <aws/backupsearch/model/UntagResourceResult.h>

using BackupSearchIncludeTest = ::testing::Test;

TEST_F(BackupSearchIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::BackupSearch::BackupSearchClient>("BackupSearchIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
