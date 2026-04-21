/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AIRecommendationDeploymentS3Channel.h>
#include <aws/sagemaker/model/AIRecommendationInstanceType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>The deployment configuration for a recommendation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AIRecommendationDeploymentConfiguration">AWS
 * API Reference</a></p>
 */
class AIRecommendationDeploymentConfiguration {
 public:
  AWS_SAGEMAKER_API AIRecommendationDeploymentConfiguration() = default;
  AWS_SAGEMAKER_API AIRecommendationDeploymentConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API AIRecommendationDeploymentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon S3 data channels for the deployment.</p>
   */
  inline const Aws::Vector<AIRecommendationDeploymentS3Channel>& GetS3() const { return m_s3; }
  inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
  template <typename S3T = Aws::Vector<AIRecommendationDeploymentS3Channel>>
  void SetS3(S3T&& value) {
    m_s3HasBeenSet = true;
    m_s3 = std::forward<S3T>(value);
  }
  template <typename S3T = Aws::Vector<AIRecommendationDeploymentS3Channel>>
  AIRecommendationDeploymentConfiguration& WithS3(S3T&& value) {
    SetS3(std::forward<S3T>(value));
    return *this;
  }
  template <typename S3T = AIRecommendationDeploymentS3Channel>
  AIRecommendationDeploymentConfiguration& AddS3(S3T&& value) {
    m_s3HasBeenSet = true;
    m_s3.emplace_back(std::forward<S3T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URI of the container image for the deployment.</p>
   */
  inline const Aws::String& GetImageUri() const { return m_imageUri; }
  inline bool ImageUriHasBeenSet() const { return m_imageUriHasBeenSet; }
  template <typename ImageUriT = Aws::String>
  void SetImageUri(ImageUriT&& value) {
    m_imageUriHasBeenSet = true;
    m_imageUri = std::forward<ImageUriT>(value);
  }
  template <typename ImageUriT = Aws::String>
  AIRecommendationDeploymentConfiguration& WithImageUri(ImageUriT&& value) {
    SetImageUri(std::forward<ImageUriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recommended instance type for the deployment.</p>
   */
  inline AIRecommendationInstanceType GetInstanceType() const { return m_instanceType; }
  inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
  inline void SetInstanceType(AIRecommendationInstanceType value) {
    m_instanceTypeHasBeenSet = true;
    m_instanceType = value;
  }
  inline AIRecommendationDeploymentConfiguration& WithInstanceType(AIRecommendationInstanceType value) {
    SetInstanceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recommended number of instances for the deployment.</p>
   */
  inline int GetInstanceCount() const { return m_instanceCount; }
  inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
  inline void SetInstanceCount(int value) {
    m_instanceCountHasBeenSet = true;
    m_instanceCount = value;
  }
  inline AIRecommendationDeploymentConfiguration& WithInstanceCount(int value) {
    SetInstanceCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of model copies per instance.</p>
   */
  inline int GetCopyCountPerInstance() const { return m_copyCountPerInstance; }
  inline bool CopyCountPerInstanceHasBeenSet() const { return m_copyCountPerInstanceHasBeenSet; }
  inline void SetCopyCountPerInstance(int value) {
    m_copyCountPerInstanceHasBeenSet = true;
    m_copyCountPerInstance = value;
  }
  inline AIRecommendationDeploymentConfiguration& WithCopyCountPerInstance(int value) {
    SetCopyCountPerInstance(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The environment variables for the deployment.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const { return m_environmentVariables; }
  inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }
  template <typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
  void SetEnvironmentVariables(EnvironmentVariablesT&& value) {
    m_environmentVariablesHasBeenSet = true;
    m_environmentVariables = std::forward<EnvironmentVariablesT>(value);
  }
  template <typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
  AIRecommendationDeploymentConfiguration& WithEnvironmentVariables(EnvironmentVariablesT&& value) {
    SetEnvironmentVariables(std::forward<EnvironmentVariablesT>(value));
    return *this;
  }
  template <typename EnvironmentVariablesKeyT = Aws::String, typename EnvironmentVariablesValueT = Aws::String>
  AIRecommendationDeploymentConfiguration& AddEnvironmentVariables(EnvironmentVariablesKeyT&& key, EnvironmentVariablesValueT&& value) {
    m_environmentVariablesHasBeenSet = true;
    m_environmentVariables.emplace(std::forward<EnvironmentVariablesKeyT>(key), std::forward<EnvironmentVariablesValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AIRecommendationDeploymentS3Channel> m_s3;

  Aws::String m_imageUri;

  AIRecommendationInstanceType m_instanceType{AIRecommendationInstanceType::NOT_SET};

  int m_instanceCount{0};

  int m_copyCountPerInstance{0};

  Aws::Map<Aws::String, Aws::String> m_environmentVariables;
  bool m_s3HasBeenSet = false;
  bool m_imageUriHasBeenSet = false;
  bool m_instanceTypeHasBeenSet = false;
  bool m_instanceCountHasBeenSet = false;
  bool m_copyCountPerInstanceHasBeenSet = false;
  bool m_environmentVariablesHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
