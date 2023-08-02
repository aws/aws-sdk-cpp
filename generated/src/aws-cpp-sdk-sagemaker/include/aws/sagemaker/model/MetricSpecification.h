/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/PredefinedMetricSpecification.h>
#include <aws/sagemaker/model/CustomizedMetricSpecification.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>An object containing information about a metric.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MetricSpecification">AWS
   * API Reference</a></p>
   */
  class MetricSpecification
  {
  public:
    AWS_SAGEMAKER_API MetricSpecification();
    AWS_SAGEMAKER_API MetricSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MetricSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about a predefined metric.</p>
     */
    inline const PredefinedMetricSpecification& GetPredefined() const{ return m_predefined; }

    /**
     * <p>Information about a predefined metric.</p>
     */
    inline bool PredefinedHasBeenSet() const { return m_predefinedHasBeenSet; }

    /**
     * <p>Information about a predefined metric.</p>
     */
    inline void SetPredefined(const PredefinedMetricSpecification& value) { m_predefinedHasBeenSet = true; m_predefined = value; }

    /**
     * <p>Information about a predefined metric.</p>
     */
    inline void SetPredefined(PredefinedMetricSpecification&& value) { m_predefinedHasBeenSet = true; m_predefined = std::move(value); }

    /**
     * <p>Information about a predefined metric.</p>
     */
    inline MetricSpecification& WithPredefined(const PredefinedMetricSpecification& value) { SetPredefined(value); return *this;}

    /**
     * <p>Information about a predefined metric.</p>
     */
    inline MetricSpecification& WithPredefined(PredefinedMetricSpecification&& value) { SetPredefined(std::move(value)); return *this;}


    /**
     * <p>Information about a customized metric.</p>
     */
    inline const CustomizedMetricSpecification& GetCustomized() const{ return m_customized; }

    /**
     * <p>Information about a customized metric.</p>
     */
    inline bool CustomizedHasBeenSet() const { return m_customizedHasBeenSet; }

    /**
     * <p>Information about a customized metric.</p>
     */
    inline void SetCustomized(const CustomizedMetricSpecification& value) { m_customizedHasBeenSet = true; m_customized = value; }

    /**
     * <p>Information about a customized metric.</p>
     */
    inline void SetCustomized(CustomizedMetricSpecification&& value) { m_customizedHasBeenSet = true; m_customized = std::move(value); }

    /**
     * <p>Information about a customized metric.</p>
     */
    inline MetricSpecification& WithCustomized(const CustomizedMetricSpecification& value) { SetCustomized(value); return *this;}

    /**
     * <p>Information about a customized metric.</p>
     */
    inline MetricSpecification& WithCustomized(CustomizedMetricSpecification&& value) { SetCustomized(std::move(value)); return *this;}

  private:

    PredefinedMetricSpecification m_predefined;
    bool m_predefinedHasBeenSet = false;

    CustomizedMetricSpecification m_customized;
    bool m_customizedHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
