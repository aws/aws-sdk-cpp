/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/ServiceResource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

ServiceResource::ServiceResource(JsonView jsonValue) { *this = jsonValue; }

ServiceResource& ServiceResource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("resourceIdentifier")) {
    m_resourceIdentifier = jsonValue.GetString("resourceIdentifier");
    m_resourceIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inputSource")) {
    m_inputSource = jsonValue.GetObject("inputSource");
    m_inputSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resource")) {
    m_resource = jsonValue.GetObject("resource");
    m_resourceHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceResource::Jsonize() const {
  JsonValue payload;

  if (m_resourceIdentifierHasBeenSet) {
    payload.WithString("resourceIdentifier", m_resourceIdentifier);
  }

  if (m_inputSourceHasBeenSet) {
    payload.WithObject("inputSource", m_inputSource.Jsonize());
  }

  if (m_resourceHasBeenSet) {
    payload.WithObject("resource", m_resource.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
