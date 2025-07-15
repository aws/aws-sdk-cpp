/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3vectors/model/QueryOutputVector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Vectors
{
namespace Model
{

QueryOutputVector::QueryOutputVector(JsonView jsonValue)
{
  *this = jsonValue;
}

QueryOutputVector& QueryOutputVector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");
    m_keyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("data"))
  {
    m_data = jsonValue.GetObject("data");
    m_dataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("metadata"))
  {
    m_metadata = jsonValue.GetObject("metadata");
    m_metadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("distance"))
  {
    m_distance = jsonValue.GetDouble("distance");
    m_distanceHasBeenSet = true;
  }
  return *this;
}

JsonValue QueryOutputVector::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  if(m_dataHasBeenSet)
  {
   payload.WithObject("data", m_data.Jsonize());

  }

  if(m_metadataHasBeenSet)
  {
    if(!m_metadata.View().IsNull())
    {
       payload.WithObject("metadata", JsonValue(m_metadata.View()));
    }
  }

  if(m_distanceHasBeenSet)
  {
   payload.WithDouble("distance", m_distance);

  }

  return payload;
}

} // namespace Model
} // namespace S3Vectors
} // namespace Aws
