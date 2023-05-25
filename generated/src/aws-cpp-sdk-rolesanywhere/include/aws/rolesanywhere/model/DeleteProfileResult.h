/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/model/ProfileDetail.h>
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
namespace RolesAnywhere
{
namespace Model
{
  class DeleteProfileResult
  {
  public:
    AWS_ROLESANYWHERE_API DeleteProfileResult();
    AWS_ROLESANYWHERE_API DeleteProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROLESANYWHERE_API DeleteProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The state of the profile after a read or write operation.</p>
     */
    inline const ProfileDetail& GetProfile() const{ return m_profile; }

    /**
     * <p>The state of the profile after a read or write operation.</p>
     */
    inline void SetProfile(const ProfileDetail& value) { m_profile = value; }

    /**
     * <p>The state of the profile after a read or write operation.</p>
     */
    inline void SetProfile(ProfileDetail&& value) { m_profile = std::move(value); }

    /**
     * <p>The state of the profile after a read or write operation.</p>
     */
    inline DeleteProfileResult& WithProfile(const ProfileDetail& value) { SetProfile(value); return *this;}

    /**
     * <p>The state of the profile after a read or write operation.</p>
     */
    inline DeleteProfileResult& WithProfile(ProfileDetail&& value) { SetProfile(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ProfileDetail m_profile;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
