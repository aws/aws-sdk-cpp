/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A complex type that contains the <code>CheckerIpRanges</code>
   * element.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetCheckerIpRangesResponse">AWS
   * API Reference</a></p>
   */
  class GetCheckerIpRangesResult
  {
  public:
    AWS_ROUTE53_API GetCheckerIpRangesResult() = default;
    AWS_ROUTE53_API GetCheckerIpRangesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API GetCheckerIpRangesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A complex type that contains sorted list of IP ranges in CIDR format for
     * Amazon Route 53 health checkers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCheckerIpRanges() const { return m_checkerIpRanges; }
    template<typename CheckerIpRangesT = Aws::Vector<Aws::String>>
    void SetCheckerIpRanges(CheckerIpRangesT&& value) { m_checkerIpRangesHasBeenSet = true; m_checkerIpRanges = std::forward<CheckerIpRangesT>(value); }
    template<typename CheckerIpRangesT = Aws::Vector<Aws::String>>
    GetCheckerIpRangesResult& WithCheckerIpRanges(CheckerIpRangesT&& value) { SetCheckerIpRanges(std::forward<CheckerIpRangesT>(value)); return *this;}
    template<typename CheckerIpRangesT = Aws::String>
    GetCheckerIpRangesResult& AddCheckerIpRanges(CheckerIpRangesT&& value) { m_checkerIpRangesHasBeenSet = true; m_checkerIpRanges.emplace_back(std::forward<CheckerIpRangesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCheckerIpRangesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_checkerIpRanges;
    bool m_checkerIpRangesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
