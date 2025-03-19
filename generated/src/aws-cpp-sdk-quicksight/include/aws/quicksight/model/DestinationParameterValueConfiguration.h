/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/CustomValuesConfiguration.h>
#include <aws/quicksight/model/SelectAllValueOptions.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
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
   * <p>The configuration of destination parameter values.</p> <p>This is a union
   * type structure. For this structure to be valid, only one of the attributes can
   * be defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DestinationParameterValueConfiguration">AWS
   * API Reference</a></p>
   */
  class DestinationParameterValueConfiguration
  {
  public:
    AWS_QUICKSIGHT_API DestinationParameterValueConfiguration() = default;
    AWS_QUICKSIGHT_API DestinationParameterValueConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DestinationParameterValueConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration of custom values for destination parameter in
     * <code>DestinationParameterValueConfiguration</code>.</p>
     */
    inline const CustomValuesConfiguration& GetCustomValuesConfiguration() const { return m_customValuesConfiguration; }
    inline bool CustomValuesConfigurationHasBeenSet() const { return m_customValuesConfigurationHasBeenSet; }
    template<typename CustomValuesConfigurationT = CustomValuesConfiguration>
    void SetCustomValuesConfiguration(CustomValuesConfigurationT&& value) { m_customValuesConfigurationHasBeenSet = true; m_customValuesConfiguration = std::forward<CustomValuesConfigurationT>(value); }
    template<typename CustomValuesConfigurationT = CustomValuesConfiguration>
    DestinationParameterValueConfiguration& WithCustomValuesConfiguration(CustomValuesConfigurationT&& value) { SetCustomValuesConfiguration(std::forward<CustomValuesConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration that selects all options.</p>
     */
    inline SelectAllValueOptions GetSelectAllValueOptions() const { return m_selectAllValueOptions; }
    inline bool SelectAllValueOptionsHasBeenSet() const { return m_selectAllValueOptionsHasBeenSet; }
    inline void SetSelectAllValueOptions(SelectAllValueOptions value) { m_selectAllValueOptionsHasBeenSet = true; m_selectAllValueOptions = value; }
    inline DestinationParameterValueConfiguration& WithSelectAllValueOptions(SelectAllValueOptions value) { SetSelectAllValueOptions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source parameter name of the destination parameter.</p>
     */
    inline const Aws::String& GetSourceParameterName() const { return m_sourceParameterName; }
    inline bool SourceParameterNameHasBeenSet() const { return m_sourceParameterNameHasBeenSet; }
    template<typename SourceParameterNameT = Aws::String>
    void SetSourceParameterName(SourceParameterNameT&& value) { m_sourceParameterNameHasBeenSet = true; m_sourceParameterName = std::forward<SourceParameterNameT>(value); }
    template<typename SourceParameterNameT = Aws::String>
    DestinationParameterValueConfiguration& WithSourceParameterName(SourceParameterNameT&& value) { SetSourceParameterName(std::forward<SourceParameterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source field ID of the destination parameter.</p>
     */
    inline const Aws::String& GetSourceField() const { return m_sourceField; }
    inline bool SourceFieldHasBeenSet() const { return m_sourceFieldHasBeenSet; }
    template<typename SourceFieldT = Aws::String>
    void SetSourceField(SourceFieldT&& value) { m_sourceFieldHasBeenSet = true; m_sourceField = std::forward<SourceFieldT>(value); }
    template<typename SourceFieldT = Aws::String>
    DestinationParameterValueConfiguration& WithSourceField(SourceFieldT&& value) { SetSourceField(std::forward<SourceFieldT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ColumnIdentifier& GetSourceColumn() const { return m_sourceColumn; }
    inline bool SourceColumnHasBeenSet() const { return m_sourceColumnHasBeenSet; }
    template<typename SourceColumnT = ColumnIdentifier>
    void SetSourceColumn(SourceColumnT&& value) { m_sourceColumnHasBeenSet = true; m_sourceColumn = std::forward<SourceColumnT>(value); }
    template<typename SourceColumnT = ColumnIdentifier>
    DestinationParameterValueConfiguration& WithSourceColumn(SourceColumnT&& value) { SetSourceColumn(std::forward<SourceColumnT>(value)); return *this;}
    ///@}
  private:

    CustomValuesConfiguration m_customValuesConfiguration;
    bool m_customValuesConfigurationHasBeenSet = false;

    SelectAllValueOptions m_selectAllValueOptions{SelectAllValueOptions::NOT_SET};
    bool m_selectAllValueOptionsHasBeenSet = false;

    Aws::String m_sourceParameterName;
    bool m_sourceParameterNameHasBeenSet = false;

    Aws::String m_sourceField;
    bool m_sourceFieldHasBeenSet = false;

    ColumnIdentifier m_sourceColumn;
    bool m_sourceColumnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
