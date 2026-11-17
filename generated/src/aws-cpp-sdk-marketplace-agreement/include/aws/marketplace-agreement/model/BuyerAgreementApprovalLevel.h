/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/BuyerAgreementApprovalGroup.h>

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
 * <p>A level of an agreement approval, with the decision of each
 * approver.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/BuyerAgreementApprovalLevel">AWS
 * API Reference</a></p>
 */
class BuyerAgreementApprovalLevel {
 public:
  AWS_AGREEMENTSERVICE_API BuyerAgreementApprovalLevel() = default;
  AWS_AGREEMENTSERVICE_API BuyerAgreementApprovalLevel(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API BuyerAgreementApprovalLevel& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The name of the level.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  BuyerAgreementApprovalLevel& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The group of approvers at this level.</p>
   */
  inline const Aws::Vector<BuyerAgreementApprovalGroup>& GetGroups() const { return m_groups; }
  inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
  template <typename GroupsT = Aws::Vector<BuyerAgreementApprovalGroup>>
  void SetGroups(GroupsT&& value) {
    m_groupsHasBeenSet = true;
    m_groups = std::forward<GroupsT>(value);
  }
  template <typename GroupsT = Aws::Vector<BuyerAgreementApprovalGroup>>
  BuyerAgreementApprovalLevel& WithGroups(GroupsT&& value) {
    SetGroups(std::forward<GroupsT>(value));
    return *this;
  }
  template <typename GroupsT = BuyerAgreementApprovalGroup>
  BuyerAgreementApprovalLevel& AddGroups(GroupsT&& value) {
    m_groupsHasBeenSet = true;
    m_groups.emplace_back(std::forward<GroupsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::Vector<BuyerAgreementApprovalGroup> m_groups;
  bool m_nameHasBeenSet = false;
  bool m_groupsHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
