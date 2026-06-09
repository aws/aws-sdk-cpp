/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/Resource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

Resource::Resource(JsonView jsonValue) { *this = jsonValue; }

Resource& Resource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("identifier")) {
    m_identifier = jsonValue.GetString("identifier");
    m_identifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("awsRegion")) {
    m_awsRegion = jsonValue.GetString("awsRegion");
    m_awsRegionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("awsAccountId")) {
    m_awsAccountId = jsonValue.GetString("awsAccountId");
    m_awsAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceType")) {
    m_resourceType = jsonValue.GetString("resourceType");
    m_resourceTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue Resource::Jsonize() const {
  JsonValue payload;

  if (m_identifierHasBeenSet) {
    payload.WithString("identifier", m_identifier);
  }

  if (m_awsRegionHasBeenSet) {
    payload.WithString("awsRegion", m_awsRegion);
  }

  if (m_awsAccountIdHasBeenSet) {
    payload.WithString("awsAccountId", m_awsAccountId);
  }

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("resourceType", m_resourceType);
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
