/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/NewDefaultValues.h>
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
   * <p>A transform operation that overrides the dataset parameter values that are
   * defined in another dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/OverrideDatasetParameterOperation">AWS
   * API Reference</a></p>
   */
  class OverrideDatasetParameterOperation
  {
  public:
    AWS_QUICKSIGHT_API OverrideDatasetParameterOperation() = default;
    AWS_QUICKSIGHT_API OverrideDatasetParameterOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API OverrideDatasetParameterOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the parameter to be overridden with different values.</p>
     */
    inline const Aws::String& GetParameterName() const { return m_parameterName; }
    inline bool ParameterNameHasBeenSet() const { return m_parameterNameHasBeenSet; }
    template<typename ParameterNameT = Aws::String>
    void SetParameterName(ParameterNameT&& value) { m_parameterNameHasBeenSet = true; m_parameterName = std::forward<ParameterNameT>(value); }
    template<typename ParameterNameT = Aws::String>
    OverrideDatasetParameterOperation& WithParameterName(ParameterNameT&& value) { SetParameterName(std::forward<ParameterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name for the parameter.</p>
     */
    inline const Aws::String& GetNewParameterName() const { return m_newParameterName; }
    inline bool NewParameterNameHasBeenSet() const { return m_newParameterNameHasBeenSet; }
    template<typename NewParameterNameT = Aws::String>
    void SetNewParameterName(NewParameterNameT&& value) { m_newParameterNameHasBeenSet = true; m_newParameterName = std::forward<NewParameterNameT>(value); }
    template<typename NewParameterNameT = Aws::String>
    OverrideDatasetParameterOperation& WithNewParameterName(NewParameterNameT&& value) { SetNewParameterName(std::forward<NewParameterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new default values for the parameter.</p>
     */
    inline const NewDefaultValues& GetNewDefaultValues() const { return m_newDefaultValues; }
    inline bool NewDefaultValuesHasBeenSet() const { return m_newDefaultValuesHasBeenSet; }
    template<typename NewDefaultValuesT = NewDefaultValues>
    void SetNewDefaultValues(NewDefaultValuesT&& value) { m_newDefaultValuesHasBeenSet = true; m_newDefaultValues = std::forward<NewDefaultValuesT>(value); }
    template<typename NewDefaultValuesT = NewDefaultValues>
    OverrideDatasetParameterOperation& WithNewDefaultValues(NewDefaultValuesT&& value) { SetNewDefaultValues(std::forward<NewDefaultValuesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_parameterName;
    bool m_parameterNameHasBeenSet = false;

    Aws::String m_newParameterName;
    bool m_newParameterNameHasBeenSet = false;

    NewDefaultValues m_newDefaultValues;
    bool m_newDefaultValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
