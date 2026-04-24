/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/schemas/SchemasClient.h>
#include <aws/schemas/SchemasEndpointProvider.h>
#include <aws/schemas/SchemasEndpointRules.h>
#include <aws/schemas/SchemasErrorMarshaller.h>
#include <aws/schemas/SchemasErrors.h>
#include <aws/schemas/SchemasRequest.h>
#include <aws/schemas/SchemasServiceClientModel.h>
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/schemas/model/BadRequestException.h>
#include <aws/schemas/model/CodeGenerationStatus.h>
#include <aws/schemas/model/ConflictException.h>
#include <aws/schemas/model/CreateDiscovererRequest.h>
#include <aws/schemas/model/CreateDiscovererResult.h>
#include <aws/schemas/model/CreateRegistryRequest.h>
#include <aws/schemas/model/CreateRegistryResult.h>
#include <aws/schemas/model/CreateSchemaRequest.h>
#include <aws/schemas/model/CreateSchemaResult.h>
#include <aws/schemas/model/DeleteDiscovererRequest.h>
#include <aws/schemas/model/DeleteRegistryRequest.h>
#include <aws/schemas/model/DeleteResourcePolicyRequest.h>
#include <aws/schemas/model/DeleteSchemaRequest.h>
#include <aws/schemas/model/DeleteSchemaVersionRequest.h>
#include <aws/schemas/model/DescribeCodeBindingRequest.h>
#include <aws/schemas/model/DescribeCodeBindingResult.h>
#include <aws/schemas/model/DescribeDiscovererRequest.h>
#include <aws/schemas/model/DescribeDiscovererResult.h>
#include <aws/schemas/model/DescribeRegistryRequest.h>
#include <aws/schemas/model/DescribeRegistryResult.h>
#include <aws/schemas/model/DescribeSchemaRequest.h>
#include <aws/schemas/model/DescribeSchemaResult.h>
#include <aws/schemas/model/DiscovererState.h>
#include <aws/schemas/model/DiscovererSummary.h>
#include <aws/schemas/model/ExportSchemaRequest.h>
#include <aws/schemas/model/ExportSchemaResult.h>
#include <aws/schemas/model/ForbiddenException.h>
#include <aws/schemas/model/GetCodeBindingSourceRequest.h>
#include <aws/schemas/model/GetCodeBindingSourceResult.h>
#include <aws/schemas/model/GetDiscoveredSchemaRequest.h>
#include <aws/schemas/model/GetDiscoveredSchemaResult.h>
#include <aws/schemas/model/GetResourcePolicyRequest.h>
#include <aws/schemas/model/GetResourcePolicyResult.h>
#include <aws/schemas/model/GoneException.h>
#include <aws/schemas/model/InternalServerErrorException.h>
#include <aws/schemas/model/ListDiscoverersRequest.h>
#include <aws/schemas/model/ListDiscoverersResult.h>
#include <aws/schemas/model/ListRegistriesRequest.h>
#include <aws/schemas/model/ListRegistriesResult.h>
#include <aws/schemas/model/ListSchemaVersionsRequest.h>
#include <aws/schemas/model/ListSchemaVersionsResult.h>
#include <aws/schemas/model/ListSchemasRequest.h>
#include <aws/schemas/model/ListSchemasResult.h>
#include <aws/schemas/model/ListTagsForResourceRequest.h>
#include <aws/schemas/model/ListTagsForResourceResult.h>
#include <aws/schemas/model/NotFoundException.h>
#include <aws/schemas/model/PreconditionFailedException.h>
#include <aws/schemas/model/PutCodeBindingRequest.h>
#include <aws/schemas/model/PutCodeBindingResult.h>
#include <aws/schemas/model/PutResourcePolicyRequest.h>
#include <aws/schemas/model/PutResourcePolicyResult.h>
#include <aws/schemas/model/RegistrySummary.h>
#include <aws/schemas/model/SchemaSummary.h>
#include <aws/schemas/model/SchemaVersionSummary.h>
#include <aws/schemas/model/SearchSchemaSummary.h>
#include <aws/schemas/model/SearchSchemaVersionSummary.h>
#include <aws/schemas/model/SearchSchemasRequest.h>
#include <aws/schemas/model/SearchSchemasResult.h>
#include <aws/schemas/model/ServiceUnavailableException.h>
#include <aws/schemas/model/StartDiscovererRequest.h>
#include <aws/schemas/model/StartDiscovererResult.h>
#include <aws/schemas/model/StopDiscovererRequest.h>
#include <aws/schemas/model/StopDiscovererResult.h>
#include <aws/schemas/model/TagResourceRequest.h>
#include <aws/schemas/model/TooManyRequestsException.h>
#include <aws/schemas/model/Type.h>
#include <aws/schemas/model/UnauthorizedException.h>
#include <aws/schemas/model/UntagResourceRequest.h>
#include <aws/schemas/model/UpdateDiscovererRequest.h>
#include <aws/schemas/model/UpdateDiscovererResult.h>
#include <aws/schemas/model/UpdateRegistryRequest.h>
#include <aws/schemas/model/UpdateRegistryResult.h>
#include <aws/schemas/model/UpdateSchemaRequest.h>
#include <aws/schemas/model/UpdateSchemaResult.h>

using SchemasIncludeTest = ::testing::Test;

TEST_F(SchemasIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Schemas::SchemasClient>("SchemasIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
