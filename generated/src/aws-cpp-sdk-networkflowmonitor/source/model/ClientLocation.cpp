/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/networkflowmonitor/model/ClientLocation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFlowMonitor {
namespace Model {

ClientLocation::ClientLocation(JsonView jsonValue) { *this = jsonValue; }

ClientLocation& ClientLocation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("city")) {
    m_city = jsonValue.GetString("city");
    m_cityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subdivision")) {
    m_subdivision = jsonValue.GetString("subdivision");
    m_subdivisionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("country")) {
    m_country = jsonValue.GetString("country");
    m_countryHasBeenSet = true;
  }
  return *this;
}

JsonValue ClientLocation::Jsonize() const {
  JsonValue payload;

  if (m_cityHasBeenSet) {
    payload.WithString("city", m_city);
  }

  if (m_subdivisionHasBeenSet) {
    payload.WithString("subdivision", m_subdivision);
  }

  if (m_countryHasBeenSet) {
    payload.WithString("country", m_country);
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
