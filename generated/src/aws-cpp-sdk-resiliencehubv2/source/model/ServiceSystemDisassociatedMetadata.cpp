/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/ServiceSystemDisassociatedMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

ServiceSystemDisassociatedMetadata::ServiceSystemDisassociatedMetadata(JsonView jsonValue) { *this = jsonValue; }

ServiceSystemDisassociatedMetadata& ServiceSystemDisassociatedMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("systemId")) {
    m_systemId = jsonValue.GetString("systemId");
    m_systemIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("systemName")) {
    m_systemName = jsonValue.GetString("systemName");
    m_systemNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("systemArn")) {
    m_systemArn = jsonValue.GetString("systemArn");
    m_systemArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceSystemDisassociatedMetadata::Jsonize() const {
  JsonValue payload;

  if (m_systemIdHasBeenSet) {
    payload.WithString("systemId", m_systemId);
  }

  if (m_systemNameHasBeenSet) {
    payload.WithString("systemName", m_systemName);
  }

  if (m_systemArnHasBeenSet) {
    payload.WithString("systemArn", m_systemArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
