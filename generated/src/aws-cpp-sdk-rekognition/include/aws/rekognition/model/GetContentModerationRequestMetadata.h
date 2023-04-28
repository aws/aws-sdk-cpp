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
    AWS_REKOGNITION_API GetContentModerationRequestMetadata();
    AWS_REKOGNITION_API GetContentModerationRequestMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API GetContentModerationRequestMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The sorting method chosen for a GetContentModeration request.</p>
     */
    inline const ContentModerationSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The sorting method chosen for a GetContentModeration request.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The sorting method chosen for a GetContentModeration request.</p>
     */
    inline void SetSortBy(const ContentModerationSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The sorting method chosen for a GetContentModeration request.</p>
     */
    inline void SetSortBy(ContentModerationSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The sorting method chosen for a GetContentModeration request.</p>
     */
    inline GetContentModerationRequestMetadata& WithSortBy(const ContentModerationSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The sorting method chosen for a GetContentModeration request.</p>
     */
    inline GetContentModerationRequestMetadata& WithSortBy(ContentModerationSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The aggregation method chosen for a GetContentModeration request.</p>
     */
    inline const ContentModerationAggregateBy& GetAggregateBy() const{ return m_aggregateBy; }

    /**
     * <p>The aggregation method chosen for a GetContentModeration request.</p>
     */
    inline bool AggregateByHasBeenSet() const { return m_aggregateByHasBeenSet; }

    /**
     * <p>The aggregation method chosen for a GetContentModeration request.</p>
     */
    inline void SetAggregateBy(const ContentModerationAggregateBy& value) { m_aggregateByHasBeenSet = true; m_aggregateBy = value; }

    /**
     * <p>The aggregation method chosen for a GetContentModeration request.</p>
     */
    inline void SetAggregateBy(ContentModerationAggregateBy&& value) { m_aggregateByHasBeenSet = true; m_aggregateBy = std::move(value); }

    /**
     * <p>The aggregation method chosen for a GetContentModeration request.</p>
     */
    inline GetContentModerationRequestMetadata& WithAggregateBy(const ContentModerationAggregateBy& value) { SetAggregateBy(value); return *this;}

    /**
     * <p>The aggregation method chosen for a GetContentModeration request.</p>
     */
    inline GetContentModerationRequestMetadata& WithAggregateBy(ContentModerationAggregateBy&& value) { SetAggregateBy(std::move(value)); return *this;}

  private:

    ContentModerationSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    ContentModerationAggregateBy m_aggregateBy;
    bool m_aggregateByHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
