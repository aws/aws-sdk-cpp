/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/ToolOutputFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

ToolOutputFilter::ToolOutputFilter(JsonView jsonValue) { *this = jsonValue; }

ToolOutputFilter& ToolOutputFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("jsonPath")) {
    m_jsonPath = jsonValue.GetString("jsonPath");
    m_jsonPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outputConfiguration")) {
    m_outputConfiguration = jsonValue.GetObject("outputConfiguration");
    m_outputConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ToolOutputFilter::Jsonize() const {
  JsonValue payload;

  if (m_jsonPathHasBeenSet) {
    payload.WithString("jsonPath", m_jsonPath);
  }

  if (m_outputConfigurationHasBeenSet) {
    payload.WithObject("outputConfiguration", m_outputConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
