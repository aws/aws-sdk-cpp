/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/InboundConnectorApplicationAssociationSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

InboundConnectorApplicationAssociationSummary::InboundConnectorApplicationAssociationSummary(JsonView jsonValue) { *this = jsonValue; }

InboundConnectorApplicationAssociationSummary& InboundConnectorApplicationAssociationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AccessControlApplicationArn")) {
    m_accessControlApplicationArn = jsonValue.GetString("AccessControlApplicationArn");
    m_accessControlApplicationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedTime")) {
    m_createdTime = jsonValue.GetDouble("CreatedTime");
    m_createdTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue InboundConnectorApplicationAssociationSummary::Jsonize() const {
  JsonValue payload;

  if (m_accessControlApplicationArnHasBeenSet) {
    payload.WithString("AccessControlApplicationArn", m_accessControlApplicationArn);
  }

  if (m_createdTimeHasBeenSet) {
    payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
