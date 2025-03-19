/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AnchorType.h>
#include <aws/quicksight/model/TimeGranularity.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The definition of the Anchor.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Anchor">AWS
   * API Reference</a></p>
   */
  class Anchor
  {
  public:
    AWS_QUICKSIGHT_API Anchor() = default;
    AWS_QUICKSIGHT_API Anchor(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Anchor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>AnchorType</code> for the Anchor.</p>
     */
    inline AnchorType GetAnchorType() const { return m_anchorType; }
    inline bool AnchorTypeHasBeenSet() const { return m_anchorTypeHasBeenSet; }
    inline void SetAnchorType(AnchorType value) { m_anchorTypeHasBeenSet = true; m_anchorType = value; }
    inline Anchor& WithAnchorType(AnchorType value) { SetAnchorType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>TimeGranularity</code> of the Anchor.</p>
     */
    inline TimeGranularity GetTimeGranularity() const { return m_timeGranularity; }
    inline bool TimeGranularityHasBeenSet() const { return m_timeGranularityHasBeenSet; }
    inline void SetTimeGranularity(TimeGranularity value) { m_timeGranularityHasBeenSet = true; m_timeGranularity = value; }
    inline Anchor& WithTimeGranularity(TimeGranularity value) { SetTimeGranularity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The offset of the Anchor.</p>
     */
    inline int GetOffset() const { return m_offset; }
    inline bool OffsetHasBeenSet() const { return m_offsetHasBeenSet; }
    inline void SetOffset(int value) { m_offsetHasBeenSet = true; m_offset = value; }
    inline Anchor& WithOffset(int value) { SetOffset(value); return *this;}
    ///@}
  private:

    AnchorType m_anchorType{AnchorType::NOT_SET};
    bool m_anchorTypeHasBeenSet = false;

    TimeGranularity m_timeGranularity{TimeGranularity::NOT_SET};
    bool m_timeGranularityHasBeenSet = false;

    int m_offset{0};
    bool m_offsetHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
