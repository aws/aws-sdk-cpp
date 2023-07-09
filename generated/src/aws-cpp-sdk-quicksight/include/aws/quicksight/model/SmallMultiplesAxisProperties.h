/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SmallMultiplesAxisScale.h>
#include <aws/quicksight/model/SmallMultiplesAxisPlacement.h>
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
   * <p>Configures the properties of a chart's axes that are used by small multiples
   * panels.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SmallMultiplesAxisProperties">AWS
   * API Reference</a></p>
   */
  class SmallMultiplesAxisProperties
  {
  public:
    AWS_QUICKSIGHT_API SmallMultiplesAxisProperties();
    AWS_QUICKSIGHT_API SmallMultiplesAxisProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SmallMultiplesAxisProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines whether scale of the axes are shared or independent. The default
     * value is <code>SHARED</code>.</p>
     */
    inline const SmallMultiplesAxisScale& GetScale() const{ return m_scale; }

    /**
     * <p>Determines whether scale of the axes are shared or independent. The default
     * value is <code>SHARED</code>.</p>
     */
    inline bool ScaleHasBeenSet() const { return m_scaleHasBeenSet; }

    /**
     * <p>Determines whether scale of the axes are shared or independent. The default
     * value is <code>SHARED</code>.</p>
     */
    inline void SetScale(const SmallMultiplesAxisScale& value) { m_scaleHasBeenSet = true; m_scale = value; }

    /**
     * <p>Determines whether scale of the axes are shared or independent. The default
     * value is <code>SHARED</code>.</p>
     */
    inline void SetScale(SmallMultiplesAxisScale&& value) { m_scaleHasBeenSet = true; m_scale = std::move(value); }

    /**
     * <p>Determines whether scale of the axes are shared or independent. The default
     * value is <code>SHARED</code>.</p>
     */
    inline SmallMultiplesAxisProperties& WithScale(const SmallMultiplesAxisScale& value) { SetScale(value); return *this;}

    /**
     * <p>Determines whether scale of the axes are shared or independent. The default
     * value is <code>SHARED</code>.</p>
     */
    inline SmallMultiplesAxisProperties& WithScale(SmallMultiplesAxisScale&& value) { SetScale(std::move(value)); return *this;}


    /**
     * <p>Defines the placement of the axis. By default, axes are rendered
     * <code>OUTSIDE</code> of the panels. Axes with <code>INDEPENDENT</code> scale are
     * rendered <code>INSIDE</code> the panels.</p>
     */
    inline const SmallMultiplesAxisPlacement& GetPlacement() const{ return m_placement; }

    /**
     * <p>Defines the placement of the axis. By default, axes are rendered
     * <code>OUTSIDE</code> of the panels. Axes with <code>INDEPENDENT</code> scale are
     * rendered <code>INSIDE</code> the panels.</p>
     */
    inline bool PlacementHasBeenSet() const { return m_placementHasBeenSet; }

    /**
     * <p>Defines the placement of the axis. By default, axes are rendered
     * <code>OUTSIDE</code> of the panels. Axes with <code>INDEPENDENT</code> scale are
     * rendered <code>INSIDE</code> the panels.</p>
     */
    inline void SetPlacement(const SmallMultiplesAxisPlacement& value) { m_placementHasBeenSet = true; m_placement = value; }

    /**
     * <p>Defines the placement of the axis. By default, axes are rendered
     * <code>OUTSIDE</code> of the panels. Axes with <code>INDEPENDENT</code> scale are
     * rendered <code>INSIDE</code> the panels.</p>
     */
    inline void SetPlacement(SmallMultiplesAxisPlacement&& value) { m_placementHasBeenSet = true; m_placement = std::move(value); }

    /**
     * <p>Defines the placement of the axis. By default, axes are rendered
     * <code>OUTSIDE</code> of the panels. Axes with <code>INDEPENDENT</code> scale are
     * rendered <code>INSIDE</code> the panels.</p>
     */
    inline SmallMultiplesAxisProperties& WithPlacement(const SmallMultiplesAxisPlacement& value) { SetPlacement(value); return *this;}

    /**
     * <p>Defines the placement of the axis. By default, axes are rendered
     * <code>OUTSIDE</code> of the panels. Axes with <code>INDEPENDENT</code> scale are
     * rendered <code>INSIDE</code> the panels.</p>
     */
    inline SmallMultiplesAxisProperties& WithPlacement(SmallMultiplesAxisPlacement&& value) { SetPlacement(std::move(value)); return *this;}

  private:

    SmallMultiplesAxisScale m_scale;
    bool m_scaleHasBeenSet = false;

    SmallMultiplesAxisPlacement m_placement;
    bool m_placementHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
