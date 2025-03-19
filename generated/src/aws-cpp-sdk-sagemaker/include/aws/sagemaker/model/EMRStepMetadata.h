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
   * <p>The configurations and outcomes of an Amazon EMR step
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EMRStepMetadata">AWS
   * API Reference</a></p>
   */
  class EMRStepMetadata
  {
  public:
    AWS_SAGEMAKER_API EMRStepMetadata() = default;
    AWS_SAGEMAKER_API EMRStepMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EMRStepMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the EMR cluster.</p>
     */
    inline const Aws::String& GetClusterId() const { return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    template<typename ClusterIdT = Aws::String>
    void SetClusterId(ClusterIdT&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::forward<ClusterIdT>(value); }
    template<typename ClusterIdT = Aws::String>
    EMRStepMetadata& WithClusterId(ClusterIdT&& value) { SetClusterId(std::forward<ClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the EMR cluster step.</p>
     */
    inline const Aws::String& GetStepId() const { return m_stepId; }
    inline bool StepIdHasBeenSet() const { return m_stepIdHasBeenSet; }
    template<typename StepIdT = Aws::String>
    void SetStepId(StepIdT&& value) { m_stepIdHasBeenSet = true; m_stepId = std::forward<StepIdT>(value); }
    template<typename StepIdT = Aws::String>
    EMRStepMetadata& WithStepId(StepIdT&& value) { SetStepId(std::forward<StepIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the EMR cluster step.</p>
     */
    inline const Aws::String& GetStepName() const { return m_stepName; }
    inline bool StepNameHasBeenSet() const { return m_stepNameHasBeenSet; }
    template<typename StepNameT = Aws::String>
    void SetStepName(StepNameT&& value) { m_stepNameHasBeenSet = true; m_stepName = std::forward<StepNameT>(value); }
    template<typename StepNameT = Aws::String>
    EMRStepMetadata& WithStepName(StepNameT&& value) { SetStepName(std::forward<StepNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the log file where the cluster step's failure root cause is
     * recorded.</p>
     */
    inline const Aws::String& GetLogFilePath() const { return m_logFilePath; }
    inline bool LogFilePathHasBeenSet() const { return m_logFilePathHasBeenSet; }
    template<typename LogFilePathT = Aws::String>
    void SetLogFilePath(LogFilePathT&& value) { m_logFilePathHasBeenSet = true; m_logFilePath = std::forward<LogFilePathT>(value); }
    template<typename LogFilePathT = Aws::String>
    EMRStepMetadata& WithLogFilePath(LogFilePathT&& value) { SetLogFilePath(std::forward<LogFilePathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::String m_stepId;
    bool m_stepIdHasBeenSet = false;

    Aws::String m_stepName;
    bool m_stepNameHasBeenSet = false;

    Aws::String m_logFilePath;
    bool m_logFilePathHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
