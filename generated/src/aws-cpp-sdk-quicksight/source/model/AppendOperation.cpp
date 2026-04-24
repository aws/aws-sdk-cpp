/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/AppendOperation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

AppendOperation::AppendOperation(JsonView jsonValue) { *this = jsonValue; }

AppendOperation& AppendOperation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Alias")) {
    m_alias = jsonValue.GetString("Alias");
    m_aliasHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FirstSource")) {
    m_firstSource = jsonValue.GetObject("FirstSource");
    m_firstSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SecondSource")) {
    m_secondSource = jsonValue.GetObject("SecondSource");
    m_secondSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AppendedColumns")) {
    Aws::Utils::Array<JsonView> appendedColumnsJsonList = jsonValue.GetArray("AppendedColumns");
    for (unsigned appendedColumnsIndex = 0; appendedColumnsIndex < appendedColumnsJsonList.GetLength(); ++appendedColumnsIndex) {
      m_appendedColumns.push_back(appendedColumnsJsonList[appendedColumnsIndex].AsObject());
    }
    m_appendedColumnsHasBeenSet = true;
  }
  return *this;
}

JsonValue AppendOperation::Jsonize() const {
  JsonValue payload;

  if (m_aliasHasBeenSet) {
    payload.WithString("Alias", m_alias);
  }

  if (m_firstSourceHasBeenSet) {
    payload.WithObject("FirstSource", m_firstSource.Jsonize());
  }

  if (m_secondSourceHasBeenSet) {
    payload.WithObject("SecondSource", m_secondSource.Jsonize());
  }

  if (m_appendedColumnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> appendedColumnsJsonList(m_appendedColumns.size());
    for (unsigned appendedColumnsIndex = 0; appendedColumnsIndex < appendedColumnsJsonList.GetLength(); ++appendedColumnsIndex) {
      appendedColumnsJsonList[appendedColumnsIndex].AsObject(m_appendedColumns[appendedColumnsIndex].Jsonize());
    }
    payload.WithArray("AppendedColumns", std::move(appendedColumnsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
