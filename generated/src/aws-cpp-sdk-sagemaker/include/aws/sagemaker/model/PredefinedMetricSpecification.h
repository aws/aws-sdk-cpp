/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A specification for a predefined metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/PredefinedMetricSpecification">AWS
   * API Reference</a></p>
   */
  class PredefinedMetricSpecification
  {
  public:
    AWS_SAGEMAKER_API PredefinedMetricSpecification();
    AWS_SAGEMAKER_API PredefinedMetricSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API PredefinedMetricSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The metric type. You can only apply SageMaker metric types to SageMaker
     * endpoints.</p>
     */
    inline const Aws::String& GetPredefinedMetricType() const{ return m_predefinedMetricType; }

    /**
     * <p>The metric type. You can only apply SageMaker metric types to SageMaker
     * endpoints.</p>
     */
    inline bool PredefinedMetricTypeHasBeenSet() const { return m_predefinedMetricTypeHasBeenSet; }

    /**
     * <p>The metric type. You can only apply SageMaker metric types to SageMaker
     * endpoints.</p>
     */
    inline void SetPredefinedMetricType(const Aws::String& value) { m_predefinedMetricTypeHasBeenSet = true; m_predefinedMetricType = value; }

    /**
     * <p>The metric type. You can only apply SageMaker metric types to SageMaker
     * endpoints.</p>
     */
    inline void SetPredefinedMetricType(Aws::String&& value) { m_predefinedMetricTypeHasBeenSet = true; m_predefinedMetricType = std::move(value); }

    /**
     * <p>The metric type. You can only apply SageMaker metric types to SageMaker
     * endpoints.</p>
     */
    inline void SetPredefinedMetricType(const char* value) { m_predefinedMetricTypeHasBeenSet = true; m_predefinedMetricType.assign(value); }

    /**
     * <p>The metric type. You can only apply SageMaker metric types to SageMaker
     * endpoints.</p>
     */
    inline PredefinedMetricSpecification& WithPredefinedMetricType(const Aws::String& value) { SetPredefinedMetricType(value); return *this;}

    /**
     * <p>The metric type. You can only apply SageMaker metric types to SageMaker
     * endpoints.</p>
     */
    inline PredefinedMetricSpecification& WithPredefinedMetricType(Aws::String&& value) { SetPredefinedMetricType(std::move(value)); return *this;}

    /**
     * <p>The metric type. You can only apply SageMaker metric types to SageMaker
     * endpoints.</p>
     */
    inline PredefinedMetricSpecification& WithPredefinedMetricType(const char* value) { SetPredefinedMetricType(value); return *this;}

  private:

    Aws::String m_predefinedMetricType;
    bool m_predefinedMetricTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
