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
    AWS_SAGEMAKER_API MonitoringOutput();
    AWS_SAGEMAKER_API MonitoringOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MonitoringOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 storage location where the results of a monitoring job are
     * saved.</p>
     */
    inline const MonitoringS3Output& GetS3Output() const{ return m_s3Output; }

    /**
     * <p>The Amazon S3 storage location where the results of a monitoring job are
     * saved.</p>
     */
    inline bool S3OutputHasBeenSet() const { return m_s3OutputHasBeenSet; }

    /**
     * <p>The Amazon S3 storage location where the results of a monitoring job are
     * saved.</p>
     */
    inline void SetS3Output(const MonitoringS3Output& value) { m_s3OutputHasBeenSet = true; m_s3Output = value; }

    /**
     * <p>The Amazon S3 storage location where the results of a monitoring job are
     * saved.</p>
     */
    inline void SetS3Output(MonitoringS3Output&& value) { m_s3OutputHasBeenSet = true; m_s3Output = std::move(value); }

    /**
     * <p>The Amazon S3 storage location where the results of a monitoring job are
     * saved.</p>
     */
    inline MonitoringOutput& WithS3Output(const MonitoringS3Output& value) { SetS3Output(value); return *this;}

    /**
     * <p>The Amazon S3 storage location where the results of a monitoring job are
     * saved.</p>
     */
    inline MonitoringOutput& WithS3Output(MonitoringS3Output&& value) { SetS3Output(std::move(value)); return *this;}

  private:

    MonitoringS3Output m_s3Output;
    bool m_s3OutputHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
