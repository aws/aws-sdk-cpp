/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/ConcurrentExecutorConfiguration.h>
#include <aws/mediatailor/model/CustomOutputConfiguration.h>
#include <aws/mediatailor/model/FunctionType.h>
#include <aws/mediatailor/model/HttpRequestConfiguration.h>
#include <aws/mediatailor/model/SequentialExecutorConfiguration.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace MediaTailor {
namespace Model {
/**
 * <p>-- Define Mixin --</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/PutFunctionResponse">AWS
 * API Reference</a></p>
 */
class PutFunctionResult {
 public:
  AWS_MEDIATAILOR_API PutFunctionResult() = default;
  AWS_MEDIATAILOR_API PutFunctionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MEDIATAILOR_API PutFunctionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier of the function.</p>
   */
  inline const Aws::String& GetFunctionId() const { return m_functionId; }
  template <typename FunctionIdT = Aws::String>
  void SetFunctionId(FunctionIdT&& value) {
    m_functionIdHasBeenSet = true;
    m_functionId = std::forward<FunctionIdT>(value);
  }
  template <typename FunctionIdT = Aws::String>
  PutFunctionResult& WithFunctionId(FunctionIdT&& value) {
    SetFunctionId(std::forward<FunctionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the function.</p>
   */
  inline FunctionType GetFunctionType() const { return m_functionType; }
  inline void SetFunctionType(FunctionType value) {
    m_functionTypeHasBeenSet = true;
    m_functionType = value;
  }
  inline PutFunctionResult& WithFunctionType(FunctionType value) {
    SetFunctionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the function.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  PutFunctionResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for an <code>HTTP_REQUEST</code> function.</p>
   */
  inline const HttpRequestConfiguration& GetHttpRequestConfiguration() const { return m_httpRequestConfiguration; }
  template <typename HttpRequestConfigurationT = HttpRequestConfiguration>
  void SetHttpRequestConfiguration(HttpRequestConfigurationT&& value) {
    m_httpRequestConfigurationHasBeenSet = true;
    m_httpRequestConfiguration = std::forward<HttpRequestConfigurationT>(value);
  }
  template <typename HttpRequestConfigurationT = HttpRequestConfiguration>
  PutFunctionResult& WithHttpRequestConfiguration(HttpRequestConfigurationT&& value) {
    SetHttpRequestConfiguration(std::forward<HttpRequestConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for a <code>CUSTOM_OUTPUT</code> function.</p>
   */
  inline const CustomOutputConfiguration& GetCustomOutputConfiguration() const { return m_customOutputConfiguration; }
  template <typename CustomOutputConfigurationT = CustomOutputConfiguration>
  void SetCustomOutputConfiguration(CustomOutputConfigurationT&& value) {
    m_customOutputConfigurationHasBeenSet = true;
    m_customOutputConfiguration = std::forward<CustomOutputConfigurationT>(value);
  }
  template <typename CustomOutputConfigurationT = CustomOutputConfiguration>
  PutFunctionResult& WithCustomOutputConfiguration(CustomOutputConfigurationT&& value) {
    SetCustomOutputConfiguration(std::forward<CustomOutputConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for a <code>CONCURRENT_EXECUTOR</code> function.</p>
   */
  inline const ConcurrentExecutorConfiguration& GetConcurrentExecutorConfiguration() const { return m_concurrentExecutorConfiguration; }
  template <typename ConcurrentExecutorConfigurationT = ConcurrentExecutorConfiguration>
  void SetConcurrentExecutorConfiguration(ConcurrentExecutorConfigurationT&& value) {
    m_concurrentExecutorConfigurationHasBeenSet = true;
    m_concurrentExecutorConfiguration = std::forward<ConcurrentExecutorConfigurationT>(value);
  }
  template <typename ConcurrentExecutorConfigurationT = ConcurrentExecutorConfiguration>
  PutFunctionResult& WithConcurrentExecutorConfiguration(ConcurrentExecutorConfigurationT&& value) {
    SetConcurrentExecutorConfiguration(std::forward<ConcurrentExecutorConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for a <code>SEQUENTIAL_EXECUTOR</code> function.</p>
   */
  inline const SequentialExecutorConfiguration& GetSequentialExecutorConfiguration() const { return m_sequentialExecutorConfiguration; }
  template <typename SequentialExecutorConfigurationT = SequentialExecutorConfiguration>
  void SetSequentialExecutorConfiguration(SequentialExecutorConfigurationT&& value) {
    m_sequentialExecutorConfigurationHasBeenSet = true;
    m_sequentialExecutorConfiguration = std::forward<SequentialExecutorConfigurationT>(value);
  }
  template <typename SequentialExecutorConfigurationT = SequentialExecutorConfiguration>
  PutFunctionResult& WithSequentialExecutorConfiguration(SequentialExecutorConfigurationT&& value) {
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
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  PutFunctionResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  PutFunctionResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
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
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  PutFunctionResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  PutFunctionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_functionId;

  FunctionType m_functionType{FunctionType::NOT_SET};

  Aws::String m_description;

  HttpRequestConfiguration m_httpRequestConfiguration;

  CustomOutputConfiguration m_customOutputConfiguration;

  ConcurrentExecutorConfiguration m_concurrentExecutorConfiguration;

  SequentialExecutorConfiguration m_sequentialExecutorConfiguration;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_arn;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_functionIdHasBeenSet = false;
  bool m_functionTypeHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_httpRequestConfigurationHasBeenSet = false;
  bool m_customOutputConfigurationHasBeenSet = false;
  bool m_concurrentExecutorConfigurationHasBeenSet = false;
  bool m_sequentialExecutorConfigurationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
