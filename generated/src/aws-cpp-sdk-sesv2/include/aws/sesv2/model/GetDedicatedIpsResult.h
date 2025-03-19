/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/DedicatedIp.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>Information about the dedicated IP addresses that are associated with your
   * Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDedicatedIpsResponse">AWS
   * API Reference</a></p>
   */
  class GetDedicatedIpsResult
  {
  public:
    AWS_SESV2_API GetDedicatedIpsResult() = default;
    AWS_SESV2_API GetDedicatedIpsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetDedicatedIpsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of dedicated IP addresses that are associated with your Amazon Web
     * Services account.</p>
     */
    inline const Aws::Vector<DedicatedIp>& GetDedicatedIps() const { return m_dedicatedIps; }
    template<typename DedicatedIpsT = Aws::Vector<DedicatedIp>>
    void SetDedicatedIps(DedicatedIpsT&& value) { m_dedicatedIpsHasBeenSet = true; m_dedicatedIps = std::forward<DedicatedIpsT>(value); }
    template<typename DedicatedIpsT = Aws::Vector<DedicatedIp>>
    GetDedicatedIpsResult& WithDedicatedIps(DedicatedIpsT&& value) { SetDedicatedIps(std::forward<DedicatedIpsT>(value)); return *this;}
    template<typename DedicatedIpsT = DedicatedIp>
    GetDedicatedIpsResult& AddDedicatedIps(DedicatedIpsT&& value) { m_dedicatedIpsHasBeenSet = true; m_dedicatedIps.emplace_back(std::forward<DedicatedIpsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates that there are additional dedicated IP addresses to
     * list. To view additional addresses, issue another request to
     * <code>GetDedicatedIps</code>, passing this token in the <code>NextToken</code>
     * parameter.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetDedicatedIpsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDedicatedIpsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DedicatedIp> m_dedicatedIps;
    bool m_dedicatedIpsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
