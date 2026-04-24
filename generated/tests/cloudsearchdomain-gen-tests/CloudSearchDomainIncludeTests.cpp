/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/cloudsearchdomain/CloudSearchDomainClient.h>
#include <aws/cloudsearchdomain/CloudSearchDomainEndpointProvider.h>
#include <aws/cloudsearchdomain/CloudSearchDomainEndpointRules.h>
#include <aws/cloudsearchdomain/CloudSearchDomainErrorMarshaller.h>
#include <aws/cloudsearchdomain/CloudSearchDomainErrors.h>
#include <aws/cloudsearchdomain/CloudSearchDomainRequest.h>
#include <aws/cloudsearchdomain/CloudSearchDomainServiceClientModel.h>
#include <aws/cloudsearchdomain/CloudSearchDomain_EXPORTS.h>
#include <aws/cloudsearchdomain/model/Bucket.h>
#include <aws/cloudsearchdomain/model/BucketInfo.h>
#include <aws/cloudsearchdomain/model/ContentType.h>
#include <aws/cloudsearchdomain/model/DocumentServiceException.h>
#include <aws/cloudsearchdomain/model/DocumentServiceWarning.h>
#include <aws/cloudsearchdomain/model/FieldStats.h>
#include <aws/cloudsearchdomain/model/Hit.h>
#include <aws/cloudsearchdomain/model/Hits.h>
#include <aws/cloudsearchdomain/model/QueryParser.h>
#include <aws/cloudsearchdomain/model/SearchRequest.h>
#include <aws/cloudsearchdomain/model/SearchResult.h>
#include <aws/cloudsearchdomain/model/SearchStatus.h>
#include <aws/cloudsearchdomain/model/SuggestModel.h>
#include <aws/cloudsearchdomain/model/SuggestRequest.h>
#include <aws/cloudsearchdomain/model/SuggestResult.h>
#include <aws/cloudsearchdomain/model/SuggestStatus.h>
#include <aws/cloudsearchdomain/model/SuggestionMatch.h>
#include <aws/cloudsearchdomain/model/UploadDocumentsRequest.h>
#include <aws/cloudsearchdomain/model/UploadDocumentsResult.h>

using CloudSearchDomainIncludeTest = ::testing::Test;

TEST_F(CloudSearchDomainIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::CloudSearchDomain::CloudSearchDomainClient>("CloudSearchDomainIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
