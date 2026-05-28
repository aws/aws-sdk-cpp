/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/ReportOutputConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

ReportOutputConfiguration::ReportOutputConfiguration(JsonView jsonValue) { *this = jsonValue; }

ReportOutputConfiguration& ReportOutputConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("s3")) {
    m_s3 = jsonValue.GetObject("s3");
    m_s3HasBeenSet = true;
  }
  return *this;
}

JsonValue ReportOutputConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_s3HasBeenSet) {
    payload.WithObject("s3", m_s3.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
