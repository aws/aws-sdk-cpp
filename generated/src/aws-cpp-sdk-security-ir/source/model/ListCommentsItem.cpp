/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/ListCommentsItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityIR
{
namespace Model
{

ListCommentsItem::ListCommentsItem(JsonView jsonValue)
{
  *this = jsonValue;
}

ListCommentsItem& ListCommentsItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("commentId"))
  {
    m_commentId = jsonValue.GetString("commentId");
    m_commentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetDouble("createdDate");
    m_createdDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedDate"))
  {
    m_lastUpdatedDate = jsonValue.GetDouble("lastUpdatedDate");
    m_lastUpdatedDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creator"))
  {
    m_creator = jsonValue.GetString("creator");
    m_creatorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedBy"))
  {
    m_lastUpdatedBy = jsonValue.GetString("lastUpdatedBy");
    m_lastUpdatedByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("body"))
  {
    m_body = jsonValue.GetString("body");
    m_bodyHasBeenSet = true;
  }
  return *this;
}

JsonValue ListCommentsItem::Jsonize() const
{
  JsonValue payload;

  if(m_commentIdHasBeenSet)
  {
   payload.WithString("commentId", m_commentId);

  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithDouble("createdDate", m_createdDate.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedDateHasBeenSet)
  {
   payload.WithDouble("lastUpdatedDate", m_lastUpdatedDate.SecondsWithMSPrecision());
  }

  if(m_creatorHasBeenSet)
  {
   payload.WithString("creator", m_creator);

  }

  if(m_lastUpdatedByHasBeenSet)
  {
   payload.WithString("lastUpdatedBy", m_lastUpdatedBy);

  }

  if(m_bodyHasBeenSet)
  {
   payload.WithString("body", m_body);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
