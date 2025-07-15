/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3vectors/model/Index.h>
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

Index::Index(JsonView jsonValue)
{
  *this = jsonValue;
}

Index& Index::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("vectorBucketName"))
  {
    m_vectorBucketName = jsonValue.GetString("vectorBucketName");
    m_vectorBucketNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("indexName"))
  {
    m_indexName = jsonValue.GetString("indexName");
    m_indexNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("indexArn"))
  {
    m_indexArn = jsonValue.GetString("indexArn");
    m_indexArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataType"))
  {
    m_dataType = DataTypeMapper::GetDataTypeForName(jsonValue.GetString("dataType"));
    m_dataTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dimension"))
  {
    m_dimension = jsonValue.GetInteger("dimension");
    m_dimensionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("distanceMetric"))
  {
    m_distanceMetric = DistanceMetricMapper::GetDistanceMetricForName(jsonValue.GetString("distanceMetric"));
    m_distanceMetricHasBeenSet = true;
  }
  if(jsonValue.ValueExists("metadataConfiguration"))
  {
    m_metadataConfiguration = jsonValue.GetObject("metadataConfiguration");
    m_metadataConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue Index::Jsonize() const
{
  JsonValue payload;

  if(m_vectorBucketNameHasBeenSet)
  {
   payload.WithString("vectorBucketName", m_vectorBucketName);

  }

  if(m_indexNameHasBeenSet)
  {
   payload.WithString("indexName", m_indexName);

  }

  if(m_indexArnHasBeenSet)
  {
   payload.WithString("indexArn", m_indexArn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_dataTypeHasBeenSet)
  {
   payload.WithString("dataType", DataTypeMapper::GetNameForDataType(m_dataType));
  }

  if(m_dimensionHasBeenSet)
  {
   payload.WithInteger("dimension", m_dimension);

  }

  if(m_distanceMetricHasBeenSet)
  {
   payload.WithString("distanceMetric", DistanceMetricMapper::GetNameForDistanceMetric(m_distanceMetric));
  }

  if(m_metadataConfigurationHasBeenSet)
  {
   payload.WithObject("metadataConfiguration", m_metadataConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace S3Vectors
} // namespace Aws
