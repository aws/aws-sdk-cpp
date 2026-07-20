/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/CustomOutputConfiguration.h>
#include <aws/mediatailor/model/FunctionType.h>
#include <aws/mediatailor/model/HttpRequestConfiguration.h>
#include <aws/mediatailor/model/SequentialExecutorConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaTailor {
namespace Model {

/**
 * <p>Defines reusable logic that MediaTailor executes at lifecycle hooks during ad
 * insertion. The <code>FunctionType</code> determines the function's runtime
 * behavior. For more information about functions, see <a
 * href="https://docs.aws.amazon.com/mediatailor/latest/ug/monetization-functions.html">Working
 * with functions</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/Function">AWS
 * API Reference</a></p>
 */
class Function {
 public:
  AWS_MEDIATAILOR_API Function() = default;
  AWS_MEDIATAILOR_API Function(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API Function& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the function.</p>
   */
  inline const Aws::String& GetFunctionId() const { return m_functionId; }
  inline bool FunctionIdHasBeenSet() const { return m_functionIdHasBeenSet; }
  template <typename FunctionIdT = Aws::String>
  void SetFunctionId(FunctionIdT&& value) {
    m_functionIdHasBeenSet = true;
    m_functionId = std::forward<FunctionIdT>(value);
  }
  template <typename FunctionIdT = Aws::String>
  Function& WithFunctionId(FunctionIdT&& value) {
    SetFunctionId(std::forward<FunctionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the function.</p>
   */
  inline FunctionType GetFunctionType() const { return m_functionType; }
  inline bool FunctionTypeHasBeenSet() const { return m_functionTypeHasBeenSet; }
  inline void SetFunctionType(FunctionType value) {
    m_functionTypeHasBeenSet = true;
    m_functionType = value;
  }
  inline Function& WithFunctionType(FunctionType value) {
    SetFunctionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the function.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  Function& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for an <code>HTTP_REQUEST</code> function.</p>
   */
  inline const HttpRequestConfiguration& GetHttpRequestConfiguration() const { return m_httpRequestConfiguration; }
  inline bool HttpRequestConfigurationHasBeenSet() const { return m_httpRequestConfigurationHasBeenSet; }
  template <typename HttpRequestConfigurationT = HttpRequestConfiguration>
  void SetHttpRequestConfiguration(HttpRequestConfigurationT&& value) {
    m_httpRequestConfigurationHasBeenSet = true;
    m_httpRequestConfiguration = std::forward<HttpRequestConfigurationT>(value);
  }
  template <typename HttpRequestConfigurationT = HttpRequestConfiguration>
  Function& WithHttpRequestConfiguration(HttpRequestConfigurationT&& value) {
    SetHttpRequestConfiguration(std::forward<HttpRequestConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for a <code>CUSTOM_OUTPUT</code> function.</p>
   */
  inline const CustomOutputConfiguration& GetCustomOutputConfiguration() const { return m_customOutputConfiguration; }
  inline bool CustomOutputConfigurationHasBeenSet() const { return m_customOutputConfigurationHasBeenSet; }
  template <typename CustomOutputConfigurationT = CustomOutputConfiguration>
  void SetCustomOutputConfiguration(CustomOutputConfigurationT&& value) {
    m_customOutputConfigurationHasBeenSet = true;
    m_customOutputConfiguration = std::forward<CustomOutputConfigurationT>(value);
  }
  template <typename CustomOutputConfigurationT = CustomOutputConfiguration>
  Function& WithCustomOutputConfiguration(CustomOutputConfigurationT&& value) {
    SetCustomOutputConfiguration(std::forward<CustomOutputConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for a <code>SEQUENTIAL_EXECUTOR</code> function.</p>
   */
  inline const SequentialExecutorConfiguration& GetSequentialExecutorConfiguration() const { return m_sequentialExecutorConfiguration; }
  inline bool SequentialExecutorConfigurationHasBeenSet() const { return m_sequentialExecutorConfigurationHasBeenSet; }
  template <typename SequentialExecutorConfigurationT = SequentialExecutorConfiguration>
  void SetSequentialExecutorConfiguration(SequentialExecutorConfigurationT&& value) {
    m_sequentialExecutorConfigurationHasBeenSet = true;
    m_sequentialExecutorConfiguration = std::forward<SequentialExecutorConfigurationT>(value);
  }
  template <typename SequentialExecutorConfigurationT = SequentialExecutorConfiguration>
  Function& WithSequentialExecutorConfiguration(SequentialExecutorConfigurationT&& value) {
    SetSequentialExecutorConfiguration(std::forward<SequentialExecutorConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags assigned to the function. Tags are key-value pairs that you can
   * associate with Amazon resources to help with organization, access control, and
   * cost tracking. For more information, see <a
   * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
   * AWS Elemental MediaTailor Resources</a>.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  Function& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  Function& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the function.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  Function& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_functionId;

  FunctionType m_functionType{FunctionType::NOT_SET};

  Aws::String m_description;

  HttpRequestConfiguration m_httpRequestConfiguration;

  CustomOutputConfiguration m_customOutputConfiguration;

  SequentialExecutorConfiguration m_sequentialExecutorConfiguration;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_arn;
  bool m_functionIdHasBeenSet = false;
  bool m_functionTypeHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_httpRequestConfigurationHasBeenSet = false;
  bool m_customOutputConfigurationHasBeenSet = false;
  bool m_sequentialExecutorConfigurationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_arnHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
