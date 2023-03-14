/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/model/StudioMembership.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace NimbleStudio
{
namespace Model
{
  class GetStudioMemberResult
  {
  public:
    AWS_NIMBLESTUDIO_API GetStudioMemberResult();
    AWS_NIMBLESTUDIO_API GetStudioMemberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NIMBLESTUDIO_API GetStudioMemberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The member.</p>
     */
    inline const StudioMembership& GetMember() const{ return m_member; }

    /**
     * <p>The member.</p>
     */
    inline void SetMember(const StudioMembership& value) { m_member = value; }

    /**
     * <p>The member.</p>
     */
    inline void SetMember(StudioMembership&& value) { m_member = std::move(value); }

    /**
     * <p>The member.</p>
     */
    inline GetStudioMemberResult& WithMember(const StudioMembership& value) { SetMember(value); return *this;}

    /**
     * <p>The member.</p>
     */
    inline GetStudioMemberResult& WithMember(StudioMembership&& value) { SetMember(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetStudioMemberResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetStudioMemberResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetStudioMemberResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    StudioMembership m_member;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
