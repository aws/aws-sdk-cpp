/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ClusterSlurmConfigDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ClusterSlurmConfigDetails::ClusterSlurmConfigDetails(JsonView jsonValue) { *this = jsonValue; }

ClusterSlurmConfigDetails& ClusterSlurmConfigDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("NodeType")) {
    m_nodeType = ClusterSlurmNodeTypeMapper::GetClusterSlurmNodeTypeForName(jsonValue.GetString("NodeType"));
    m_nodeTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PartitionNames")) {
    Aws::Utils::Array<JsonView> partitionNamesJsonList = jsonValue.GetArray("PartitionNames");
    for (unsigned partitionNamesIndex = 0; partitionNamesIndex < partitionNamesJsonList.GetLength(); ++partitionNamesIndex) {
      m_partitionNames.push_back(partitionNamesJsonList[partitionNamesIndex].AsString());
    }
    m_partitionNamesHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterSlurmConfigDetails::Jsonize() const {
  JsonValue payload;

  if (m_nodeTypeHasBeenSet) {
    payload.WithString("NodeType", ClusterSlurmNodeTypeMapper::GetNameForClusterSlurmNodeType(m_nodeType));
  }

  if (m_partitionNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> partitionNamesJsonList(m_partitionNames.size());
    for (unsigned partitionNamesIndex = 0; partitionNamesIndex < partitionNamesJsonList.GetLength(); ++partitionNamesIndex) {
      partitionNamesJsonList[partitionNamesIndex].AsString(m_partitionNames[partitionNamesIndex]);
    }
    payload.WithArray("PartitionNames", std::move(partitionNamesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
