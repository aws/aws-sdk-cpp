/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53profiles/Route53Profiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53profiles/model/ProfileAssociation.h>
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
  class ListProfileAssociationsResult
  {
  public:
    AWS_ROUTE53PROFILES_API ListProfileAssociationsResult();
    AWS_ROUTE53PROFILES_API ListProfileAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53PROFILES_API ListProfileAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> If more than <code>MaxResults</code> profile associations match the
     * specified criteria, you can submit another <code>ListProfileAssociations</code>
     * request to get the next group of results. In the next request, specify the value
     * of <code>NextToken</code> from the previous response. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> If more than <code>MaxResults</code> profile associations match the
     * specified criteria, you can submit another <code>ListProfileAssociations</code>
     * request to get the next group of results. In the next request, specify the value
     * of <code>NextToken</code> from the previous response. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> If more than <code>MaxResults</code> profile associations match the
     * specified criteria, you can submit another <code>ListProfileAssociations</code>
     * request to get the next group of results. In the next request, specify the value
     * of <code>NextToken</code> from the previous response. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> If more than <code>MaxResults</code> profile associations match the
     * specified criteria, you can submit another <code>ListProfileAssociations</code>
     * request to get the next group of results. In the next request, specify the value
     * of <code>NextToken</code> from the previous response. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> If more than <code>MaxResults</code> profile associations match the
     * specified criteria, you can submit another <code>ListProfileAssociations</code>
     * request to get the next group of results. In the next request, specify the value
     * of <code>NextToken</code> from the previous response. </p>
     */
    inline ListProfileAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> If more than <code>MaxResults</code> profile associations match the
     * specified criteria, you can submit another <code>ListProfileAssociations</code>
     * request to get the next group of results. In the next request, specify the value
     * of <code>NextToken</code> from the previous response. </p>
     */
    inline ListProfileAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> If more than <code>MaxResults</code> profile associations match the
     * specified criteria, you can submit another <code>ListProfileAssociations</code>
     * request to get the next group of results. In the next request, specify the value
     * of <code>NextToken</code> from the previous response. </p>
     */
    inline ListProfileAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> A complex type that containts settings information about the profile's VPC
     * associations. </p>
     */
    inline const Aws::Vector<ProfileAssociation>& GetProfileAssociations() const{ return m_profileAssociations; }

    /**
     * <p> A complex type that containts settings information about the profile's VPC
     * associations. </p>
     */
    inline void SetProfileAssociations(const Aws::Vector<ProfileAssociation>& value) { m_profileAssociations = value; }

    /**
     * <p> A complex type that containts settings information about the profile's VPC
     * associations. </p>
     */
    inline void SetProfileAssociations(Aws::Vector<ProfileAssociation>&& value) { m_profileAssociations = std::move(value); }

    /**
     * <p> A complex type that containts settings information about the profile's VPC
     * associations. </p>
     */
    inline ListProfileAssociationsResult& WithProfileAssociations(const Aws::Vector<ProfileAssociation>& value) { SetProfileAssociations(value); return *this;}

    /**
     * <p> A complex type that containts settings information about the profile's VPC
     * associations. </p>
     */
    inline ListProfileAssociationsResult& WithProfileAssociations(Aws::Vector<ProfileAssociation>&& value) { SetProfileAssociations(std::move(value)); return *this;}

    /**
     * <p> A complex type that containts settings information about the profile's VPC
     * associations. </p>
     */
    inline ListProfileAssociationsResult& AddProfileAssociations(const ProfileAssociation& value) { m_profileAssociations.push_back(value); return *this; }

    /**
     * <p> A complex type that containts settings information about the profile's VPC
     * associations. </p>
     */
    inline ListProfileAssociationsResult& AddProfileAssociations(ProfileAssociation&& value) { m_profileAssociations.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListProfileAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListProfileAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListProfileAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<ProfileAssociation> m_profileAssociations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Profiles
} // namespace Aws
