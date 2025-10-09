/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/S3KnowledgeBaseParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

S3KnowledgeBaseParameters::S3KnowledgeBaseParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

S3KnowledgeBaseParameters& S3KnowledgeBaseParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BucketUrl"))
  {
    m_bucketUrl = jsonValue.GetString("BucketUrl");
    m_bucketUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MetadataFilesLocation"))
  {
    m_metadataFilesLocation = jsonValue.GetString("MetadataFilesLocation");
    m_metadataFilesLocationHasBeenSet = true;
  }
  return *this;
}

JsonValue S3KnowledgeBaseParameters::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_bucketUrlHasBeenSet)
  {
   payload.WithString("BucketUrl", m_bucketUrl);

  }

  if(m_metadataFilesLocationHasBeenSet)
  {
   payload.WithString("MetadataFilesLocation", m_metadataFilesLocation);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
