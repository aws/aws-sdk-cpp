/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcrContainerImageDetails.h>
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

AwsEcrContainerImageDetails::AwsEcrContainerImageDetails() : 
    m_registryIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_architectureHasBeenSet(false),
    m_imageDigestHasBeenSet(false),
    m_imageTagsHasBeenSet(false),
    m_imagePublishedAtHasBeenSet(false)
{
}

AwsEcrContainerImageDetails::AwsEcrContainerImageDetails(JsonView jsonValue) : 
    m_registryIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_architectureHasBeenSet(false),
    m_imageDigestHasBeenSet(false),
    m_imageTagsHasBeenSet(false),
    m_imagePublishedAtHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcrContainerImageDetails& AwsEcrContainerImageDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RegistryId"))
  {
    m_registryId = jsonValue.GetString("RegistryId");

    m_registryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RepositoryName"))
  {
    m_repositoryName = jsonValue.GetString("RepositoryName");

    m_repositoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Architecture"))
  {
    m_architecture = jsonValue.GetString("Architecture");

    m_architectureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageDigest"))
  {
    m_imageDigest = jsonValue.GetString("ImageDigest");

    m_imageDigestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageTags"))
  {
    Aws::Utils::Array<JsonView> imageTagsJsonList = jsonValue.GetArray("ImageTags");
    for(unsigned imageTagsIndex = 0; imageTagsIndex < imageTagsJsonList.GetLength(); ++imageTagsIndex)
    {
      m_imageTags.push_back(imageTagsJsonList[imageTagsIndex].AsString());
    }
    m_imageTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImagePublishedAt"))
  {
    m_imagePublishedAt = jsonValue.GetString("ImagePublishedAt");

    m_imagePublishedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcrContainerImageDetails::Jsonize() const
{
  JsonValue payload;

  if(m_registryIdHasBeenSet)
  {
   payload.WithString("RegistryId", m_registryId);

  }

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("RepositoryName", m_repositoryName);

  }

  if(m_architectureHasBeenSet)
  {
   payload.WithString("Architecture", m_architecture);

  }

  if(m_imageDigestHasBeenSet)
  {
   payload.WithString("ImageDigest", m_imageDigest);

  }

  if(m_imageTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> imageTagsJsonList(m_imageTags.size());
   for(unsigned imageTagsIndex = 0; imageTagsIndex < imageTagsJsonList.GetLength(); ++imageTagsIndex)
   {
     imageTagsJsonList[imageTagsIndex].AsString(m_imageTags[imageTagsIndex]);
   }
   payload.WithArray("ImageTags", std::move(imageTagsJsonList));

  }

  if(m_imagePublishedAtHasBeenSet)
  {
   payload.WithString("ImagePublishedAt", m_imagePublishedAt);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
