/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/FileSystemAssociationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

FileSystemAssociationSummary::FileSystemAssociationSummary() : 
    m_fileSystemAssociationIdHasBeenSet(false),
    m_fileSystemAssociationARNHasBeenSet(false),
    m_fileSystemAssociationStatusHasBeenSet(false),
    m_gatewayARNHasBeenSet(false)
{
}

FileSystemAssociationSummary::FileSystemAssociationSummary(JsonView jsonValue) : 
    m_fileSystemAssociationIdHasBeenSet(false),
    m_fileSystemAssociationARNHasBeenSet(false),
    m_fileSystemAssociationStatusHasBeenSet(false),
    m_gatewayARNHasBeenSet(false)
{
  *this = jsonValue;
}

FileSystemAssociationSummary& FileSystemAssociationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FileSystemAssociationId"))
  {
    m_fileSystemAssociationId = jsonValue.GetString("FileSystemAssociationId");

    m_fileSystemAssociationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileSystemAssociationARN"))
  {
    m_fileSystemAssociationARN = jsonValue.GetString("FileSystemAssociationARN");

    m_fileSystemAssociationARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileSystemAssociationStatus"))
  {
    m_fileSystemAssociationStatus = jsonValue.GetString("FileSystemAssociationStatus");

    m_fileSystemAssociationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GatewayARN"))
  {
    m_gatewayARN = jsonValue.GetString("GatewayARN");

    m_gatewayARNHasBeenSet = true;
  }

  return *this;
}

JsonValue FileSystemAssociationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_fileSystemAssociationIdHasBeenSet)
  {
   payload.WithString("FileSystemAssociationId", m_fileSystemAssociationId);

  }

  if(m_fileSystemAssociationARNHasBeenSet)
  {
   payload.WithString("FileSystemAssociationARN", m_fileSystemAssociationARN);

  }

  if(m_fileSystemAssociationStatusHasBeenSet)
  {
   payload.WithString("FileSystemAssociationStatus", m_fileSystemAssociationStatus);

  }

  if(m_gatewayARNHasBeenSet)
  {
   payload.WithString("GatewayARN", m_gatewayARN);

  }

  return payload;
}

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
