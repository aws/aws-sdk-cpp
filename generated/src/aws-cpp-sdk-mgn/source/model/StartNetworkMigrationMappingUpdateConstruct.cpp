/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/StartNetworkMigrationMappingUpdateConstruct.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

StartNetworkMigrationMappingUpdateConstruct::StartNetworkMigrationMappingUpdateConstruct(JsonView jsonValue) { *this = jsonValue; }

StartNetworkMigrationMappingUpdateConstruct& StartNetworkMigrationMappingUpdateConstruct::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("segmentID")) {
    m_segmentID = jsonValue.GetString("segmentID");
    m_segmentIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("constructID")) {
    m_constructID = jsonValue.GetString("constructID");
    m_constructIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("constructType")) {
    m_constructType = jsonValue.GetString("constructType");
    m_constructTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("operation")) {
    m_operation = jsonValue.GetObject("operation");
    m_operationHasBeenSet = true;
  }
  return *this;
}

JsonValue StartNetworkMigrationMappingUpdateConstruct::Jsonize() const {
  JsonValue payload;

  if (m_segmentIDHasBeenSet) {
    payload.WithString("segmentID", m_segmentID);
  }

  if (m_constructIDHasBeenSet) {
    payload.WithString("constructID", m_constructID);
  }

  if (m_constructTypeHasBeenSet) {
    payload.WithString("constructType", m_constructType);
  }

  if (m_operationHasBeenSet) {
    payload.WithObject("operation", m_operation.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
