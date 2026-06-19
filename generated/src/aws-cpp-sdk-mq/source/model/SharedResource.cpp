/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mq/model/SharedResource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MQ {
namespace Model {

SharedResource::SharedResource(JsonView jsonValue) { *this = jsonValue; }

SharedResource& SharedResource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("dnsNames")) {
    Aws::Utils::Array<JsonView> dnsNamesJsonList = jsonValue.GetArray("dnsNames");
    for (unsigned dnsNamesIndex = 0; dnsNamesIndex < dnsNamesJsonList.GetLength(); ++dnsNamesIndex) {
      m_dnsNames.push_back(dnsNamesJsonList[dnsNamesIndex].AsString());
    }
    m_dnsNamesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("error")) {
    m_error = jsonValue.GetObject("error");
    m_errorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceArn")) {
    m_resourceArn = jsonValue.GetString("resourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceShareArns")) {
    Aws::Utils::Array<JsonView> resourceShareArnsJsonList = jsonValue.GetArray("resourceShareArns");
    for (unsigned resourceShareArnsIndex = 0; resourceShareArnsIndex < resourceShareArnsJsonList.GetLength(); ++resourceShareArnsIndex) {
      m_resourceShareArns.push_back(resourceShareArnsJsonList[resourceShareArnsIndex].AsString());
    }
    m_resourceShareArnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = SharedResourceStatusMapper::GetSharedResourceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = SharedResourceTypeMapper::GetSharedResourceTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue SharedResource::Jsonize() const {
  JsonValue payload;

  if (m_dnsNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> dnsNamesJsonList(m_dnsNames.size());
    for (unsigned dnsNamesIndex = 0; dnsNamesIndex < dnsNamesJsonList.GetLength(); ++dnsNamesIndex) {
      dnsNamesJsonList[dnsNamesIndex].AsString(m_dnsNames[dnsNamesIndex]);
    }
    payload.WithArray("dnsNames", std::move(dnsNamesJsonList));
  }

  if (m_errorHasBeenSet) {
    payload.WithObject("error", m_error.Jsonize());
  }

  if (m_resourceArnHasBeenSet) {
    payload.WithString("resourceArn", m_resourceArn);
  }

  if (m_resourceShareArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceShareArnsJsonList(m_resourceShareArns.size());
    for (unsigned resourceShareArnsIndex = 0; resourceShareArnsIndex < resourceShareArnsJsonList.GetLength(); ++resourceShareArnsIndex) {
      resourceShareArnsJsonList[resourceShareArnsIndex].AsString(m_resourceShareArns[resourceShareArnsIndex]);
    }
    payload.WithArray("resourceShareArns", std::move(resourceShareArnsJsonList));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", SharedResourceStatusMapper::GetNameForSharedResourceStatus(m_status));
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", SharedResourceTypeMapper::GetNameForSharedResourceType(m_type));
  }

  return payload;
}

}  // namespace Model
}  // namespace MQ
}  // namespace Aws
