/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/HostedZoneSummary.h>
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
  class ListHostedZonesByVPCResult
  {
  public:
    AWS_ROUTE53_API ListHostedZonesByVPCResult() = default;
    AWS_ROUTE53_API ListHostedZonesByVPCResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API ListHostedZonesByVPCResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list that contains one <code>HostedZoneSummary</code> element for each
     * hosted zone that the specified Amazon VPC is associated with. Each
     * <code>HostedZoneSummary</code> element contains the hosted zone name and ID, and
     * information about who owns the hosted zone.</p>
     */
    inline const Aws::Vector<HostedZoneSummary>& GetHostedZoneSummaries() const { return m_hostedZoneSummaries; }
    template<typename HostedZoneSummariesT = Aws::Vector<HostedZoneSummary>>
    void SetHostedZoneSummaries(HostedZoneSummariesT&& value) { m_hostedZoneSummariesHasBeenSet = true; m_hostedZoneSummaries = std::forward<HostedZoneSummariesT>(value); }
    template<typename HostedZoneSummariesT = Aws::Vector<HostedZoneSummary>>
    ListHostedZonesByVPCResult& WithHostedZoneSummaries(HostedZoneSummariesT&& value) { SetHostedZoneSummaries(std::forward<HostedZoneSummariesT>(value)); return *this;}
    template<typename HostedZoneSummariesT = HostedZoneSummary>
    ListHostedZonesByVPCResult& AddHostedZoneSummaries(HostedZoneSummariesT&& value) { m_hostedZoneSummariesHasBeenSet = true; m_hostedZoneSummaries.emplace_back(std::forward<HostedZoneSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value that you specified for <code>MaxItems</code> in the most recent
     * <code>ListHostedZonesByVPC</code> request.</p>
     */
    inline const Aws::String& GetMaxItems() const { return m_maxItems; }
    template<typename MaxItemsT = Aws::String>
    void SetMaxItems(MaxItemsT&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::forward<MaxItemsT>(value); }
    template<typename MaxItemsT = Aws::String>
    ListHostedZonesByVPCResult& WithMaxItems(MaxItemsT&& value) { SetMaxItems(std::forward<MaxItemsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that you will use for <code>NextToken</code> in the next
     * <code>ListHostedZonesByVPC</code> request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListHostedZonesByVPCResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListHostedZonesByVPCResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<HostedZoneSummary> m_hostedZoneSummaries;
    bool m_hostedZoneSummariesHasBeenSet = false;

    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
