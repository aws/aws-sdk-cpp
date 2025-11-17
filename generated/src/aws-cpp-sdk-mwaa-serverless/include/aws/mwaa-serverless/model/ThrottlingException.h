/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MWAAServerless {
namespace Model {

/**
 * <p>The request was denied because too many requests were made in a short period,
 * exceeding the service rate limits. Amazon Managed Workflows for Apache Airflow
 * Serverless implements throttling controls to ensure fair resource allocation
 * across all customers in the multi-tenant environment. This helps maintain
 * service stability and performance. If you encounter throttling, implement
 * exponential backoff and retry logic in your applications, or consider
 * distributing your API calls over a longer time period.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-serverless-2024-07-26/ThrottlingException">AWS
 * API Reference</a></p>
 */
class ThrottlingException {
 public:
  AWS_MWAASERVERLESS_API ThrottlingException() = default;
  AWS_MWAASERVERLESS_API ThrottlingException(Aws::Utils::Json::JsonView jsonValue);
  AWS_MWAASERVERLESS_API ThrottlingException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MWAASERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ThrottlingException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The code for the service.</p>
   */
  inline const Aws::String& GetServiceCode() const { return m_serviceCode; }
  inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
  template <typename ServiceCodeT = Aws::String>
  void SetServiceCode(ServiceCodeT&& value) {
    m_serviceCodeHasBeenSet = true;
    m_serviceCode = std::forward<ServiceCodeT>(value);
  }
  template <typename ServiceCodeT = Aws::String>
  ThrottlingException& WithServiceCode(ServiceCodeT&& value) {
    SetServiceCode(std::forward<ServiceCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The code of the quota.</p>
   */
  inline const Aws::String& GetQuotaCode() const { return m_quotaCode; }
  inline bool QuotaCodeHasBeenSet() const { return m_quotaCodeHasBeenSet; }
  template <typename QuotaCodeT = Aws::String>
  void SetQuotaCode(QuotaCodeT&& value) {
    m_quotaCodeHasBeenSet = true;
    m_quotaCode = std::forward<QuotaCodeT>(value);
  }
  template <typename QuotaCodeT = Aws::String>
  ThrottlingException& WithQuotaCode(QuotaCodeT&& value) {
    SetQuotaCode(std::forward<QuotaCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of seconds to wait before retrying the operation.</p>
   */
  inline int GetRetryAfterSeconds() const { return m_retryAfterSeconds; }
  inline bool RetryAfterSecondsHasBeenSet() const { return m_retryAfterSecondsHasBeenSet; }
  inline void SetRetryAfterSeconds(int value) {
    m_retryAfterSecondsHasBeenSet = true;
    m_retryAfterSeconds = value;
  }
  inline ThrottlingException& WithRetryAfterSeconds(int value) {
    SetRetryAfterSeconds(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;
  bool m_messageHasBeenSet = false;

  Aws::String m_serviceCode;
  bool m_serviceCodeHasBeenSet = false;

  Aws::String m_quotaCode;
  bool m_quotaCodeHasBeenSet = false;

  int m_retryAfterSeconds{0};
  bool m_retryAfterSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
