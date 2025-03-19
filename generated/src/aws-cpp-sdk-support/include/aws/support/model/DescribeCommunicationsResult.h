/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/support/model/Communication.h>
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
namespace Support
{
namespace Model
{
  /**
   * <p>The communications returned by the <a>DescribeCommunications</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeCommunicationsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeCommunicationsResult
  {
  public:
    AWS_SUPPORT_API DescribeCommunicationsResult() = default;
    AWS_SUPPORT_API DescribeCommunicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORT_API DescribeCommunicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The communications for the case.</p>
     */
    inline const Aws::Vector<Communication>& GetCommunications() const { return m_communications; }
    template<typename CommunicationsT = Aws::Vector<Communication>>
    void SetCommunications(CommunicationsT&& value) { m_communicationsHasBeenSet = true; m_communications = std::forward<CommunicationsT>(value); }
    template<typename CommunicationsT = Aws::Vector<Communication>>
    DescribeCommunicationsResult& WithCommunications(CommunicationsT&& value) { SetCommunications(std::forward<CommunicationsT>(value)); return *this;}
    template<typename CommunicationsT = Communication>
    DescribeCommunicationsResult& AddCommunications(CommunicationsT&& value) { m_communicationsHasBeenSet = true; m_communications.emplace_back(std::forward<CommunicationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A resumption point for pagination.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeCommunicationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeCommunicationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Communication> m_communications;
    bool m_communicationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
