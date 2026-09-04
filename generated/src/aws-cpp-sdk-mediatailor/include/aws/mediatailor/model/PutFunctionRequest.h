/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/MediaTailorRequest.h>
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/ConcurrentExecutorConfiguration.h>
#include <aws/mediatailor/model/CustomOutputConfiguration.h>
#include <aws/mediatailor/model/FunctionType.h>
#include <aws/mediatailor/model/HttpRequestConfiguration.h>
#include <aws/mediatailor/model/SequentialExecutorConfiguration.h>
#include <aws/mediatailor/model/VastRequestConfiguration.h>

#include <utility>

namespace Aws {
namespace MediaTailor {
namespace Model {

/**
 * <p>-- Define Mixin --</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/PutFunctionRequest">AWS
 * API Reference</a></p>
 */
class PutFunctionRequest : public MediaTailorRequest {
 public:
  AWS_MEDIATAILOR_API PutFunctionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutFunction"; }

  AWS_MEDIATAILOR_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the function. The identifier must be unique within your
   * account.</p>
   */
  inline const Aws::String& GetFunctionId() const { return m_functionId; }
  inline bool FunctionIdHasBeenSet() const { return m_functionIdHasBeenSet; }
  template <typename FunctionIdT = Aws::String>
  void SetFunctionId(FunctionIdT&& value) {
    m_functionIdHasBeenSet = true;
    m_functionId = std::forward<FunctionIdT>(value);
  }
  template <typename FunctionIdT = Aws::String>
  PutFunctionRequest& WithFunctionId(FunctionIdT&& value) {
    SetFunctionId(std::forward<FunctionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the function. The function type determines what the function can
   * do at runtime. Valid values: <code>CUSTOM_OUTPUT</code> evaluates expressions
   * and produces output bindings with no external calls. <code>HTTP_REQUEST</code>
   * makes an HTTP call to an external service and evaluates output expressions that
   * can reference the response. <code>VAST_REQUEST</code> calls a VAST endpoint,
   * parses the response as VAST, and makes the parsed ads available to output
   * expressions. <code>SEQUENTIAL_EXECUTOR</code> runs a sequence of child functions
   * in order, passing data between steps through temporary data.
   * <code>CONCURRENT_EXECUTOR</code> runs a set of child functions in parallel, up
   * to a maximum concurrency, and combines their output when all functions complete.
   * For more information, see <a
   * href="https://docs.aws.amazon.com/mediatailor/latest/ug/monetization-functions-types.html">Function
   * types and composition</a> in the <i>MediaTailor User Guide</i>.</p>
   */
  inline FunctionType GetFunctionType() const { return m_functionType; }
  inline bool FunctionTypeHasBeenSet() const { return m_functionTypeHasBeenSet; }
  inline void SetFunctionType(FunctionType value) {
    m_functionTypeHasBeenSet = true;
    m_functionType = value;
  }
  inline PutFunctionRequest& WithFunctionType(FunctionType value) {
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
  PutFunctionRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for an <code>HTTP_REQUEST</code> function. Specifies the
   * HTTP method, URL, headers, body, timeout, and output expressions. Required when
   * <code>FunctionType</code> is <code>HTTP_REQUEST</code>.</p>
   */
  inline const HttpRequestConfiguration& GetHttpRequestConfiguration() const { return m_httpRequestConfiguration; }
  inline bool HttpRequestConfigurationHasBeenSet() const { return m_httpRequestConfigurationHasBeenSet; }
  template <typename HttpRequestConfigurationT = HttpRequestConfiguration>
  void SetHttpRequestConfiguration(HttpRequestConfigurationT&& value) {
    m_httpRequestConfigurationHasBeenSet = true;
    m_httpRequestConfiguration = std::forward<HttpRequestConfigurationT>(value);
  }
  template <typename HttpRequestConfigurationT = HttpRequestConfiguration>
  PutFunctionRequest& WithHttpRequestConfiguration(HttpRequestConfigurationT&& value) {
    SetHttpRequestConfiguration(std::forward<HttpRequestConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for a <code>CUSTOM_OUTPUT</code> function. Specifies the
   * runtime and output expressions. Required when <code>FunctionType</code> is
   * <code>CUSTOM_OUTPUT</code>.</p>
   */
  inline const CustomOutputConfiguration& GetCustomOutputConfiguration() const { return m_customOutputConfiguration; }
  inline bool CustomOutputConfigurationHasBeenSet() const { return m_customOutputConfigurationHasBeenSet; }
  template <typename CustomOutputConfigurationT = CustomOutputConfiguration>
  void SetCustomOutputConfiguration(CustomOutputConfigurationT&& value) {
    m_customOutputConfigurationHasBeenSet = true;
    m_customOutputConfiguration = std::forward<CustomOutputConfigurationT>(value);
  }
  template <typename CustomOutputConfigurationT = CustomOutputConfiguration>
  PutFunctionRequest& WithCustomOutputConfiguration(CustomOutputConfigurationT&& value) {
    SetCustomOutputConfiguration(std::forward<CustomOutputConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for a <code>CONCURRENT_EXECUTOR</code> function. Specifies
   * the list of child functions to run in parallel, the maximum concurrency, an
   * optional output block, and a timeout. Required when <code>FunctionType</code> is
   * <code>CONCURRENT_EXECUTOR</code>.</p>
   */
  inline const ConcurrentExecutorConfiguration& GetConcurrentExecutorConfiguration() const { return m_concurrentExecutorConfiguration; }
  inline bool ConcurrentExecutorConfigurationHasBeenSet() const { return m_concurrentExecutorConfigurationHasBeenSet; }
  template <typename ConcurrentExecutorConfigurationT = ConcurrentExecutorConfiguration>
  void SetConcurrentExecutorConfiguration(ConcurrentExecutorConfigurationT&& value) {
    m_concurrentExecutorConfigurationHasBeenSet = true;
    m_concurrentExecutorConfiguration = std::forward<ConcurrentExecutorConfigurationT>(value);
  }
  template <typename ConcurrentExecutorConfigurationT = ConcurrentExecutorConfiguration>
  PutFunctionRequest& WithConcurrentExecutorConfiguration(ConcurrentExecutorConfigurationT&& value) {
    SetConcurrentExecutorConfiguration(std::forward<ConcurrentExecutorConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for a <code>SEQUENTIAL_EXECUTOR</code> function. Specifies
   * the ordered list of child functions to execute, an optional output block, and a
   * timeout. Required when <code>FunctionType</code> is
   * <code>SEQUENTIAL_EXECUTOR</code>.</p>
   */
  inline const SequentialExecutorConfiguration& GetSequentialExecutorConfiguration() const { return m_sequentialExecutorConfiguration; }
  inline bool SequentialExecutorConfigurationHasBeenSet() const { return m_sequentialExecutorConfigurationHasBeenSet; }
  template <typename SequentialExecutorConfigurationT = SequentialExecutorConfiguration>
  void SetSequentialExecutorConfiguration(SequentialExecutorConfigurationT&& value) {
    m_sequentialExecutorConfigurationHasBeenSet = true;
    m_sequentialExecutorConfiguration = std::forward<SequentialExecutorConfigurationT>(value);
  }
  template <typename SequentialExecutorConfigurationT = SequentialExecutorConfiguration>
  PutFunctionRequest& WithSequentialExecutorConfiguration(SequentialExecutorConfigurationT&& value) {
    SetSequentialExecutorConfiguration(std::forward<SequentialExecutorConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for a <code>VAST_REQUEST</code> function. Specifies the
   * HTTP method, URL, headers, body, timeout, and output expressions. Required when
   * <code>FunctionType</code> is <code>VAST_REQUEST</code>.</p>
   */
  inline const VastRequestConfiguration& GetVastRequestConfiguration() const { return m_vastRequestConfiguration; }
  inline bool VastRequestConfigurationHasBeenSet() const { return m_vastRequestConfigurationHasBeenSet; }
  template <typename VastRequestConfigurationT = VastRequestConfiguration>
  void SetVastRequestConfiguration(VastRequestConfigurationT&& value) {
    m_vastRequestConfigurationHasBeenSet = true;
    m_vastRequestConfiguration = std::forward<VastRequestConfigurationT>(value);
  }
  template <typename VastRequestConfigurationT = VastRequestConfiguration>
  PutFunctionRequest& WithVastRequestConfiguration(VastRequestConfigurationT&& value) {
    SetVastRequestConfiguration(std::forward<VastRequestConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to assign to the function. Tags are key-value pairs that you can
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
  PutFunctionRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  PutFunctionRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_functionId;

  FunctionType m_functionType{FunctionType::NOT_SET};

  Aws::String m_description;

  HttpRequestConfiguration m_httpRequestConfiguration;

  CustomOutputConfiguration m_customOutputConfiguration;

  ConcurrentExecutorConfiguration m_concurrentExecutorConfiguration;

  SequentialExecutorConfiguration m_sequentialExecutorConfiguration;

  VastRequestConfiguration m_vastRequestConfiguration;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_functionIdHasBeenSet = false;
  bool m_functionTypeHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_httpRequestConfigurationHasBeenSet = false;
  bool m_customOutputConfigurationHasBeenSet = false;
  bool m_concurrentExecutorConfigurationHasBeenSet = false;
  bool m_sequentialExecutorConfigurationHasBeenSet = false;
  bool m_vastRequestConfigurationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
