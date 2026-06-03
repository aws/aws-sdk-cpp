/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/socialmessaging/model/MetaFlowApplicationInfo.h>
#include <aws/socialmessaging/model/MetaFlowCategory.h>
#include <aws/socialmessaging/model/MetaFlowHealthStatus.h>
#include <aws/socialmessaging/model/MetaFlowPreviewInfo.h>
#include <aws/socialmessaging/model/MetaFlowWhatsAppBusinessAccountInfo.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SocialMessaging {
namespace Model {
class GetWhatsAppFlowResult {
 public:
  AWS_SOCIALMESSAGING_API GetWhatsAppFlowResult() = default;
  AWS_SOCIALMESSAGING_API GetWhatsAppFlowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SOCIALMESSAGING_API GetWhatsAppFlowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the Flow.</p>
   */
  inline const Aws::String& GetFlowId() const { return m_flowId; }
  template <typename FlowIdT = Aws::String>
  void SetFlowId(FlowIdT&& value) {
    m_flowIdHasBeenSet = true;
    m_flowId = std::forward<FlowIdT>(value);
  }
  template <typename FlowIdT = Aws::String>
  GetWhatsAppFlowResult& WithFlowId(FlowIdT&& value) {
    SetFlowId(std::forward<FlowIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Flow.</p>
   */
  inline const Aws::String& GetFlowName() const { return m_flowName; }
  template <typename FlowNameT = Aws::String>
  void SetFlowName(FlowNameT&& value) {
    m_flowNameHasBeenSet = true;
    m_flowName = std::forward<FlowNameT>(value);
  }
  template <typename FlowNameT = Aws::String>
  GetWhatsAppFlowResult& WithFlowName(FlowNameT&& value) {
    SetFlowName(std::forward<FlowNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lifecycle status of the Flow. Valid values are DRAFT, PUBLISHED,
   * DEPRECATED, BLOCKED, and THROTTLED.</p>
   */
  inline const Aws::String& GetFlowStatus() const { return m_flowStatus; }
  template <typename FlowStatusT = Aws::String>
  void SetFlowStatus(FlowStatusT&& value) {
    m_flowStatusHasBeenSet = true;
    m_flowStatus = std::forward<FlowStatusT>(value);
  }
  template <typename FlowStatusT = Aws::String>
  GetWhatsAppFlowResult& WithFlowStatus(FlowStatusT&& value) {
    SetFlowStatus(std::forward<FlowStatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The categories that classify the business purpose of the Flow.</p>
   */
  inline const Aws::Vector<MetaFlowCategory>& GetCategories() const { return m_categories; }
  template <typename CategoriesT = Aws::Vector<MetaFlowCategory>>
  void SetCategories(CategoriesT&& value) {
    m_categoriesHasBeenSet = true;
    m_categories = std::forward<CategoriesT>(value);
  }
  template <typename CategoriesT = Aws::Vector<MetaFlowCategory>>
  GetWhatsAppFlowResult& WithCategories(CategoriesT&& value) {
    SetCategories(std::forward<CategoriesT>(value));
    return *this;
  }
  inline GetWhatsAppFlowResult& AddCategories(MetaFlowCategory value) {
    m_categoriesHasBeenSet = true;
    m_categories.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of validation errors from Meta, if any.</p>
   */
  inline const Aws::Vector<Aws::String>& GetValidationErrors() const { return m_validationErrors; }
  template <typename ValidationErrorsT = Aws::Vector<Aws::String>>
  void SetValidationErrors(ValidationErrorsT&& value) {
    m_validationErrorsHasBeenSet = true;
    m_validationErrors = std::forward<ValidationErrorsT>(value);
  }
  template <typename ValidationErrorsT = Aws::Vector<Aws::String>>
  GetWhatsAppFlowResult& WithValidationErrors(ValidationErrorsT&& value) {
    SetValidationErrors(std::forward<ValidationErrorsT>(value));
    return *this;
  }
  template <typename ValidationErrorsT = Aws::String>
  GetWhatsAppFlowResult& AddValidationErrors(ValidationErrorsT&& value) {
    m_validationErrorsHasBeenSet = true;
    m_validationErrors.emplace_back(std::forward<ValidationErrorsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the Flow JSON schema used by this Flow (for example, 7.3).</p>
   */
  inline const Aws::String& GetJsonVersion() const { return m_jsonVersion; }
  template <typename JsonVersionT = Aws::String>
  void SetJsonVersion(JsonVersionT&& value) {
    m_jsonVersionHasBeenSet = true;
    m_jsonVersion = std::forward<JsonVersionT>(value);
  }
  template <typename JsonVersionT = Aws::String>
  GetWhatsAppFlowResult& WithJsonVersion(JsonVersionT&& value) {
    SetJsonVersion(std::forward<JsonVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data API version for data exchange endpoint Flows.</p>
   */
  inline const Aws::String& GetDataApiVersion() const { return m_dataApiVersion; }
  template <typename DataApiVersionT = Aws::String>
  void SetDataApiVersion(DataApiVersionT&& value) {
    m_dataApiVersionHasBeenSet = true;
    m_dataApiVersion = std::forward<DataApiVersionT>(value);
  }
  template <typename DataApiVersionT = Aws::String>
  GetWhatsAppFlowResult& WithDataApiVersion(DataApiVersionT&& value) {
    SetDataApiVersion(std::forward<DataApiVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The endpoint URI for data exchange Flows, if configured.</p>
   */
  inline const Aws::String& GetEndpointUri() const { return m_endpointUri; }
  template <typename EndpointUriT = Aws::String>
  void SetEndpointUri(EndpointUriT&& value) {
    m_endpointUriHasBeenSet = true;
    m_endpointUri = std::forward<EndpointUriT>(value);
  }
  template <typename EndpointUriT = Aws::String>
  GetWhatsAppFlowResult& WithEndpointUri(EndpointUriT&& value) {
    SetEndpointUri(std::forward<EndpointUriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The preview URL and its expiration timestamp for testing the Flow.</p>
   */
  inline const MetaFlowPreviewInfo& GetPreview() const { return m_preview; }
  template <typename PreviewT = MetaFlowPreviewInfo>
  void SetPreview(PreviewT&& value) {
    m_previewHasBeenSet = true;
    m_preview = std::forward<PreviewT>(value);
  }
  template <typename PreviewT = MetaFlowPreviewInfo>
  GetWhatsAppFlowResult& WithPreview(PreviewT&& value) {
    SetPreview(std::forward<PreviewT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The WhatsApp Business Account information from Meta associated with this
   * Flow.</p>
   */
  inline const MetaFlowWhatsAppBusinessAccountInfo& GetWhatsAppBusinessAccount() const { return m_whatsAppBusinessAccount; }
  template <typename WhatsAppBusinessAccountT = MetaFlowWhatsAppBusinessAccountInfo>
  void SetWhatsAppBusinessAccount(WhatsAppBusinessAccountT&& value) {
    m_whatsAppBusinessAccountHasBeenSet = true;
    m_whatsAppBusinessAccount = std::forward<WhatsAppBusinessAccountT>(value);
  }
  template <typename WhatsAppBusinessAccountT = MetaFlowWhatsAppBusinessAccountInfo>
  GetWhatsAppFlowResult& WithWhatsAppBusinessAccount(WhatsAppBusinessAccountT&& value) {
    SetWhatsAppBusinessAccount(std::forward<WhatsAppBusinessAccountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Meta application information associated with this Flow.</p>
   */
  inline const MetaFlowApplicationInfo& GetApplication() const { return m_application; }
  template <typename ApplicationT = MetaFlowApplicationInfo>
  void SetApplication(ApplicationT&& value) {
    m_applicationHasBeenSet = true;
    m_application = std::forward<ApplicationT>(value);
  }
  template <typename ApplicationT = MetaFlowApplicationInfo>
  GetWhatsAppFlowResult& WithApplication(ApplicationT&& value) {
    SetApplication(std::forward<ApplicationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The health status information for this Flow from Meta.</p>
   */
  inline const MetaFlowHealthStatus& GetHealthStatus() const { return m_healthStatus; }
  template <typename HealthStatusT = MetaFlowHealthStatus>
  void SetHealthStatus(HealthStatusT&& value) {
    m_healthStatusHasBeenSet = true;
    m_healthStatus = std::forward<HealthStatusT>(value);
  }
  template <typename HealthStatusT = MetaFlowHealthStatus>
  GetWhatsAppFlowResult& WithHealthStatus(HealthStatusT&& value) {
    SetHealthStatus(std::forward<HealthStatusT>(value));
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
  GetWhatsAppFlowResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_flowId;

  Aws::String m_flowName;

  Aws::String m_flowStatus;

  Aws::Vector<MetaFlowCategory> m_categories;

  Aws::Vector<Aws::String> m_validationErrors;

  Aws::String m_jsonVersion;

  Aws::String m_dataApiVersion;

  Aws::String m_endpointUri;

  MetaFlowPreviewInfo m_preview;

  MetaFlowWhatsAppBusinessAccountInfo m_whatsAppBusinessAccount;

  MetaFlowApplicationInfo m_application;

  MetaFlowHealthStatus m_healthStatus;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_flowIdHasBeenSet = false;
  bool m_flowNameHasBeenSet = false;
  bool m_flowStatusHasBeenSet = false;
  bool m_categoriesHasBeenSet = false;
  bool m_validationErrorsHasBeenSet = false;
  bool m_jsonVersionHasBeenSet = false;
  bool m_dataApiVersionHasBeenSet = false;
  bool m_endpointUriHasBeenSet = false;
  bool m_previewHasBeenSet = false;
  bool m_whatsAppBusinessAccountHasBeenSet = false;
  bool m_applicationHasBeenSet = false;
  bool m_healthStatusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
