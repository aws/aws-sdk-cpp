/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/ApiPatternFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {

ApiPatternFilter::ApiPatternFilter(JsonView jsonValue) { *this = jsonValue; }

ApiPatternFilter& ApiPatternFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Method")) {
    m_method = jsonValue.GetString("Method");
    m_methodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PathPattern")) {
    m_pathPattern = jsonValue.GetString("PathPattern");
    m_pathPatternHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Port")) {
    m_port = jsonValue.GetInteger("Port");
    m_portHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Domains")) {
    Aws::Utils::Array<JsonView> domainsJsonList = jsonValue.GetArray("Domains");
    for (unsigned domainsIndex = 0; domainsIndex < domainsJsonList.GetLength(); ++domainsIndex) {
      m_domains.push_back(domainsJsonList[domainsIndex].AsString());
    }
    m_domainsHasBeenSet = true;
  }
  return *this;
}

JsonValue ApiPatternFilter::Jsonize() const {
  JsonValue payload;

  if (m_methodHasBeenSet) {
    payload.WithString("Method", m_method);
  }

  if (m_pathPatternHasBeenSet) {
    payload.WithString("PathPattern", m_pathPattern);
  }

  if (m_portHasBeenSet) {
    payload.WithInteger("Port", m_port);
  }

  if (m_domainsHasBeenSet) {
    Aws::Utils::Array<JsonValue> domainsJsonList(m_domains.size());
    for (unsigned domainsIndex = 0; domainsIndex < domainsJsonList.GetLength(); ++domainsIndex) {
      domainsJsonList[domainsIndex].AsString(m_domains[domainsIndex]);
    }
    payload.WithArray("Domains", std::move(domainsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
