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
    AWS_SAGEMAKER_API MonitoringOutputConfig() = default;
    AWS_SAGEMAKER_API MonitoringOutputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MonitoringOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Monitoring outputs for monitoring jobs. This is where the output of the
     * periodic monitoring jobs is uploaded.</p>
     */
    inline const Aws::Vector<MonitoringOutput>& GetMonitoringOutputs() const { return m_monitoringOutputs; }
    inline bool MonitoringOutputsHasBeenSet() const { return m_monitoringOutputsHasBeenSet; }
    template<typename MonitoringOutputsT = Aws::Vector<MonitoringOutput>>
    void SetMonitoringOutputs(MonitoringOutputsT&& value) { m_monitoringOutputsHasBeenSet = true; m_monitoringOutputs = std::forward<MonitoringOutputsT>(value); }
    template<typename MonitoringOutputsT = Aws::Vector<MonitoringOutput>>
    MonitoringOutputConfig& WithMonitoringOutputs(MonitoringOutputsT&& value) { SetMonitoringOutputs(std::forward<MonitoringOutputsT>(value)); return *this;}
    template<typename MonitoringOutputsT = MonitoringOutput>
    MonitoringOutputConfig& AddMonitoringOutputs(MonitoringOutputsT&& value) { m_monitoringOutputsHasBeenSet = true; m_monitoringOutputs.emplace_back(std::forward<MonitoringOutputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Key Management Service (KMS) key that Amazon SageMaker AI uses to encrypt
     * the model artifacts at rest using Amazon S3 server-side encryption.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    MonitoringOutputConfig& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
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
