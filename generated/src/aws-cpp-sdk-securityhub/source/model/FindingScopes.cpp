/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/FindingScopes.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

FindingScopes::FindingScopes(JsonView jsonValue) { *this = jsonValue; }

FindingScopes& FindingScopes::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AwsOrganizations")) {
    Aws::Utils::Array<JsonView> awsOrganizationsJsonList = jsonValue.GetArray("AwsOrganizations");
    for (unsigned awsOrganizationsIndex = 0; awsOrganizationsIndex < awsOrganizationsJsonList.GetLength(); ++awsOrganizationsIndex) {
      m_awsOrganizations.push_back(awsOrganizationsJsonList[awsOrganizationsIndex].AsObject());
    }
    m_awsOrganizationsHasBeenSet = true;
  }
  return *this;
}

JsonValue FindingScopes::Jsonize() const {
  JsonValue payload;

  if (m_awsOrganizationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> awsOrganizationsJsonList(m_awsOrganizations.size());
    for (unsigned awsOrganizationsIndex = 0; awsOrganizationsIndex < awsOrganizationsJsonList.GetLength(); ++awsOrganizationsIndex) {
      awsOrganizationsJsonList[awsOrganizationsIndex].AsObject(m_awsOrganizations[awsOrganizationsIndex].Jsonize());
    }
    payload.WithArray("AwsOrganizations", std::move(awsOrganizationsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
