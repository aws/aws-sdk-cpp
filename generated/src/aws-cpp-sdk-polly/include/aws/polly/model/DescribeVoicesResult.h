/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/polly/model/Voice.h>
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
namespace Polly
{
namespace Model
{
  class DescribeVoicesResult
  {
  public:
    AWS_POLLY_API DescribeVoicesResult() = default;
    AWS_POLLY_API DescribeVoicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_POLLY_API DescribeVoicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of voices with their properties.</p>
     */
    inline const Aws::Vector<Voice>& GetVoices() const { return m_voices; }
    template<typename VoicesT = Aws::Vector<Voice>>
    void SetVoices(VoicesT&& value) { m_voicesHasBeenSet = true; m_voices = std::forward<VoicesT>(value); }
    template<typename VoicesT = Aws::Vector<Voice>>
    DescribeVoicesResult& WithVoices(VoicesT&& value) { SetVoices(std::forward<VoicesT>(value)); return *this;}
    template<typename VoicesT = Voice>
    DescribeVoicesResult& AddVoices(VoicesT&& value) { m_voicesHasBeenSet = true; m_voices.emplace_back(std::forward<VoicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to use in the next request to continue the listing of
     * voices. <code>NextToken</code> is returned only if the response is
     * truncated.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeVoicesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeVoicesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Voice> m_voices;
    bool m_voicesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
