/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/LabelDetectionSortBy.h>
#include <aws/rekognition/model/LabelDetectionAggregateBy.h>
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
   * <p>Contains metadata about a label detection request, including the SortBy and
   * AggregateBy options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GetLabelDetectionRequestMetadata">AWS
   * API Reference</a></p>
   */
  class GetLabelDetectionRequestMetadata
  {
  public:
    AWS_REKOGNITION_API GetLabelDetectionRequestMetadata();
    AWS_REKOGNITION_API GetLabelDetectionRequestMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API GetLabelDetectionRequestMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The sorting method chosen for a GetLabelDetection request.</p>
     */
    inline const LabelDetectionSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The sorting method chosen for a GetLabelDetection request.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The sorting method chosen for a GetLabelDetection request.</p>
     */
    inline void SetSortBy(const LabelDetectionSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The sorting method chosen for a GetLabelDetection request.</p>
     */
    inline void SetSortBy(LabelDetectionSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The sorting method chosen for a GetLabelDetection request.</p>
     */
    inline GetLabelDetectionRequestMetadata& WithSortBy(const LabelDetectionSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The sorting method chosen for a GetLabelDetection request.</p>
     */
    inline GetLabelDetectionRequestMetadata& WithSortBy(LabelDetectionSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The aggregation method chosen for a GetLabelDetection request.</p>
     */
    inline const LabelDetectionAggregateBy& GetAggregateBy() const{ return m_aggregateBy; }

    /**
     * <p>The aggregation method chosen for a GetLabelDetection request.</p>
     */
    inline bool AggregateByHasBeenSet() const { return m_aggregateByHasBeenSet; }

    /**
     * <p>The aggregation method chosen for a GetLabelDetection request.</p>
     */
    inline void SetAggregateBy(const LabelDetectionAggregateBy& value) { m_aggregateByHasBeenSet = true; m_aggregateBy = value; }

    /**
     * <p>The aggregation method chosen for a GetLabelDetection request.</p>
     */
    inline void SetAggregateBy(LabelDetectionAggregateBy&& value) { m_aggregateByHasBeenSet = true; m_aggregateBy = std::move(value); }

    /**
     * <p>The aggregation method chosen for a GetLabelDetection request.</p>
     */
    inline GetLabelDetectionRequestMetadata& WithAggregateBy(const LabelDetectionAggregateBy& value) { SetAggregateBy(value); return *this;}

    /**
     * <p>The aggregation method chosen for a GetLabelDetection request.</p>
     */
    inline GetLabelDetectionRequestMetadata& WithAggregateBy(LabelDetectionAggregateBy&& value) { SetAggregateBy(std::move(value)); return *this;}

  private:

    LabelDetectionSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    LabelDetectionAggregateBy m_aggregateBy;
    bool m_aggregateByHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
