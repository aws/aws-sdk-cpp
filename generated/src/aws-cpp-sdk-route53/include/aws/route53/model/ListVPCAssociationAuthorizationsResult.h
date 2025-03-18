/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53/model/VPC.h>
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
   * <p>A complex type that contains the response information for the
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListVPCAssociationAuthorizationsResponse">AWS
   * API Reference</a></p>
   */
  class ListVPCAssociationAuthorizationsResult
  {
  public:
    AWS_ROUTE53_API ListVPCAssociationAuthorizationsResult() = default;
    AWS_ROUTE53_API ListVPCAssociationAuthorizationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API ListVPCAssociationAuthorizationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the hosted zone that you can associate the listed VPCs with.</p>
     */
    inline const Aws::String& GetHostedZoneId() const { return m_hostedZoneId; }
    template<typename HostedZoneIdT = Aws::String>
    void SetHostedZoneId(HostedZoneIdT&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::forward<HostedZoneIdT>(value); }
    template<typename HostedZoneIdT = Aws::String>
    ListVPCAssociationAuthorizationsResult& WithHostedZoneId(HostedZoneIdT&& value) { SetHostedZoneId(std::forward<HostedZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the response includes a <code>NextToken</code> element, there are more
     * VPCs that can be associated with the specified hosted zone. To get the next page
     * of VPCs, submit another <code>ListVPCAssociationAuthorizations</code> request,
     * and include the value of the <code>NextToken</code> element from the response in
     * the <code>nexttoken</code> request parameter.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListVPCAssociationAuthorizationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of VPCs that are authorized to be associated with the specified
     * hosted zone.</p>
     */
    inline const Aws::Vector<VPC>& GetVPCs() const { return m_vPCs; }
    template<typename VPCsT = Aws::Vector<VPC>>
    void SetVPCs(VPCsT&& value) { m_vPCsHasBeenSet = true; m_vPCs = std::forward<VPCsT>(value); }
    template<typename VPCsT = Aws::Vector<VPC>>
    ListVPCAssociationAuthorizationsResult& WithVPCs(VPCsT&& value) { SetVPCs(std::forward<VPCsT>(value)); return *this;}
    template<typename VPCsT = VPC>
    ListVPCAssociationAuthorizationsResult& AddVPCs(VPCsT&& value) { m_vPCsHasBeenSet = true; m_vPCs.emplace_back(std::forward<VPCsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVPCAssociationAuthorizationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<VPC> m_vPCs;
    bool m_vPCsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
