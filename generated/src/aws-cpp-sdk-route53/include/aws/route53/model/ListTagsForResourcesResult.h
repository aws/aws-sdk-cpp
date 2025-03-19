/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/ResourceTagSet.h>
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
   * <p>A complex type containing tags for the specified resources.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListTagsForResourcesResponse">AWS
   * API Reference</a></p>
   */
  class ListTagsForResourcesResult
  {
  public:
    AWS_ROUTE53_API ListTagsForResourcesResult() = default;
    AWS_ROUTE53_API ListTagsForResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API ListTagsForResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of <code>ResourceTagSet</code>s containing tags associated with the
     * specified resources.</p>
     */
    inline const Aws::Vector<ResourceTagSet>& GetResourceTagSets() const { return m_resourceTagSets; }
    template<typename ResourceTagSetsT = Aws::Vector<ResourceTagSet>>
    void SetResourceTagSets(ResourceTagSetsT&& value) { m_resourceTagSetsHasBeenSet = true; m_resourceTagSets = std::forward<ResourceTagSetsT>(value); }
    template<typename ResourceTagSetsT = Aws::Vector<ResourceTagSet>>
    ListTagsForResourcesResult& WithResourceTagSets(ResourceTagSetsT&& value) { SetResourceTagSets(std::forward<ResourceTagSetsT>(value)); return *this;}
    template<typename ResourceTagSetsT = ResourceTagSet>
    ListTagsForResourcesResult& AddResourceTagSets(ResourceTagSetsT&& value) { m_resourceTagSetsHasBeenSet = true; m_resourceTagSets.emplace_back(std::forward<ResourceTagSetsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTagsForResourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceTagSet> m_resourceTagSets;
    bool m_resourceTagSetsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
