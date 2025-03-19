/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace PinpointEmail
{
namespace Model
{
  /**
   * <p>A list of dedicated IP pools.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/ListDedicatedIpPoolsResponse">AWS
   * API Reference</a></p>
   */
  class ListDedicatedIpPoolsResult
  {
  public:
    AWS_PINPOINTEMAIL_API ListDedicatedIpPoolsResult() = default;
    AWS_PINPOINTEMAIL_API ListDedicatedIpPoolsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTEMAIL_API ListDedicatedIpPoolsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of all of the dedicated IP pools that are associated with your Amazon
     * Pinpoint account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDedicatedIpPools() const { return m_dedicatedIpPools; }
    template<typename DedicatedIpPoolsT = Aws::Vector<Aws::String>>
    void SetDedicatedIpPools(DedicatedIpPoolsT&& value) { m_dedicatedIpPoolsHasBeenSet = true; m_dedicatedIpPools = std::forward<DedicatedIpPoolsT>(value); }
    template<typename DedicatedIpPoolsT = Aws::Vector<Aws::String>>
    ListDedicatedIpPoolsResult& WithDedicatedIpPools(DedicatedIpPoolsT&& value) { SetDedicatedIpPools(std::forward<DedicatedIpPoolsT>(value)); return *this;}
    template<typename DedicatedIpPoolsT = Aws::String>
    ListDedicatedIpPoolsResult& AddDedicatedIpPools(DedicatedIpPoolsT&& value) { m_dedicatedIpPoolsHasBeenSet = true; m_dedicatedIpPools.emplace_back(std::forward<DedicatedIpPoolsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates that there are additional IP pools to list. To view
     * additional IP pools, issue another request to <code>ListDedicatedIpPools</code>,
     * passing this token in the <code>NextToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDedicatedIpPoolsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDedicatedIpPoolsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_dedicatedIpPools;
    bool m_dedicatedIpPoolsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
