/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ram/model/ResourceShareConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RAM {
namespace Model {

ResourceShareConfiguration::ResourceShareConfiguration(JsonView jsonValue) { *this = jsonValue; }

ResourceShareConfiguration& ResourceShareConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("retainSharingOnAccountLeaveOrganization")) {
    m_retainSharingOnAccountLeaveOrganization = jsonValue.GetBool("retainSharingOnAccountLeaveOrganization");
    m_retainSharingOnAccountLeaveOrganizationHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceShareConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_retainSharingOnAccountLeaveOrganizationHasBeenSet) {
    payload.WithBool("retainSharingOnAccountLeaveOrganization", m_retainSharingOnAccountLeaveOrganization);
  }

  return payload;
}

}  // namespace Model
}  // namespace RAM
}  // namespace Aws
