/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/s3tables/model/GetTableMigrationRequest.h>

#include <utility>

using namespace Aws::S3Tables::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetTableMigrationRequest::SerializePayload() const { return {}; }

void GetTableMigrationRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_migrationIdHasBeenSet) {
    ss << m_migrationId;
    uri.AddQueryStringParameter("migrationId", ss.str());
    ss.str("");
  }

  if (m_tableARNHasBeenSet) {
    ss << m_tableARN;
    uri.AddQueryStringParameter("tableARN", ss.str());
    ss.str("");
  }
}
