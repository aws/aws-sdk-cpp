/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TablePinnedFieldOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

TablePinnedFieldOptions::TablePinnedFieldOptions() : 
    m_pinnedLeftFieldsHasBeenSet(false)
{
}

TablePinnedFieldOptions::TablePinnedFieldOptions(JsonView jsonValue) : 
    m_pinnedLeftFieldsHasBeenSet(false)
{
  *this = jsonValue;
}

TablePinnedFieldOptions& TablePinnedFieldOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PinnedLeftFields"))
  {
    Aws::Utils::Array<JsonView> pinnedLeftFieldsJsonList = jsonValue.GetArray("PinnedLeftFields");
    for(unsigned pinnedLeftFieldsIndex = 0; pinnedLeftFieldsIndex < pinnedLeftFieldsJsonList.GetLength(); ++pinnedLeftFieldsIndex)
    {
      m_pinnedLeftFields.push_back(pinnedLeftFieldsJsonList[pinnedLeftFieldsIndex].AsString());
    }
    m_pinnedLeftFieldsHasBeenSet = true;
  }

  return *this;
}

JsonValue TablePinnedFieldOptions::Jsonize() const
{
  JsonValue payload;

  if(m_pinnedLeftFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pinnedLeftFieldsJsonList(m_pinnedLeftFields.size());
   for(unsigned pinnedLeftFieldsIndex = 0; pinnedLeftFieldsIndex < pinnedLeftFieldsJsonList.GetLength(); ++pinnedLeftFieldsIndex)
   {
     pinnedLeftFieldsJsonList[pinnedLeftFieldsIndex].AsString(m_pinnedLeftFields[pinnedLeftFieldsIndex]);
   }
   payload.WithArray("PinnedLeftFields", std::move(pinnedLeftFieldsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
