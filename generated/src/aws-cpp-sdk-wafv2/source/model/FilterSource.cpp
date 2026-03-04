/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/FilterSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {

FilterSource::FilterSource(JsonView jsonValue) { *this = jsonValue; }

FilterSource& FilterSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("BotCategory")) {
    m_botCategory = jsonValue.GetString("BotCategory");
    m_botCategoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BotOrganization")) {
    m_botOrganization = jsonValue.GetString("BotOrganization");
    m_botOrganizationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BotName")) {
    m_botName = jsonValue.GetString("BotName");
    m_botNameHasBeenSet = true;
  }
  return *this;
}

JsonValue FilterSource::Jsonize() const {
  JsonValue payload;

  if (m_botCategoryHasBeenSet) {
    payload.WithString("BotCategory", m_botCategory);
  }

  if (m_botOrganizationHasBeenSet) {
    payload.WithString("BotOrganization", m_botOrganization);
  }

  if (m_botNameHasBeenSet) {
    payload.WithString("BotName", m_botName);
  }

  return payload;
}

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
