/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/ResourceConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

ResourceConfiguration::ResourceConfiguration(JsonView jsonValue) { *this = jsonValue; }

ResourceConfiguration& ResourceConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("resourceTags")) {
    Aws::Utils::Array<JsonView> resourceTagsJsonList = jsonValue.GetArray("resourceTags");
    for (unsigned resourceTagsIndex = 0; resourceTagsIndex < resourceTagsJsonList.GetLength(); ++resourceTagsIndex) {
      m_resourceTags.push_back(resourceTagsJsonList[resourceTagsIndex].AsObject());
    }
    m_resourceTagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cfnStackArn")) {
    m_cfnStackArn = jsonValue.GetString("cfnStackArn");
    m_cfnStackArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tfStateFileUrl")) {
    m_tfStateFileUrl = jsonValue.GetString("tfStateFileUrl");
    m_tfStateFileUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eks")) {
    m_eks = jsonValue.GetObject("eks");
    m_eksHasBeenSet = true;
  }
  if (jsonValue.ValueExists("designFileS3Url")) {
    m_designFileS3Url = jsonValue.GetString("designFileS3Url");
    m_designFileS3UrlHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_resourceTagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceTagsJsonList(m_resourceTags.size());
    for (unsigned resourceTagsIndex = 0; resourceTagsIndex < resourceTagsJsonList.GetLength(); ++resourceTagsIndex) {
      resourceTagsJsonList[resourceTagsIndex].AsObject(m_resourceTags[resourceTagsIndex].Jsonize());
    }
    payload.WithArray("resourceTags", std::move(resourceTagsJsonList));
  }

  if (m_cfnStackArnHasBeenSet) {
    payload.WithString("cfnStackArn", m_cfnStackArn);
  }

  if (m_tfStateFileUrlHasBeenSet) {
    payload.WithString("tfStateFileUrl", m_tfStateFileUrl);
  }

  if (m_eksHasBeenSet) {
    payload.WithObject("eks", m_eks.Jsonize());
  }

  if (m_designFileS3UrlHasBeenSet) {
    payload.WithString("designFileS3Url", m_designFileS3Url);
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
