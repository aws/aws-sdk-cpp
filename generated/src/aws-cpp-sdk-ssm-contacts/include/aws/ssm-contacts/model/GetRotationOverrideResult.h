/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
  class GetRotationOverrideResult
  {
  public:
    AWS_SSMCONTACTS_API GetRotationOverrideResult();
    AWS_SSMCONTACTS_API GetRotationOverrideResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMCONTACTS_API GetRotationOverrideResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the override to an on-call rotation.</p>
     */
    inline const Aws::String& GetRotationOverrideId() const{ return m_rotationOverrideId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the override to an on-call rotation.</p>
     */
    inline void SetRotationOverrideId(const Aws::String& value) { m_rotationOverrideId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the override to an on-call rotation.</p>
     */
    inline void SetRotationOverrideId(Aws::String&& value) { m_rotationOverrideId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the override to an on-call rotation.</p>
     */
    inline void SetRotationOverrideId(const char* value) { m_rotationOverrideId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the override to an on-call rotation.</p>
     */
    inline GetRotationOverrideResult& WithRotationOverrideId(const Aws::String& value) { SetRotationOverrideId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the override to an on-call rotation.</p>
     */
    inline GetRotationOverrideResult& WithRotationOverrideId(Aws::String&& value) { SetRotationOverrideId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the override to an on-call rotation.</p>
     */
    inline GetRotationOverrideResult& WithRotationOverrideId(const char* value) { SetRotationOverrideId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the on-call rotation that was
     * overridden.</p>
     */
    inline const Aws::String& GetRotationArn() const{ return m_rotationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the on-call rotation that was
     * overridden.</p>
     */
    inline void SetRotationArn(const Aws::String& value) { m_rotationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the on-call rotation that was
     * overridden.</p>
     */
    inline void SetRotationArn(Aws::String&& value) { m_rotationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the on-call rotation that was
     * overridden.</p>
     */
    inline void SetRotationArn(const char* value) { m_rotationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the on-call rotation that was
     * overridden.</p>
     */
    inline GetRotationOverrideResult& WithRotationArn(const Aws::String& value) { SetRotationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the on-call rotation that was
     * overridden.</p>
     */
    inline GetRotationOverrideResult& WithRotationArn(Aws::String&& value) { SetRotationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the on-call rotation that was
     * overridden.</p>
     */
    inline GetRotationOverrideResult& WithRotationArn(const char* value) { SetRotationArn(value); return *this;}


    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts assigned to the override of
     * the on-call rotation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNewContactIds() const{ return m_newContactIds; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts assigned to the override of
     * the on-call rotation.</p>
     */
    inline void SetNewContactIds(const Aws::Vector<Aws::String>& value) { m_newContactIds = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts assigned to the override of
     * the on-call rotation.</p>
     */
    inline void SetNewContactIds(Aws::Vector<Aws::String>&& value) { m_newContactIds = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts assigned to the override of
     * the on-call rotation.</p>
     */
    inline GetRotationOverrideResult& WithNewContactIds(const Aws::Vector<Aws::String>& value) { SetNewContactIds(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts assigned to the override of
     * the on-call rotation.</p>
     */
    inline GetRotationOverrideResult& WithNewContactIds(Aws::Vector<Aws::String>&& value) { SetNewContactIds(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts assigned to the override of
     * the on-call rotation.</p>
     */
    inline GetRotationOverrideResult& AddNewContactIds(const Aws::String& value) { m_newContactIds.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts assigned to the override of
     * the on-call rotation.</p>
     */
    inline GetRotationOverrideResult& AddNewContactIds(Aws::String&& value) { m_newContactIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts assigned to the override of
     * the on-call rotation.</p>
     */
    inline GetRotationOverrideResult& AddNewContactIds(const char* value) { m_newContactIds.push_back(value); return *this; }


    /**
     * <p>The date and time when the override goes into effect.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The date and time when the override goes into effect.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }

    /**
     * <p>The date and time when the override goes into effect.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }

    /**
     * <p>The date and time when the override goes into effect.</p>
     */
    inline GetRotationOverrideResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The date and time when the override goes into effect.</p>
     */
    inline GetRotationOverrideResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The date and time when the override ends.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The date and time when the override ends.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }

    /**
     * <p>The date and time when the override ends.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }

    /**
     * <p>The date and time when the override ends.</p>
     */
    inline GetRotationOverrideResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The date and time when the override ends.</p>
     */
    inline GetRotationOverrideResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The date and time when the override was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The date and time when the override was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }

    /**
     * <p>The date and time when the override was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }

    /**
     * <p>The date and time when the override was created.</p>
     */
    inline GetRotationOverrideResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The date and time when the override was created.</p>
     */
    inline GetRotationOverrideResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetRotationOverrideResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetRotationOverrideResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetRotationOverrideResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_rotationOverrideId;

    Aws::String m_rotationArn;

    Aws::Vector<Aws::String> m_newContactIds;

    Aws::Utils::DateTime m_startTime;

    Aws::Utils::DateTime m_endTime;

    Aws::Utils::DateTime m_createTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
