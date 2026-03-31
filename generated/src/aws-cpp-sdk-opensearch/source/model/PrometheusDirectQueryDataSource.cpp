/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/PrometheusDirectQueryDataSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

PrometheusDirectQueryDataSource::PrometheusDirectQueryDataSource(JsonView jsonValue) { *this = jsonValue; }

PrometheusDirectQueryDataSource& PrometheusDirectQueryDataSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RoleArn")) {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WorkspaceArn")) {
    m_workspaceArn = jsonValue.GetString("WorkspaceArn");
    m_workspaceArnHasBeenSet = true;
  }
  return *this;
}

JsonValue PrometheusDirectQueryDataSource::Jsonize() const {
  JsonValue payload;

  if (m_roleArnHasBeenSet) {
    payload.WithString("RoleArn", m_roleArn);
  }

  if (m_workspaceArnHasBeenSet) {
    payload.WithString("WorkspaceArn", m_workspaceArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
