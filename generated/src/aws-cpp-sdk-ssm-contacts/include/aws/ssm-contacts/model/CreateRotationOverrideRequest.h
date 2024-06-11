/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/ssm-contacts/SSMContactsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

  /**
   */
  class CreateRotationOverrideRequest : public SSMContactsRequest
  {
  public:
    AWS_SSMCONTACTS_API CreateRotationOverrideRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRotationOverride"; }

    AWS_SSMCONTACTS_API Aws::String SerializePayload() const override;

    AWS_SSMCONTACTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the rotation to create an override for.</p>
     */
    inline const Aws::String& GetRotationId() const{ return m_rotationId; }
    inline bool RotationIdHasBeenSet() const { return m_rotationIdHasBeenSet; }
    inline void SetRotationId(const Aws::String& value) { m_rotationIdHasBeenSet = true; m_rotationId = value; }
    inline void SetRotationId(Aws::String&& value) { m_rotationIdHasBeenSet = true; m_rotationId = std::move(value); }
    inline void SetRotationId(const char* value) { m_rotationIdHasBeenSet = true; m_rotationId.assign(value); }
    inline CreateRotationOverrideRequest& WithRotationId(const Aws::String& value) { SetRotationId(value); return *this;}
    inline CreateRotationOverrideRequest& WithRotationId(Aws::String&& value) { SetRotationId(std::move(value)); return *this;}
    inline CreateRotationOverrideRequest& WithRotationId(const char* value) { SetRotationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts to replace those in the
     * current on-call rotation with.</p> <p>If you want to include any current team
     * members in the override shift, you must include their ARNs in the new contact ID
     * list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNewContactIds() const{ return m_newContactIds; }
    inline bool NewContactIdsHasBeenSet() const { return m_newContactIdsHasBeenSet; }
    inline void SetNewContactIds(const Aws::Vector<Aws::String>& value) { m_newContactIdsHasBeenSet = true; m_newContactIds = value; }
    inline void SetNewContactIds(Aws::Vector<Aws::String>&& value) { m_newContactIdsHasBeenSet = true; m_newContactIds = std::move(value); }
    inline CreateRotationOverrideRequest& WithNewContactIds(const Aws::Vector<Aws::String>& value) { SetNewContactIds(value); return *this;}
    inline CreateRotationOverrideRequest& WithNewContactIds(Aws::Vector<Aws::String>&& value) { SetNewContactIds(std::move(value)); return *this;}
    inline CreateRotationOverrideRequest& AddNewContactIds(const Aws::String& value) { m_newContactIdsHasBeenSet = true; m_newContactIds.push_back(value); return *this; }
    inline CreateRotationOverrideRequest& AddNewContactIds(Aws::String&& value) { m_newContactIdsHasBeenSet = true; m_newContactIds.push_back(std::move(value)); return *this; }
    inline CreateRotationOverrideRequest& AddNewContactIds(const char* value) { m_newContactIdsHasBeenSet = true; m_newContactIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time when the override goes into effect.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline CreateRotationOverrideRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline CreateRotationOverrideRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the override ends.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline CreateRotationOverrideRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline CreateRotationOverrideRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that ensures that the operation is called only once with the
     * specified details.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }
    inline CreateRotationOverrideRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}
    inline CreateRotationOverrideRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}
    inline CreateRotationOverrideRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}
    ///@}
  private:

    Aws::String m_rotationId;
    bool m_rotationIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_newContactIds;
    bool m_newContactIdsHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
