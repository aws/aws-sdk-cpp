/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/ManagedWorkgroupListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

ManagedWorkgroupListItem::ManagedWorkgroupListItem(JsonView jsonValue)
{
  *this = jsonValue;
}

ManagedWorkgroupListItem& ManagedWorkgroupListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetString("creationDate");
    m_creationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("managedWorkgroupId"))
  {
    m_managedWorkgroupId = jsonValue.GetString("managedWorkgroupId");
    m_managedWorkgroupIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("managedWorkgroupName"))
  {
    m_managedWorkgroupName = jsonValue.GetString("managedWorkgroupName");
    m_managedWorkgroupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceArn"))
  {
    m_sourceArn = jsonValue.GetString("sourceArn");
    m_sourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ManagedWorkgroupStatusMapper::GetManagedWorkgroupStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedWorkgroupListItem::Jsonize() const
{
  JsonValue payload;

  if(m_creationDateHasBeenSet)
  {
   payload.WithString("creationDate", m_creationDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_managedWorkgroupIdHasBeenSet)
  {
   payload.WithString("managedWorkgroupId", m_managedWorkgroupId);

  }

  if(m_managedWorkgroupNameHasBeenSet)
  {
   payload.WithString("managedWorkgroupName", m_managedWorkgroupName);

  }

  if(m_sourceArnHasBeenSet)
  {
   payload.WithString("sourceArn", m_sourceArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ManagedWorkgroupStatusMapper::GetNameForManagedWorkgroupStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
