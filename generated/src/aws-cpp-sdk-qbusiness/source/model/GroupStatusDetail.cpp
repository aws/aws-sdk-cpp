/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/GroupStatusDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

GroupStatusDetail::GroupStatusDetail() : 
    m_errorDetailHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_status(GroupStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

GroupStatusDetail::GroupStatusDetail(JsonView jsonValue) : 
    m_errorDetailHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_status(GroupStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

GroupStatusDetail& GroupStatusDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorDetail"))
  {
    m_errorDetail = jsonValue.GetObject("errorDetail");

    m_errorDetailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = GroupStatusMapper::GetGroupStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue GroupStatusDetail::Jsonize() const
{
  JsonValue payload;

  if(m_errorDetailHasBeenSet)
  {
   payload.WithObject("errorDetail", m_errorDetail.Jsonize());

  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("lastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", GroupStatusMapper::GetNameForGroupStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
