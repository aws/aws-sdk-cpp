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
   *  <p>This data type is intended for use exclusively by SageMaker Canvas and
   * cannot be used in other contexts at the moment.</p>  <p>Specifies the
   * compute configuration for the EMR Serverless job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EmrServerlessComputeConfig">AWS
   * API Reference</a></p>
   */
  class EmrServerlessComputeConfig
  {
  public:
    AWS_SAGEMAKER_API EmrServerlessComputeConfig();
    AWS_SAGEMAKER_API EmrServerlessComputeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EmrServerlessComputeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the IAM role granting the AutoML job V2 the necessary permissions
     * access policies to list, connect to, or manage EMR Serverless jobs. For detailed
     * information about the required permissions of this role, see "How to configure
     * AutoML to initiate a remote job on EMR Serverless for large datasets" in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-automate-model-development-create-experiment.html">Create
     * a regression or classification job for tabular data using the AutoML API</a> or
     * <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-create-experiment-timeseries-forecasting.html#timeseries-forecasting-api-optional-params">Create
     * an AutoML job for time-series forecasting using the API</a>.</p>
     */
    inline const Aws::String& GetExecutionRoleARN() const{ return m_executionRoleARN; }
    inline bool ExecutionRoleARNHasBeenSet() const { return m_executionRoleARNHasBeenSet; }
    inline void SetExecutionRoleARN(const Aws::String& value) { m_executionRoleARNHasBeenSet = true; m_executionRoleARN = value; }
    inline void SetExecutionRoleARN(Aws::String&& value) { m_executionRoleARNHasBeenSet = true; m_executionRoleARN = std::move(value); }
    inline void SetExecutionRoleARN(const char* value) { m_executionRoleARNHasBeenSet = true; m_executionRoleARN.assign(value); }
    inline EmrServerlessComputeConfig& WithExecutionRoleARN(const Aws::String& value) { SetExecutionRoleARN(value); return *this;}
    inline EmrServerlessComputeConfig& WithExecutionRoleARN(Aws::String&& value) { SetExecutionRoleARN(std::move(value)); return *this;}
    inline EmrServerlessComputeConfig& WithExecutionRoleARN(const char* value) { SetExecutionRoleARN(value); return *this;}
    ///@}
  private:

    Aws::String m_executionRoleARN;
    bool m_executionRoleARNHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
