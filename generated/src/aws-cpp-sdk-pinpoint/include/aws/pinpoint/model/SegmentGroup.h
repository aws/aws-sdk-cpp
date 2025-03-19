/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint/model/SourceType.h>
#include <aws/pinpoint/model/Type.h>
#include <aws/pinpoint/model/SegmentDimensions.h>
#include <aws/pinpoint/model/SegmentReference.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the base segments and dimensions for a segment, and the
   * relationships between these base segments and dimensions.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SegmentGroup">AWS
   * API Reference</a></p>
   */
  class SegmentGroup
  {
  public:
    AWS_PINPOINT_API SegmentGroup() = default;
    AWS_PINPOINT_API SegmentGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API SegmentGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array that defines the dimensions for the segment.</p>
     */
    inline const Aws::Vector<SegmentDimensions>& GetDimensions() const { return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    template<typename DimensionsT = Aws::Vector<SegmentDimensions>>
    void SetDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::forward<DimensionsT>(value); }
    template<typename DimensionsT = Aws::Vector<SegmentDimensions>>
    SegmentGroup& WithDimensions(DimensionsT&& value) { SetDimensions(std::forward<DimensionsT>(value)); return *this;}
    template<typename DimensionsT = SegmentDimensions>
    SegmentGroup& AddDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace_back(std::forward<DimensionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The base segment to build the segment on. A base segment, also referred to as
     * a <i>source segment</i>, defines the initial population of endpoints for a
     * segment. When you add dimensions to a segment, Amazon Pinpoint filters the base
     * segment by using the dimensions that you specify.</p> <p>You can specify more
     * than one dimensional segment or only one imported segment. If you specify an
     * imported segment, the Amazon Pinpoint console displays a segment size estimate
     * that indicates the size of the imported segment without any filters applied to
     * it.</p>
     */
    inline const Aws::Vector<SegmentReference>& GetSourceSegments() const { return m_sourceSegments; }
    inline bool SourceSegmentsHasBeenSet() const { return m_sourceSegmentsHasBeenSet; }
    template<typename SourceSegmentsT = Aws::Vector<SegmentReference>>
    void SetSourceSegments(SourceSegmentsT&& value) { m_sourceSegmentsHasBeenSet = true; m_sourceSegments = std::forward<SourceSegmentsT>(value); }
    template<typename SourceSegmentsT = Aws::Vector<SegmentReference>>
    SegmentGroup& WithSourceSegments(SourceSegmentsT&& value) { SetSourceSegments(std::forward<SourceSegmentsT>(value)); return *this;}
    template<typename SourceSegmentsT = SegmentReference>
    SegmentGroup& AddSourceSegments(SourceSegmentsT&& value) { m_sourceSegmentsHasBeenSet = true; m_sourceSegments.emplace_back(std::forward<SourceSegmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies how to handle multiple base segments for the segment. For example,
     * if you specify three base segments for the segment, whether the resulting
     * segment is based on all, any, or none of the base segments.</p>
     */
    inline SourceType GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(SourceType value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline SegmentGroup& WithSourceType(SourceType value) { SetSourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how to handle multiple dimensions for the segment. For example, if
     * you specify three dimensions for the segment, whether the resulting segment
     * includes endpoints that match all, any, or none of the dimensions.</p>
     */
    inline Type GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(Type value) { m_typeHasBeenSet = true; m_type = value; }
    inline SegmentGroup& WithType(Type value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::Vector<SegmentDimensions> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    Aws::Vector<SegmentReference> m_sourceSegments;
    bool m_sourceSegmentsHasBeenSet = false;

    SourceType m_sourceType{SourceType::NOT_SET};
    bool m_sourceTypeHasBeenSet = false;

    Type m_type{Type::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
