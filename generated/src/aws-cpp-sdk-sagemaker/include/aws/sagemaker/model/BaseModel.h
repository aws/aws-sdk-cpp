/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
 * <p>Identifies the foundation model that was used as the starting point for model
 * customization.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/BaseModel">AWS
 * API Reference</a></p>
 */
class BaseModel {
 public:
  AWS_SAGEMAKER_API BaseModel() = default;
  AWS_SAGEMAKER_API BaseModel(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API BaseModel& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The hub content name of the base model. </p>
   */
  inline const Aws::String& GetHubContentName() const { return m_hubContentName; }
  inline bool HubContentNameHasBeenSet() const { return m_hubContentNameHasBeenSet; }
  template <typename HubContentNameT = Aws::String>
  void SetHubContentName(HubContentNameT&& value) {
    m_hubContentNameHasBeenSet = true;
    m_hubContentName = std::forward<HubContentNameT>(value);
  }
  template <typename HubContentNameT = Aws::String>
  BaseModel& WithHubContentName(HubContentNameT&& value) {
    SetHubContentName(std::forward<HubContentNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The hub content version of the base model. </p>
   */
  inline const Aws::String& GetHubContentVersion() const { return m_hubContentVersion; }
  inline bool HubContentVersionHasBeenSet() const { return m_hubContentVersionHasBeenSet; }
  template <typename HubContentVersionT = Aws::String>
  void SetHubContentVersion(HubContentVersionT&& value) {
    m_hubContentVersionHasBeenSet = true;
    m_hubContentVersion = std::forward<HubContentVersionT>(value);
  }
  template <typename HubContentVersionT = Aws::String>
  BaseModel& WithHubContentVersion(HubContentVersionT&& value) {
    SetHubContentVersion(std::forward<HubContentVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The recipe name of the base model. </p>
   */
  inline const Aws::String& GetRecipeName() const { return m_recipeName; }
  inline bool RecipeNameHasBeenSet() const { return m_recipeNameHasBeenSet; }
  template <typename RecipeNameT = Aws::String>
  void SetRecipeName(RecipeNameT&& value) {
    m_recipeNameHasBeenSet = true;
    m_recipeName = std::forward<RecipeNameT>(value);
  }
  template <typename RecipeNameT = Aws::String>
  BaseModel& WithRecipeName(RecipeNameT&& value) {
    SetRecipeName(std::forward<RecipeNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_hubContentName;
  bool m_hubContentNameHasBeenSet = false;

  Aws::String m_hubContentVersion;
  bool m_hubContentVersionHasBeenSet = false;

  Aws::String m_recipeName;
  bool m_recipeNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
