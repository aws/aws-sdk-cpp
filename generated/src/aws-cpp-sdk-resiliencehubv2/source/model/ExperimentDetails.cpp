/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/ExperimentDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

ExperimentDetails::ExperimentDetails(JsonView jsonValue) { *this = jsonValue; }

ExperimentDetails& ExperimentDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("experimentArn")) {
    m_experimentArn = jsonValue.GetString("experimentArn");
    m_experimentArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("details")) {
    m_details = jsonValue.GetString("details");
    m_detailsHasBeenSet = true;
  }
  return *this;
}

JsonValue ExperimentDetails::Jsonize() const {
  JsonValue payload;

  if (m_experimentArnHasBeenSet) {
    payload.WithString("experimentArn", m_experimentArn);
  }

  if (m_detailsHasBeenSet) {
    payload.WithString("details", m_details);
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
