/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3TablesServiceClientModel.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/ListTableMigrationsRequest.h>
#include <aws/s3tables/model/ListTableMigrationsResult.h>

namespace Aws {
namespace S3Tables {
namespace Pagination {

template <typename Client = S3TablesClient>
struct ListTableMigrationsPaginationTraits {
  using RequestType = Model::ListTableMigrationsRequest;
  using ResultType = Model::ListTableMigrationsResult;
  using OutcomeType = Model::ListTableMigrationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTableMigrations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace S3Tables
}  // namespace Aws
