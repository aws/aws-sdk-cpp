/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/ExpectedContractDuration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

ExpectedContractDuration::ExpectedContractDuration(JsonView jsonValue) { *this = jsonValue; }

ExpectedContractDuration& ExpectedContractDuration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Term")) {
    m_term = ExpectedContractDurationTermMapper::GetExpectedContractDurationTermForName(jsonValue.GetString("Term"));
    m_termHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue ExpectedContractDuration::Jsonize() const {
  JsonValue payload;

  if (m_termHasBeenSet) {
    payload.WithString("Term", ExpectedContractDurationTermMapper::GetNameForExpectedContractDurationTerm(m_term));
  }

  if (m_valueHasBeenSet) {
    payload.WithString("Value", m_value);
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
