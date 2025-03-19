/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Summary information about a monitoring job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MonitoringJobDefinitionSummary">AWS
   * API Reference</a></p>
   */
  class MonitoringJobDefinitionSummary
  {
  public:
    AWS_SAGEMAKER_API MonitoringJobDefinitionSummary() = default;
    AWS_SAGEMAKER_API MonitoringJobDefinitionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MonitoringJobDefinitionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the monitoring job.</p>
     */
    inline const Aws::String& GetMonitoringJobDefinitionName() const { return m_monitoringJobDefinitionName; }
    inline bool MonitoringJobDefinitionNameHasBeenSet() const { return m_monitoringJobDefinitionNameHasBeenSet; }
    template<typename MonitoringJobDefinitionNameT = Aws::String>
    void SetMonitoringJobDefinitionName(MonitoringJobDefinitionNameT&& value) { m_monitoringJobDefinitionNameHasBeenSet = true; m_monitoringJobDefinitionName = std::forward<MonitoringJobDefinitionNameT>(value); }
    template<typename MonitoringJobDefinitionNameT = Aws::String>
    MonitoringJobDefinitionSummary& WithMonitoringJobDefinitionName(MonitoringJobDefinitionNameT&& value) { SetMonitoringJobDefinitionName(std::forward<MonitoringJobDefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring job.</p>
     */
    inline const Aws::String& GetMonitoringJobDefinitionArn() const { return m_monitoringJobDefinitionArn; }
    inline bool MonitoringJobDefinitionArnHasBeenSet() const { return m_monitoringJobDefinitionArnHasBeenSet; }
    template<typename MonitoringJobDefinitionArnT = Aws::String>
    void SetMonitoringJobDefinitionArn(MonitoringJobDefinitionArnT&& value) { m_monitoringJobDefinitionArnHasBeenSet = true; m_monitoringJobDefinitionArn = std::forward<MonitoringJobDefinitionArnT>(value); }
    template<typename MonitoringJobDefinitionArnT = Aws::String>
    MonitoringJobDefinitionSummary& WithMonitoringJobDefinitionArn(MonitoringJobDefinitionArnT&& value) { SetMonitoringJobDefinitionArn(std::forward<MonitoringJobDefinitionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the monitoring job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    MonitoringJobDefinitionSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the endpoint that the job monitors.</p>
     */
    inline const Aws::String& GetEndpointName() const { return m_endpointName; }
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
    template<typename EndpointNameT = Aws::String>
    void SetEndpointName(EndpointNameT&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::forward<EndpointNameT>(value); }
    template<typename EndpointNameT = Aws::String>
    MonitoringJobDefinitionSummary& WithEndpointName(EndpointNameT&& value) { SetEndpointName(std::forward<EndpointNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_monitoringJobDefinitionName;
    bool m_monitoringJobDefinitionNameHasBeenSet = false;

    Aws::String m_monitoringJobDefinitionArn;
    bool m_monitoringJobDefinitionArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
