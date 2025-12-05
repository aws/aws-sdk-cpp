/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/HandshakeParty.h>
#include <aws/organizations/model/ResponsibilityTransferType.h>
#include <aws/organizations/model/Tag.h>

#include <utility>

namespace Aws {
namespace Organizations {
namespace Model {

/**
 */
class InviteOrganizationToTransferResponsibilityRequest : public OrganizationsRequest {
 public:
  AWS_ORGANIZATIONS_API InviteOrganizationToTransferResponsibilityRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "InviteOrganizationToTransferResponsibility"; }

  AWS_ORGANIZATIONS_API Aws::String SerializePayload() const override;

  AWS_ORGANIZATIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The type of responsibility you want to designate to your organization.
   * Currently, only <code>BILLING</code> is supported.</p>
   */
  inline ResponsibilityTransferType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(ResponsibilityTransferType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline InviteOrganizationToTransferResponsibilityRequest& WithType(ResponsibilityTransferType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A <code>HandshakeParty</code> object. Contains details for the account you
   * want to invite. Currently, only <code>ACCOUNT</code> and <code>EMAIL</code> are
   * supported.</p>
   */
  inline const HandshakeParty& GetTarget() const { return m_target; }
  inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
  template <typename TargetT = HandshakeParty>
  void SetTarget(TargetT&& value) {
    m_targetHasBeenSet = true;
    m_target = std::forward<TargetT>(value);
  }
  template <typename TargetT = HandshakeParty>
  InviteOrganizationToTransferResponsibilityRequest& WithTarget(TargetT&& value) {
    SetTarget(std::forward<TargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information that you want to include in the invitation.</p>
   */
  inline const Aws::String& GetNotes() const { return m_notes; }
  inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }
  template <typename NotesT = Aws::String>
  void SetNotes(NotesT&& value) {
    m_notesHasBeenSet = true;
    m_notes = std::forward<NotesT>(value);
  }
  template <typename NotesT = Aws::String>
  InviteOrganizationToTransferResponsibilityRequest& WithNotes(NotesT&& value) {
    SetNotes(std::forward<NotesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when the recipient will begin managing the specified
   * responsibilities.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTimestamp() const { return m_startTimestamp; }
  inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }
  template <typename StartTimestampT = Aws::Utils::DateTime>
  void SetStartTimestamp(StartTimestampT&& value) {
    m_startTimestampHasBeenSet = true;
    m_startTimestamp = std::forward<StartTimestampT>(value);
  }
  template <typename StartTimestampT = Aws::Utils::DateTime>
  InviteOrganizationToTransferResponsibilityRequest& WithStartTimestamp(StartTimestampT&& value) {
    SetStartTimestamp(std::forward<StartTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Name you want to assign to the transfer.</p>
   */
  inline const Aws::String& GetSourceName() const { return m_sourceName; }
  inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }
  template <typename SourceNameT = Aws::String>
  void SetSourceName(SourceNameT&& value) {
    m_sourceNameHasBeenSet = true;
    m_sourceName = std::forward<SourceNameT>(value);
  }
  template <typename SourceNameT = Aws::String>
  InviteOrganizationToTransferResponsibilityRequest& WithSourceName(SourceNameT&& value) {
    SetSourceName(std::forward<SourceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of tags that you want to attach to the transfer. For each tag in the
   * list, you must specify both a tag key and a value. You can set the value to an
   * empty string, but you can't set it to <code>null</code>. For more information
   * about tagging, see <a
   * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_tagging.html">Tagging
   * Organizations resources</a> in the Organizations User Guide.</p>
   * <p>Any tags in the request are checked for compliance with any applicable tag
   * policies when the request is made. The request is rejected if the tags in the
   * request don't match the requirements of the policy at that time. Tag policy
   * compliance is <i> <b>not</b> </i> checked again when the invitation is accepted
   * and the tags are actually attached to the transfer. That means that if the tag
   * policy changes between the invitation and the acceptance, then that tags could
   * potentially be non-compliant.</p>   <p>If any one of the tags
   * is not valid or if you exceed the allowed number of tags for a transfer, then
   * the entire request fails and invitations are not sent.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  InviteOrganizationToTransferResponsibilityRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  InviteOrganizationToTransferResponsibilityRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  ResponsibilityTransferType m_type{ResponsibilityTransferType::NOT_SET};

  HandshakeParty m_target;

  Aws::String m_notes;

  Aws::Utils::DateTime m_startTimestamp{};

  Aws::String m_sourceName;

  Aws::Vector<Tag> m_tags;
  bool m_typeHasBeenSet = false;
  bool m_targetHasBeenSet = false;
  bool m_notesHasBeenSet = false;
  bool m_startTimestampHasBeenSet = false;
  bool m_sourceNameHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Organizations
}  // namespace Aws
