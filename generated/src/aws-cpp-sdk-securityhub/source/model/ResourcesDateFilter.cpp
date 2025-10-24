﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/ResourcesDateFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

ResourcesDateFilter::ResourcesDateFilter(JsonView jsonValue) { *this = jsonValue; }

ResourcesDateFilter& ResourcesDateFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FieldName")) {
    m_fieldName = ResourcesDateFieldMapper::GetResourcesDateFieldForName(jsonValue.GetString("FieldName"));
    m_fieldNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Filter")) {
    m_filter = jsonValue.GetObject("Filter");
    m_filterHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourcesDateFilter::Jsonize() const {
  JsonValue payload;

  if (m_fieldNameHasBeenSet) {
    payload.WithString("FieldName", ResourcesDateFieldMapper::GetNameForResourcesDateField(m_fieldName));
  }

  if (m_filterHasBeenSet) {
    payload.WithObject("Filter", m_filter.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
