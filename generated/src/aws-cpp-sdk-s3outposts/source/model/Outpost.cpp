/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3outposts/model/Outpost.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Outposts
{
namespace Model
{

Outpost::Outpost() : 
    m_outpostArnHasBeenSet(false),
    m_s3OutpostArnHasBeenSet(false),
    m_outpostIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_capacityInBytes(0),
    m_capacityInBytesHasBeenSet(false)
{
}

Outpost::Outpost(JsonView jsonValue) : 
    m_outpostArnHasBeenSet(false),
    m_s3OutpostArnHasBeenSet(false),
    m_outpostIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_capacityInBytes(0),
    m_capacityInBytesHasBeenSet(false)
{
  *this = jsonValue;
}

Outpost& Outpost::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OutpostArn"))
  {
    m_outpostArn = jsonValue.GetString("OutpostArn");

    m_outpostArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3OutpostArn"))
  {
    m_s3OutpostArn = jsonValue.GetString("S3OutpostArn");

    m_s3OutpostArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutpostId"))
  {
    m_outpostId = jsonValue.GetString("OutpostId");

    m_outpostIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerId"))
  {
    m_ownerId = jsonValue.GetString("OwnerId");

    m_ownerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CapacityInBytes"))
  {
    m_capacityInBytes = jsonValue.GetInt64("CapacityInBytes");

    m_capacityInBytesHasBeenSet = true;
  }

  return *this;
}

JsonValue Outpost::Jsonize() const
{
  JsonValue payload;

  if(m_outpostArnHasBeenSet)
  {
   payload.WithString("OutpostArn", m_outpostArn);

  }

  if(m_s3OutpostArnHasBeenSet)
  {
   payload.WithString("S3OutpostArn", m_s3OutpostArn);

  }

  if(m_outpostIdHasBeenSet)
  {
   payload.WithString("OutpostId", m_outpostId);

  }

  if(m_ownerIdHasBeenSet)
  {
   payload.WithString("OwnerId", m_ownerId);

  }

  if(m_capacityInBytesHasBeenSet)
  {
   payload.WithInt64("CapacityInBytes", m_capacityInBytes);

  }

  return payload;
}

} // namespace Model
} // namespace S3Outposts
} // namespace Aws
