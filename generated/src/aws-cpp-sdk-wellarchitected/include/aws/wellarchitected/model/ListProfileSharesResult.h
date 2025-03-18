/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/ProfileShareSummary.h>
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
  class ListProfileSharesResult
  {
  public:
    AWS_WELLARCHITECTED_API ListProfileSharesResult() = default;
    AWS_WELLARCHITECTED_API ListProfileSharesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API ListProfileSharesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Profile share summaries.</p>
     */
    inline const Aws::Vector<ProfileShareSummary>& GetProfileShareSummaries() const { return m_profileShareSummaries; }
    template<typename ProfileShareSummariesT = Aws::Vector<ProfileShareSummary>>
    void SetProfileShareSummaries(ProfileShareSummariesT&& value) { m_profileShareSummariesHasBeenSet = true; m_profileShareSummaries = std::forward<ProfileShareSummariesT>(value); }
    template<typename ProfileShareSummariesT = Aws::Vector<ProfileShareSummary>>
    ListProfileSharesResult& WithProfileShareSummaries(ProfileShareSummariesT&& value) { SetProfileShareSummaries(std::forward<ProfileShareSummariesT>(value)); return *this;}
    template<typename ProfileShareSummariesT = ProfileShareSummary>
    ListProfileSharesResult& AddProfileShareSummaries(ProfileShareSummariesT&& value) { m_profileShareSummariesHasBeenSet = true; m_profileShareSummaries.emplace_back(std::forward<ProfileShareSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListProfileSharesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListProfileSharesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProfileShareSummary> m_profileShareSummaries;
    bool m_profileShareSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
