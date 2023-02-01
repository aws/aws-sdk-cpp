/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/ssm-contacts/SSMContactsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-contacts/model/Plan.h>
#include <utility>

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

  /**
   */
  class UpdateContactRequest : public SSMContactsRequest
  {
  public:
    AWS_SSMCONTACTS_API UpdateContactRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateContact"; }

    AWS_SSMCONTACTS_API Aws::String SerializePayload() const override;

    AWS_SSMCONTACTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the contact or escalation plan you're
     * updating.</p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact or escalation plan you're
     * updating.</p>
     */
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact or escalation plan you're
     * updating.</p>
     */
    inline void SetContactId(const Aws::String& value) { m_contactIdHasBeenSet = true; m_contactId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact or escalation plan you're
     * updating.</p>
     */
    inline void SetContactId(Aws::String&& value) { m_contactIdHasBeenSet = true; m_contactId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact or escalation plan you're
     * updating.</p>
     */
    inline void SetContactId(const char* value) { m_contactIdHasBeenSet = true; m_contactId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact or escalation plan you're
     * updating.</p>
     */
    inline UpdateContactRequest& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the contact or escalation plan you're
     * updating.</p>
     */
    inline UpdateContactRequest& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the contact or escalation plan you're
     * updating.</p>
     */
    inline UpdateContactRequest& WithContactId(const char* value) { SetContactId(value); return *this;}


    /**
     * <p>The full name of the contact or escalation plan.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The full name of the contact or escalation plan.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The full name of the contact or escalation plan.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The full name of the contact or escalation plan.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The full name of the contact or escalation plan.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The full name of the contact or escalation plan.</p>
     */
    inline UpdateContactRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The full name of the contact or escalation plan.</p>
     */
    inline UpdateContactRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The full name of the contact or escalation plan.</p>
     */
    inline UpdateContactRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>A list of stages. A contact has an engagement plan with stages for specified
     * contact channels. An escalation plan uses these stages to contact specified
     * contacts. </p>
     */
    inline const Plan& GetPlan() const{ return m_plan; }

    /**
     * <p>A list of stages. A contact has an engagement plan with stages for specified
     * contact channels. An escalation plan uses these stages to contact specified
     * contacts. </p>
     */
    inline bool PlanHasBeenSet() const { return m_planHasBeenSet; }

    /**
     * <p>A list of stages. A contact has an engagement plan with stages for specified
     * contact channels. An escalation plan uses these stages to contact specified
     * contacts. </p>
     */
    inline void SetPlan(const Plan& value) { m_planHasBeenSet = true; m_plan = value; }

    /**
     * <p>A list of stages. A contact has an engagement plan with stages for specified
     * contact channels. An escalation plan uses these stages to contact specified
     * contacts. </p>
     */
    inline void SetPlan(Plan&& value) { m_planHasBeenSet = true; m_plan = std::move(value); }

    /**
     * <p>A list of stages. A contact has an engagement plan with stages for specified
     * contact channels. An escalation plan uses these stages to contact specified
     * contacts. </p>
     */
    inline UpdateContactRequest& WithPlan(const Plan& value) { SetPlan(value); return *this;}

    /**
     * <p>A list of stages. A contact has an engagement plan with stages for specified
     * contact channels. An escalation plan uses these stages to contact specified
     * contacts. </p>
     */
    inline UpdateContactRequest& WithPlan(Plan&& value) { SetPlan(std::move(value)); return *this;}

  private:

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Plan m_plan;
    bool m_planHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
