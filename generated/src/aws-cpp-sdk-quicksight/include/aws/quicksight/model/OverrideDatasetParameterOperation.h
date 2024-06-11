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
    AWS_QUICKSIGHT_API OverrideDatasetParameterOperation();
    AWS_QUICKSIGHT_API OverrideDatasetParameterOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API OverrideDatasetParameterOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the parameter to be overridden with different values.</p>
     */
    inline const Aws::String& GetParameterName() const{ return m_parameterName; }
    inline bool ParameterNameHasBeenSet() const { return m_parameterNameHasBeenSet; }
    inline void SetParameterName(const Aws::String& value) { m_parameterNameHasBeenSet = true; m_parameterName = value; }
    inline void SetParameterName(Aws::String&& value) { m_parameterNameHasBeenSet = true; m_parameterName = std::move(value); }
    inline void SetParameterName(const char* value) { m_parameterNameHasBeenSet = true; m_parameterName.assign(value); }
    inline OverrideDatasetParameterOperation& WithParameterName(const Aws::String& value) { SetParameterName(value); return *this;}
    inline OverrideDatasetParameterOperation& WithParameterName(Aws::String&& value) { SetParameterName(std::move(value)); return *this;}
    inline OverrideDatasetParameterOperation& WithParameterName(const char* value) { SetParameterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name for the parameter.</p>
     */
    inline const Aws::String& GetNewParameterName() const{ return m_newParameterName; }
    inline bool NewParameterNameHasBeenSet() const { return m_newParameterNameHasBeenSet; }
    inline void SetNewParameterName(const Aws::String& value) { m_newParameterNameHasBeenSet = true; m_newParameterName = value; }
    inline void SetNewParameterName(Aws::String&& value) { m_newParameterNameHasBeenSet = true; m_newParameterName = std::move(value); }
    inline void SetNewParameterName(const char* value) { m_newParameterNameHasBeenSet = true; m_newParameterName.assign(value); }
    inline OverrideDatasetParameterOperation& WithNewParameterName(const Aws::String& value) { SetNewParameterName(value); return *this;}
    inline OverrideDatasetParameterOperation& WithNewParameterName(Aws::String&& value) { SetNewParameterName(std::move(value)); return *this;}
    inline OverrideDatasetParameterOperation& WithNewParameterName(const char* value) { SetNewParameterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new default values for the parameter.</p>
     */
    inline const NewDefaultValues& GetNewDefaultValues() const{ return m_newDefaultValues; }
    inline bool NewDefaultValuesHasBeenSet() const { return m_newDefaultValuesHasBeenSet; }
    inline void SetNewDefaultValues(const NewDefaultValues& value) { m_newDefaultValuesHasBeenSet = true; m_newDefaultValues = value; }
    inline void SetNewDefaultValues(NewDefaultValues&& value) { m_newDefaultValuesHasBeenSet = true; m_newDefaultValues = std::move(value); }
    inline OverrideDatasetParameterOperation& WithNewDefaultValues(const NewDefaultValues& value) { SetNewDefaultValues(value); return *this;}
    inline OverrideDatasetParameterOperation& WithNewDefaultValues(NewDefaultValues&& value) { SetNewDefaultValues(std::move(value)); return *this;}
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
