/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-catalog/model/Tag.h>
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
namespace MarketplaceCatalog
{
namespace Model
{
  class ListTagsForResourceResult
  {
  public:
    AWS_MARKETPLACECATALOG_API ListTagsForResourceResult();
    AWS_MARKETPLACECATALOG_API ListTagsForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MARKETPLACECATALOG_API ListTagsForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Required. The ARN associated with the resource you want to list tags on.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>Required. The ARN associated with the resource you want to list tags on.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }

    /**
     * <p>Required. The ARN associated with the resource you want to list tags on.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }

    /**
     * <p>Required. The ARN associated with the resource you want to list tags on.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }

    /**
     * <p>Required. The ARN associated with the resource you want to list tags on.</p>
     */
    inline ListTagsForResourceResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>Required. The ARN associated with the resource you want to list tags on.</p>
     */
    inline ListTagsForResourceResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>Required. The ARN associated with the resource you want to list tags on.</p>
     */
    inline ListTagsForResourceResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>Required. A list of objects specifying each key name and value. Number of
     * objects allowed: 1-50.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Required. A list of objects specifying each key name and value. Number of
     * objects allowed: 1-50.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>Required. A list of objects specifying each key name and value. Number of
     * objects allowed: 1-50.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>Required. A list of objects specifying each key name and value. Number of
     * objects allowed: 1-50.</p>
     */
    inline ListTagsForResourceResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Required. A list of objects specifying each key name and value. Number of
     * objects allowed: 1-50.</p>
     */
    inline ListTagsForResourceResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Required. A list of objects specifying each key name and value. Number of
     * objects allowed: 1-50.</p>
     */
    inline ListTagsForResourceResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>Required. A list of objects specifying each key name and value. Number of
     * objects allowed: 1-50.</p>
     */
    inline ListTagsForResourceResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceArn;

    Aws::Vector<Tag> m_tags;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
