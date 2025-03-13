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
    AWS_SSMCONTACTS_API CreateRotationOverrideRequest() = default;

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
    inline const Aws::String& GetRotationId() const { return m_rotationId; }
    inline bool RotationIdHasBeenSet() const { return m_rotationIdHasBeenSet; }
    template<typename RotationIdT = Aws::String>
    void SetRotationId(RotationIdT&& value) { m_rotationIdHasBeenSet = true; m_rotationId = std::forward<RotationIdT>(value); }
    template<typename RotationIdT = Aws::String>
    CreateRotationOverrideRequest& WithRotationId(RotationIdT&& value) { SetRotationId(std::forward<RotationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts to replace those in the
     * current on-call rotation with.</p> <p>If you want to include any current team
     * members in the override shift, you must include their ARNs in the new contact ID
     * list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNewContactIds() const { return m_newContactIds; }
    inline bool NewContactIdsHasBeenSet() const { return m_newContactIdsHasBeenSet; }
    template<typename NewContactIdsT = Aws::Vector<Aws::String>>
    void SetNewContactIds(NewContactIdsT&& value) { m_newContactIdsHasBeenSet = true; m_newContactIds = std::forward<NewContactIdsT>(value); }
    template<typename NewContactIdsT = Aws::Vector<Aws::String>>
    CreateRotationOverrideRequest& WithNewContactIds(NewContactIdsT&& value) { SetNewContactIds(std::forward<NewContactIdsT>(value)); return *this;}
    template<typename NewContactIdsT = Aws::String>
    CreateRotationOverrideRequest& AddNewContactIds(NewContactIdsT&& value) { m_newContactIdsHasBeenSet = true; m_newContactIds.emplace_back(std::forward<NewContactIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time when the override goes into effect.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    CreateRotationOverrideRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the override ends.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    CreateRotationOverrideRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that ensures that the operation is called only once with the
     * specified details.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const { return m_idempotencyToken; }
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
    template<typename IdempotencyTokenT = Aws::String>
    void SetIdempotencyToken(IdempotencyTokenT&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::forward<IdempotencyTokenT>(value); }
    template<typename IdempotencyTokenT = Aws::String>
    CreateRotationOverrideRequest& WithIdempotencyToken(IdempotencyTokenT&& value) { SetIdempotencyToken(std::forward<IdempotencyTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_rotationId;
    bool m_rotationIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_newContactIds;
    bool m_newContactIdsHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
