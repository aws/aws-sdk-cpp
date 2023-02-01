/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/MapRunListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

MapRunListItem::MapRunListItem() : 
    m_executionArnHasBeenSet(false),
    m_mapRunArnHasBeenSet(false),
    m_stateMachineArnHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_stopDateHasBeenSet(false)
{
}

MapRunListItem::MapRunListItem(JsonView jsonValue) : 
    m_executionArnHasBeenSet(false),
    m_mapRunArnHasBeenSet(false),
    m_stateMachineArnHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_stopDateHasBeenSet(false)
{
  *this = jsonValue;
}

MapRunListItem& MapRunListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("executionArn"))
  {
    m_executionArn = jsonValue.GetString("executionArn");

    m_executionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mapRunArn"))
  {
    m_mapRunArn = jsonValue.GetString("mapRunArn");

    m_mapRunArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stateMachineArn"))
  {
    m_stateMachineArn = jsonValue.GetString("stateMachineArn");

    m_stateMachineArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startDate"))
  {
    m_startDate = jsonValue.GetDouble("startDate");

    m_startDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stopDate"))
  {
    m_stopDate = jsonValue.GetDouble("stopDate");

    m_stopDateHasBeenSet = true;
  }

  return *this;
}

JsonValue MapRunListItem::Jsonize() const
{
  JsonValue payload;

  if(m_executionArnHasBeenSet)
  {
   payload.WithString("executionArn", m_executionArn);

  }

  if(m_mapRunArnHasBeenSet)
  {
   payload.WithString("mapRunArn", m_mapRunArn);

  }

  if(m_stateMachineArnHasBeenSet)
  {
   payload.WithString("stateMachineArn", m_stateMachineArn);

  }

  if(m_startDateHasBeenSet)
  {
   payload.WithDouble("startDate", m_startDate.SecondsWithMSPrecision());
  }

  if(m_stopDateHasBeenSet)
  {
   payload.WithDouble("stopDate", m_stopDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
