/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsS3ObjectDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsS3ObjectDetails::AwsS3ObjectDetails() : 
    m_lastModifiedHasBeenSet(false),
    m_eTagHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_serverSideEncryptionHasBeenSet(false),
    m_sSEKMSKeyIdHasBeenSet(false)
{
}

AwsS3ObjectDetails::AwsS3ObjectDetails(JsonView jsonValue) : 
    m_lastModifiedHasBeenSet(false),
    m_eTagHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_serverSideEncryptionHasBeenSet(false),
    m_sSEKMSKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsS3ObjectDetails& AwsS3ObjectDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LastModified"))
  {
    m_lastModified = jsonValue.GetString("LastModified");

    m_lastModifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ETag"))
  {
    m_eTag = jsonValue.GetString("ETag");

    m_eTagHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VersionId"))
  {
    m_versionId = jsonValue.GetString("VersionId");

    m_versionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentType"))
  {
    m_contentType = jsonValue.GetString("ContentType");

    m_contentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerSideEncryption"))
  {
    m_serverSideEncryption = jsonValue.GetString("ServerSideEncryption");

    m_serverSideEncryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SSEKMSKeyId"))
  {
    m_sSEKMSKeyId = jsonValue.GetString("SSEKMSKeyId");

    m_sSEKMSKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsS3ObjectDetails::Jsonize() const
{
  JsonValue payload;

  if(m_lastModifiedHasBeenSet)
  {
   payload.WithString("LastModified", m_lastModified);

  }

  if(m_eTagHasBeenSet)
  {
   payload.WithString("ETag", m_eTag);

  }

  if(m_versionIdHasBeenSet)
  {
   payload.WithString("VersionId", m_versionId);

  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("ContentType", m_contentType);

  }

  if(m_serverSideEncryptionHasBeenSet)
  {
   payload.WithString("ServerSideEncryption", m_serverSideEncryption);

  }

  if(m_sSEKMSKeyIdHasBeenSet)
  {
   payload.WithString("SSEKMSKeyId", m_sSEKMSKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
