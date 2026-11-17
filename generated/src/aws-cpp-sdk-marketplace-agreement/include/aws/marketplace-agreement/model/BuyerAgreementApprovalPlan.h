/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/BuyerAgreementApprovalPlanLevel.h>

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
 * <p>An approval plan that the buyer's organization requires, with its approval
 * levels and the approvers at each level.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/BuyerAgreementApprovalPlan">AWS
 * API Reference</a></p>
 */
class BuyerAgreementApprovalPlan {
 public:
  AWS_AGREEMENTSERVICE_API BuyerAgreementApprovalPlan() = default;
  AWS_AGREEMENTSERVICE_API BuyerAgreementApprovalPlan(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API BuyerAgreementApprovalPlan& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The identifier of the approval plan. Pass it in
   * <code>StartAgreementApprovals</code> to start an agreement approval for this
   * plan.</p>
   */
  inline const Aws::String& GetPlanReference() const { return m_planReference; }
  inline bool PlanReferenceHasBeenSet() const { return m_planReferenceHasBeenSet; }
  template <typename PlanReferenceT = Aws::String>
  void SetPlanReference(PlanReferenceT&& value) {
    m_planReferenceHasBeenSet = true;
    m_planReference = std::forward<PlanReferenceT>(value);
  }
  template <typename PlanReferenceT = Aws::String>
  BuyerAgreementApprovalPlan& WithPlanReference(PlanReferenceT&& value) {
    SetPlanReference(std::forward<PlanReferenceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the approval plan.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  BuyerAgreementApprovalPlan& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The approval levels of the plan, in the order they are evaluated. Approvers
   * at a level can act only after the previous level is approved.</p>
   */
  inline const Aws::Vector<BuyerAgreementApprovalPlanLevel>& GetLevels() const { return m_levels; }
  inline bool LevelsHasBeenSet() const { return m_levelsHasBeenSet; }
  template <typename LevelsT = Aws::Vector<BuyerAgreementApprovalPlanLevel>>
  void SetLevels(LevelsT&& value) {
    m_levelsHasBeenSet = true;
    m_levels = std::forward<LevelsT>(value);
  }
  template <typename LevelsT = Aws::Vector<BuyerAgreementApprovalPlanLevel>>
  BuyerAgreementApprovalPlan& WithLevels(LevelsT&& value) {
    SetLevels(std::forward<LevelsT>(value));
    return *this;
  }
  template <typename LevelsT = BuyerAgreementApprovalPlanLevel>
  BuyerAgreementApprovalPlan& AddLevels(LevelsT&& value) {
    m_levelsHasBeenSet = true;
    m_levels.emplace_back(std::forward<LevelsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_planReference;

  Aws::String m_name;

  Aws::Vector<BuyerAgreementApprovalPlanLevel> m_levels;
  bool m_planReferenceHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_levelsHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
