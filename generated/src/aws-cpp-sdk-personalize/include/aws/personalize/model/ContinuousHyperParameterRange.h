/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>Provides the name and range of a continuous hyperparameter.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ContinuousHyperParameterRange">AWS
   * API Reference</a></p>
   */
  class ContinuousHyperParameterRange
  {
  public:
    AWS_PERSONALIZE_API ContinuousHyperParameterRange();
    AWS_PERSONALIZE_API ContinuousHyperParameterRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API ContinuousHyperParameterRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the hyperparameter.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the hyperparameter.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the hyperparameter.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the hyperparameter.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the hyperparameter.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the hyperparameter.</p>
     */
    inline ContinuousHyperParameterRange& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the hyperparameter.</p>
     */
    inline ContinuousHyperParameterRange& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the hyperparameter.</p>
     */
    inline ContinuousHyperParameterRange& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The minimum allowable value for the hyperparameter.</p>
     */
    inline double GetMinValue() const{ return m_minValue; }

    /**
     * <p>The minimum allowable value for the hyperparameter.</p>
     */
    inline bool MinValueHasBeenSet() const { return m_minValueHasBeenSet; }

    /**
     * <p>The minimum allowable value for the hyperparameter.</p>
     */
    inline void SetMinValue(double value) { m_minValueHasBeenSet = true; m_minValue = value; }

    /**
     * <p>The minimum allowable value for the hyperparameter.</p>
     */
    inline ContinuousHyperParameterRange& WithMinValue(double value) { SetMinValue(value); return *this;}


    /**
     * <p>The maximum allowable value for the hyperparameter.</p>
     */
    inline double GetMaxValue() const{ return m_maxValue; }

    /**
     * <p>The maximum allowable value for the hyperparameter.</p>
     */
    inline bool MaxValueHasBeenSet() const { return m_maxValueHasBeenSet; }

    /**
     * <p>The maximum allowable value for the hyperparameter.</p>
     */
    inline void SetMaxValue(double value) { m_maxValueHasBeenSet = true; m_maxValue = value; }

    /**
     * <p>The maximum allowable value for the hyperparameter.</p>
     */
    inline ContinuousHyperParameterRange& WithMaxValue(double value) { SetMaxValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    double m_minValue;
    bool m_minValueHasBeenSet = false;

    double m_maxValue;
    bool m_maxValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
