/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DropDownControlDisplayOptions.h>
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

DropDownControlDisplayOptions::DropDownControlDisplayOptions() : 
    m_selectAllOptionsHasBeenSet(false),
    m_titleOptionsHasBeenSet(false)
{
}

DropDownControlDisplayOptions::DropDownControlDisplayOptions(JsonView jsonValue) : 
    m_selectAllOptionsHasBeenSet(false),
    m_titleOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

DropDownControlDisplayOptions& DropDownControlDisplayOptions::operator =(JsonView jsonValue)
{
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

JsonValue DropDownControlDisplayOptions::Jsonize() const
{
  JsonValue payload;

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
