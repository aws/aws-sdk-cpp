/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/CaseSummarizationInputData.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

CaseSummarizationInputData::CaseSummarizationInputData(JsonView jsonValue) { *this = jsonValue; }

CaseSummarizationInputData& CaseSummarizationInputData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("caseArn")) {
    m_caseArn = jsonValue.GetString("caseArn");
    m_caseArnHasBeenSet = true;
  }
  return *this;
}

JsonValue CaseSummarizationInputData::Jsonize() const {
  JsonValue payload;

  if (m_caseArnHasBeenSet) {
    payload.WithString("caseArn", m_caseArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
