/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/ContentModerationSortBy.h>
#include <aws/rekognition/model/ContentModerationAggregateBy.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Contains metadata about a content moderation request, including the SortBy
   * and AggregateBy options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GetContentModerationRequestMetadata">AWS
   * API Reference</a></p>
   */
  class GetContentModerationRequestMetadata
  {
  public:
    AWS_REKOGNITION_API GetContentModerationRequestMetadata() = default;
    AWS_REKOGNITION_API GetContentModerationRequestMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API GetContentModerationRequestMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The sorting method chosen for a GetContentModeration request.</p>
     */
    inline ContentModerationSortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(ContentModerationSortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline GetContentModerationRequestMetadata& WithSortBy(ContentModerationSortBy value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregation method chosen for a GetContentModeration request.</p>
     */
    inline ContentModerationAggregateBy GetAggregateBy() const { return m_aggregateBy; }
    inline bool AggregateByHasBeenSet() const { return m_aggregateByHasBeenSet; }
    inline void SetAggregateBy(ContentModerationAggregateBy value) { m_aggregateByHasBeenSet = true; m_aggregateBy = value; }
    inline GetContentModerationRequestMetadata& WithAggregateBy(ContentModerationAggregateBy value) { SetAggregateBy(value); return *this;}
    ///@}
  private:

    ContentModerationSortBy m_sortBy{ContentModerationSortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;

    ContentModerationAggregateBy m_aggregateBy{ContentModerationAggregateBy::NOT_SET};
    bool m_aggregateByHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
