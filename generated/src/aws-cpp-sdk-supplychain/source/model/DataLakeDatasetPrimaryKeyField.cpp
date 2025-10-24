﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/supplychain/model/DataLakeDatasetPrimaryKeyField.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SupplyChain {
namespace Model {

DataLakeDatasetPrimaryKeyField::DataLakeDatasetPrimaryKeyField(JsonView jsonValue) { *this = jsonValue; }

DataLakeDatasetPrimaryKeyField& DataLakeDatasetPrimaryKeyField::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  return *this;
}

JsonValue DataLakeDatasetPrimaryKeyField::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  return payload;
}

}  // namespace Model
}  // namespace SupplyChain
}  // namespace Aws
