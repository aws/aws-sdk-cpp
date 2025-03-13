/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
   * <p>The width properties for a line.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialLineWidth">AWS
   * API Reference</a></p>
   */
  class GeospatialLineWidth
  {
  public:
    AWS_QUICKSIGHT_API GeospatialLineWidth() = default;
    AWS_QUICKSIGHT_API GeospatialLineWidth(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialLineWidth& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The positive value for the width of a line.</p>
     */
    inline double GetLineWidth() const { return m_lineWidth; }
    inline bool LineWidthHasBeenSet() const { return m_lineWidthHasBeenSet; }
    inline void SetLineWidth(double value) { m_lineWidthHasBeenSet = true; m_lineWidth = value; }
    inline GeospatialLineWidth& WithLineWidth(double value) { SetLineWidth(value); return *this;}
    ///@}
  private:

    double m_lineWidth{0.0};
    bool m_lineWidthHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
