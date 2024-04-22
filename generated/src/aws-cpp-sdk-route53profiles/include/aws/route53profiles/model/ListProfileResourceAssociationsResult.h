/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53profiles/Route53Profiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53profiles/model/ProfileResourceAssociation.h>
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
  class ListProfileResourceAssociationsResult
  {
  public:
    AWS_ROUTE53PROFILES_API ListProfileResourceAssociationsResult();
    AWS_ROUTE53PROFILES_API ListProfileResourceAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53PROFILES_API ListProfileResourceAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> If more than <code>MaxResults</code> resource associations match the
     * specified criteria, you can submit another
     * <code>ListProfileResourceAssociations</code> request to get the next group of
     * results. In the next request, specify the value of <code>NextToken</code> from
     * the previous response. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> If more than <code>MaxResults</code> resource associations match the
     * specified criteria, you can submit another
     * <code>ListProfileResourceAssociations</code> request to get the next group of
     * results. In the next request, specify the value of <code>NextToken</code> from
     * the previous response. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> If more than <code>MaxResults</code> resource associations match the
     * specified criteria, you can submit another
     * <code>ListProfileResourceAssociations</code> request to get the next group of
     * results. In the next request, specify the value of <code>NextToken</code> from
     * the previous response. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> If more than <code>MaxResults</code> resource associations match the
     * specified criteria, you can submit another
     * <code>ListProfileResourceAssociations</code> request to get the next group of
     * results. In the next request, specify the value of <code>NextToken</code> from
     * the previous response. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> If more than <code>MaxResults</code> resource associations match the
     * specified criteria, you can submit another
     * <code>ListProfileResourceAssociations</code> request to get the next group of
     * results. In the next request, specify the value of <code>NextToken</code> from
     * the previous response. </p>
     */
    inline ListProfileResourceAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> If more than <code>MaxResults</code> resource associations match the
     * specified criteria, you can submit another
     * <code>ListProfileResourceAssociations</code> request to get the next group of
     * results. In the next request, specify the value of <code>NextToken</code> from
     * the previous response. </p>
     */
    inline ListProfileResourceAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> If more than <code>MaxResults</code> resource associations match the
     * specified criteria, you can submit another
     * <code>ListProfileResourceAssociations</code> request to get the next group of
     * results. In the next request, specify the value of <code>NextToken</code> from
     * the previous response. </p>
     */
    inline ListProfileResourceAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> Information about the profile resource association that you specified in a
     * <code>GetProfileResourceAssociation</code> request. </p>
     */
    inline const Aws::Vector<ProfileResourceAssociation>& GetProfileResourceAssociations() const{ return m_profileResourceAssociations; }

    /**
     * <p> Information about the profile resource association that you specified in a
     * <code>GetProfileResourceAssociation</code> request. </p>
     */
    inline void SetProfileResourceAssociations(const Aws::Vector<ProfileResourceAssociation>& value) { m_profileResourceAssociations = value; }

    /**
     * <p> Information about the profile resource association that you specified in a
     * <code>GetProfileResourceAssociation</code> request. </p>
     */
    inline void SetProfileResourceAssociations(Aws::Vector<ProfileResourceAssociation>&& value) { m_profileResourceAssociations = std::move(value); }

    /**
     * <p> Information about the profile resource association that you specified in a
     * <code>GetProfileResourceAssociation</code> request. </p>
     */
    inline ListProfileResourceAssociationsResult& WithProfileResourceAssociations(const Aws::Vector<ProfileResourceAssociation>& value) { SetProfileResourceAssociations(value); return *this;}

    /**
     * <p> Information about the profile resource association that you specified in a
     * <code>GetProfileResourceAssociation</code> request. </p>
     */
    inline ListProfileResourceAssociationsResult& WithProfileResourceAssociations(Aws::Vector<ProfileResourceAssociation>&& value) { SetProfileResourceAssociations(std::move(value)); return *this;}

    /**
     * <p> Information about the profile resource association that you specified in a
     * <code>GetProfileResourceAssociation</code> request. </p>
     */
    inline ListProfileResourceAssociationsResult& AddProfileResourceAssociations(const ProfileResourceAssociation& value) { m_profileResourceAssociations.push_back(value); return *this; }

    /**
     * <p> Information about the profile resource association that you specified in a
     * <code>GetProfileResourceAssociation</code> request. </p>
     */
    inline ListProfileResourceAssociationsResult& AddProfileResourceAssociations(ProfileResourceAssociation&& value) { m_profileResourceAssociations.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListProfileResourceAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListProfileResourceAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListProfileResourceAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<ProfileResourceAssociation> m_profileResourceAssociations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Profiles
} // namespace Aws
