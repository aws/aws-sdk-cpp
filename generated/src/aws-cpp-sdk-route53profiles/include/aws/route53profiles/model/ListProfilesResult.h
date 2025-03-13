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
    AWS_ROUTE53PROFILES_API ListProfilesResult() = default;
    AWS_ROUTE53PROFILES_API ListProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53PROFILES_API ListProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> If more than <code>MaxResults</code> resource associations match the
     * specified criteria, you can submit another <code>ListProfiles</code> request to
     * get the next group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListProfilesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Summary information about the Profiles. </p>
     */
    inline const Aws::Vector<ProfileSummary>& GetProfileSummaries() const { return m_profileSummaries; }
    template<typename ProfileSummariesT = Aws::Vector<ProfileSummary>>
    void SetProfileSummaries(ProfileSummariesT&& value) { m_profileSummariesHasBeenSet = true; m_profileSummaries = std::forward<ProfileSummariesT>(value); }
    template<typename ProfileSummariesT = Aws::Vector<ProfileSummary>>
    ListProfilesResult& WithProfileSummaries(ProfileSummariesT&& value) { SetProfileSummaries(std::forward<ProfileSummariesT>(value)); return *this;}
    template<typename ProfileSummariesT = ProfileSummary>
    ListProfilesResult& AddProfileSummaries(ProfileSummariesT&& value) { m_profileSummariesHasBeenSet = true; m_profileSummaries.emplace_back(std::forward<ProfileSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListProfilesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ProfileSummary> m_profileSummaries;
    bool m_profileSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Profiles
} // namespace Aws
