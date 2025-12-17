/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/test-new-service-sdk-testing/model/NoSuchResource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace TestNewServiceSDKTesting {
namespace Model {

NoSuchResource::NoSuchResource(JsonView jsonValue) { *this = jsonValue; }

NoSuchResource& NoSuchResource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("resourceType")) {
    m_resourceType = jsonValue.GetString("resourceType");
    m_resourceTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue NoSuchResource::Jsonize() const {
  JsonValue payload;

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("resourceType", m_resourceType);
  }

  return payload;
}

}  // namespace Model
}  // namespace TestNewServiceSDKTesting
}  // namespace Aws
