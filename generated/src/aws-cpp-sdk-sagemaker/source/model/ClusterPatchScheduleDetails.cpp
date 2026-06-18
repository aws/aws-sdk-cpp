/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ClusterPatchScheduleDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ClusterPatchScheduleDetails::ClusterPatchScheduleDetails(JsonView jsonValue) { *this = jsonValue; }

ClusterPatchScheduleDetails& ClusterPatchScheduleDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("NextPatchDate")) {
    m_nextPatchDate = jsonValue.GetDouble("NextPatchDate");
    m_nextPatchDateHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterPatchScheduleDetails::Jsonize() const {
  JsonValue payload;

  if (m_nextPatchDateHasBeenSet) {
    payload.WithDouble("NextPatchDate", m_nextPatchDate.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
