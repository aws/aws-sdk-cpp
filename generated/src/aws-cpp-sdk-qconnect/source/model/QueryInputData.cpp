/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/QueryInputData.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

QueryInputData::QueryInputData(JsonView jsonValue) { *this = jsonValue; }

QueryInputData& QueryInputData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("queryTextInputData")) {
    m_queryTextInputData = jsonValue.GetObject("queryTextInputData");
    m_queryTextInputDataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("intentInputData")) {
    m_intentInputData = jsonValue.GetObject("intentInputData");
    m_intentInputDataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("caseSummarizationInputData")) {
    m_caseSummarizationInputData = jsonValue.GetObject("caseSummarizationInputData");
    m_caseSummarizationInputDataHasBeenSet = true;
  }
  return *this;
}

JsonValue QueryInputData::Jsonize() const {
  JsonValue payload;

  if (m_queryTextInputDataHasBeenSet) {
    payload.WithObject("queryTextInputData", m_queryTextInputData.Jsonize());
  }

  if (m_intentInputDataHasBeenSet) {
    payload.WithObject("intentInputData", m_intentInputData.Jsonize());
  }

  if (m_caseSummarizationInputDataHasBeenSet) {
    payload.WithObject("caseSummarizationInputData", m_caseSummarizationInputData.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
