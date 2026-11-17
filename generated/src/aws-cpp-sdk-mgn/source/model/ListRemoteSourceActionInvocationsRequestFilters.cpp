/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/ListRemoteSourceActionInvocationsRequestFilters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

ListRemoteSourceActionInvocationsRequestFilters::ListRemoteSourceActionInvocationsRequestFilters(JsonView jsonValue) { *this = jsonValue; }

ListRemoteSourceActionInvocationsRequestFilters& ListRemoteSourceActionInvocationsRequestFilters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sourceServerArns")) {
    Aws::Utils::Array<JsonView> sourceServerArnsJsonList = jsonValue.GetArray("sourceServerArns");
    for (unsigned sourceServerArnsIndex = 0; sourceServerArnsIndex < sourceServerArnsJsonList.GetLength(); ++sourceServerArnsIndex) {
      m_sourceServerArns.push_back(sourceServerArnsJsonList[sourceServerArnsIndex].AsString());
    }
    m_sourceServerArnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("remoteSourceActionArns")) {
    Aws::Utils::Array<JsonView> remoteSourceActionArnsJsonList = jsonValue.GetArray("remoteSourceActionArns");
    for (unsigned remoteSourceActionArnsIndex = 0; remoteSourceActionArnsIndex < remoteSourceActionArnsJsonList.GetLength();
         ++remoteSourceActionArnsIndex) {
      m_remoteSourceActionArns.push_back(remoteSourceActionArnsJsonList[remoteSourceActionArnsIndex].AsString());
    }
    m_remoteSourceActionArnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statuses")) {
    Aws::Utils::Array<JsonView> statusesJsonList = jsonValue.GetArray("statuses");
    for (unsigned statusesIndex = 0; statusesIndex < statusesJsonList.GetLength(); ++statusesIndex) {
      m_statuses.push_back(RemoteSourceActionInvocationStatusMapper::GetRemoteSourceActionInvocationStatusForName(
          statusesJsonList[statusesIndex].AsString()));
    }
    m_statusesHasBeenSet = true;
  }
  return *this;
}

JsonValue ListRemoteSourceActionInvocationsRequestFilters::Jsonize() const {
  JsonValue payload;

  if (m_sourceServerArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> sourceServerArnsJsonList(m_sourceServerArns.size());
    for (unsigned sourceServerArnsIndex = 0; sourceServerArnsIndex < sourceServerArnsJsonList.GetLength(); ++sourceServerArnsIndex) {
      sourceServerArnsJsonList[sourceServerArnsIndex].AsString(m_sourceServerArns[sourceServerArnsIndex]);
    }
    payload.WithArray("sourceServerArns", std::move(sourceServerArnsJsonList));
  }

  if (m_remoteSourceActionArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> remoteSourceActionArnsJsonList(m_remoteSourceActionArns.size());
    for (unsigned remoteSourceActionArnsIndex = 0; remoteSourceActionArnsIndex < remoteSourceActionArnsJsonList.GetLength();
         ++remoteSourceActionArnsIndex) {
      remoteSourceActionArnsJsonList[remoteSourceActionArnsIndex].AsString(m_remoteSourceActionArns[remoteSourceActionArnsIndex]);
    }
    payload.WithArray("remoteSourceActionArns", std::move(remoteSourceActionArnsJsonList));
  }

  if (m_statusesHasBeenSet) {
    Aws::Utils::Array<JsonValue> statusesJsonList(m_statuses.size());
    for (unsigned statusesIndex = 0; statusesIndex < statusesJsonList.GetLength(); ++statusesIndex) {
      statusesJsonList[statusesIndex].AsString(
          RemoteSourceActionInvocationStatusMapper::GetNameForRemoteSourceActionInvocationStatus(m_statuses[statusesIndex]));
    }
    payload.WithArray("statuses", std::move(statusesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
