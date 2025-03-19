/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/RRType.h>
#include <aws/route53/model/ResourceRecordSet.h>
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
   * <p>A complex type that contains list information for the resource record
   * set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListResourceRecordSetsResponse">AWS
   * API Reference</a></p>
   */
  class ListResourceRecordSetsResult
  {
  public:
    AWS_ROUTE53_API ListResourceRecordSetsResult() = default;
    AWS_ROUTE53_API ListResourceRecordSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API ListResourceRecordSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about multiple resource record sets.</p>
     */
    inline const Aws::Vector<ResourceRecordSet>& GetResourceRecordSets() const { return m_resourceRecordSets; }
    template<typename ResourceRecordSetsT = Aws::Vector<ResourceRecordSet>>
    void SetResourceRecordSets(ResourceRecordSetsT&& value) { m_resourceRecordSetsHasBeenSet = true; m_resourceRecordSets = std::forward<ResourceRecordSetsT>(value); }
    template<typename ResourceRecordSetsT = Aws::Vector<ResourceRecordSet>>
    ListResourceRecordSetsResult& WithResourceRecordSets(ResourceRecordSetsT&& value) { SetResourceRecordSets(std::forward<ResourceRecordSetsT>(value)); return *this;}
    template<typename ResourceRecordSetsT = ResourceRecordSet>
    ListResourceRecordSetsResult& AddResourceRecordSets(ResourceRecordSetsT&& value) { m_resourceRecordSetsHasBeenSet = true; m_resourceRecordSets.emplace_back(std::forward<ResourceRecordSetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A flag that indicates whether more resource record sets remain to be listed.
     * If your results were truncated, you can make a follow-up pagination request by
     * using the <code>NextRecordName</code> element.</p>
     */
    inline bool GetIsTruncated() const { return m_isTruncated; }
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }
    inline ListResourceRecordSetsResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the results were truncated, the name of the next record in the list.</p>
     * <p>This element is present only if <code>IsTruncated</code> is true. </p>
     */
    inline const Aws::String& GetNextRecordName() const { return m_nextRecordName; }
    template<typename NextRecordNameT = Aws::String>
    void SetNextRecordName(NextRecordNameT&& value) { m_nextRecordNameHasBeenSet = true; m_nextRecordName = std::forward<NextRecordNameT>(value); }
    template<typename NextRecordNameT = Aws::String>
    ListResourceRecordSetsResult& WithNextRecordName(NextRecordNameT&& value) { SetNextRecordName(std::forward<NextRecordNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the results were truncated, the type of the next record in the list.</p>
     * <p>This element is present only if <code>IsTruncated</code> is true. </p>
     */
    inline RRType GetNextRecordType() const { return m_nextRecordType; }
    inline void SetNextRecordType(RRType value) { m_nextRecordTypeHasBeenSet = true; m_nextRecordType = value; }
    inline ListResourceRecordSetsResult& WithNextRecordType(RRType value) { SetNextRecordType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>Resource record sets that have a routing policy other than simple:</i> If
     * results were truncated for a given DNS name and type, the value of
     * <code>SetIdentifier</code> for the next resource record set that has the current
     * DNS name and type.</p> <p>For information about routing policies, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/routing-policy.html">Choosing
     * a Routing Policy</a> in the <i>Amazon Route 53 Developer Guide</i>.</p>
     */
    inline const Aws::String& GetNextRecordIdentifier() const { return m_nextRecordIdentifier; }
    template<typename NextRecordIdentifierT = Aws::String>
    void SetNextRecordIdentifier(NextRecordIdentifierT&& value) { m_nextRecordIdentifierHasBeenSet = true; m_nextRecordIdentifier = std::forward<NextRecordIdentifierT>(value); }
    template<typename NextRecordIdentifierT = Aws::String>
    ListResourceRecordSetsResult& WithNextRecordIdentifier(NextRecordIdentifierT&& value) { SetNextRecordIdentifier(std::forward<NextRecordIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of records you requested.</p>
     */
    inline const Aws::String& GetMaxItems() const { return m_maxItems; }
    template<typename MaxItemsT = Aws::String>
    void SetMaxItems(MaxItemsT&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::forward<MaxItemsT>(value); }
    template<typename MaxItemsT = Aws::String>
    ListResourceRecordSetsResult& WithMaxItems(MaxItemsT&& value) { SetMaxItems(std::forward<MaxItemsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListResourceRecordSetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceRecordSet> m_resourceRecordSets;
    bool m_resourceRecordSetsHasBeenSet = false;

    bool m_isTruncated{false};
    bool m_isTruncatedHasBeenSet = false;

    Aws::String m_nextRecordName;
    bool m_nextRecordNameHasBeenSet = false;

    RRType m_nextRecordType{RRType::NOT_SET};
    bool m_nextRecordTypeHasBeenSet = false;

    Aws::String m_nextRecordIdentifier;
    bool m_nextRecordIdentifierHasBeenSet = false;

    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
