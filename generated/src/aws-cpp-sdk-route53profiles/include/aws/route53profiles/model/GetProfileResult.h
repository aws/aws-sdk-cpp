/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53profiles/Route53Profiles_EXPORTS.h>
#include <aws/route53profiles/model/Profile.h>
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
namespace Route53Profiles
{
namespace Model
{
  class GetProfileResult
  {
  public:
    AWS_ROUTE53PROFILES_API GetProfileResult();
    AWS_ROUTE53PROFILES_API GetProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53PROFILES_API GetProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Information about the Profile, including the status of the Profile. </p>
     */
    inline const Profile& GetProfile() const{ return m_profile; }

    /**
     * <p> Information about the Profile, including the status of the Profile. </p>
     */
    inline void SetProfile(const Profile& value) { m_profile = value; }

    /**
     * <p> Information about the Profile, including the status of the Profile. </p>
     */
    inline void SetProfile(Profile&& value) { m_profile = std::move(value); }

    /**
     * <p> Information about the Profile, including the status of the Profile. </p>
     */
    inline GetProfileResult& WithProfile(const Profile& value) { SetProfile(value); return *this;}

    /**
     * <p> Information about the Profile, including the status of the Profile. </p>
     */
    inline GetProfileResult& WithProfile(Profile&& value) { SetProfile(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Profile m_profile;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Profiles
} // namespace Aws
