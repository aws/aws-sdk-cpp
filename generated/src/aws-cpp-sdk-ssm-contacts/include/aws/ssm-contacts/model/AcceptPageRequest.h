/**
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
    AWS_SSMCONTACTS_API AcceptPageRequest();

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
    inline const Aws::String& GetPageId() const{ return m_pageId; }
    inline bool PageIdHasBeenSet() const { return m_pageIdHasBeenSet; }
    inline void SetPageId(const Aws::String& value) { m_pageIdHasBeenSet = true; m_pageId = value; }
    inline void SetPageId(Aws::String&& value) { m_pageIdHasBeenSet = true; m_pageId = std::move(value); }
    inline void SetPageId(const char* value) { m_pageIdHasBeenSet = true; m_pageId.assign(value); }
    inline AcceptPageRequest& WithPageId(const Aws::String& value) { SetPageId(value); return *this;}
    inline AcceptPageRequest& WithPageId(Aws::String&& value) { SetPageId(std::move(value)); return *this;}
    inline AcceptPageRequest& WithPageId(const char* value) { SetPageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the contact channel.</p>
     */
    inline const Aws::String& GetContactChannelId() const{ return m_contactChannelId; }
    inline bool ContactChannelIdHasBeenSet() const { return m_contactChannelIdHasBeenSet; }
    inline void SetContactChannelId(const Aws::String& value) { m_contactChannelIdHasBeenSet = true; m_contactChannelId = value; }
    inline void SetContactChannelId(Aws::String&& value) { m_contactChannelIdHasBeenSet = true; m_contactChannelId = std::move(value); }
    inline void SetContactChannelId(const char* value) { m_contactChannelIdHasBeenSet = true; m_contactChannelId.assign(value); }
    inline AcceptPageRequest& WithContactChannelId(const Aws::String& value) { SetContactChannelId(value); return *this;}
    inline AcceptPageRequest& WithContactChannelId(Aws::String&& value) { SetContactChannelId(std::move(value)); return *this;}
    inline AcceptPageRequest& WithContactChannelId(const char* value) { SetContactChannelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type indicates if the page was <code>DELIVERED</code> or
     * <code>READ</code>.</p>
     */
    inline const AcceptType& GetAcceptType() const{ return m_acceptType; }
    inline bool AcceptTypeHasBeenSet() const { return m_acceptTypeHasBeenSet; }
    inline void SetAcceptType(const AcceptType& value) { m_acceptTypeHasBeenSet = true; m_acceptType = value; }
    inline void SetAcceptType(AcceptType&& value) { m_acceptTypeHasBeenSet = true; m_acceptType = std::move(value); }
    inline AcceptPageRequest& WithAcceptType(const AcceptType& value) { SetAcceptType(value); return *this;}
    inline AcceptPageRequest& WithAcceptType(AcceptType&& value) { SetAcceptType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information provided by the user when the user acknowledges the page.</p>
     */
    inline const Aws::String& GetNote() const{ return m_note; }
    inline bool NoteHasBeenSet() const { return m_noteHasBeenSet; }
    inline void SetNote(const Aws::String& value) { m_noteHasBeenSet = true; m_note = value; }
    inline void SetNote(Aws::String&& value) { m_noteHasBeenSet = true; m_note = std::move(value); }
    inline void SetNote(const char* value) { m_noteHasBeenSet = true; m_note.assign(value); }
    inline AcceptPageRequest& WithNote(const Aws::String& value) { SetNote(value); return *this;}
    inline AcceptPageRequest& WithNote(Aws::String&& value) { SetNote(std::move(value)); return *this;}
    inline AcceptPageRequest& WithNote(const char* value) { SetNote(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A 6-digit code used to acknowledge the page.</p>
     */
    inline const Aws::String& GetAcceptCode() const{ return m_acceptCode; }
    inline bool AcceptCodeHasBeenSet() const { return m_acceptCodeHasBeenSet; }
    inline void SetAcceptCode(const Aws::String& value) { m_acceptCodeHasBeenSet = true; m_acceptCode = value; }
    inline void SetAcceptCode(Aws::String&& value) { m_acceptCodeHasBeenSet = true; m_acceptCode = std::move(value); }
    inline void SetAcceptCode(const char* value) { m_acceptCodeHasBeenSet = true; m_acceptCode.assign(value); }
    inline AcceptPageRequest& WithAcceptCode(const Aws::String& value) { SetAcceptCode(value); return *this;}
    inline AcceptPageRequest& WithAcceptCode(Aws::String&& value) { SetAcceptCode(std::move(value)); return *this;}
    inline AcceptPageRequest& WithAcceptCode(const char* value) { SetAcceptCode(value); return *this;}
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
    inline const AcceptCodeValidation& GetAcceptCodeValidation() const{ return m_acceptCodeValidation; }
    inline bool AcceptCodeValidationHasBeenSet() const { return m_acceptCodeValidationHasBeenSet; }
    inline void SetAcceptCodeValidation(const AcceptCodeValidation& value) { m_acceptCodeValidationHasBeenSet = true; m_acceptCodeValidation = value; }
    inline void SetAcceptCodeValidation(AcceptCodeValidation&& value) { m_acceptCodeValidationHasBeenSet = true; m_acceptCodeValidation = std::move(value); }
    inline AcceptPageRequest& WithAcceptCodeValidation(const AcceptCodeValidation& value) { SetAcceptCodeValidation(value); return *this;}
    inline AcceptPageRequest& WithAcceptCodeValidation(AcceptCodeValidation&& value) { SetAcceptCodeValidation(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_pageId;
    bool m_pageIdHasBeenSet = false;

    Aws::String m_contactChannelId;
    bool m_contactChannelIdHasBeenSet = false;

    AcceptType m_acceptType;
    bool m_acceptTypeHasBeenSet = false;

    Aws::String m_note;
    bool m_noteHasBeenSet = false;

    Aws::String m_acceptCode;
    bool m_acceptCodeHasBeenSet = false;

    AcceptCodeValidation m_acceptCodeValidation;
    bool m_acceptCodeValidationHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
