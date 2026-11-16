/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/Destination.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

Destination::Destination(JsonView jsonValue) { *this = jsonValue; }

Destination& Destination::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResourceArn")) {
    m_resourceArn = jsonValue.GetString("ResourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RoutingStatus")) {
    m_routingStatus = RoutingStatusMapper::GetRoutingStatusForName(jsonValue.GetString("RoutingStatus"));
    m_routingStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue Destination::Jsonize() const {
  JsonValue payload;

  if (m_resourceArnHasBeenSet) {
    payload.WithString("ResourceArn", m_resourceArn);
  }

  if (m_routingStatusHasBeenSet) {
    payload.WithString("RoutingStatus", RoutingStatusMapper::GetNameForRoutingStatus(m_routingStatus));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
