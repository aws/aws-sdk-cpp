/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ExtensionNodeSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ExtensionNodeSummary::ExtensionNodeSummary(JsonView jsonValue) { *this = jsonValue; }

ExtensionNodeSummary& ExtensionNodeSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TotalCount")) {
    m_totalCount = jsonValue.GetInteger("TotalCount");
    m_totalCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ActiveCount")) {
    m_activeCount = jsonValue.GetInteger("ActiveCount");
    m_activeCountHasBeenSet = true;
  }
  return *this;
}

JsonValue ExtensionNodeSummary::Jsonize() const {
  JsonValue payload;

  if (m_totalCountHasBeenSet) {
    payload.WithInteger("TotalCount", m_totalCount);
  }

  if (m_activeCountHasBeenSet) {
    payload.WithInteger("ActiveCount", m_activeCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
