/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ClusterFsxOpenZfsConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ClusterFsxOpenZfsConfig::ClusterFsxOpenZfsConfig(JsonView jsonValue) { *this = jsonValue; }

ClusterFsxOpenZfsConfig& ClusterFsxOpenZfsConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DnsName")) {
    m_dnsName = jsonValue.GetString("DnsName");
    m_dnsNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MountPath")) {
    m_mountPath = jsonValue.GetString("MountPath");
    m_mountPathHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterFsxOpenZfsConfig::Jsonize() const {
  JsonValue payload;

  if (m_dnsNameHasBeenSet) {
    payload.WithString("DnsName", m_dnsName);
  }

  if (m_mountPathHasBeenSet) {
    payload.WithString("MountPath", m_mountPath);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
