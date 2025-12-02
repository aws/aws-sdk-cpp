/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/FieldToMatch.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

FieldToMatch::FieldToMatch(JsonView jsonValue) { *this = jsonValue; }

FieldToMatch& FieldToMatch::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SingleHeader")) {
    m_singleHeader = jsonValue.GetObject("SingleHeader");
    m_singleHeaderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UriPath")) {
    m_uriPath = jsonValue.GetString("UriPath");
    m_uriPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("QueryString")) {
    m_queryString = jsonValue.GetString("QueryString");
    m_queryStringHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Method")) {
    m_method = jsonValue.GetString("Method");
    m_methodHasBeenSet = true;
  }
  return *this;
}

JsonValue FieldToMatch::Jsonize() const {
  JsonValue payload;

  if (m_singleHeaderHasBeenSet) {
    payload.WithObject("SingleHeader", m_singleHeader.Jsonize());
  }

  if (m_uriPathHasBeenSet) {
    payload.WithString("UriPath", m_uriPath);
  }

  if (m_queryStringHasBeenSet) {
    payload.WithString("QueryString", m_queryString);
  }

  if (m_methodHasBeenSet) {
    payload.WithString("Method", m_method);
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
