/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p> The requested operation would exceed the allowed quota for the specified
 * resource type. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/ServiceQuotaExceededException">AWS
 * API Reference</a></p>
 */
class ServiceQuotaExceededException {
 public:
  AWS_OBSERVABILITYADMIN_API ServiceQuotaExceededException() = default;
  AWS_OBSERVABILITYADMIN_API ServiceQuotaExceededException(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API ServiceQuotaExceededException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ServiceQuotaExceededException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The identifier of the resource which exceeds the service quota. </p>
   */
  inline const Aws::String& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::String>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::String>
  ServiceQuotaExceededException& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The type of the resource which exceeds the service quota. </p>
   */
  inline const Aws::String& GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  template <typename ResourceTypeT = Aws::String>
  void SetResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = std::forward<ResourceTypeT>(value);
  }
  template <typename ResourceTypeT = Aws::String>
  ServiceQuotaExceededException& WithResourceType(ResourceTypeT&& value) {
    SetResourceType(std::forward<ResourceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The code for the service of the exceeded quota. </p>
   */
  inline const Aws::String& GetServiceCode() const { return m_serviceCode; }
  inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
  template <typename ServiceCodeT = Aws::String>
  void SetServiceCode(ServiceCodeT&& value) {
    m_serviceCodeHasBeenSet = true;
    m_serviceCode = std::forward<ServiceCodeT>(value);
  }
  template <typename ServiceCodeT = Aws::String>
  ServiceQuotaExceededException& WithServiceCode(ServiceCodeT&& value) {
    SetServiceCode(std::forward<ServiceCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The code for the exceeded service quota. </p>
   */
  inline const Aws::String& GetQuotaCode() const { return m_quotaCode; }
  inline bool QuotaCodeHasBeenSet() const { return m_quotaCodeHasBeenSet; }
  template <typename QuotaCodeT = Aws::String>
  void SetQuotaCode(QuotaCodeT&& value) {
    m_quotaCodeHasBeenSet = true;
    m_quotaCode = std::forward<QuotaCodeT>(value);
  }
  template <typename QuotaCodeT = Aws::String>
  ServiceQuotaExceededException& WithQuotaCode(QuotaCodeT&& value) {
    SetQuotaCode(std::forward<QuotaCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The name of the exception. </p>
   */
  inline const Aws::String& GetAmznErrorType() const { return m_amznErrorType; }
  inline bool AmznErrorTypeHasBeenSet() const { return m_amznErrorTypeHasBeenSet; }
  template <typename AmznErrorTypeT = Aws::String>
  void SetAmznErrorType(AmznErrorTypeT&& value) {
    m_amznErrorTypeHasBeenSet = true;
    m_amznErrorType = std::forward<AmznErrorTypeT>(value);
  }
  template <typename AmznErrorTypeT = Aws::String>
  ServiceQuotaExceededException& WithAmznErrorType(AmznErrorTypeT&& value) {
    SetAmznErrorType(std::forward<AmznErrorTypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;
  bool m_messageHasBeenSet = false;

  Aws::String m_resourceId;
  bool m_resourceIdHasBeenSet = false;

  Aws::String m_resourceType;
  bool m_resourceTypeHasBeenSet = false;

  Aws::String m_serviceCode;
  bool m_serviceCodeHasBeenSet = false;

  Aws::String m_quotaCode;
  bool m_quotaCodeHasBeenSet = false;

  Aws::String m_amznErrorType;
  bool m_amznErrorTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
