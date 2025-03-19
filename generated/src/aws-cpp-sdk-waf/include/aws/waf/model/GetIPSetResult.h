/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/model/IPSet.h>
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
namespace WAF
{
namespace Model
{
  class GetIPSetResult
  {
  public:
    AWS_WAF_API GetIPSetResult() = default;
    AWS_WAF_API GetIPSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API GetIPSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the <a>IPSet</a> that you specified in the
     * <code>GetIPSet</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>IPSet</a>: Contains <code>IPSetDescriptors</code>,
     * <code>IPSetId</code>, and <code>Name</code> </p> </li> <li> <p>
     * <code>IPSetDescriptors</code>: Contains an array of <a>IPSetDescriptor</a>
     * objects. Each <code>IPSetDescriptor</code> object contains <code>Type</code> and
     * <code>Value</code> </p> </li> </ul>
     */
    inline const IPSet& GetIPSet() const { return m_iPSet; }
    template<typename IPSetT = IPSet>
    void SetIPSet(IPSetT&& value) { m_iPSetHasBeenSet = true; m_iPSet = std::forward<IPSetT>(value); }
    template<typename IPSetT = IPSet>
    GetIPSetResult& WithIPSet(IPSetT&& value) { SetIPSet(std::forward<IPSetT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetIPSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    IPSet m_iPSet;
    bool m_iPSetHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
