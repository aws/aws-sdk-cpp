/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediastore/model/Tag.h>
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
namespace MediaStore
{
namespace Model
{
  class ListTagsForResourceResult
  {
  public:
    AWS_MEDIASTORE_API ListTagsForResourceResult();
    AWS_MEDIASTORE_API ListTagsForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIASTORE_API ListTagsForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of key:value pairs that are assigned to the container.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of key:value pairs that are assigned to the container.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>An array of key:value pairs that are assigned to the container.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>An array of key:value pairs that are assigned to the container.</p>
     */
    inline ListTagsForResourceResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of key:value pairs that are assigned to the container.</p>
     */
    inline ListTagsForResourceResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of key:value pairs that are assigned to the container.</p>
     */
    inline ListTagsForResourceResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>An array of key:value pairs that are assigned to the container.</p>
     */
    inline ListTagsForResourceResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Tag> m_tags;
  };

} // namespace Model
} // namespace MediaStore
} // namespace Aws
