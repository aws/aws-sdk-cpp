/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace AgreementService {
namespace Model {

/**
 * <p>Contains details about the free trial of an agreement, including when the
 * free trial ends.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/FreeTrialSummary">AWS
 * API Reference</a></p>
 */
class FreeTrialSummary {
 public:
  AWS_AGREEMENTSERVICE_API FreeTrialSummary() = default;
  AWS_AGREEMENTSERVICE_API FreeTrialSummary(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API FreeTrialSummary& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The date and time when the free trial ends. For an agreement that includes
   * both a free trial and usage-based pricing, the agreement converts to paid usage
   * at this time.</p>
   */
  inline const Aws::Utils::DateTime& GetTrialEndTime() const { return m_trialEndTime; }
  inline bool TrialEndTimeHasBeenSet() const { return m_trialEndTimeHasBeenSet; }
  template <typename TrialEndTimeT = Aws::Utils::DateTime>
  void SetTrialEndTime(TrialEndTimeT&& value) {
    m_trialEndTimeHasBeenSet = true;
    m_trialEndTime = std::forward<TrialEndTimeT>(value);
  }
  template <typename TrialEndTimeT = Aws::Utils::DateTime>
  FreeTrialSummary& WithTrialEndTime(TrialEndTimeT&& value) {
    SetTrialEndTime(std::forward<TrialEndTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_trialEndTime{};
  bool m_trialEndTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
