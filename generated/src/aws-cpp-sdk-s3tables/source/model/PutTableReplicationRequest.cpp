/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/s3tables/model/PutTableReplicationRequest.h>

#include <utility>

using namespace Aws::S3Tables::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String PutTableReplicationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_configurationHasBeenSet) {
    payload.WithObject("configuration", m_configuration.Jsonize());
  }

  return payload.View().WriteReadable();
}

void PutTableReplicationRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_tableArnHasBeenSet) {
    ss << m_tableArn;
    uri.AddQueryStringParameter("tableArn", ss.str());
    ss.str("");
  }

  if (m_versionTokenHasBeenSet) {
    ss << m_versionToken;
    uri.AddQueryStringParameter("versionToken", ss.str());
    ss.str("");
  }
}
