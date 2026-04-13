/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ClusterInstanceTypeDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ClusterInstanceTypeDetail::ClusterInstanceTypeDetail(JsonView jsonValue) { *this = jsonValue; }

ClusterInstanceTypeDetail& ClusterInstanceTypeDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InstanceType")) {
    m_instanceType = ClusterInstanceTypeMapper::GetClusterInstanceTypeForName(jsonValue.GetString("InstanceType"));
    m_instanceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CurrentCount")) {
    m_currentCount = jsonValue.GetInteger("CurrentCount");
    m_currentCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ThreadsPerCore")) {
    m_threadsPerCore = jsonValue.GetInteger("ThreadsPerCore");
    m_threadsPerCoreHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterInstanceTypeDetail::Jsonize() const {
  JsonValue payload;

  if (m_instanceTypeHasBeenSet) {
    payload.WithString("InstanceType", ClusterInstanceTypeMapper::GetNameForClusterInstanceType(m_instanceType));
  }

  if (m_currentCountHasBeenSet) {
    payload.WithInteger("CurrentCount", m_currentCount);
  }

  if (m_threadsPerCoreHasBeenSet) {
    payload.WithInteger("ThreadsPerCore", m_threadsPerCore);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
