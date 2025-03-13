/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/ChangeInfo.h>
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
   * <p>A complex type that contains the response information for the disassociate
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/DisassociateVPCFromHostedZoneResponse">AWS
   * API Reference</a></p>
   */
  class DisassociateVPCFromHostedZoneResult
  {
  public:
    AWS_ROUTE53_API DisassociateVPCFromHostedZoneResult() = default;
    AWS_ROUTE53_API DisassociateVPCFromHostedZoneResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API DisassociateVPCFromHostedZoneResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A complex type that describes the changes made to the specified private
     * hosted zone.</p>
     */
    inline const ChangeInfo& GetChangeInfo() const { return m_changeInfo; }
    template<typename ChangeInfoT = ChangeInfo>
    void SetChangeInfo(ChangeInfoT&& value) { m_changeInfoHasBeenSet = true; m_changeInfo = std::forward<ChangeInfoT>(value); }
    template<typename ChangeInfoT = ChangeInfo>
    DisassociateVPCFromHostedZoneResult& WithChangeInfo(ChangeInfoT&& value) { SetChangeInfo(std::forward<ChangeInfoT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DisassociateVPCFromHostedZoneResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ChangeInfo m_changeInfo;
    bool m_changeInfoHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
