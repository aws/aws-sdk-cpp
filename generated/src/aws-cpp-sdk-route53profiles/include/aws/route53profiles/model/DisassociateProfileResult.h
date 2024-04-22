/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53profiles/Route53Profiles_EXPORTS.h>
#include <aws/route53profiles/model/ProfileAssociation.h>
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
  class DisassociateProfileResult
  {
  public:
    AWS_ROUTE53PROFILES_API DisassociateProfileResult();
    AWS_ROUTE53PROFILES_API DisassociateProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53PROFILES_API DisassociateProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Information about the <code>DisassociateProfile</code> request. </p>
     */
    inline const ProfileAssociation& GetProfileAssociation() const{ return m_profileAssociation; }

    /**
     * <p> Information about the <code>DisassociateProfile</code> request. </p>
     */
    inline void SetProfileAssociation(const ProfileAssociation& value) { m_profileAssociation = value; }

    /**
     * <p> Information about the <code>DisassociateProfile</code> request. </p>
     */
    inline void SetProfileAssociation(ProfileAssociation&& value) { m_profileAssociation = std::move(value); }

    /**
     * <p> Information about the <code>DisassociateProfile</code> request. </p>
     */
    inline DisassociateProfileResult& WithProfileAssociation(const ProfileAssociation& value) { SetProfileAssociation(value); return *this;}

    /**
     * <p> Information about the <code>DisassociateProfile</code> request. </p>
     */
    inline DisassociateProfileResult& WithProfileAssociation(ProfileAssociation&& value) { SetProfileAssociation(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DisassociateProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DisassociateProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DisassociateProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ProfileAssociation m_profileAssociation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Profiles
} // namespace Aws
