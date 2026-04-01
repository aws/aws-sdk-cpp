/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/CapabilityBaseResponseConfig.h>
#include <aws/opensearch/model/CapabilityStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchService {
namespace Model {
/**
 * <p>The result of a <code>RegisterCapability</code> request. Contains details
 * about the registered capability.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/RegisterCapabilityResponse">AWS
 * API Reference</a></p>
 */
class RegisterCapabilityResult {
 public:
  AWS_OPENSEARCHSERVICE_API RegisterCapabilityResult() = default;
  AWS_OPENSEARCHSERVICE_API RegisterCapabilityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OPENSEARCHSERVICE_API RegisterCapabilityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the registered capability.</p>
   */
  inline const Aws::String& GetCapabilityName() const { return m_capabilityName; }
  template <typename CapabilityNameT = Aws::String>
  void SetCapabilityName(CapabilityNameT&& value) {
    m_capabilityNameHasBeenSet = true;
    m_capabilityName = std::forward<CapabilityNameT>(value);
  }
  template <typename CapabilityNameT = Aws::String>
  RegisterCapabilityResult& WithCapabilityName(CapabilityNameT&& value) {
    SetCapabilityName(std::forward<CapabilityNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the OpenSearch UI application.</p>
   */
  inline const Aws::String& GetApplicationId() const { return m_applicationId; }
  template <typename ApplicationIdT = Aws::String>
  void SetApplicationId(ApplicationIdT&& value) {
    m_applicationIdHasBeenSet = true;
    m_applicationId = std::forward<ApplicationIdT>(value);
  }
  template <typename ApplicationIdT = Aws::String>
  RegisterCapabilityResult& WithApplicationId(ApplicationIdT&& value) {
    SetApplicationId(std::forward<ApplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the capability. Possible values: <code>creating</code>,
   * <code>create_failed</code>, <code>active</code>, <code>updating</code>,
   * <code>update_failed</code>, <code>deleting</code>,
   * <code>delete_failed</code>.</p>
   */
  inline CapabilityStatus GetStatus() const { return m_status; }
  inline void SetStatus(CapabilityStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline RegisterCapabilityResult& WithStatus(CapabilityStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration settings for the registered capability.</p>
   */
  inline const CapabilityBaseResponseConfig& GetCapabilityConfig() const { return m_capabilityConfig; }
  template <typename CapabilityConfigT = CapabilityBaseResponseConfig>
  void SetCapabilityConfig(CapabilityConfigT&& value) {
    m_capabilityConfigHasBeenSet = true;
    m_capabilityConfig = std::forward<CapabilityConfigT>(value);
  }
  template <typename CapabilityConfigT = CapabilityBaseResponseConfig>
  RegisterCapabilityResult& WithCapabilityConfig(CapabilityConfigT&& value) {
    SetCapabilityConfig(std::forward<CapabilityConfigT>(value));
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
  RegisterCapabilityResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_capabilityName;

  Aws::String m_applicationId;

  CapabilityStatus m_status{CapabilityStatus::NOT_SET};

  CapabilityBaseResponseConfig m_capabilityConfig;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_capabilityNameHasBeenSet = false;
  bool m_applicationIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_capabilityConfigHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
