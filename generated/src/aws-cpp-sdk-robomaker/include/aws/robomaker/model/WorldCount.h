/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>

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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>The number of worlds that will be created. You can configure the number of
   * unique floorplans and the number of unique interiors for each floor plan. For
   * example, if you want 1 world with 20 unique interiors, you set
   * <code>floorplanCount = 1</code> and <code>interiorCountPerFloorplan = 20</code>.
   * This will result in 20 worlds (<code>floorplanCount</code> *
   * <code>interiorCountPerFloorplan)</code>. </p> <p>If you set <code>floorplanCount
   * = 4</code> and <code>interiorCountPerFloorplan = 5</code>, there will be 20
   * worlds with 5 unique floor plans. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/WorldCount">AWS
   * API Reference</a></p>
   */
  class WorldCount
  {
  public:
    AWS_ROBOMAKER_API WorldCount();
    AWS_ROBOMAKER_API WorldCount(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API WorldCount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of unique floorplans.</p>
     */
    inline int GetFloorplanCount() const{ return m_floorplanCount; }

    /**
     * <p>The number of unique floorplans.</p>
     */
    inline bool FloorplanCountHasBeenSet() const { return m_floorplanCountHasBeenSet; }

    /**
     * <p>The number of unique floorplans.</p>
     */
    inline void SetFloorplanCount(int value) { m_floorplanCountHasBeenSet = true; m_floorplanCount = value; }

    /**
     * <p>The number of unique floorplans.</p>
     */
    inline WorldCount& WithFloorplanCount(int value) { SetFloorplanCount(value); return *this;}


    /**
     * <p>The number of unique interiors per floorplan.</p>
     */
    inline int GetInteriorCountPerFloorplan() const{ return m_interiorCountPerFloorplan; }

    /**
     * <p>The number of unique interiors per floorplan.</p>
     */
    inline bool InteriorCountPerFloorplanHasBeenSet() const { return m_interiorCountPerFloorplanHasBeenSet; }

    /**
     * <p>The number of unique interiors per floorplan.</p>
     */
    inline void SetInteriorCountPerFloorplan(int value) { m_interiorCountPerFloorplanHasBeenSet = true; m_interiorCountPerFloorplan = value; }

    /**
     * <p>The number of unique interiors per floorplan.</p>
     */
    inline WorldCount& WithInteriorCountPerFloorplan(int value) { SetInteriorCountPerFloorplan(value); return *this;}

  private:

    int m_floorplanCount;
    bool m_floorplanCountHasBeenSet = false;

    int m_interiorCountPerFloorplan;
    bool m_interiorCountPerFloorplanHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
