/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/ResourceTags.h>
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
namespace MediaConvert
{
namespace Model
{
  class ListTagsForResourceResult
  {
  public:
    AWS_MEDIACONVERT_API ListTagsForResourceResult();
    AWS_MEDIACONVERT_API ListTagsForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONVERT_API ListTagsForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The Amazon Resource Name (ARN) and tags for an AWS Elemental MediaConvert
     * resource.
     */
    inline const ResourceTags& GetResourceTags() const{ return m_resourceTags; }

    /**
     * The Amazon Resource Name (ARN) and tags for an AWS Elemental MediaConvert
     * resource.
     */
    inline void SetResourceTags(const ResourceTags& value) { m_resourceTags = value; }

    /**
     * The Amazon Resource Name (ARN) and tags for an AWS Elemental MediaConvert
     * resource.
     */
    inline void SetResourceTags(ResourceTags&& value) { m_resourceTags = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) and tags for an AWS Elemental MediaConvert
     * resource.
     */
    inline ListTagsForResourceResult& WithResourceTags(const ResourceTags& value) { SetResourceTags(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) and tags for an AWS Elemental MediaConvert
     * resource.
     */
    inline ListTagsForResourceResult& WithResourceTags(ResourceTags&& value) { SetResourceTags(std::move(value)); return *this;}

  private:

    ResourceTags m_resourceTags;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
