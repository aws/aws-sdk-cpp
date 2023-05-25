/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-email/model/Tag.h>
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
namespace PinpointEmail
{
namespace Model
{
  class ListTagsForResourceResult
  {
  public:
    AWS_PINPOINTEMAIL_API ListTagsForResourceResult();
    AWS_PINPOINTEMAIL_API ListTagsForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTEMAIL_API ListTagsForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array that lists all the tags that are associated with the resource. Each
     * tag consists of a required tag key (<code>Key</code>) and an associated tag
     * value (<code>Value</code>)</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array that lists all the tags that are associated with the resource. Each
     * tag consists of a required tag key (<code>Key</code>) and an associated tag
     * value (<code>Value</code>)</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>An array that lists all the tags that are associated with the resource. Each
     * tag consists of a required tag key (<code>Key</code>) and an associated tag
     * value (<code>Value</code>)</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>An array that lists all the tags that are associated with the resource. Each
     * tag consists of a required tag key (<code>Key</code>) and an associated tag
     * value (<code>Value</code>)</p>
     */
    inline ListTagsForResourceResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array that lists all the tags that are associated with the resource. Each
     * tag consists of a required tag key (<code>Key</code>) and an associated tag
     * value (<code>Value</code>)</p>
     */
    inline ListTagsForResourceResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array that lists all the tags that are associated with the resource. Each
     * tag consists of a required tag key (<code>Key</code>) and an associated tag
     * value (<code>Value</code>)</p>
     */
    inline ListTagsForResourceResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>An array that lists all the tags that are associated with the resource. Each
     * tag consists of a required tag key (<code>Key</code>) and an associated tag
     * value (<code>Value</code>)</p>
     */
    inline ListTagsForResourceResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListTagsForResourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListTagsForResourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListTagsForResourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Tag> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
