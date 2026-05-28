/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/ServicePolicyDisassociatedMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

ServicePolicyDisassociatedMetadata::ServicePolicyDisassociatedMetadata(JsonView jsonValue) { *this = jsonValue; }

ServicePolicyDisassociatedMetadata& ServicePolicyDisassociatedMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("policyName")) {
    m_policyName = jsonValue.GetString("policyName");
    m_policyNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("policyArn")) {
    m_policyArn = jsonValue.GetString("policyArn");
    m_policyArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ServicePolicyDisassociatedMetadata::Jsonize() const {
  JsonValue payload;

  if (m_policyNameHasBeenSet) {
    payload.WithString("policyName", m_policyName);
  }

  if (m_policyArnHasBeenSet) {
    payload.WithString("policyArn", m_policyArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
