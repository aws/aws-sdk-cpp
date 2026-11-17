/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/AzureFlowLogsInfrastructure.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

AzureFlowLogsInfrastructure::AzureFlowLogsInfrastructure(JsonView jsonValue) { *this = jsonValue; }

AzureFlowLogsInfrastructure& AzureFlowLogsInfrastructure::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CustomerManaged")) {
    m_customerManaged = jsonValue.GetObject("CustomerManaged");
    m_customerManagedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AwsManaged")) {
    m_awsManaged = jsonValue.GetObject("AwsManaged");
    m_awsManagedHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureFlowLogsInfrastructure::Jsonize() const {
  JsonValue payload;

  if (m_customerManagedHasBeenSet) {
    payload.WithObject("CustomerManaged", m_customerManaged.Jsonize());
  }

  if (m_awsManagedHasBeenSet) {
    payload.WithObject("AwsManaged", m_awsManaged.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
