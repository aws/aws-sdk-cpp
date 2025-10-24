﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/OcsfNumberFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

OcsfNumberFilter::OcsfNumberFilter(JsonView jsonValue) { *this = jsonValue; }

OcsfNumberFilter& OcsfNumberFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FieldName")) {
    m_fieldName = OcsfNumberFieldMapper::GetOcsfNumberFieldForName(jsonValue.GetString("FieldName"));
    m_fieldNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Filter")) {
    m_filter = jsonValue.GetObject("Filter");
    m_filterHasBeenSet = true;
  }
  return *this;
}

JsonValue OcsfNumberFilter::Jsonize() const {
  JsonValue payload;

  if (m_fieldNameHasBeenSet) {
    payload.WithString("FieldName", OcsfNumberFieldMapper::GetNameForOcsfNumberField(m_fieldName));
  }

  if (m_filterHasBeenSet) {
    payload.WithObject("Filter", m_filter.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
