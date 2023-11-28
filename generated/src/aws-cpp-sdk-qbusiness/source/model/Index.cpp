/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/Index.h>
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

Index::Index() : 
    m_createdAtHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_indexIdHasBeenSet(false),
    m_status(IndexStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

Index::Index(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_indexIdHasBeenSet(false),
    m_status(IndexStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

Index& Index::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("indexId"))
  {
    m_indexId = jsonValue.GetString("indexId");

    m_indexIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = IndexStatusMapper::GetIndexStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue Index::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_indexIdHasBeenSet)
  {
   payload.WithString("indexId", m_indexId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", IndexStatusMapper::GetNameForIndexStatus(m_status));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
