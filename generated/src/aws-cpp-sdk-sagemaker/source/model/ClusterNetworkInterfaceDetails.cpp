/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ClusterNetworkInterfaceDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ClusterNetworkInterfaceDetails::ClusterNetworkInterfaceDetails(JsonView jsonValue) { *this = jsonValue; }

ClusterNetworkInterfaceDetails& ClusterNetworkInterfaceDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InterfaceType")) {
    m_interfaceType = ClusterInterfaceTypeMapper::GetClusterInterfaceTypeForName(jsonValue.GetString("InterfaceType"));
    m_interfaceTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterNetworkInterfaceDetails::Jsonize() const {
  JsonValue payload;

  if (m_interfaceTypeHasBeenSet) {
    payload.WithString("InterfaceType", ClusterInterfaceTypeMapper::GetNameForClusterInterfaceType(m_interfaceType));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
