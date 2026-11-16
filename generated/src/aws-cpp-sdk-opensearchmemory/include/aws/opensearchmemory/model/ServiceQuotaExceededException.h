/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchMemory {
namespace Model {

/**
 * <p>The request would exceed a quota, such as the number of spaces in your
 * account or the number of strategies in a space.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/ServiceQuotaExceededException">AWS
 * API Reference</a></p>
 */
class ServiceQuotaExceededException {
 public:
  AWS_OPENSEARCHMEMORY_API ServiceQuotaExceededException() = default;
  AWS_OPENSEARCHMEMORY_API ServiceQuotaExceededException(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API ServiceQuotaExceededException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A message that describes which quota the request would exceed.</p>
   */
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
   * <p>The Service Quotas code of the quota that the request would exceed. Not
   * currently returned.</p>
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
   * <p>The Service Quotas code of the service. Not currently returned.</p>
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
 private:
  Aws::String m_message;

  Aws::String m_quotaCode;

  Aws::String m_serviceCode;
  bool m_messageHasBeenSet = false;
  bool m_quotaCodeHasBeenSet = false;
  bool m_serviceCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
