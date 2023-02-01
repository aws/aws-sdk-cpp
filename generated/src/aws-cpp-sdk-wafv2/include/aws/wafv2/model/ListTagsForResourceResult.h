/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/TagInfoForResource.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WAFV2
{
namespace Model
{
  class ListTagsForResourceResult
  {
  public:
    AWS_WAFV2_API ListTagsForResourceResult();
    AWS_WAFV2_API ListTagsForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API ListTagsForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline ListTagsForResourceResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline ListTagsForResourceResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline ListTagsForResourceResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>The collection of tagging definitions for the resource. </p>
     */
    inline const TagInfoForResource& GetTagInfoForResource() const{ return m_tagInfoForResource; }

    /**
     * <p>The collection of tagging definitions for the resource. </p>
     */
    inline void SetTagInfoForResource(const TagInfoForResource& value) { m_tagInfoForResource = value; }

    /**
     * <p>The collection of tagging definitions for the resource. </p>
     */
    inline void SetTagInfoForResource(TagInfoForResource&& value) { m_tagInfoForResource = std::move(value); }

    /**
     * <p>The collection of tagging definitions for the resource. </p>
     */
    inline ListTagsForResourceResult& WithTagInfoForResource(const TagInfoForResource& value) { SetTagInfoForResource(value); return *this;}

    /**
     * <p>The collection of tagging definitions for the resource. </p>
     */
    inline ListTagsForResourceResult& WithTagInfoForResource(TagInfoForResource&& value) { SetTagInfoForResource(std::move(value)); return *this;}

  private:

    Aws::String m_nextMarker;

    TagInfoForResource m_tagInfoForResource;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
