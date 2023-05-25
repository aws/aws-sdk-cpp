/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/DataTransfer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

DataTransfer::DataTransfer() : 
    m_bytesTransferred(0),
    m_bytesTransferredHasBeenSet(false),
    m_objectsTransferred(0),
    m_objectsTransferredHasBeenSet(false),
    m_totalBytes(0),
    m_totalBytesHasBeenSet(false),
    m_totalObjects(0),
    m_totalObjectsHasBeenSet(false)
{
}

DataTransfer::DataTransfer(JsonView jsonValue) : 
    m_bytesTransferred(0),
    m_bytesTransferredHasBeenSet(false),
    m_objectsTransferred(0),
    m_objectsTransferredHasBeenSet(false),
    m_totalBytes(0),
    m_totalBytesHasBeenSet(false),
    m_totalObjects(0),
    m_totalObjectsHasBeenSet(false)
{
  *this = jsonValue;
}

DataTransfer& DataTransfer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BytesTransferred"))
  {
    m_bytesTransferred = jsonValue.GetInt64("BytesTransferred");

    m_bytesTransferredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectsTransferred"))
  {
    m_objectsTransferred = jsonValue.GetInt64("ObjectsTransferred");

    m_objectsTransferredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalBytes"))
  {
    m_totalBytes = jsonValue.GetInt64("TotalBytes");

    m_totalBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalObjects"))
  {
    m_totalObjects = jsonValue.GetInt64("TotalObjects");

    m_totalObjectsHasBeenSet = true;
  }

  return *this;
}

JsonValue DataTransfer::Jsonize() const
{
  JsonValue payload;

  if(m_bytesTransferredHasBeenSet)
  {
   payload.WithInt64("BytesTransferred", m_bytesTransferred);

  }

  if(m_objectsTransferredHasBeenSet)
  {
   payload.WithInt64("ObjectsTransferred", m_objectsTransferred);

  }

  if(m_totalBytesHasBeenSet)
  {
   payload.WithInt64("TotalBytes", m_totalBytes);

  }

  if(m_totalObjectsHasBeenSet)
  {
   payload.WithInt64("TotalObjects", m_totalObjects);

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws
