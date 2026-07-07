/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurement_EXPORTS.h>
#include <aws/partnercentral-revenue-measurement/model/ResourceNotFoundExceptionReason.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace PartnerCentralRevenueMeasurement {
namespace Model {

/**
 * <p>The specified resource was not found.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-revenue-measurement-2022-07-26/ResourceNotFoundException">AWS
 * API Reference</a></p>
 */
class ResourceNotFoundException {
 public:
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API ResourceNotFoundException() = default;
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API ResourceNotFoundException(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API ResourceNotFoundException& operator=(
      const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{

  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ResourceNotFoundException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason the resource was not found.</p>
   */
  inline ResourceNotFoundExceptionReason GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  inline void SetReason(ResourceNotFoundExceptionReason value) {
    m_reasonHasBeenSet = true;
    m_reason = value;
  }
  inline ResourceNotFoundException& WithReason(ResourceNotFoundExceptionReason value) {
    SetReason(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  ResourceNotFoundExceptionReason m_reason{ResourceNotFoundExceptionReason::NOT_SET};
  bool m_messageHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
