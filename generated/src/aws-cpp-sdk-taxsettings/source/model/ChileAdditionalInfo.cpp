/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/taxsettings/model/ChileAdditionalInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace TaxSettings {
namespace Model {

ChileAdditionalInfo::ChileAdditionalInfo(JsonView jsonValue) { *this = jsonValue; }

ChileAdditionalInfo& ChileAdditionalInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("documentType")) {
    m_documentType = ChileDocumentTypeMapper::GetChileDocumentTypeForName(jsonValue.GetString("documentType"));
    m_documentTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("businessActivity")) {
    m_businessActivity = jsonValue.GetString("businessActivity");
    m_businessActivityHasBeenSet = true;
  }
  return *this;
}

JsonValue ChileAdditionalInfo::Jsonize() const {
  JsonValue payload;

  if (m_documentTypeHasBeenSet) {
    payload.WithString("documentType", ChileDocumentTypeMapper::GetNameForChileDocumentType(m_documentType));
  }

  if (m_businessActivityHasBeenSet) {
    payload.WithString("businessActivity", m_businessActivity);
  }

  return payload;
}

}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
