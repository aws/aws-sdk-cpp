/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/sdb/SimpleDBClient.h>
#include <aws/sdb/SimpleDBEndpointProvider.h>
#include <aws/sdb/SimpleDBEndpointRules.h>
#include <aws/sdb/SimpleDBErrorMarshaller.h>
#include <aws/sdb/SimpleDBErrors.h>
#include <aws/sdb/SimpleDBRequest.h>
#include <aws/sdb/SimpleDBServiceClientModel.h>
#include <aws/sdb/SimpleDB_EXPORTS.h>
#include <aws/sdb/model/Attribute.h>
#include <aws/sdb/model/AttributeDoesNotExist.h>
#include <aws/sdb/model/BatchDeleteAttributesRequest.h>
#include <aws/sdb/model/BatchPutAttributesRequest.h>
#include <aws/sdb/model/CreateDomainRequest.h>
#include <aws/sdb/model/DeletableItem.h>
#include <aws/sdb/model/DeleteAttributesRequest.h>
#include <aws/sdb/model/DeleteDomainRequest.h>
#include <aws/sdb/model/DomainMetadataRequest.h>
#include <aws/sdb/model/DomainMetadataResult.h>
#include <aws/sdb/model/DuplicateItemName.h>
#include <aws/sdb/model/GetAttributesRequest.h>
#include <aws/sdb/model/GetAttributesResult.h>
#include <aws/sdb/model/InvalidNextToken.h>
#include <aws/sdb/model/InvalidNumberPredicates.h>
#include <aws/sdb/model/InvalidNumberValueTests.h>
#include <aws/sdb/model/InvalidParameterValue.h>
#include <aws/sdb/model/InvalidQueryExpression.h>
#include <aws/sdb/model/Item.h>
#include <aws/sdb/model/ListDomainsRequest.h>
#include <aws/sdb/model/ListDomainsResult.h>
#include <aws/sdb/model/MissingParameter.h>
#include <aws/sdb/model/NoSuchDomain.h>
#include <aws/sdb/model/NumberDomainAttributesExceeded.h>
#include <aws/sdb/model/NumberDomainBytesExceeded.h>
#include <aws/sdb/model/NumberDomainsExceeded.h>
#include <aws/sdb/model/NumberItemAttributesExceeded.h>
#include <aws/sdb/model/NumberSubmittedAttributesExceeded.h>
#include <aws/sdb/model/NumberSubmittedItemsExceeded.h>
#include <aws/sdb/model/PutAttributesRequest.h>
#include <aws/sdb/model/ReplaceableAttribute.h>
#include <aws/sdb/model/ReplaceableItem.h>
#include <aws/sdb/model/RequestTimeout.h>
#include <aws/sdb/model/ResponseMetadata.h>
#include <aws/sdb/model/SelectRequest.h>
#include <aws/sdb/model/SelectResult.h>
#include <aws/sdb/model/TooManyRequestedAttributes.h>
#include <aws/sdb/model/UpdateCondition.h>

using SimpleDBIncludeTest = ::testing::Test;

TEST_F(SimpleDBIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::SimpleDB::SimpleDBClient>("SimpleDBIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
