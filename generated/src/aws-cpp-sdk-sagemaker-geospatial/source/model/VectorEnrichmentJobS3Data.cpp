/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/VectorEnrichmentJobS3Data.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMakerGeospatial
{
namespace Model
{

VectorEnrichmentJobS3Data::VectorEnrichmentJobS3Data() : 
    m_kmsKeyIdHasBeenSet(false),
    m_s3UriHasBeenSet(false)
{
}

VectorEnrichmentJobS3Data::VectorEnrichmentJobS3Data(JsonView jsonValue) : 
    m_kmsKeyIdHasBeenSet(false),
    m_s3UriHasBeenSet(false)
{
  *this = jsonValue;
}

VectorEnrichmentJobS3Data& VectorEnrichmentJobS3Data::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Uri"))
  {
    m_s3Uri = jsonValue.GetString("S3Uri");

    m_s3UriHasBeenSet = true;
  }

  return *this;
}

JsonValue VectorEnrichmentJobS3Data::Jsonize() const
{
  JsonValue payload;

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("S3Uri", m_s3Uri);

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
