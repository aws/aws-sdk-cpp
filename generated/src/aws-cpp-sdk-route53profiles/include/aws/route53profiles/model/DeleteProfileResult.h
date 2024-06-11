﻿/**
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
  class DeleteProfileResult
  {
  public:
    AWS_ROUTE53PROFILES_API DeleteProfileResult();
    AWS_ROUTE53PROFILES_API DeleteProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53PROFILES_API DeleteProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Information about the <code>DeleteProfile</code> request, including the
     * status of the request. </p>
     */
    inline const Profile& GetProfile() const{ return m_profile; }
    inline void SetProfile(const Profile& value) { m_profile = value; }
    inline void SetProfile(Profile&& value) { m_profile = std::move(value); }
    inline DeleteProfileResult& WithProfile(const Profile& value) { SetProfile(value); return *this;}
    inline DeleteProfileResult& WithProfile(Profile&& value) { SetProfile(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Profile m_profile;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Profiles
} // namespace Aws
