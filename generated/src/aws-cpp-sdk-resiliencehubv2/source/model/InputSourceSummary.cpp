/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/InputSourceSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

InputSourceSummary::InputSourceSummary(JsonView jsonValue) { *this = jsonValue; }

InputSourceSummary& InputSourceSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("inputSourceId")) {
    m_inputSourceId = jsonValue.GetString("inputSourceId");
    m_inputSourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = InputSourceTypeMapper::GetInputSourceTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
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
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  return *this;
}

JsonValue InputSourceSummary::Jsonize() const {
  JsonValue payload;

  if (m_inputSourceIdHasBeenSet) {
    payload.WithString("inputSourceId", m_inputSourceId);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", InputSourceTypeMapper::GetNameForInputSourceType(m_type));
  }

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

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
