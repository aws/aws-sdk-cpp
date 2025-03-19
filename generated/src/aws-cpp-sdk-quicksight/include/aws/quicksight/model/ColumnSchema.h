/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The column schema.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ColumnSchema">AWS
   * API Reference</a></p>
   */
  class ColumnSchema
  {
  public:
    AWS_QUICKSIGHT_API ColumnSchema() = default;
    AWS_QUICKSIGHT_API ColumnSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ColumnSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the column schema.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ColumnSchema& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the column schema.</p>
     */
    inline const Aws::String& GetDataType() const { return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    template<typename DataTypeT = Aws::String>
    void SetDataType(DataTypeT&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::forward<DataTypeT>(value); }
    template<typename DataTypeT = Aws::String>
    ColumnSchema& WithDataType(DataTypeT&& value) { SetDataType(std::forward<DataTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The geographic role of the column schema.</p>
     */
    inline const Aws::String& GetGeographicRole() const { return m_geographicRole; }
    inline bool GeographicRoleHasBeenSet() const { return m_geographicRoleHasBeenSet; }
    template<typename GeographicRoleT = Aws::String>
    void SetGeographicRole(GeographicRoleT&& value) { m_geographicRoleHasBeenSet = true; m_geographicRole = std::forward<GeographicRoleT>(value); }
    template<typename GeographicRoleT = Aws::String>
    ColumnSchema& WithGeographicRole(GeographicRoleT&& value) { SetGeographicRole(std::forward<GeographicRoleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_dataType;
    bool m_dataTypeHasBeenSet = false;

    Aws::String m_geographicRole;
    bool m_geographicRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
