/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm-contacts/model/RecurrenceSettings.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSMContacts
{
namespace Model
{
  class GetRotationResult
  {
  public:
    AWS_SSMCONTACTS_API GetRotationResult() = default;
    AWS_SSMCONTACTS_API GetRotationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMCONTACTS_API GetRotationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the on-call rotation.</p>
     */
    inline const Aws::String& GetRotationArn() const { return m_rotationArn; }
    template<typename RotationArnT = Aws::String>
    void SetRotationArn(RotationArnT&& value) { m_rotationArnHasBeenSet = true; m_rotationArn = std::forward<RotationArnT>(value); }
    template<typename RotationArnT = Aws::String>
    GetRotationResult& WithRotationArn(RotationArnT&& value) { SetRotationArn(std::forward<RotationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the on-call rotation.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetRotationResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts assigned to the on-call
     * rotation team.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContactIds() const { return m_contactIds; }
    template<typename ContactIdsT = Aws::Vector<Aws::String>>
    void SetContactIds(ContactIdsT&& value) { m_contactIdsHasBeenSet = true; m_contactIds = std::forward<ContactIdsT>(value); }
    template<typename ContactIdsT = Aws::Vector<Aws::String>>
    GetRotationResult& WithContactIds(ContactIdsT&& value) { SetContactIds(std::forward<ContactIdsT>(value)); return *this;}
    template<typename ContactIdsT = Aws::String>
    GetRotationResult& AddContactIds(ContactIdsT&& value) { m_contactIdsHasBeenSet = true; m_contactIds.emplace_back(std::forward<ContactIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The specified start time for the on-call rotation.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    GetRotationResult& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone that the rotation’s activity is based on, in Internet Assigned
     * Numbers Authority (IANA) format.</p>
     */
    inline const Aws::String& GetTimeZoneId() const { return m_timeZoneId; }
    template<typename TimeZoneIdT = Aws::String>
    void SetTimeZoneId(TimeZoneIdT&& value) { m_timeZoneIdHasBeenSet = true; m_timeZoneId = std::forward<TimeZoneIdT>(value); }
    template<typename TimeZoneIdT = Aws::String>
    GetRotationResult& WithTimeZoneId(TimeZoneIdT&& value) { SetTimeZoneId(std::forward<TimeZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how long a rotation lasts before restarting at the beginning of the
     * shift order.</p>
     */
    inline const RecurrenceSettings& GetRecurrence() const { return m_recurrence; }
    template<typename RecurrenceT = RecurrenceSettings>
    void SetRecurrence(RecurrenceT&& value) { m_recurrenceHasBeenSet = true; m_recurrence = std::forward<RecurrenceT>(value); }
    template<typename RecurrenceT = RecurrenceSettings>
    GetRotationResult& WithRecurrence(RecurrenceT&& value) { SetRecurrence(std::forward<RecurrenceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRotationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_rotationArn;
    bool m_rotationArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_contactIds;
    bool m_contactIdsHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::String m_timeZoneId;
    bool m_timeZoneIdHasBeenSet = false;

    RecurrenceSettings m_recurrence;
    bool m_recurrenceHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
