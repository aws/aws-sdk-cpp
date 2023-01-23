/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/FileShareInfo.h>
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

FileShareInfo::FileShareInfo() : 
    m_fileShareType(FileShareType::NOT_SET),
    m_fileShareTypeHasBeenSet(false),
    m_fileShareARNHasBeenSet(false),
    m_fileShareIdHasBeenSet(false),
    m_fileShareStatusHasBeenSet(false),
    m_gatewayARNHasBeenSet(false)
{
}

FileShareInfo::FileShareInfo(JsonView jsonValue) : 
    m_fileShareType(FileShareType::NOT_SET),
    m_fileShareTypeHasBeenSet(false),
    m_fileShareARNHasBeenSet(false),
    m_fileShareIdHasBeenSet(false),
    m_fileShareStatusHasBeenSet(false),
    m_gatewayARNHasBeenSet(false)
{
  *this = jsonValue;
}

FileShareInfo& FileShareInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FileShareType"))
  {
    m_fileShareType = FileShareTypeMapper::GetFileShareTypeForName(jsonValue.GetString("FileShareType"));

    m_fileShareTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileShareARN"))
  {
    m_fileShareARN = jsonValue.GetString("FileShareARN");

    m_fileShareARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileShareId"))
  {
    m_fileShareId = jsonValue.GetString("FileShareId");

    m_fileShareIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileShareStatus"))
  {
    m_fileShareStatus = jsonValue.GetString("FileShareStatus");

    m_fileShareStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GatewayARN"))
  {
    m_gatewayARN = jsonValue.GetString("GatewayARN");

    m_gatewayARNHasBeenSet = true;
  }

  return *this;
}

JsonValue FileShareInfo::Jsonize() const
{
  JsonValue payload;

  if(m_fileShareTypeHasBeenSet)
  {
   payload.WithString("FileShareType", FileShareTypeMapper::GetNameForFileShareType(m_fileShareType));
  }

  if(m_fileShareARNHasBeenSet)
  {
   payload.WithString("FileShareARN", m_fileShareARN);

  }

  if(m_fileShareIdHasBeenSet)
  {
   payload.WithString("FileShareId", m_fileShareId);

  }

  if(m_fileShareStatusHasBeenSet)
  {
   payload.WithString("FileShareStatus", m_fileShareStatus);

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
