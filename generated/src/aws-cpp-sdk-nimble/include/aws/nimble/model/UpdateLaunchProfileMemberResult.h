/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/model/LaunchProfileMembership.h>
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
  class UpdateLaunchProfileMemberResult
  {
  public:
    AWS_NIMBLESTUDIO_API UpdateLaunchProfileMemberResult();
    AWS_NIMBLESTUDIO_API UpdateLaunchProfileMemberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NIMBLESTUDIO_API UpdateLaunchProfileMemberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The updated member. </p>
     */
    inline const LaunchProfileMembership& GetMember() const{ return m_member; }

    /**
     * <p>The updated member. </p>
     */
    inline void SetMember(const LaunchProfileMembership& value) { m_member = value; }

    /**
     * <p>The updated member. </p>
     */
    inline void SetMember(LaunchProfileMembership&& value) { m_member = std::move(value); }

    /**
     * <p>The updated member. </p>
     */
    inline UpdateLaunchProfileMemberResult& WithMember(const LaunchProfileMembership& value) { SetMember(value); return *this;}

    /**
     * <p>The updated member. </p>
     */
    inline UpdateLaunchProfileMemberResult& WithMember(LaunchProfileMembership&& value) { SetMember(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateLaunchProfileMemberResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateLaunchProfileMemberResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateLaunchProfileMemberResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    LaunchProfileMembership m_member;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
