/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/HostedZone.h>
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
   * <code>UpdateHostedZoneComment</code> request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/UpdateHostedZoneCommentResponse">AWS
   * API Reference</a></p>
   */
  class UpdateHostedZoneCommentResult
  {
  public:
    AWS_ROUTE53_API UpdateHostedZoneCommentResult() = default;
    AWS_ROUTE53_API UpdateHostedZoneCommentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API UpdateHostedZoneCommentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A complex type that contains the response to the
     * <code>UpdateHostedZoneComment</code> request.</p>
     */
    inline const HostedZone& GetHostedZone() const { return m_hostedZone; }
    template<typename HostedZoneT = HostedZone>
    void SetHostedZone(HostedZoneT&& value) { m_hostedZoneHasBeenSet = true; m_hostedZone = std::forward<HostedZoneT>(value); }
    template<typename HostedZoneT = HostedZone>
    UpdateHostedZoneCommentResult& WithHostedZone(HostedZoneT&& value) { SetHostedZone(std::forward<HostedZoneT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateHostedZoneCommentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    HostedZone m_hostedZone;
    bool m_hostedZoneHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
