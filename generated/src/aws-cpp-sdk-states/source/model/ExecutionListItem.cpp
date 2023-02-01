/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/ExecutionListItem.h>
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

ExecutionListItem::ExecutionListItem() : 
    m_executionArnHasBeenSet(false),
    m_stateMachineArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(ExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_stopDateHasBeenSet(false),
    m_mapRunArnHasBeenSet(false),
    m_itemCount(0),
    m_itemCountHasBeenSet(false)
{
}

ExecutionListItem::ExecutionListItem(JsonView jsonValue) : 
    m_executionArnHasBeenSet(false),
    m_stateMachineArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(ExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_stopDateHasBeenSet(false),
    m_mapRunArnHasBeenSet(false),
    m_itemCount(0),
    m_itemCountHasBeenSet(false)
{
  *this = jsonValue;
}

ExecutionListItem& ExecutionListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("executionArn"))
  {
    m_executionArn = jsonValue.GetString("executionArn");

    m_executionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stateMachineArn"))
  {
    m_stateMachineArn = jsonValue.GetString("stateMachineArn");

    m_stateMachineArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ExecutionStatusMapper::GetExecutionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
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

  if(jsonValue.ValueExists("mapRunArn"))
  {
    m_mapRunArn = jsonValue.GetString("mapRunArn");

    m_mapRunArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("itemCount"))
  {
    m_itemCount = jsonValue.GetInteger("itemCount");

    m_itemCountHasBeenSet = true;
  }

  return *this;
}

JsonValue ExecutionListItem::Jsonize() const
{
  JsonValue payload;

  if(m_executionArnHasBeenSet)
  {
   payload.WithString("executionArn", m_executionArn);

  }

  if(m_stateMachineArnHasBeenSet)
  {
   payload.WithString("stateMachineArn", m_stateMachineArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ExecutionStatusMapper::GetNameForExecutionStatus(m_status));
  }

  if(m_startDateHasBeenSet)
  {
   payload.WithDouble("startDate", m_startDate.SecondsWithMSPrecision());
  }

  if(m_stopDateHasBeenSet)
  {
   payload.WithDouble("stopDate", m_stopDate.SecondsWithMSPrecision());
  }

  if(m_mapRunArnHasBeenSet)
  {
   payload.WithString("mapRunArn", m_mapRunArn);

  }

  if(m_itemCountHasBeenSet)
  {
   payload.WithInteger("itemCount", m_itemCount);

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
