/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/ResourceTagSet.h>
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
   * <p>A complex type that contains information about the health checks or hosted
   * zones for which you want to list tags.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListTagsForResourceResponse">AWS
   * API Reference</a></p>
   */
  class ListTagsForResourceResult
  {
  public:
    AWS_ROUTE53_API ListTagsForResourceResult();
    AWS_ROUTE53_API ListTagsForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API ListTagsForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A <code>ResourceTagSet</code> containing tags associated with the specified
     * resource.</p>
     */
    inline const ResourceTagSet& GetResourceTagSet() const{ return m_resourceTagSet; }

    /**
     * <p>A <code>ResourceTagSet</code> containing tags associated with the specified
     * resource.</p>
     */
    inline void SetResourceTagSet(const ResourceTagSet& value) { m_resourceTagSet = value; }

    /**
     * <p>A <code>ResourceTagSet</code> containing tags associated with the specified
     * resource.</p>
     */
    inline void SetResourceTagSet(ResourceTagSet&& value) { m_resourceTagSet = std::move(value); }

    /**
     * <p>A <code>ResourceTagSet</code> containing tags associated with the specified
     * resource.</p>
     */
    inline ListTagsForResourceResult& WithResourceTagSet(const ResourceTagSet& value) { SetResourceTagSet(value); return *this;}

    /**
     * <p>A <code>ResourceTagSet</code> containing tags associated with the specified
     * resource.</p>
     */
    inline ListTagsForResourceResult& WithResourceTagSet(ResourceTagSet&& value) { SetResourceTagSet(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListTagsForResourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListTagsForResourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListTagsForResourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ResourceTagSet m_resourceTagSet;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
