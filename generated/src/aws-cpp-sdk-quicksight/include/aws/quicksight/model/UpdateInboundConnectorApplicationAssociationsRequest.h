/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 */
class UpdateInboundConnectorApplicationAssociationsRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API UpdateInboundConnectorApplicationAssociationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateInboundConnectorApplicationAssociations"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that contains the Quick Sight
   * account.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  UpdateInboundConnectorApplicationAssociationsRequest& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the inbound connector.</p>
   */
  inline const Aws::String& GetInboundConnectorId() const { return m_inboundConnectorId; }
  inline bool InboundConnectorIdHasBeenSet() const { return m_inboundConnectorIdHasBeenSet; }
  template <typename InboundConnectorIdT = Aws::String>
  void SetInboundConnectorId(InboundConnectorIdT&& value) {
    m_inboundConnectorIdHasBeenSet = true;
    m_inboundConnectorId = std::forward<InboundConnectorIdT>(value);
  }
  template <typename InboundConnectorIdT = Aws::String>
  UpdateInboundConnectorApplicationAssociationsRequest& WithInboundConnectorId(InboundConnectorIdT&& value) {
    SetInboundConnectorId(std::forward<InboundConnectorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARNs of up to 20 access control applications to associate with the
   * inbound connector. ARNs that are already associated are ignored.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAssociateAccessControlApplications() const { return m_associateAccessControlApplications; }
  inline bool AssociateAccessControlApplicationsHasBeenSet() const { return m_associateAccessControlApplicationsHasBeenSet; }
  template <typename AssociateAccessControlApplicationsT = Aws::Vector<Aws::String>>
  void SetAssociateAccessControlApplications(AssociateAccessControlApplicationsT&& value) {
    m_associateAccessControlApplicationsHasBeenSet = true;
    m_associateAccessControlApplications = std::forward<AssociateAccessControlApplicationsT>(value);
  }
  template <typename AssociateAccessControlApplicationsT = Aws::Vector<Aws::String>>
  UpdateInboundConnectorApplicationAssociationsRequest& WithAssociateAccessControlApplications(
      AssociateAccessControlApplicationsT&& value) {
    SetAssociateAccessControlApplications(std::forward<AssociateAccessControlApplicationsT>(value));
    return *this;
  }
  template <typename AssociateAccessControlApplicationsT = Aws::String>
  UpdateInboundConnectorApplicationAssociationsRequest& AddAssociateAccessControlApplications(AssociateAccessControlApplicationsT&& value) {
    m_associateAccessControlApplicationsHasBeenSet = true;
    m_associateAccessControlApplications.emplace_back(std::forward<AssociateAccessControlApplicationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARNs of up to 20 access control applications to disassociate from the
   * inbound connector. ARNs that aren't associated are ignored.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDisassociateAccessControlApplications() const {
    return m_disassociateAccessControlApplications;
  }
  inline bool DisassociateAccessControlApplicationsHasBeenSet() const { return m_disassociateAccessControlApplicationsHasBeenSet; }
  template <typename DisassociateAccessControlApplicationsT = Aws::Vector<Aws::String>>
  void SetDisassociateAccessControlApplications(DisassociateAccessControlApplicationsT&& value) {
    m_disassociateAccessControlApplicationsHasBeenSet = true;
    m_disassociateAccessControlApplications = std::forward<DisassociateAccessControlApplicationsT>(value);
  }
  template <typename DisassociateAccessControlApplicationsT = Aws::Vector<Aws::String>>
  UpdateInboundConnectorApplicationAssociationsRequest& WithDisassociateAccessControlApplications(
      DisassociateAccessControlApplicationsT&& value) {
    SetDisassociateAccessControlApplications(std::forward<DisassociateAccessControlApplicationsT>(value));
    return *this;
  }
  template <typename DisassociateAccessControlApplicationsT = Aws::String>
  UpdateInboundConnectorApplicationAssociationsRequest& AddDisassociateAccessControlApplications(
      DisassociateAccessControlApplicationsT&& value) {
    m_disassociateAccessControlApplicationsHasBeenSet = true;
    m_disassociateAccessControlApplications.emplace_back(std::forward<DisassociateAccessControlApplicationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsAccountId;

  Aws::String m_inboundConnectorId;

  Aws::Vector<Aws::String> m_associateAccessControlApplications;

  Aws::Vector<Aws::String> m_disassociateAccessControlApplications;
  bool m_awsAccountIdHasBeenSet = false;
  bool m_inboundConnectorIdHasBeenSet = false;
  bool m_associateAccessControlApplicationsHasBeenSet = false;
  bool m_disassociateAccessControlApplicationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
