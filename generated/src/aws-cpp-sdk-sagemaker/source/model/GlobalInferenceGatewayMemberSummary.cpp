/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/GlobalInferenceGatewayMemberSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

GlobalInferenceGatewayMemberSummary::GlobalInferenceGatewayMemberSummary(JsonView jsonValue) { *this = jsonValue; }

GlobalInferenceGatewayMemberSummary& GlobalInferenceGatewayMemberSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Namespace")) {
    m_namespace = jsonValue.GetString("Namespace");
    m_namespaceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ClusterArn")) {
    m_clusterArn = jsonValue.GetString("ClusterArn");
    m_clusterArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = GlobalInferenceGatewayMemberStatusMapper::GetGlobalInferenceGatewayMemberStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailureReason")) {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue GlobalInferenceGatewayMemberSummary::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_namespaceHasBeenSet) {
    payload.WithString("Namespace", m_namespace);
  }

  if (m_clusterArnHasBeenSet) {
    payload.WithString("ClusterArn", m_clusterArn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", GlobalInferenceGatewayMemberStatusMapper::GetNameForGlobalInferenceGatewayMemberStatus(m_status));
  }

  if (m_failureReasonHasBeenSet) {
    payload.WithString("FailureReason", m_failureReason);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
