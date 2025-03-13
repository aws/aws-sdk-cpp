/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/LensShareSummary.h>
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
  class ListLensSharesResult
  {
  public:
    AWS_WELLARCHITECTED_API ListLensSharesResult() = default;
    AWS_WELLARCHITECTED_API ListLensSharesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API ListLensSharesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of lens share summaries.</p>
     */
    inline const Aws::Vector<LensShareSummary>& GetLensShareSummaries() const { return m_lensShareSummaries; }
    template<typename LensShareSummariesT = Aws::Vector<LensShareSummary>>
    void SetLensShareSummaries(LensShareSummariesT&& value) { m_lensShareSummariesHasBeenSet = true; m_lensShareSummaries = std::forward<LensShareSummariesT>(value); }
    template<typename LensShareSummariesT = Aws::Vector<LensShareSummary>>
    ListLensSharesResult& WithLensShareSummaries(LensShareSummariesT&& value) { SetLensShareSummaries(std::forward<LensShareSummariesT>(value)); return *this;}
    template<typename LensShareSummariesT = LensShareSummary>
    ListLensSharesResult& AddLensShareSummaries(LensShareSummariesT&& value) { m_lensShareSummariesHasBeenSet = true; m_lensShareSummaries.emplace_back(std::forward<LensShareSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLensSharesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLensSharesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LensShareSummary> m_lensShareSummaries;
    bool m_lensShareSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
