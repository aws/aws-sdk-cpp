/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/OpsItemEventSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

OpsItemEventSummary::OpsItemEventSummary() : 
    m_opsItemIdHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_detailTypeHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

OpsItemEventSummary::OpsItemEventSummary(JsonView jsonValue) : 
    m_opsItemIdHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_detailTypeHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
  *this = jsonValue;
}

OpsItemEventSummary& OpsItemEventSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OpsItemId"))
  {
    m_opsItemId = jsonValue.GetString("OpsItemId");

    m_opsItemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventId"))
  {
    m_eventId = jsonValue.GetString("EventId");

    m_eventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetString("Source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DetailType"))
  {
    m_detailType = jsonValue.GetString("DetailType");

    m_detailTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Detail"))
  {
    m_detail = jsonValue.GetString("Detail");

    m_detailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetObject("CreatedBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue OpsItemEventSummary::Jsonize() const
{
  JsonValue payload;

  if(m_opsItemIdHasBeenSet)
  {
   payload.WithString("OpsItemId", m_opsItemId);

  }

  if(m_eventIdHasBeenSet)
  {
   payload.WithString("EventId", m_eventId);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("Source", m_source);

  }

  if(m_detailTypeHasBeenSet)
  {
   payload.WithString("DetailType", m_detailType);

  }

  if(m_detailHasBeenSet)
  {
   payload.WithString("Detail", m_detail);

  }

  if(m_createdByHasBeenSet)
  {
   payload.WithObject("CreatedBy", m_createdBy.Jsonize());

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
