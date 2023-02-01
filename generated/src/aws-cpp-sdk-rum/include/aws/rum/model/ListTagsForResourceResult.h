/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace CloudWatchRUM
{
namespace Model
{
  class ListTagsForResourceResult
  {
  public:
    AWS_CLOUDWATCHRUM_API ListTagsForResourceResult();
    AWS_CLOUDWATCHRUM_API ListTagsForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHRUM_API ListTagsForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the resource that you are viewing.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The ARN of the resource that you are viewing.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }

    /**
     * <p>The ARN of the resource that you are viewing.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }

    /**
     * <p>The ARN of the resource that you are viewing.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }

    /**
     * <p>The ARN of the resource that you are viewing.</p>
     */
    inline ListTagsForResourceResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARN of the resource that you are viewing.</p>
     */
    inline ListTagsForResourceResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the resource that you are viewing.</p>
     */
    inline ListTagsForResourceResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The list of tag keys and values associated with the resource you
     * specified.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tag keys and values associated with the resource you
     * specified.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The list of tag keys and values associated with the resource you
     * specified.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The list of tag keys and values associated with the resource you
     * specified.</p>
     */
    inline ListTagsForResourceResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tag keys and values associated with the resource you
     * specified.</p>
     */
    inline ListTagsForResourceResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tag keys and values associated with the resource you
     * specified.</p>
     */
    inline ListTagsForResourceResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The list of tag keys and values associated with the resource you
     * specified.</p>
     */
    inline ListTagsForResourceResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tag keys and values associated with the resource you
     * specified.</p>
     */
    inline ListTagsForResourceResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tag keys and values associated with the resource you
     * specified.</p>
     */
    inline ListTagsForResourceResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of tag keys and values associated with the resource you
     * specified.</p>
     */
    inline ListTagsForResourceResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tag keys and values associated with the resource you
     * specified.</p>
     */
    inline ListTagsForResourceResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tag keys and values associated with the resource you
     * specified.</p>
     */
    inline ListTagsForResourceResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_resourceArn;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
