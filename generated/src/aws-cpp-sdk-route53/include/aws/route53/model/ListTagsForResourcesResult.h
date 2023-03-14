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
    AWS_ROUTE53_API ListTagsForResourcesResult();
    AWS_ROUTE53_API ListTagsForResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API ListTagsForResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of <code>ResourceTagSet</code>s containing tags associated with the
     * specified resources.</p>
     */
    inline const Aws::Vector<ResourceTagSet>& GetResourceTagSets() const{ return m_resourceTagSets; }

    /**
     * <p>A list of <code>ResourceTagSet</code>s containing tags associated with the
     * specified resources.</p>
     */
    inline void SetResourceTagSets(const Aws::Vector<ResourceTagSet>& value) { m_resourceTagSets = value; }

    /**
     * <p>A list of <code>ResourceTagSet</code>s containing tags associated with the
     * specified resources.</p>
     */
    inline void SetResourceTagSets(Aws::Vector<ResourceTagSet>&& value) { m_resourceTagSets = std::move(value); }

    /**
     * <p>A list of <code>ResourceTagSet</code>s containing tags associated with the
     * specified resources.</p>
     */
    inline ListTagsForResourcesResult& WithResourceTagSets(const Aws::Vector<ResourceTagSet>& value) { SetResourceTagSets(value); return *this;}

    /**
     * <p>A list of <code>ResourceTagSet</code>s containing tags associated with the
     * specified resources.</p>
     */
    inline ListTagsForResourcesResult& WithResourceTagSets(Aws::Vector<ResourceTagSet>&& value) { SetResourceTagSets(std::move(value)); return *this;}

    /**
     * <p>A list of <code>ResourceTagSet</code>s containing tags associated with the
     * specified resources.</p>
     */
    inline ListTagsForResourcesResult& AddResourceTagSets(const ResourceTagSet& value) { m_resourceTagSets.push_back(value); return *this; }

    /**
     * <p>A list of <code>ResourceTagSet</code>s containing tags associated with the
     * specified resources.</p>
     */
    inline ListTagsForResourcesResult& AddResourceTagSets(ResourceTagSet&& value) { m_resourceTagSets.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListTagsForResourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListTagsForResourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListTagsForResourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ResourceTagSet> m_resourceTagSets;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
