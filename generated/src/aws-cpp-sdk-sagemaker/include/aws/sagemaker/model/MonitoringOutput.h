/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/MonitoringS3Output.h>
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
   * <p>The output object for a monitoring job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MonitoringOutput">AWS
   * API Reference</a></p>
   */
  class MonitoringOutput
  {
  public:
    AWS_SAGEMAKER_API MonitoringOutput() = default;
    AWS_SAGEMAKER_API MonitoringOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MonitoringOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 storage location where the results of a monitoring job are
     * saved.</p>
     */
    inline const MonitoringS3Output& GetS3Output() const { return m_s3Output; }
    inline bool S3OutputHasBeenSet() const { return m_s3OutputHasBeenSet; }
    template<typename S3OutputT = MonitoringS3Output>
    void SetS3Output(S3OutputT&& value) { m_s3OutputHasBeenSet = true; m_s3Output = std::forward<S3OutputT>(value); }
    template<typename S3OutputT = MonitoringS3Output>
    MonitoringOutput& WithS3Output(S3OutputT&& value) { SetS3Output(std::forward<S3OutputT>(value)); return *this;}
    ///@}
  private:

    MonitoringS3Output m_s3Output;
    bool m_s3OutputHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
