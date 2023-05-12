/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CellValueSynonym.h>
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

CellValueSynonym::CellValueSynonym() : 
    m_cellValueHasBeenSet(false),
    m_synonymsHasBeenSet(false)
{
}

CellValueSynonym::CellValueSynonym(JsonView jsonValue) : 
    m_cellValueHasBeenSet(false),
    m_synonymsHasBeenSet(false)
{
  *this = jsonValue;
}

CellValueSynonym& CellValueSynonym::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CellValue"))
  {
    m_cellValue = jsonValue.GetString("CellValue");

    m_cellValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Synonyms"))
  {
    Aws::Utils::Array<JsonView> synonymsJsonList = jsonValue.GetArray("Synonyms");
    for(unsigned synonymsIndex = 0; synonymsIndex < synonymsJsonList.GetLength(); ++synonymsIndex)
    {
      m_synonyms.push_back(synonymsJsonList[synonymsIndex].AsString());
    }
    m_synonymsHasBeenSet = true;
  }

  return *this;
}

JsonValue CellValueSynonym::Jsonize() const
{
  JsonValue payload;

  if(m_cellValueHasBeenSet)
  {
   payload.WithString("CellValue", m_cellValue);

  }

  if(m_synonymsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> synonymsJsonList(m_synonyms.size());
   for(unsigned synonymsIndex = 0; synonymsIndex < synonymsJsonList.GetLength(); ++synonymsIndex)
   {
     synonymsJsonList[synonymsIndex].AsString(m_synonyms[synonymsIndex]);
   }
   payload.WithArray("Synonyms", std::move(synonymsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
