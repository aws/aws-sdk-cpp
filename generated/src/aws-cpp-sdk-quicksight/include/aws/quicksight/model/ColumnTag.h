/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GeoSpatialDataRole.h>
#include <aws/quicksight/model/ColumnDescription.h>
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
   * <p>A tag for a column in a <code> <a
   * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_TagColumnOperation.html">TagColumnOperation</a>
   * </code> structure. This is a variant type structure. For this structure to be
   * valid, only one of the attributes can be non-null.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ColumnTag">AWS
   * API Reference</a></p>
   */
  class ColumnTag
  {
  public:
    AWS_QUICKSIGHT_API ColumnTag();
    AWS_QUICKSIGHT_API ColumnTag(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ColumnTag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A geospatial role for a column.</p>
     */
    inline const GeoSpatialDataRole& GetColumnGeographicRole() const{ return m_columnGeographicRole; }

    /**
     * <p>A geospatial role for a column.</p>
     */
    inline bool ColumnGeographicRoleHasBeenSet() const { return m_columnGeographicRoleHasBeenSet; }

    /**
     * <p>A geospatial role for a column.</p>
     */
    inline void SetColumnGeographicRole(const GeoSpatialDataRole& value) { m_columnGeographicRoleHasBeenSet = true; m_columnGeographicRole = value; }

    /**
     * <p>A geospatial role for a column.</p>
     */
    inline void SetColumnGeographicRole(GeoSpatialDataRole&& value) { m_columnGeographicRoleHasBeenSet = true; m_columnGeographicRole = std::move(value); }

    /**
     * <p>A geospatial role for a column.</p>
     */
    inline ColumnTag& WithColumnGeographicRole(const GeoSpatialDataRole& value) { SetColumnGeographicRole(value); return *this;}

    /**
     * <p>A geospatial role for a column.</p>
     */
    inline ColumnTag& WithColumnGeographicRole(GeoSpatialDataRole&& value) { SetColumnGeographicRole(std::move(value)); return *this;}


    /**
     * <p>A description for a column.</p>
     */
    inline const ColumnDescription& GetColumnDescription() const{ return m_columnDescription; }

    /**
     * <p>A description for a column.</p>
     */
    inline bool ColumnDescriptionHasBeenSet() const { return m_columnDescriptionHasBeenSet; }

    /**
     * <p>A description for a column.</p>
     */
    inline void SetColumnDescription(const ColumnDescription& value) { m_columnDescriptionHasBeenSet = true; m_columnDescription = value; }

    /**
     * <p>A description for a column.</p>
     */
    inline void SetColumnDescription(ColumnDescription&& value) { m_columnDescriptionHasBeenSet = true; m_columnDescription = std::move(value); }

    /**
     * <p>A description for a column.</p>
     */
    inline ColumnTag& WithColumnDescription(const ColumnDescription& value) { SetColumnDescription(value); return *this;}

    /**
     * <p>A description for a column.</p>
     */
    inline ColumnTag& WithColumnDescription(ColumnDescription&& value) { SetColumnDescription(std::move(value)); return *this;}

  private:

    GeoSpatialDataRole m_columnGeographicRole;
    bool m_columnGeographicRoleHasBeenSet = false;

    ColumnDescription m_columnDescription;
    bool m_columnDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
