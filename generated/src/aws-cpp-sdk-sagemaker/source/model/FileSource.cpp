/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/FileSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

FileSource::FileSource() : 
    m_contentTypeHasBeenSet(false),
    m_contentDigestHasBeenSet(false),
    m_s3UriHasBeenSet(false)
{
}

FileSource::FileSource(JsonView jsonValue) : 
    m_contentTypeHasBeenSet(false),
    m_contentDigestHasBeenSet(false),
    m_s3UriHasBeenSet(false)
{
  *this = jsonValue;
}

FileSource& FileSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContentType"))
  {
    m_contentType = jsonValue.GetString("ContentType");

    m_contentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentDigest"))
  {
    m_contentDigest = jsonValue.GetString("ContentDigest");

    m_contentDigestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Uri"))
  {
    m_s3Uri = jsonValue.GetString("S3Uri");

    m_s3UriHasBeenSet = true;
  }

  return *this;
}

JsonValue FileSource::Jsonize() const
{
  JsonValue payload;

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("ContentType", m_contentType);

  }

  if(m_contentDigestHasBeenSet)
  {
   payload.WithString("ContentDigest", m_contentDigest);

  }

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("S3Uri", m_s3Uri);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
