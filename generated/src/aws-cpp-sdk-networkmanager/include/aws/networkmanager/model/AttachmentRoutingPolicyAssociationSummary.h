/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkManager {
namespace Model {

/**
 * <p>Summary information about routing policy associations for an
 * attachment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/AttachmentRoutingPolicyAssociationSummary">AWS
 * API Reference</a></p>
 */
class AttachmentRoutingPolicyAssociationSummary {
 public:
  AWS_NETWORKMANAGER_API AttachmentRoutingPolicyAssociationSummary() = default;
  AWS_NETWORKMANAGER_API AttachmentRoutingPolicyAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKMANAGER_API AttachmentRoutingPolicyAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the attachment associated with the routing policy.</p>
   */
  inline const Aws::String& GetAttachmentId() const { return m_attachmentId; }
  inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
  template <typename AttachmentIdT = Aws::String>
  void SetAttachmentId(AttachmentIdT&& value) {
    m_attachmentIdHasBeenSet = true;
    m_attachmentId = std::forward<AttachmentIdT>(value);
  }
  template <typename AttachmentIdT = Aws::String>
  AttachmentRoutingPolicyAssociationSummary& WithAttachmentId(AttachmentIdT&& value) {
    SetAttachmentId(std::forward<AttachmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of routing policies that are pending association with the
   * attachment.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPendingRoutingPolicies() const { return m_pendingRoutingPolicies; }
  inline bool PendingRoutingPoliciesHasBeenSet() const { return m_pendingRoutingPoliciesHasBeenSet; }
  template <typename PendingRoutingPoliciesT = Aws::Vector<Aws::String>>
  void SetPendingRoutingPolicies(PendingRoutingPoliciesT&& value) {
    m_pendingRoutingPoliciesHasBeenSet = true;
    m_pendingRoutingPolicies = std::forward<PendingRoutingPoliciesT>(value);
  }
  template <typename PendingRoutingPoliciesT = Aws::Vector<Aws::String>>
  AttachmentRoutingPolicyAssociationSummary& WithPendingRoutingPolicies(PendingRoutingPoliciesT&& value) {
    SetPendingRoutingPolicies(std::forward<PendingRoutingPoliciesT>(value));
    return *this;
  }
  template <typename PendingRoutingPoliciesT = Aws::String>
  AttachmentRoutingPolicyAssociationSummary& AddPendingRoutingPolicies(PendingRoutingPoliciesT&& value) {
    m_pendingRoutingPoliciesHasBeenSet = true;
    m_pendingRoutingPolicies.emplace_back(std::forward<PendingRoutingPoliciesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of routing policies currently associated with the attachment.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAssociatedRoutingPolicies() const { return m_associatedRoutingPolicies; }
  inline bool AssociatedRoutingPoliciesHasBeenSet() const { return m_associatedRoutingPoliciesHasBeenSet; }
  template <typename AssociatedRoutingPoliciesT = Aws::Vector<Aws::String>>
  void SetAssociatedRoutingPolicies(AssociatedRoutingPoliciesT&& value) {
    m_associatedRoutingPoliciesHasBeenSet = true;
    m_associatedRoutingPolicies = std::forward<AssociatedRoutingPoliciesT>(value);
  }
  template <typename AssociatedRoutingPoliciesT = Aws::Vector<Aws::String>>
  AttachmentRoutingPolicyAssociationSummary& WithAssociatedRoutingPolicies(AssociatedRoutingPoliciesT&& value) {
    SetAssociatedRoutingPolicies(std::forward<AssociatedRoutingPoliciesT>(value));
    return *this;
  }
  template <typename AssociatedRoutingPoliciesT = Aws::String>
  AttachmentRoutingPolicyAssociationSummary& AddAssociatedRoutingPolicies(AssociatedRoutingPoliciesT&& value) {
    m_associatedRoutingPoliciesHasBeenSet = true;
    m_associatedRoutingPolicies.emplace_back(std::forward<AssociatedRoutingPoliciesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The routing policy label associated with the attachment.</p>
   */
  inline const Aws::String& GetRoutingPolicyLabel() const { return m_routingPolicyLabel; }
  inline bool RoutingPolicyLabelHasBeenSet() const { return m_routingPolicyLabelHasBeenSet; }
  template <typename RoutingPolicyLabelT = Aws::String>
  void SetRoutingPolicyLabel(RoutingPolicyLabelT&& value) {
    m_routingPolicyLabelHasBeenSet = true;
    m_routingPolicyLabel = std::forward<RoutingPolicyLabelT>(value);
  }
  template <typename RoutingPolicyLabelT = Aws::String>
  AttachmentRoutingPolicyAssociationSummary& WithRoutingPolicyLabel(RoutingPolicyLabelT&& value) {
    SetRoutingPolicyLabel(std::forward<RoutingPolicyLabelT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_attachmentId;
  bool m_attachmentIdHasBeenSet = false;

  Aws::Vector<Aws::String> m_pendingRoutingPolicies;
  bool m_pendingRoutingPoliciesHasBeenSet = false;

  Aws::Vector<Aws::String> m_associatedRoutingPolicies;
  bool m_associatedRoutingPoliciesHasBeenSet = false;

  Aws::String m_routingPolicyLabel;
  bool m_routingPolicyLabelHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
