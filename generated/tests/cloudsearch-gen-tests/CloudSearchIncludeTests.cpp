/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/cloudsearch/CloudSearchClient.h>
#include <aws/cloudsearch/CloudSearchEndpointProvider.h>
#include <aws/cloudsearch/CloudSearchEndpointRules.h>
#include <aws/cloudsearch/CloudSearchErrorMarshaller.h>
#include <aws/cloudsearch/CloudSearchErrors.h>
#include <aws/cloudsearch/CloudSearchRequest.h>
#include <aws/cloudsearch/CloudSearchServiceClientModel.h>
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/cloudsearch/model/AccessPoliciesStatus.h>
#include <aws/cloudsearch/model/AlgorithmicStemming.h>
#include <aws/cloudsearch/model/AnalysisOptions.h>
#include <aws/cloudsearch/model/AnalysisScheme.h>
#include <aws/cloudsearch/model/AnalysisSchemeLanguage.h>
#include <aws/cloudsearch/model/AnalysisSchemeStatus.h>
#include <aws/cloudsearch/model/AvailabilityOptionsStatus.h>
#include <aws/cloudsearch/model/BuildSuggestersRequest.h>
#include <aws/cloudsearch/model/BuildSuggestersResult.h>
#include <aws/cloudsearch/model/CreateDomainRequest.h>
#include <aws/cloudsearch/model/CreateDomainResult.h>
#include <aws/cloudsearch/model/DateArrayOptions.h>
#include <aws/cloudsearch/model/DateOptions.h>
#include <aws/cloudsearch/model/DefineAnalysisSchemeRequest.h>
#include <aws/cloudsearch/model/DefineAnalysisSchemeResult.h>
#include <aws/cloudsearch/model/DefineExpressionRequest.h>
#include <aws/cloudsearch/model/DefineExpressionResult.h>
#include <aws/cloudsearch/model/DefineIndexFieldRequest.h>
#include <aws/cloudsearch/model/DefineIndexFieldResult.h>
#include <aws/cloudsearch/model/DefineSuggesterRequest.h>
#include <aws/cloudsearch/model/DefineSuggesterResult.h>
#include <aws/cloudsearch/model/DeleteAnalysisSchemeRequest.h>
#include <aws/cloudsearch/model/DeleteAnalysisSchemeResult.h>
#include <aws/cloudsearch/model/DeleteDomainRequest.h>
#include <aws/cloudsearch/model/DeleteDomainResult.h>
#include <aws/cloudsearch/model/DeleteExpressionRequest.h>
#include <aws/cloudsearch/model/DeleteExpressionResult.h>
#include <aws/cloudsearch/model/DeleteIndexFieldRequest.h>
#include <aws/cloudsearch/model/DeleteIndexFieldResult.h>
#include <aws/cloudsearch/model/DeleteSuggesterRequest.h>
#include <aws/cloudsearch/model/DeleteSuggesterResult.h>
#include <aws/cloudsearch/model/DescribeAnalysisSchemesRequest.h>
#include <aws/cloudsearch/model/DescribeAnalysisSchemesResult.h>
#include <aws/cloudsearch/model/DescribeAvailabilityOptionsRequest.h>
#include <aws/cloudsearch/model/DescribeAvailabilityOptionsResult.h>
#include <aws/cloudsearch/model/DescribeDomainEndpointOptionsRequest.h>
#include <aws/cloudsearch/model/DescribeDomainEndpointOptionsResult.h>
#include <aws/cloudsearch/model/DescribeDomainsRequest.h>
#include <aws/cloudsearch/model/DescribeDomainsResult.h>
#include <aws/cloudsearch/model/DescribeExpressionsRequest.h>
#include <aws/cloudsearch/model/DescribeExpressionsResult.h>
#include <aws/cloudsearch/model/DescribeIndexFieldsRequest.h>
#include <aws/cloudsearch/model/DescribeIndexFieldsResult.h>
#include <aws/cloudsearch/model/DescribeScalingParametersRequest.h>
#include <aws/cloudsearch/model/DescribeScalingParametersResult.h>
#include <aws/cloudsearch/model/DescribeServiceAccessPoliciesRequest.h>
#include <aws/cloudsearch/model/DescribeServiceAccessPoliciesResult.h>
#include <aws/cloudsearch/model/DescribeSuggestersRequest.h>
#include <aws/cloudsearch/model/DescribeSuggestersResult.h>
#include <aws/cloudsearch/model/DocumentSuggesterOptions.h>
#include <aws/cloudsearch/model/DomainEndpointOptions.h>
#include <aws/cloudsearch/model/DomainEndpointOptionsStatus.h>
#include <aws/cloudsearch/model/DomainStatus.h>
#include <aws/cloudsearch/model/DoubleArrayOptions.h>
#include <aws/cloudsearch/model/DoubleOptions.h>
#include <aws/cloudsearch/model/Expression.h>
#include <aws/cloudsearch/model/ExpressionStatus.h>
#include <aws/cloudsearch/model/IndexDocumentsRequest.h>
#include <aws/cloudsearch/model/IndexDocumentsResult.h>
#include <aws/cloudsearch/model/IndexField.h>
#include <aws/cloudsearch/model/IndexFieldStatus.h>
#include <aws/cloudsearch/model/IndexFieldType.h>
#include <aws/cloudsearch/model/IntArrayOptions.h>
#include <aws/cloudsearch/model/IntOptions.h>
#include <aws/cloudsearch/model/LatLonOptions.h>
#include <aws/cloudsearch/model/Limits.h>
#include <aws/cloudsearch/model/ListDomainNamesRequest.h>
#include <aws/cloudsearch/model/ListDomainNamesResult.h>
#include <aws/cloudsearch/model/LiteralArrayOptions.h>
#include <aws/cloudsearch/model/LiteralOptions.h>
#include <aws/cloudsearch/model/OptionState.h>
#include <aws/cloudsearch/model/OptionStatus.h>
#include <aws/cloudsearch/model/PartitionInstanceType.h>
#include <aws/cloudsearch/model/ResponseMetadata.h>
#include <aws/cloudsearch/model/ScalingParameters.h>
#include <aws/cloudsearch/model/ScalingParametersStatus.h>
#include <aws/cloudsearch/model/ServiceEndpoint.h>
#include <aws/cloudsearch/model/Suggester.h>
#include <aws/cloudsearch/model/SuggesterFuzzyMatching.h>
#include <aws/cloudsearch/model/SuggesterStatus.h>
#include <aws/cloudsearch/model/TLSSecurityPolicy.h>
#include <aws/cloudsearch/model/TextArrayOptions.h>
#include <aws/cloudsearch/model/TextOptions.h>
#include <aws/cloudsearch/model/UpdateAvailabilityOptionsRequest.h>
#include <aws/cloudsearch/model/UpdateAvailabilityOptionsResult.h>
#include <aws/cloudsearch/model/UpdateDomainEndpointOptionsRequest.h>
#include <aws/cloudsearch/model/UpdateDomainEndpointOptionsResult.h>
#include <aws/cloudsearch/model/UpdateScalingParametersRequest.h>
#include <aws/cloudsearch/model/UpdateScalingParametersResult.h>
#include <aws/cloudsearch/model/UpdateServiceAccessPoliciesRequest.h>
#include <aws/cloudsearch/model/UpdateServiceAccessPoliciesResult.h>

using CloudSearchIncludeTest = ::testing::Test;

TEST_F(CloudSearchIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::CloudSearch::CloudSearchClient>("CloudSearchIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
