/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/StorageConnector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

StorageConnector::StorageConnector(JsonView jsonValue)
{
  *this = jsonValue;
}

StorageConnector& StorageConnector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectorType"))
  {
    m_connectorType = StorageConnectorTypeEnumMapper::GetStorageConnectorTypeEnumForName(jsonValue.GetString("ConnectorType"));
    m_connectorTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = StorageConnectorStatusEnumMapper::GetStorageConnectorStatusEnumForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue StorageConnector::Jsonize() const
{
  JsonValue payload;

  if(m_connectorTypeHasBeenSet)
  {
   payload.WithString("ConnectorType", StorageConnectorTypeEnumMapper::GetNameForStorageConnectorTypeEnum(m_connectorType));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", StorageConnectorStatusEnumMapper::GetNameForStorageConnectorStatusEnum(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
