/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53profiles/Route53Profiles_EXPORTS.h>
#include <aws/route53profiles/model/ProfileResourceAssociation.h>
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
  class AssociateResourceToProfileResult
  {
  public:
    AWS_ROUTE53PROFILES_API AssociateResourceToProfileResult();
    AWS_ROUTE53PROFILES_API AssociateResourceToProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53PROFILES_API AssociateResourceToProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Infromation about the <code>AssociateResourceToProfile</code>, including a
     * status message. </p>
     */
    inline const ProfileResourceAssociation& GetProfileResourceAssociation() const{ return m_profileResourceAssociation; }

    /**
     * <p> Infromation about the <code>AssociateResourceToProfile</code>, including a
     * status message. </p>
     */
    inline void SetProfileResourceAssociation(const ProfileResourceAssociation& value) { m_profileResourceAssociation = value; }

    /**
     * <p> Infromation about the <code>AssociateResourceToProfile</code>, including a
     * status message. </p>
     */
    inline void SetProfileResourceAssociation(ProfileResourceAssociation&& value) { m_profileResourceAssociation = std::move(value); }

    /**
     * <p> Infromation about the <code>AssociateResourceToProfile</code>, including a
     * status message. </p>
     */
    inline AssociateResourceToProfileResult& WithProfileResourceAssociation(const ProfileResourceAssociation& value) { SetProfileResourceAssociation(value); return *this;}

    /**
     * <p> Infromation about the <code>AssociateResourceToProfile</code>, including a
     * status message. </p>
     */
    inline AssociateResourceToProfileResult& WithProfileResourceAssociation(ProfileResourceAssociation&& value) { SetProfileResourceAssociation(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline AssociateResourceToProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline AssociateResourceToProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline AssociateResourceToProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ProfileResourceAssociation m_profileResourceAssociation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Profiles
} // namespace Aws
