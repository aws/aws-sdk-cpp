/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/ProfileSummary.h>
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
namespace WellArchitected
{
namespace Model
{
  class ListProfilesResult
  {
  public:
    AWS_WELLARCHITECTED_API ListProfilesResult() = default;
    AWS_WELLARCHITECTED_API ListProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API ListProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Profile summaries.</p>
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
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListProfilesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListProfilesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProfileSummary> m_profileSummaries;
    bool m_profileSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
