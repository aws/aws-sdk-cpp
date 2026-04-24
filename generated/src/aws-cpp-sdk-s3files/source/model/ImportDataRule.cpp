/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3files/model/ImportDataRule.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Files {
namespace Model {

ImportDataRule::ImportDataRule(JsonView jsonValue) { *this = jsonValue; }

ImportDataRule& ImportDataRule::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("prefix")) {
    m_prefix = jsonValue.GetString("prefix");
    m_prefixHasBeenSet = true;
  }
  if (jsonValue.ValueExists("trigger")) {
    m_trigger = ImportTriggerMapper::GetImportTriggerForName(jsonValue.GetString("trigger"));
    m_triggerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sizeLessThan")) {
    m_sizeLessThan = jsonValue.GetInt64("sizeLessThan");
    m_sizeLessThanHasBeenSet = true;
  }
  return *this;
}

JsonValue ImportDataRule::Jsonize() const {
  JsonValue payload;

  if (m_prefixHasBeenSet) {
    payload.WithString("prefix", m_prefix);
  }

  if (m_triggerHasBeenSet) {
    payload.WithString("trigger", ImportTriggerMapper::GetNameForImportTrigger(m_trigger));
  }

  if (m_sizeLessThanHasBeenSet) {
    payload.WithInt64("sizeLessThan", m_sizeLessThan);
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Files
}  // namespace Aws
