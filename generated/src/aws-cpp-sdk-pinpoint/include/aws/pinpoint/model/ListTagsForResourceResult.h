/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/TagsModel.h>
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
namespace Pinpoint
{
namespace Model
{
  class ListTagsForResourceResult
  {
  public:
    AWS_PINPOINT_API ListTagsForResourceResult();
    AWS_PINPOINT_API ListTagsForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API ListTagsForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const TagsModel& GetTagsModel() const{ return m_tagsModel; }

    
    inline void SetTagsModel(const TagsModel& value) { m_tagsModel = value; }

    
    inline void SetTagsModel(TagsModel&& value) { m_tagsModel = std::move(value); }

    
    inline ListTagsForResourceResult& WithTagsModel(const TagsModel& value) { SetTagsModel(value); return *this;}

    
    inline ListTagsForResourceResult& WithTagsModel(TagsModel&& value) { SetTagsModel(std::move(value)); return *this;}

  private:

    TagsModel m_tagsModel;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
