/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AIRecommendationDeploymentConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AIRecommendationDeploymentConfiguration::AIRecommendationDeploymentConfiguration(JsonView jsonValue) { *this = jsonValue; }

AIRecommendationDeploymentConfiguration& AIRecommendationDeploymentConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("S3")) {
    Aws::Utils::Array<JsonView> s3JsonList = jsonValue.GetArray("S3");
    for (unsigned s3Index = 0; s3Index < s3JsonList.GetLength(); ++s3Index) {
      m_s3.push_back(s3JsonList[s3Index].AsObject());
    }
    m_s3HasBeenSet = true;
  }
  if (jsonValue.ValueExists("ImageUri")) {
    m_imageUri = jsonValue.GetString("ImageUri");
    m_imageUriHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InstanceType")) {
    m_instanceType = AIRecommendationInstanceTypeMapper::GetAIRecommendationInstanceTypeForName(jsonValue.GetString("InstanceType"));
    m_instanceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InstanceCount")) {
    m_instanceCount = jsonValue.GetInteger("InstanceCount");
    m_instanceCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CopyCountPerInstance")) {
    m_copyCountPerInstance = jsonValue.GetInteger("CopyCountPerInstance");
    m_copyCountPerInstanceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EnvironmentVariables")) {
    Aws::Map<Aws::String, JsonView> environmentVariablesJsonMap = jsonValue.GetObject("EnvironmentVariables").GetAllObjects();
    for (auto& environmentVariablesItem : environmentVariablesJsonMap) {
      m_environmentVariables[environmentVariablesItem.first] = environmentVariablesItem.second.AsString();
    }
    m_environmentVariablesHasBeenSet = true;
  }
  return *this;
}

JsonValue AIRecommendationDeploymentConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_s3HasBeenSet) {
    Aws::Utils::Array<JsonValue> s3JsonList(m_s3.size());
    for (unsigned s3Index = 0; s3Index < s3JsonList.GetLength(); ++s3Index) {
      s3JsonList[s3Index].AsObject(m_s3[s3Index].Jsonize());
    }
    payload.WithArray("S3", std::move(s3JsonList));
  }

  if (m_imageUriHasBeenSet) {
    payload.WithString("ImageUri", m_imageUri);
  }

  if (m_instanceTypeHasBeenSet) {
    payload.WithString("InstanceType", AIRecommendationInstanceTypeMapper::GetNameForAIRecommendationInstanceType(m_instanceType));
  }

  if (m_instanceCountHasBeenSet) {
    payload.WithInteger("InstanceCount", m_instanceCount);
  }

  if (m_copyCountPerInstanceHasBeenSet) {
    payload.WithInteger("CopyCountPerInstance", m_copyCountPerInstance);
  }

  if (m_environmentVariablesHasBeenSet) {
    JsonValue environmentVariablesJsonMap;
    for (auto& environmentVariablesItem : m_environmentVariables) {
      environmentVariablesJsonMap.WithString(environmentVariablesItem.first, environmentVariablesItem.second);
    }
    payload.WithObject("EnvironmentVariables", std::move(environmentVariablesJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
