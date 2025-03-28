﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/ssm-contacts/SSMContactsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-contacts/model/AcceptType.h>
#include <aws/ssm-contacts/model/AcceptCodeValidation.h>
#include <utility>

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

  /**
   */
  class AcceptPageRequest : public SSMContactsRequest
  {
  public:
    AWS_SSMCONTACTS_API AcceptPageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AcceptPage"; }

    AWS_SSMCONTACTS_API Aws::String SerializePayload() const override;

    AWS_SSMCONTACTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the engagement to a contact channel.</p>
     */
    inline const Aws::String& GetPageId() const { return m_pageId; }
    inline bool PageIdHasBeenSet() const { return m_pageIdHasBeenSet; }
    template<typename PageIdT = Aws::String>
    void SetPageId(PageIdT&& value) { m_pageIdHasBeenSet = true; m_pageId = std::forward<PageIdT>(value); }
    template<typename PageIdT = Aws::String>
    AcceptPageRequest& WithPageId(PageIdT&& value) { SetPageId(std::forward<PageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the contact channel.</p>
     */
    inline const Aws::String& GetContactChannelId() const { return m_contactChannelId; }
    inline bool ContactChannelIdHasBeenSet() const { return m_contactChannelIdHasBeenSet; }
    template<typename ContactChannelIdT = Aws::String>
    void SetContactChannelId(ContactChannelIdT&& value) { m_contactChannelIdHasBeenSet = true; m_contactChannelId = std::forward<ContactChannelIdT>(value); }
    template<typename ContactChannelIdT = Aws::String>
    AcceptPageRequest& WithContactChannelId(ContactChannelIdT&& value) { SetContactChannelId(std::forward<ContactChannelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type indicates if the page was <code>DELIVERED</code> or
     * <code>READ</code>.</p>
     */
    inline AcceptType GetAcceptType() const { return m_acceptType; }
    inline bool AcceptTypeHasBeenSet() const { return m_acceptTypeHasBeenSet; }
    inline void SetAcceptType(AcceptType value) { m_acceptTypeHasBeenSet = true; m_acceptType = value; }
    inline AcceptPageRequest& WithAcceptType(AcceptType value) { SetAcceptType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information provided by the user when the user acknowledges the page.</p>
     */
    inline const Aws::String& GetNote() const { return m_note; }
    inline bool NoteHasBeenSet() const { return m_noteHasBeenSet; }
    template<typename NoteT = Aws::String>
    void SetNote(NoteT&& value) { m_noteHasBeenSet = true; m_note = std::forward<NoteT>(value); }
    template<typename NoteT = Aws::String>
    AcceptPageRequest& WithNote(NoteT&& value) { SetNote(std::forward<NoteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A 6-digit code used to acknowledge the page.</p>
     */
    inline const Aws::String& GetAcceptCode() const { return m_acceptCode; }
    inline bool AcceptCodeHasBeenSet() const { return m_acceptCodeHasBeenSet; }
    template<typename AcceptCodeT = Aws::String>
    void SetAcceptCode(AcceptCodeT&& value) { m_acceptCodeHasBeenSet = true; m_acceptCode = std::forward<AcceptCodeT>(value); }
    template<typename AcceptCodeT = Aws::String>
    AcceptPageRequest& WithAcceptCode(AcceptCodeT&& value) { SetAcceptCode(std::forward<AcceptCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional field that Incident Manager uses to <code>ENFORCE</code>
     * <code>AcceptCode</code> validation when acknowledging an page. Acknowledgement
     * can occur by replying to a page, or when entering the AcceptCode in the console.
     * Enforcing AcceptCode validation causes Incident Manager to verify that the code
     * entered by the user matches the code sent by Incident Manager with the page.</p>
     * <p>Incident Manager can also <code>IGNORE</code> <code>AcceptCode</code>
     * validation. Ignoring <code>AcceptCode</code> validation causes Incident Manager
     * to accept any value entered for the <code>AcceptCode</code>.</p>
     */
    inline AcceptCodeValidation GetAcceptCodeValidation() const { return m_acceptCodeValidation; }
    inline bool AcceptCodeValidationHasBeenSet() const { return m_acceptCodeValidationHasBeenSet; }
    inline void SetAcceptCodeValidation(AcceptCodeValidation value) { m_acceptCodeValidationHasBeenSet = true; m_acceptCodeValidation = value; }
    inline AcceptPageRequest& WithAcceptCodeValidation(AcceptCodeValidation value) { SetAcceptCodeValidation(value); return *this;}
    ///@}
  private:

    Aws::String m_pageId;
    bool m_pageIdHasBeenSet = false;

    Aws::String m_contactChannelId;
    bool m_contactChannelIdHasBeenSet = false;

    AcceptType m_acceptType{AcceptType::NOT_SET};
    bool m_acceptTypeHasBeenSet = false;

    Aws::String m_note;
    bool m_noteHasBeenSet = false;

    Aws::String m_acceptCode;
    bool m_acceptCodeHasBeenSet = false;

    AcceptCodeValidation m_acceptCodeValidation{AcceptCodeValidation::NOT_SET};
    bool m_acceptCodeValidationHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
