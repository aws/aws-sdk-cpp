/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/CreateAssociationBatchRequestEntry.h>

#include <utility>

namespace Aws {
namespace SSM {
namespace Model {

/**
 */
class CreateAssociationBatchRequest : public SSMRequest {
 public:
  AWS_SSM_API CreateAssociationBatchRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateAssociationBatch"; }

  AWS_SSM_API Aws::String SerializePayload() const override;

  AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>One or more associations.</p>
   */
  inline const Aws::Vector<CreateAssociationBatchRequestEntry>& GetEntries() const { return m_entries; }
  inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }
  template <typename EntriesT = Aws::Vector<CreateAssociationBatchRequestEntry>>
  void SetEntries(EntriesT&& value) {
    m_entriesHasBeenSet = true;
    m_entries = std::forward<EntriesT>(value);
  }
  template <typename EntriesT = Aws::Vector<CreateAssociationBatchRequestEntry>>
  CreateAssociationBatchRequest& WithEntries(EntriesT&& value) {
    SetEntries(std::forward<EntriesT>(value));
    return *this;
  }
  template <typename EntriesT = CreateAssociationBatchRequestEntry>
  CreateAssociationBatchRequest& AddEntries(EntriesT&& value) {
    m_entriesHasBeenSet = true;
    m_entries.emplace_back(std::forward<EntriesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A role used by association to take actions on your behalf. State Manager will
   * assume this role and call required APIs when dispatching configurations to
   * nodes. If not specified, <a
   * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/using-service-linked-roles.html">
   * service-linked role for Systems Manager</a> will be used by default. </p>
   * <p>It is recommended that you define a custom IAM role so that you have full
   * control of the permissions that State Manager has when taking actions on your
   * behalf.</p> <p>Service-linked role support in State Manager is being phased out.
   * Associations relying on service-linked role may require updates in the future to
   * continue functioning properly.</p>
   */
  inline const Aws::String& GetAssociationDispatchAssumeRole() const { return m_associationDispatchAssumeRole; }
  inline bool AssociationDispatchAssumeRoleHasBeenSet() const { return m_associationDispatchAssumeRoleHasBeenSet; }
  template <typename AssociationDispatchAssumeRoleT = Aws::String>
  void SetAssociationDispatchAssumeRole(AssociationDispatchAssumeRoleT&& value) {
    m_associationDispatchAssumeRoleHasBeenSet = true;
    m_associationDispatchAssumeRole = std::forward<AssociationDispatchAssumeRoleT>(value);
  }
  template <typename AssociationDispatchAssumeRoleT = Aws::String>
  CreateAssociationBatchRequest& WithAssociationDispatchAssumeRole(AssociationDispatchAssumeRoleT&& value) {
    SetAssociationDispatchAssumeRole(std::forward<AssociationDispatchAssumeRoleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<CreateAssociationBatchRequestEntry> m_entries;

  Aws::String m_associationDispatchAssumeRole;
  bool m_entriesHasBeenSet = false;
  bool m_associationDispatchAssumeRoleHasBeenSet = false;
};

}  // namespace Model
}  // namespace SSM
}  // namespace Aws
