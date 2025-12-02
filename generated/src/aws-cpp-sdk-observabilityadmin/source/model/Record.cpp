/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/Record.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

Record::Record(JsonView jsonValue) { *this = jsonValue; }

Record& Record::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Data")) {
    m_data = jsonValue.GetString("Data");
    m_dataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = RecordFormatMapper::GetRecordFormatForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue Record::Jsonize() const {
  JsonValue payload;

  if (m_dataHasBeenSet) {
    payload.WithString("Data", m_data);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", RecordFormatMapper::GetNameForRecordFormat(m_type));
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
