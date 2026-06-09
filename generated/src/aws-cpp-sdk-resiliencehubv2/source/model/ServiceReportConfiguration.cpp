/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/ServiceReportConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

ServiceReportConfiguration::ServiceReportConfiguration(JsonView jsonValue) { *this = jsonValue; }

ServiceReportConfiguration& ServiceReportConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("reportOutputs")) {
    Aws::Utils::Array<JsonView> reportOutputsJsonList = jsonValue.GetArray("reportOutputs");
    for (unsigned reportOutputsIndex = 0; reportOutputsIndex < reportOutputsJsonList.GetLength(); ++reportOutputsIndex) {
      m_reportOutputs.push_back(reportOutputsJsonList[reportOutputsIndex].AsObject());
    }
    m_reportOutputsHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceReportConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_reportOutputsHasBeenSet) {
    Aws::Utils::Array<JsonValue> reportOutputsJsonList(m_reportOutputs.size());
    for (unsigned reportOutputsIndex = 0; reportOutputsIndex < reportOutputsJsonList.GetLength(); ++reportOutputsIndex) {
      reportOutputsJsonList[reportOutputsIndex].AsObject(m_reportOutputs[reportOutputsIndex].Jsonize());
    }
    payload.WithArray("reportOutputs", std::move(reportOutputsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
