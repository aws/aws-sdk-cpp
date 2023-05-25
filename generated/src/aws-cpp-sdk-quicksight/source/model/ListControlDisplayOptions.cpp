/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ListControlDisplayOptions.h>
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

ListControlDisplayOptions::ListControlDisplayOptions() : 
    m_searchOptionsHasBeenSet(false),
    m_selectAllOptionsHasBeenSet(false),
    m_titleOptionsHasBeenSet(false)
{
}

ListControlDisplayOptions::ListControlDisplayOptions(JsonView jsonValue) : 
    m_searchOptionsHasBeenSet(false),
    m_selectAllOptionsHasBeenSet(false),
    m_titleOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

ListControlDisplayOptions& ListControlDisplayOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SearchOptions"))
  {
    m_searchOptions = jsonValue.GetObject("SearchOptions");

    m_searchOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelectAllOptions"))
  {
    m_selectAllOptions = jsonValue.GetObject("SelectAllOptions");

    m_selectAllOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TitleOptions"))
  {
    m_titleOptions = jsonValue.GetObject("TitleOptions");

    m_titleOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue ListControlDisplayOptions::Jsonize() const
{
  JsonValue payload;

  if(m_searchOptionsHasBeenSet)
  {
   payload.WithObject("SearchOptions", m_searchOptions.Jsonize());

  }

  if(m_selectAllOptionsHasBeenSet)
  {
   payload.WithObject("SelectAllOptions", m_selectAllOptions.Jsonize());

  }

  if(m_titleOptionsHasBeenSet)
  {
   payload.WithObject("TitleOptions", m_titleOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
