/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/LinkApplicationLogSampling.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {

LinkApplicationLogSampling::LinkApplicationLogSampling(JsonView jsonValue) { *this = jsonValue; }

LinkApplicationLogSampling& LinkApplicationLogSampling::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("errorLog")) {
    m_errorLog = jsonValue.GetDouble("errorLog");
    m_errorLogHasBeenSet = true;
  }
  if (jsonValue.ValueExists("filterLog")) {
    m_filterLog = jsonValue.GetDouble("filterLog");
    m_filterLogHasBeenSet = true;
  }
  return *this;
}

JsonValue LinkApplicationLogSampling::Jsonize() const {
  JsonValue payload;

  if (m_errorLogHasBeenSet) {
    payload.WithDouble("errorLog", m_errorLog);
  }

  if (m_filterLogHasBeenSet) {
    payload.WithDouble("filterLog", m_filterLog);
  }

  return payload;
}

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
