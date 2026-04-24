/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ClusterSpotOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ClusterSpotOptions::ClusterSpotOptions(JsonView jsonValue) { *this = jsonValue; }

ClusterSpotOptions& ClusterSpotOptions::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue ClusterSpotOptions::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
