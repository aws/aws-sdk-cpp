/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/GeoSpatialCountryCode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Geospatial column group that denotes a hierarchy.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeoSpatialColumnGroup">AWS
   * API Reference</a></p>
   */
  class GeoSpatialColumnGroup
  {
  public:
    AWS_QUICKSIGHT_API GeoSpatialColumnGroup() = default;
    AWS_QUICKSIGHT_API GeoSpatialColumnGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeoSpatialColumnGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A display name for the hierarchy.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GeoSpatialColumnGroup& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Country code.</p>
     */
    inline GeoSpatialCountryCode GetCountryCode() const { return m_countryCode; }
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }
    inline void SetCountryCode(GeoSpatialCountryCode value) { m_countryCodeHasBeenSet = true; m_countryCode = value; }
    inline GeoSpatialColumnGroup& WithCountryCode(GeoSpatialCountryCode value) { SetCountryCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Columns in this hierarchy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumns() const { return m_columns; }
    inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }
    template<typename ColumnsT = Aws::Vector<Aws::String>>
    void SetColumns(ColumnsT&& value) { m_columnsHasBeenSet = true; m_columns = std::forward<ColumnsT>(value); }
    template<typename ColumnsT = Aws::Vector<Aws::String>>
    GeoSpatialColumnGroup& WithColumns(ColumnsT&& value) { SetColumns(std::forward<ColumnsT>(value)); return *this;}
    template<typename ColumnsT = Aws::String>
    GeoSpatialColumnGroup& AddColumns(ColumnsT&& value) { m_columnsHasBeenSet = true; m_columns.emplace_back(std::forward<ColumnsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    GeoSpatialCountryCode m_countryCode{GeoSpatialCountryCode::NOT_SET};
    bool m_countryCodeHasBeenSet = false;

    Aws::Vector<Aws::String> m_columns;
    bool m_columnsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
