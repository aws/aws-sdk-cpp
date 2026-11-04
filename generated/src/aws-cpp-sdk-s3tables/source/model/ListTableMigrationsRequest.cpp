/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/s3tables/model/ListTableMigrationsRequest.h>

#include <utility>

using namespace Aws::S3Tables::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListTableMigrationsRequest::SerializePayload() const { return {}; }

void ListTableMigrationsRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_tableBucketARNHasBeenSet) {
    ss << m_tableBucketARN;
    uri.AddQueryStringParameter("tableBucketARN", ss.str());
    ss.str("");
  }

  if (m_namespaceHasBeenSet) {
    ss << m_namespace;
    uri.AddQueryStringParameter("namespace", ss.str());
    ss.str("");
  }

  if (m_nameHasBeenSet) {
    ss << m_name;
    uri.AddQueryStringParameter("name", ss.str());
    ss.str("");
  }

  if (m_tableARNHasBeenSet) {
    ss << m_tableARN;
    uri.AddQueryStringParameter("tableARN", ss.str());
    ss.str("");
  }

  if (m_stateHasBeenSet) {
    ss << MigrationStateMapper::GetNameForMigrationState(m_state);
    uri.AddQueryStringParameter("state", ss.str());
    ss.str("");
  }

  if (m_hasValidPlanHasBeenSet) {
    ss << m_hasValidPlan;
    uri.AddQueryStringParameter("hasValidPlan", ss.str());
    ss.str("");
  }

  if (m_maxResultsHasBeenSet) {
    ss << m_maxResults;
    uri.AddQueryStringParameter("maxResults", ss.str());
    ss.str("");
  }

  if (m_nextTokenHasBeenSet) {
    ss << m_nextToken;
    uri.AddQueryStringParameter("nextToken", ss.str());
    ss.str("");
  }
}
