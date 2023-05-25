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
    AWS_SSMCONTACTS_API GetRotationResult();
    AWS_SSMCONTACTS_API GetRotationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMCONTACTS_API GetRotationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the on-call rotation.</p>
     */
    inline const Aws::String& GetRotationArn() const{ return m_rotationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the on-call rotation.</p>
     */
    inline void SetRotationArn(const Aws::String& value) { m_rotationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the on-call rotation.</p>
     */
    inline void SetRotationArn(Aws::String&& value) { m_rotationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the on-call rotation.</p>
     */
    inline void SetRotationArn(const char* value) { m_rotationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the on-call rotation.</p>
     */
    inline GetRotationResult& WithRotationArn(const Aws::String& value) { SetRotationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the on-call rotation.</p>
     */
    inline GetRotationResult& WithRotationArn(Aws::String&& value) { SetRotationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the on-call rotation.</p>
     */
    inline GetRotationResult& WithRotationArn(const char* value) { SetRotationArn(value); return *this;}


    /**
     * <p>The name of the on-call rotation.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the on-call rotation.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the on-call rotation.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the on-call rotation.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the on-call rotation.</p>
     */
    inline GetRotationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the on-call rotation.</p>
     */
    inline GetRotationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the on-call rotation.</p>
     */
    inline GetRotationResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts assigned to the on-call
     * rotation team.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContactIds() const{ return m_contactIds; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts assigned to the on-call
     * rotation team.</p>
     */
    inline void SetContactIds(const Aws::Vector<Aws::String>& value) { m_contactIds = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts assigned to the on-call
     * rotation team.</p>
     */
    inline void SetContactIds(Aws::Vector<Aws::String>&& value) { m_contactIds = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts assigned to the on-call
     * rotation team.</p>
     */
    inline GetRotationResult& WithContactIds(const Aws::Vector<Aws::String>& value) { SetContactIds(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts assigned to the on-call
     * rotation team.</p>
     */
    inline GetRotationResult& WithContactIds(Aws::Vector<Aws::String>&& value) { SetContactIds(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts assigned to the on-call
     * rotation team.</p>
     */
    inline GetRotationResult& AddContactIds(const Aws::String& value) { m_contactIds.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts assigned to the on-call
     * rotation team.</p>
     */
    inline GetRotationResult& AddContactIds(Aws::String&& value) { m_contactIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts assigned to the on-call
     * rotation team.</p>
     */
    inline GetRotationResult& AddContactIds(const char* value) { m_contactIds.push_back(value); return *this; }


    /**
     * <p>The specified start time for the on-call rotation.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The specified start time for the on-call rotation.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }

    /**
     * <p>The specified start time for the on-call rotation.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }

    /**
     * <p>The specified start time for the on-call rotation.</p>
     */
    inline GetRotationResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The specified start time for the on-call rotation.</p>
     */
    inline GetRotationResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The time zone that the rotation’s activity is based on, in Internet Assigned
     * Numbers Authority (IANA) format.</p>
     */
    inline const Aws::String& GetTimeZoneId() const{ return m_timeZoneId; }

    /**
     * <p>The time zone that the rotation’s activity is based on, in Internet Assigned
     * Numbers Authority (IANA) format.</p>
     */
    inline void SetTimeZoneId(const Aws::String& value) { m_timeZoneId = value; }

    /**
     * <p>The time zone that the rotation’s activity is based on, in Internet Assigned
     * Numbers Authority (IANA) format.</p>
     */
    inline void SetTimeZoneId(Aws::String&& value) { m_timeZoneId = std::move(value); }

    /**
     * <p>The time zone that the rotation’s activity is based on, in Internet Assigned
     * Numbers Authority (IANA) format.</p>
     */
    inline void SetTimeZoneId(const char* value) { m_timeZoneId.assign(value); }

    /**
     * <p>The time zone that the rotation’s activity is based on, in Internet Assigned
     * Numbers Authority (IANA) format.</p>
     */
    inline GetRotationResult& WithTimeZoneId(const Aws::String& value) { SetTimeZoneId(value); return *this;}

    /**
     * <p>The time zone that the rotation’s activity is based on, in Internet Assigned
     * Numbers Authority (IANA) format.</p>
     */
    inline GetRotationResult& WithTimeZoneId(Aws::String&& value) { SetTimeZoneId(std::move(value)); return *this;}

    /**
     * <p>The time zone that the rotation’s activity is based on, in Internet Assigned
     * Numbers Authority (IANA) format.</p>
     */
    inline GetRotationResult& WithTimeZoneId(const char* value) { SetTimeZoneId(value); return *this;}


    /**
     * <p>Specifies how long a rotation lasts before restarting at the beginning of the
     * shift order.</p>
     */
    inline const RecurrenceSettings& GetRecurrence() const{ return m_recurrence; }

    /**
     * <p>Specifies how long a rotation lasts before restarting at the beginning of the
     * shift order.</p>
     */
    inline void SetRecurrence(const RecurrenceSettings& value) { m_recurrence = value; }

    /**
     * <p>Specifies how long a rotation lasts before restarting at the beginning of the
     * shift order.</p>
     */
    inline void SetRecurrence(RecurrenceSettings&& value) { m_recurrence = std::move(value); }

    /**
     * <p>Specifies how long a rotation lasts before restarting at the beginning of the
     * shift order.</p>
     */
    inline GetRotationResult& WithRecurrence(const RecurrenceSettings& value) { SetRecurrence(value); return *this;}

    /**
     * <p>Specifies how long a rotation lasts before restarting at the beginning of the
     * shift order.</p>
     */
    inline GetRotationResult& WithRecurrence(RecurrenceSettings&& value) { SetRecurrence(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetRotationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetRotationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetRotationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_rotationArn;

    Aws::String m_name;

    Aws::Vector<Aws::String> m_contactIds;

    Aws::Utils::DateTime m_startTime;

    Aws::String m_timeZoneId;

    RecurrenceSettings m_recurrence;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
