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
  class AssociateProfileResult
  {
  public:
    AWS_ROUTE53PROFILES_API AssociateProfileResult();
    AWS_ROUTE53PROFILES_API AssociateProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53PROFILES_API AssociateProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The association that you just created. The association has an ID that you
     * can use to identify it in other requests, like update and delete. </p>
     */
    inline const ProfileAssociation& GetProfileAssociation() const{ return m_profileAssociation; }

    /**
     * <p> The association that you just created. The association has an ID that you
     * can use to identify it in other requests, like update and delete. </p>
     */
    inline void SetProfileAssociation(const ProfileAssociation& value) { m_profileAssociation = value; }

    /**
     * <p> The association that you just created. The association has an ID that you
     * can use to identify it in other requests, like update and delete. </p>
     */
    inline void SetProfileAssociation(ProfileAssociation&& value) { m_profileAssociation = std::move(value); }

    /**
     * <p> The association that you just created. The association has an ID that you
     * can use to identify it in other requests, like update and delete. </p>
     */
    inline AssociateProfileResult& WithProfileAssociation(const ProfileAssociation& value) { SetProfileAssociation(value); return *this;}

    /**
     * <p> The association that you just created. The association has an ID that you
     * can use to identify it in other requests, like update and delete. </p>
     */
    inline AssociateProfileResult& WithProfileAssociation(ProfileAssociation&& value) { SetProfileAssociation(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline AssociateProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline AssociateProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline AssociateProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ProfileAssociation m_profileAssociation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Profiles
} // namespace Aws
