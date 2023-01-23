/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/memorydb/model/Tag.h>
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
namespace MemoryDB
{
namespace Model
{
  class ListTagsResult
  {
  public:
    AWS_MEMORYDB_API ListTagsResult();
    AWS_MEMORYDB_API ListTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API ListTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of tags as key-value pairs.</p>
     */
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }

    /**
     * <p>A list of tags as key-value pairs.</p>
     */
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagList = value; }

    /**
     * <p>A list of tags as key-value pairs.</p>
     */
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagList = std::move(value); }

    /**
     * <p>A list of tags as key-value pairs.</p>
     */
    inline ListTagsResult& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}

    /**
     * <p>A list of tags as key-value pairs.</p>
     */
    inline ListTagsResult& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}

    /**
     * <p>A list of tags as key-value pairs.</p>
     */
    inline ListTagsResult& AddTagList(const Tag& value) { m_tagList.push_back(value); return *this; }

    /**
     * <p>A list of tags as key-value pairs.</p>
     */
    inline ListTagsResult& AddTagList(Tag&& value) { m_tagList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Tag> m_tagList;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
