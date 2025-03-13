/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/DelegationSet.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{
  /**
   * <p>A complex type that contains the response to the
   * <code>GetReusableDelegationSet</code> request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetReusableDelegationSetResponse">AWS
   * API Reference</a></p>
   */
  class GetReusableDelegationSetResult
  {
  public:
    AWS_ROUTE53_API GetReusableDelegationSetResult() = default;
    AWS_ROUTE53_API GetReusableDelegationSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API GetReusableDelegationSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A complex type that contains information about the reusable delegation
     * set.</p>
     */
    inline const DelegationSet& GetDelegationSet() const { return m_delegationSet; }
    template<typename DelegationSetT = DelegationSet>
    void SetDelegationSet(DelegationSetT&& value) { m_delegationSetHasBeenSet = true; m_delegationSet = std::forward<DelegationSetT>(value); }
    template<typename DelegationSetT = DelegationSet>
    GetReusableDelegationSetResult& WithDelegationSet(DelegationSetT&& value) { SetDelegationSet(std::forward<DelegationSetT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetReusableDelegationSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DelegationSet m_delegationSet;
    bool m_delegationSetHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
