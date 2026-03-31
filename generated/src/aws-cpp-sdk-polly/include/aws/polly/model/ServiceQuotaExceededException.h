/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/polly/model/QuotaCode.h>
#include <aws/polly/model/ServiceCode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Polly {
namespace Model {

/**
 * <p>The request would cause a service quota to be exceeded.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/ServiceQuotaExceededException">AWS
 * API Reference</a></p>
 */
class ServiceQuotaExceededException {
 public:
  AWS_POLLY_API ServiceQuotaExceededException() = default;
  AWS_POLLY_API ServiceQuotaExceededException(Aws::Utils::Json::JsonView jsonValue);
  AWS_POLLY_API ServiceQuotaExceededException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_POLLY_API Aws::Utils::Json::JsonValue Jsonize() const;

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
   * <p>The quota code identifying the specific quota.</p>
   */
  inline QuotaCode GetQuotaCode() const { return m_quotaCode; }
  inline bool QuotaCodeHasBeenSet() const { return m_quotaCodeHasBeenSet; }
  inline void SetQuotaCode(QuotaCode value) {
    m_quotaCodeHasBeenSet = true;
    m_quotaCode = value;
  }
  inline ServiceQuotaExceededException& WithQuotaCode(QuotaCode value) {
    SetQuotaCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The service code identifying the originating service.</p>
   */
  inline ServiceCode GetServiceCode() const { return m_serviceCode; }
  inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
  inline void SetServiceCode(ServiceCode value) {
    m_serviceCodeHasBeenSet = true;
    m_serviceCode = value;
  }
  inline ServiceQuotaExceededException& WithServiceCode(ServiceCode value) {
    SetServiceCode(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  QuotaCode m_quotaCode{QuotaCode::NOT_SET};

  ServiceCode m_serviceCode{ServiceCode::NOT_SET};
  bool m_messageHasBeenSet = false;
  bool m_quotaCodeHasBeenSet = false;
  bool m_serviceCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Polly
}  // namespace Aws
