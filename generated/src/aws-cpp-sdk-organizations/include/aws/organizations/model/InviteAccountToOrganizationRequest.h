/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/organizations/model/HandshakeParty.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/organizations/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Organizations
{
namespace Model
{

  /**
   */
  class InviteAccountToOrganizationRequest : public OrganizationsRequest
  {
  public:
    AWS_ORGANIZATIONS_API InviteAccountToOrganizationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InviteAccountToOrganization"; }

    AWS_ORGANIZATIONS_API Aws::String SerializePayload() const override;

    AWS_ORGANIZATIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier (ID) of the Amazon Web Services account that you want to
     * invite to join your organization. This is a JSON object that contains the
     * following elements:</p> <p> <code>{ "Type": "ACCOUNT", "Id": "&lt;<i> <b>account
     * id number</b> </i>&gt;" }</code> </p> <p>If you use the CLI, you can submit this
     * as a single string, similar to the following example:</p> <p> <code>--target
     * Id=123456789012,Type=ACCOUNT</code> </p> <p>If you specify <code>"Type":
     * "ACCOUNT"</code>, you must provide the Amazon Web Services account ID number as
     * the <code>Id</code>. If you specify <code>"Type": "EMAIL"</code>, you must
     * specify the email address that is associated with the account.</p> <p>
     * <code>--target Id=diego@example.com,Type=EMAIL</code> </p>
     */
    inline const HandshakeParty& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = HandshakeParty>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = HandshakeParty>
    InviteAccountToOrganizationRequest& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information that you want to include in the generated email to the
     * recipient account owner.</p>
     */
    inline const Aws::String& GetNotes() const { return m_notes; }
    inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }
    template<typename NotesT = Aws::String>
    void SetNotes(NotesT&& value) { m_notesHasBeenSet = true; m_notes = std::forward<NotesT>(value); }
    template<typename NotesT = Aws::String>
    InviteAccountToOrganizationRequest& WithNotes(NotesT&& value) { SetNotes(std::forward<NotesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags that you want to attach to the account when it becomes a
     * member of the organization. For each tag in the list, you must specify both a
     * tag key and a value. You can set the value to an empty string, but you can't set
     * it to <code>null</code>. For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_tagging.html">Tagging
     * Organizations resources</a> in the Organizations User Guide.</p> 
     * <p>Any tags in the request are checked for compliance with any applicable tag
     * policies when the request is made. The request is rejected if the tags in the
     * request don't match the requirements of the policy at that time. Tag policy
     * compliance is <i> <b>not</b> </i> checked again when the invitation is accepted
     * and the tags are actually attached to the account. That means that if the tag
     * policy changes between the invitation and the acceptance, then that tags could
     * potentially be non-compliant.</p>   <p>If any one of the tags
     * is not valid or if you exceed the allowed number of tags for an account, then
     * the entire request fails and invitations are not sent.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    InviteAccountToOrganizationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    InviteAccountToOrganizationRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    HandshakeParty m_target;
    bool m_targetHasBeenSet = false;

    Aws::String m_notes;
    bool m_notesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
