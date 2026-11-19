/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/EngagementSearchFilterValue.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

EngagementSearchFilterValue::EngagementSearchFilterValue(JsonView jsonValue) { *this = jsonValue; }

EngagementSearchFilterValue& EngagementSearchFilterValue::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("StringValue")) {
    m_stringValue = jsonValue.GetString("StringValue");
    m_stringValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StringListValue")) {
    Aws::Utils::Array<JsonView> stringListValueJsonList = jsonValue.GetArray("StringListValue");
    for (unsigned stringListValueIndex = 0; stringListValueIndex < stringListValueJsonList.GetLength(); ++stringListValueIndex) {
      m_stringListValue.push_back(stringListValueJsonList[stringListValueIndex].AsString());
    }
    m_stringListValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LongValue")) {
    m_longValue = jsonValue.GetInt64("LongValue");
    m_longValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DateValue")) {
    m_dateValue = jsonValue.GetString("DateValue");
    m_dateValueHasBeenSet = true;
  }
  return *this;
}

JsonValue EngagementSearchFilterValue::Jsonize() const {
  JsonValue payload;

  if (m_stringValueHasBeenSet) {
    payload.WithString("StringValue", m_stringValue);
  }

  if (m_stringListValueHasBeenSet) {
    Aws::Utils::Array<JsonValue> stringListValueJsonList(m_stringListValue.size());
    for (unsigned stringListValueIndex = 0; stringListValueIndex < stringListValueJsonList.GetLength(); ++stringListValueIndex) {
      stringListValueJsonList[stringListValueIndex].AsString(m_stringListValue[stringListValueIndex]);
    }
    payload.WithArray("StringListValue", std::move(stringListValueJsonList));
  }

  if (m_longValueHasBeenSet) {
    payload.WithInt64("LongValue", m_longValue);
  }

  if (m_dateValueHasBeenSet) {
    payload.WithString("DateValue", m_dateValue.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
