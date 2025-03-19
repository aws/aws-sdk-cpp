/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/Offering.h>
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
namespace MediaConnect
{
namespace Model
{
  class ListOfferingsResult
  {
  public:
    AWS_MEDIACONNECT_API ListOfferingsResult() = default;
    AWS_MEDIACONNECT_API ListOfferingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API ListOfferingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The token that identifies the batch of results that you want to see. </p>
     * <p>For example, you submit a <code>ListOfferings</code> request with
     * <code>MaxResults</code> set at 5. The service returns the first batch of results
     * (up to 5) and a <code>NextToken</code> value. To see the next batch of results,
     * you can submit the <code>ListOfferings</code> request a second time and specify
     * the <code>NextToken</code> value.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListOfferingsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of offerings that are available to this account in the current Amazon
     * Web Services Region.</p>
     */
    inline const Aws::Vector<Offering>& GetOfferings() const { return m_offerings; }
    template<typename OfferingsT = Aws::Vector<Offering>>
    void SetOfferings(OfferingsT&& value) { m_offeringsHasBeenSet = true; m_offerings = std::forward<OfferingsT>(value); }
    template<typename OfferingsT = Aws::Vector<Offering>>
    ListOfferingsResult& WithOfferings(OfferingsT&& value) { SetOfferings(std::forward<OfferingsT>(value)); return *this;}
    template<typename OfferingsT = Offering>
    ListOfferingsResult& AddOfferings(OfferingsT&& value) { m_offeringsHasBeenSet = true; m_offerings.emplace_back(std::forward<OfferingsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListOfferingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Offering> m_offerings;
    bool m_offeringsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
