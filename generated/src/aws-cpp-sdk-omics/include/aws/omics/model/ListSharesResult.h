/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ShareDetails.h>
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
namespace Omics
{
namespace Model
{
  class ListSharesResult
  {
  public:
    AWS_OMICS_API ListSharesResult() = default;
    AWS_OMICS_API ListSharesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListSharesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The shares available and their metadata details.</p>
     */
    inline const Aws::Vector<ShareDetails>& GetShares() const { return m_shares; }
    template<typename SharesT = Aws::Vector<ShareDetails>>
    void SetShares(SharesT&& value) { m_sharesHasBeenSet = true; m_shares = std::forward<SharesT>(value); }
    template<typename SharesT = Aws::Vector<ShareDetails>>
    ListSharesResult& WithShares(SharesT&& value) { SetShares(std::forward<SharesT>(value)); return *this;}
    template<typename SharesT = ShareDetails>
    ListSharesResult& AddShares(SharesT&& value) { m_sharesHasBeenSet = true; m_shares.emplace_back(std::forward<SharesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Next token returned in the response of a previous ListSharesResponse call.
     * Used to get the next page of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSharesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSharesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ShareDetails> m_shares;
    bool m_sharesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
