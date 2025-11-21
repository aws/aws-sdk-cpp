/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ClusterKubernetesTaint.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ClusterKubernetesTaint::ClusterKubernetesTaint(JsonView jsonValue) { *this = jsonValue; }

ClusterKubernetesTaint& ClusterKubernetesTaint::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Key")) {
    m_key = jsonValue.GetString("Key");
    m_keyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Effect")) {
    m_effect = ClusterKubernetesTaintEffectMapper::GetClusterKubernetesTaintEffectForName(jsonValue.GetString("Effect"));
    m_effectHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterKubernetesTaint::Jsonize() const {
  JsonValue payload;

  if (m_keyHasBeenSet) {
    payload.WithString("Key", m_key);
  }

  if (m_valueHasBeenSet) {
    payload.WithString("Value", m_value);
  }

  if (m_effectHasBeenSet) {
    payload.WithString("Effect", ClusterKubernetesTaintEffectMapper::GetNameForClusterKubernetesTaintEffect(m_effect));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
