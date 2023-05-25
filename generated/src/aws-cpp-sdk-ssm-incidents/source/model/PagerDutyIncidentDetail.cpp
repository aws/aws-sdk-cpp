/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/PagerDutyIncidentDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

PagerDutyIncidentDetail::PagerDutyIncidentDetail() : 
    m_autoResolve(false),
    m_autoResolveHasBeenSet(false),
    m_idHasBeenSet(false),
    m_secretIdHasBeenSet(false)
{
}

PagerDutyIncidentDetail::PagerDutyIncidentDetail(JsonView jsonValue) : 
    m_autoResolve(false),
    m_autoResolveHasBeenSet(false),
    m_idHasBeenSet(false),
    m_secretIdHasBeenSet(false)
{
  *this = jsonValue;
}

PagerDutyIncidentDetail& PagerDutyIncidentDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("autoResolve"))
  {
    m_autoResolve = jsonValue.GetBool("autoResolve");

    m_autoResolveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secretId"))
  {
    m_secretId = jsonValue.GetString("secretId");

    m_secretIdHasBeenSet = true;
  }

  return *this;
}

JsonValue PagerDutyIncidentDetail::Jsonize() const
{
  JsonValue payload;

  if(m_autoResolveHasBeenSet)
  {
   payload.WithBool("autoResolve", m_autoResolve);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_secretIdHasBeenSet)
  {
   payload.WithString("secretId", m_secretId);

  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
