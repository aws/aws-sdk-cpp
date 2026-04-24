/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediatailor/model/HttpRequest.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaTailor {
namespace Model {

HttpRequest::HttpRequest(JsonView jsonValue) { *this = jsonValue; }

HttpRequest& HttpRequest::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Method")) {
    m_method = MethodMapper::GetMethodForName(jsonValue.GetString("Method"));
    m_methodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Body")) {
    m_body = jsonValue.GetString("Body");
    m_bodyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Headers")) {
    Aws::Map<Aws::String, JsonView> headersJsonMap = jsonValue.GetObject("Headers").GetAllObjects();
    for (auto& headersItem : headersJsonMap) {
      m_headers[headersItem.first] = headersItem.second.AsString();
    }
    m_headersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CompressRequest")) {
    m_compressRequest = CompressionMethodMapper::GetCompressionMethodForName(jsonValue.GetString("CompressRequest"));
    m_compressRequestHasBeenSet = true;
  }
  return *this;
}

JsonValue HttpRequest::Jsonize() const {
  JsonValue payload;

  if (m_methodHasBeenSet) {
    payload.WithString("Method", MethodMapper::GetNameForMethod(m_method));
  }

  if (m_bodyHasBeenSet) {
    payload.WithString("Body", m_body);
  }

  if (m_headersHasBeenSet) {
    JsonValue headersJsonMap;
    for (auto& headersItem : m_headers) {
      headersJsonMap.WithString(headersItem.first, headersItem.second);
    }
    payload.WithObject("Headers", std::move(headersJsonMap));
  }

  if (m_compressRequestHasBeenSet) {
    payload.WithString("CompressRequest", CompressionMethodMapper::GetNameForCompressionMethod(m_compressRequest));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
