/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/S3DataInput.h>
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

S3DataInput::S3DataInput() : 
    m_kmsKeyIdHasBeenSet(false),
    m_metadataProvider(MetadataProvider::NOT_SET),
    m_metadataProviderHasBeenSet(false),
    m_s3UriHasBeenSet(false)
{
}

S3DataInput::S3DataInput(JsonView jsonValue) : 
    m_kmsKeyIdHasBeenSet(false),
    m_metadataProvider(MetadataProvider::NOT_SET),
    m_metadataProviderHasBeenSet(false),
    m_s3UriHasBeenSet(false)
{
  *this = jsonValue;
}

S3DataInput& S3DataInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetadataProvider"))
  {
    m_metadataProvider = MetadataProviderMapper::GetMetadataProviderForName(jsonValue.GetString("MetadataProvider"));

    m_metadataProviderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Uri"))
  {
    m_s3Uri = jsonValue.GetString("S3Uri");

    m_s3UriHasBeenSet = true;
  }

  return *this;
}

JsonValue S3DataInput::Jsonize() const
{
  JsonValue payload;

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_metadataProviderHasBeenSet)
  {
   payload.WithString("MetadataProvider", MetadataProviderMapper::GetNameForMetadataProvider(m_metadataProvider));
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
