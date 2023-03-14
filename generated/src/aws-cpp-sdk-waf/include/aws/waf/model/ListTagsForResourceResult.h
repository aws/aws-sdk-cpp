/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/waf/model/TagInfoForResource.h>
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
namespace WAF
{
namespace Model
{
  class ListTagsForResourceResult
  {
  public:
    AWS_WAF_API ListTagsForResourceResult();
    AWS_WAF_API ListTagsForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API ListTagsForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p/>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p/>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p/>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p/>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p/>
     */
    inline ListTagsForResourceResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p/>
     */
    inline ListTagsForResourceResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline ListTagsForResourceResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p/>
     */
    inline const TagInfoForResource& GetTagInfoForResource() const{ return m_tagInfoForResource; }

    /**
     * <p/>
     */
    inline void SetTagInfoForResource(const TagInfoForResource& value) { m_tagInfoForResource = value; }

    /**
     * <p/>
     */
    inline void SetTagInfoForResource(TagInfoForResource&& value) { m_tagInfoForResource = std::move(value); }

    /**
     * <p/>
     */
    inline ListTagsForResourceResult& WithTagInfoForResource(const TagInfoForResource& value) { SetTagInfoForResource(value); return *this;}

    /**
     * <p/>
     */
    inline ListTagsForResourceResult& WithTagInfoForResource(TagInfoForResource&& value) { SetTagInfoForResource(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListTagsForResourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListTagsForResourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListTagsForResourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextMarker;

    TagInfoForResource m_tagInfoForResource;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
