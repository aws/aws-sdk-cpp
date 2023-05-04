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


    /**
     * <p>The name of the parameter to be overridden with different values.</p>
     */
    inline const Aws::String& GetParameterName() const{ return m_parameterName; }

    /**
     * <p>The name of the parameter to be overridden with different values.</p>
     */
    inline bool ParameterNameHasBeenSet() const { return m_parameterNameHasBeenSet; }

    /**
     * <p>The name of the parameter to be overridden with different values.</p>
     */
    inline void SetParameterName(const Aws::String& value) { m_parameterNameHasBeenSet = true; m_parameterName = value; }

    /**
     * <p>The name of the parameter to be overridden with different values.</p>
     */
    inline void SetParameterName(Aws::String&& value) { m_parameterNameHasBeenSet = true; m_parameterName = std::move(value); }

    /**
     * <p>The name of the parameter to be overridden with different values.</p>
     */
    inline void SetParameterName(const char* value) { m_parameterNameHasBeenSet = true; m_parameterName.assign(value); }

    /**
     * <p>The name of the parameter to be overridden with different values.</p>
     */
    inline OverrideDatasetParameterOperation& WithParameterName(const Aws::String& value) { SetParameterName(value); return *this;}

    /**
     * <p>The name of the parameter to be overridden with different values.</p>
     */
    inline OverrideDatasetParameterOperation& WithParameterName(Aws::String&& value) { SetParameterName(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter to be overridden with different values.</p>
     */
    inline OverrideDatasetParameterOperation& WithParameterName(const char* value) { SetParameterName(value); return *this;}


    /**
     * <p>The new name for the parameter.</p>
     */
    inline const Aws::String& GetNewParameterName() const{ return m_newParameterName; }

    /**
     * <p>The new name for the parameter.</p>
     */
    inline bool NewParameterNameHasBeenSet() const { return m_newParameterNameHasBeenSet; }

    /**
     * <p>The new name for the parameter.</p>
     */
    inline void SetNewParameterName(const Aws::String& value) { m_newParameterNameHasBeenSet = true; m_newParameterName = value; }

    /**
     * <p>The new name for the parameter.</p>
     */
    inline void SetNewParameterName(Aws::String&& value) { m_newParameterNameHasBeenSet = true; m_newParameterName = std::move(value); }

    /**
     * <p>The new name for the parameter.</p>
     */
    inline void SetNewParameterName(const char* value) { m_newParameterNameHasBeenSet = true; m_newParameterName.assign(value); }

    /**
     * <p>The new name for the parameter.</p>
     */
    inline OverrideDatasetParameterOperation& WithNewParameterName(const Aws::String& value) { SetNewParameterName(value); return *this;}

    /**
     * <p>The new name for the parameter.</p>
     */
    inline OverrideDatasetParameterOperation& WithNewParameterName(Aws::String&& value) { SetNewParameterName(std::move(value)); return *this;}

    /**
     * <p>The new name for the parameter.</p>
     */
    inline OverrideDatasetParameterOperation& WithNewParameterName(const char* value) { SetNewParameterName(value); return *this;}


    /**
     * <p>The new default values for the parameter.</p>
     */
    inline const NewDefaultValues& GetNewDefaultValues() const{ return m_newDefaultValues; }

    /**
     * <p>The new default values for the parameter.</p>
     */
    inline bool NewDefaultValuesHasBeenSet() const { return m_newDefaultValuesHasBeenSet; }

    /**
     * <p>The new default values for the parameter.</p>
     */
    inline void SetNewDefaultValues(const NewDefaultValues& value) { m_newDefaultValuesHasBeenSet = true; m_newDefaultValues = value; }

    /**
     * <p>The new default values for the parameter.</p>
     */
    inline void SetNewDefaultValues(NewDefaultValues&& value) { m_newDefaultValuesHasBeenSet = true; m_newDefaultValues = std::move(value); }

    /**
     * <p>The new default values for the parameter.</p>
     */
    inline OverrideDatasetParameterOperation& WithNewDefaultValues(const NewDefaultValues& value) { SetNewDefaultValues(value); return *this;}

    /**
     * <p>The new default values for the parameter.</p>
     */
    inline OverrideDatasetParameterOperation& WithNewDefaultValues(NewDefaultValues&& value) { SetNewDefaultValues(std::move(value)); return *this;}

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
