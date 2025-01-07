/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/MonitoringOutput.h>
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
   * <p>The output configuration for monitoring jobs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MonitoringOutputConfig">AWS
   * API Reference</a></p>
   */
  class MonitoringOutputConfig
  {
  public:
    AWS_SAGEMAKER_API MonitoringOutputConfig();
    AWS_SAGEMAKER_API MonitoringOutputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MonitoringOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Monitoring outputs for monitoring jobs. This is where the output of the
     * periodic monitoring jobs is uploaded.</p>
     */
    inline const Aws::Vector<MonitoringOutput>& GetMonitoringOutputs() const{ return m_monitoringOutputs; }
    inline bool MonitoringOutputsHasBeenSet() const { return m_monitoringOutputsHasBeenSet; }
    inline void SetMonitoringOutputs(const Aws::Vector<MonitoringOutput>& value) { m_monitoringOutputsHasBeenSet = true; m_monitoringOutputs = value; }
    inline void SetMonitoringOutputs(Aws::Vector<MonitoringOutput>&& value) { m_monitoringOutputsHasBeenSet = true; m_monitoringOutputs = std::move(value); }
    inline MonitoringOutputConfig& WithMonitoringOutputs(const Aws::Vector<MonitoringOutput>& value) { SetMonitoringOutputs(value); return *this;}
    inline MonitoringOutputConfig& WithMonitoringOutputs(Aws::Vector<MonitoringOutput>&& value) { SetMonitoringOutputs(std::move(value)); return *this;}
    inline MonitoringOutputConfig& AddMonitoringOutputs(const MonitoringOutput& value) { m_monitoringOutputsHasBeenSet = true; m_monitoringOutputs.push_back(value); return *this; }
    inline MonitoringOutputConfig& AddMonitoringOutputs(MonitoringOutput&& value) { m_monitoringOutputsHasBeenSet = true; m_monitoringOutputs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Key Management Service (KMS) key that Amazon SageMaker AI uses to encrypt
     * the model artifacts at rest using Amazon S3 server-side encryption.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline MonitoringOutputConfig& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline MonitoringOutputConfig& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline MonitoringOutputConfig& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}
  private:

    Aws::Vector<MonitoringOutput> m_monitoringOutputs;
    bool m_monitoringOutputsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
