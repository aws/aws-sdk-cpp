/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
#include <aws/quicksight/model/FormatConfiguration.h>
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
   * <p>The unaggregated field for a table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UnaggregatedField">AWS
   * API Reference</a></p>
   */
  class UnaggregatedField
  {
  public:
    AWS_QUICKSIGHT_API UnaggregatedField() = default;
    AWS_QUICKSIGHT_API UnaggregatedField(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API UnaggregatedField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The custom field ID.</p>
     */
    inline const Aws::String& GetFieldId() const { return m_fieldId; }
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }
    template<typename FieldIdT = Aws::String>
    void SetFieldId(FieldIdT&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::forward<FieldIdT>(value); }
    template<typename FieldIdT = Aws::String>
    UnaggregatedField& WithFieldId(FieldIdT&& value) { SetFieldId(std::forward<FieldIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column that is used in the <code>UnaggregatedField</code>.</p>
     */
    inline const ColumnIdentifier& GetColumn() const { return m_column; }
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
    template<typename ColumnT = ColumnIdentifier>
    void SetColumn(ColumnT&& value) { m_columnHasBeenSet = true; m_column = std::forward<ColumnT>(value); }
    template<typename ColumnT = ColumnIdentifier>
    UnaggregatedField& WithColumn(ColumnT&& value) { SetColumn(std::forward<ColumnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format configuration of the field.</p>
     */
    inline const FormatConfiguration& GetFormatConfiguration() const { return m_formatConfiguration; }
    inline bool FormatConfigurationHasBeenSet() const { return m_formatConfigurationHasBeenSet; }
    template<typename FormatConfigurationT = FormatConfiguration>
    void SetFormatConfiguration(FormatConfigurationT&& value) { m_formatConfigurationHasBeenSet = true; m_formatConfiguration = std::forward<FormatConfigurationT>(value); }
    template<typename FormatConfigurationT = FormatConfiguration>
    UnaggregatedField& WithFormatConfiguration(FormatConfigurationT&& value) { SetFormatConfiguration(std::forward<FormatConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    FormatConfiguration m_formatConfiguration;
    bool m_formatConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
