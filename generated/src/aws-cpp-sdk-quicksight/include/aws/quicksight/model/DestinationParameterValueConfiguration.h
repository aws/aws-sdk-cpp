/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/CustomValuesConfiguration.h>
#include <aws/quicksight/model/SelectAllValueOptions.h>
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
   * <p>The configuration of destination parameter values.</p> <p>This is a union
   * type structure. For this structure to be valid, only one of the attributes can
   * be defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DestinationParameterValueConfiguration">AWS
   * API Reference</a></p>
   */
  class DestinationParameterValueConfiguration
  {
  public:
    AWS_QUICKSIGHT_API DestinationParameterValueConfiguration();
    AWS_QUICKSIGHT_API DestinationParameterValueConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DestinationParameterValueConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration of custom values for destination parameter in
     * <code>DestinationParameterValueConfiguration</code>.</p>
     */
    inline const CustomValuesConfiguration& GetCustomValuesConfiguration() const{ return m_customValuesConfiguration; }

    /**
     * <p>The configuration of custom values for destination parameter in
     * <code>DestinationParameterValueConfiguration</code>.</p>
     */
    inline bool CustomValuesConfigurationHasBeenSet() const { return m_customValuesConfigurationHasBeenSet; }

    /**
     * <p>The configuration of custom values for destination parameter in
     * <code>DestinationParameterValueConfiguration</code>.</p>
     */
    inline void SetCustomValuesConfiguration(const CustomValuesConfiguration& value) { m_customValuesConfigurationHasBeenSet = true; m_customValuesConfiguration = value; }

    /**
     * <p>The configuration of custom values for destination parameter in
     * <code>DestinationParameterValueConfiguration</code>.</p>
     */
    inline void SetCustomValuesConfiguration(CustomValuesConfiguration&& value) { m_customValuesConfigurationHasBeenSet = true; m_customValuesConfiguration = std::move(value); }

    /**
     * <p>The configuration of custom values for destination parameter in
     * <code>DestinationParameterValueConfiguration</code>.</p>
     */
    inline DestinationParameterValueConfiguration& WithCustomValuesConfiguration(const CustomValuesConfiguration& value) { SetCustomValuesConfiguration(value); return *this;}

    /**
     * <p>The configuration of custom values for destination parameter in
     * <code>DestinationParameterValueConfiguration</code>.</p>
     */
    inline DestinationParameterValueConfiguration& WithCustomValuesConfiguration(CustomValuesConfiguration&& value) { SetCustomValuesConfiguration(std::move(value)); return *this;}


    /**
     * <p>The configuration that selects all options.</p>
     */
    inline const SelectAllValueOptions& GetSelectAllValueOptions() const{ return m_selectAllValueOptions; }

    /**
     * <p>The configuration that selects all options.</p>
     */
    inline bool SelectAllValueOptionsHasBeenSet() const { return m_selectAllValueOptionsHasBeenSet; }

    /**
     * <p>The configuration that selects all options.</p>
     */
    inline void SetSelectAllValueOptions(const SelectAllValueOptions& value) { m_selectAllValueOptionsHasBeenSet = true; m_selectAllValueOptions = value; }

    /**
     * <p>The configuration that selects all options.</p>
     */
    inline void SetSelectAllValueOptions(SelectAllValueOptions&& value) { m_selectAllValueOptionsHasBeenSet = true; m_selectAllValueOptions = std::move(value); }

    /**
     * <p>The configuration that selects all options.</p>
     */
    inline DestinationParameterValueConfiguration& WithSelectAllValueOptions(const SelectAllValueOptions& value) { SetSelectAllValueOptions(value); return *this;}

    /**
     * <p>The configuration that selects all options.</p>
     */
    inline DestinationParameterValueConfiguration& WithSelectAllValueOptions(SelectAllValueOptions&& value) { SetSelectAllValueOptions(std::move(value)); return *this;}


    /**
     * <p>The source parameter name of the destination parameter.</p>
     */
    inline const Aws::String& GetSourceParameterName() const{ return m_sourceParameterName; }

    /**
     * <p>The source parameter name of the destination parameter.</p>
     */
    inline bool SourceParameterNameHasBeenSet() const { return m_sourceParameterNameHasBeenSet; }

    /**
     * <p>The source parameter name of the destination parameter.</p>
     */
    inline void SetSourceParameterName(const Aws::String& value) { m_sourceParameterNameHasBeenSet = true; m_sourceParameterName = value; }

    /**
     * <p>The source parameter name of the destination parameter.</p>
     */
    inline void SetSourceParameterName(Aws::String&& value) { m_sourceParameterNameHasBeenSet = true; m_sourceParameterName = std::move(value); }

    /**
     * <p>The source parameter name of the destination parameter.</p>
     */
    inline void SetSourceParameterName(const char* value) { m_sourceParameterNameHasBeenSet = true; m_sourceParameterName.assign(value); }

    /**
     * <p>The source parameter name of the destination parameter.</p>
     */
    inline DestinationParameterValueConfiguration& WithSourceParameterName(const Aws::String& value) { SetSourceParameterName(value); return *this;}

    /**
     * <p>The source parameter name of the destination parameter.</p>
     */
    inline DestinationParameterValueConfiguration& WithSourceParameterName(Aws::String&& value) { SetSourceParameterName(std::move(value)); return *this;}

    /**
     * <p>The source parameter name of the destination parameter.</p>
     */
    inline DestinationParameterValueConfiguration& WithSourceParameterName(const char* value) { SetSourceParameterName(value); return *this;}


    /**
     * <p>The source field ID of the destination parameter.</p>
     */
    inline const Aws::String& GetSourceField() const{ return m_sourceField; }

    /**
     * <p>The source field ID of the destination parameter.</p>
     */
    inline bool SourceFieldHasBeenSet() const { return m_sourceFieldHasBeenSet; }

    /**
     * <p>The source field ID of the destination parameter.</p>
     */
    inline void SetSourceField(const Aws::String& value) { m_sourceFieldHasBeenSet = true; m_sourceField = value; }

    /**
     * <p>The source field ID of the destination parameter.</p>
     */
    inline void SetSourceField(Aws::String&& value) { m_sourceFieldHasBeenSet = true; m_sourceField = std::move(value); }

    /**
     * <p>The source field ID of the destination parameter.</p>
     */
    inline void SetSourceField(const char* value) { m_sourceFieldHasBeenSet = true; m_sourceField.assign(value); }

    /**
     * <p>The source field ID of the destination parameter.</p>
     */
    inline DestinationParameterValueConfiguration& WithSourceField(const Aws::String& value) { SetSourceField(value); return *this;}

    /**
     * <p>The source field ID of the destination parameter.</p>
     */
    inline DestinationParameterValueConfiguration& WithSourceField(Aws::String&& value) { SetSourceField(std::move(value)); return *this;}

    /**
     * <p>The source field ID of the destination parameter.</p>
     */
    inline DestinationParameterValueConfiguration& WithSourceField(const char* value) { SetSourceField(value); return *this;}

  private:

    CustomValuesConfiguration m_customValuesConfiguration;
    bool m_customValuesConfigurationHasBeenSet = false;

    SelectAllValueOptions m_selectAllValueOptions;
    bool m_selectAllValueOptionsHasBeenSet = false;

    Aws::String m_sourceParameterName;
    bool m_sourceParameterNameHasBeenSet = false;

    Aws::String m_sourceField;
    bool m_sourceFieldHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
