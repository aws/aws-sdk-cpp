/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53profiles/Route53Profiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53profiles/model/ProfileSummary.h>
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
  class ListProfilesResult
  {
  public:
    AWS_ROUTE53PROFILES_API ListProfilesResult();
    AWS_ROUTE53PROFILES_API ListProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53PROFILES_API ListProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> If more than <code>MaxResults</code> resource associations match the
     * specified criteria, you can submit another <code>ListProfiles</code> request to
     * get the next group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> If more than <code>MaxResults</code> resource associations match the
     * specified criteria, you can submit another <code>ListProfiles</code> request to
     * get the next group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> If more than <code>MaxResults</code> resource associations match the
     * specified criteria, you can submit another <code>ListProfiles</code> request to
     * get the next group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> If more than <code>MaxResults</code> resource associations match the
     * specified criteria, you can submit another <code>ListProfiles</code> request to
     * get the next group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> If more than <code>MaxResults</code> resource associations match the
     * specified criteria, you can submit another <code>ListProfiles</code> request to
     * get the next group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline ListProfilesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> If more than <code>MaxResults</code> resource associations match the
     * specified criteria, you can submit another <code>ListProfiles</code> request to
     * get the next group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline ListProfilesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> If more than <code>MaxResults</code> resource associations match the
     * specified criteria, you can submit another <code>ListProfiles</code> request to
     * get the next group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline ListProfilesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> Summary information about the Profiles. </p>
     */
    inline const Aws::Vector<ProfileSummary>& GetProfileSummaries() const{ return m_profileSummaries; }

    /**
     * <p> Summary information about the Profiles. </p>
     */
    inline void SetProfileSummaries(const Aws::Vector<ProfileSummary>& value) { m_profileSummaries = value; }

    /**
     * <p> Summary information about the Profiles. </p>
     */
    inline void SetProfileSummaries(Aws::Vector<ProfileSummary>&& value) { m_profileSummaries = std::move(value); }

    /**
     * <p> Summary information about the Profiles. </p>
     */
    inline ListProfilesResult& WithProfileSummaries(const Aws::Vector<ProfileSummary>& value) { SetProfileSummaries(value); return *this;}

    /**
     * <p> Summary information about the Profiles. </p>
     */
    inline ListProfilesResult& WithProfileSummaries(Aws::Vector<ProfileSummary>&& value) { SetProfileSummaries(std::move(value)); return *this;}

    /**
     * <p> Summary information about the Profiles. </p>
     */
    inline ListProfilesResult& AddProfileSummaries(const ProfileSummary& value) { m_profileSummaries.push_back(value); return *this; }

    /**
     * <p> Summary information about the Profiles. </p>
     */
    inline ListProfilesResult& AddProfileSummaries(ProfileSummary&& value) { m_profileSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListProfilesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListProfilesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListProfilesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<ProfileSummary> m_profileSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Profiles
} // namespace Aws
