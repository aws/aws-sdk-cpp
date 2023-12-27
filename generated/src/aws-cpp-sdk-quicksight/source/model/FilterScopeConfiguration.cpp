/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FilterScopeConfiguration.h>
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

FilterScopeConfiguration::FilterScopeConfiguration() : 
    m_selectedSheetsHasBeenSet(false),
    m_allSheetsHasBeenSet(false)
{
}

FilterScopeConfiguration::FilterScopeConfiguration(JsonView jsonValue) : 
    m_selectedSheetsHasBeenSet(false),
    m_allSheetsHasBeenSet(false)
{
  *this = jsonValue;
}

FilterScopeConfiguration& FilterScopeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SelectedSheets"))
  {
    m_selectedSheets = jsonValue.GetObject("SelectedSheets");

    m_selectedSheetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllSheets"))
  {
    m_allSheets = jsonValue.GetObject("AllSheets");

    m_allSheetsHasBeenSet = true;
  }

  return *this;
}

JsonValue FilterScopeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_selectedSheetsHasBeenSet)
  {
   payload.WithObject("SelectedSheets", m_selectedSheets.Jsonize());

  }

  if(m_allSheetsHasBeenSet)
  {
   payload.WithObject("AllSheets", m_allSheets.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
