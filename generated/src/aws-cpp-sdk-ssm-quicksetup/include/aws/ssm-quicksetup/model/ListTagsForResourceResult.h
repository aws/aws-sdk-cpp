/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-quicksetup/SSMQuickSetup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-quicksetup/model/TagEntry.h>
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
namespace SSMQuickSetup
{
namespace Model
{
  class ListTagsForResourceResult
  {
  public:
    AWS_SSMQUICKSETUP_API ListTagsForResourceResult();
    AWS_SSMQUICKSETUP_API ListTagsForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMQUICKSETUP_API ListTagsForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Key-value pairs of metadata assigned to the resource.</p>
     */
    inline const Aws::Vector<TagEntry>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<TagEntry>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<TagEntry>&& value) { m_tags = std::move(value); }
    inline ListTagsForResourceResult& WithTags(const Aws::Vector<TagEntry>& value) { SetTags(value); return *this;}
    inline ListTagsForResourceResult& WithTags(Aws::Vector<TagEntry>&& value) { SetTags(std::move(value)); return *this;}
    inline ListTagsForResourceResult& AddTags(const TagEntry& value) { m_tags.push_back(value); return *this; }
    inline ListTagsForResourceResult& AddTags(TagEntry&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTagsForResourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTagsForResourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTagsForResourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TagEntry> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws
