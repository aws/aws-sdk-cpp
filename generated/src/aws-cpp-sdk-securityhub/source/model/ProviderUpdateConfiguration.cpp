/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/ProviderUpdateConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

ProviderUpdateConfiguration::ProviderUpdateConfiguration(JsonView jsonValue) { *this = jsonValue; }

ProviderUpdateConfiguration& ProviderUpdateConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("JiraCloud")) {
    m_jiraCloud = jsonValue.GetObject("JiraCloud");
    m_jiraCloudHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ServiceNow")) {
    m_serviceNow = jsonValue.GetObject("ServiceNow");
    m_serviceNowHasBeenSet = true;
  }
  return *this;
}

JsonValue ProviderUpdateConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_jiraCloudHasBeenSet) {
    payload.WithObject("JiraCloud", m_jiraCloud.Jsonize());
  }

  if (m_serviceNowHasBeenSet) {
    payload.WithObject("ServiceNow", m_serviceNow.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
