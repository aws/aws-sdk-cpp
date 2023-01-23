/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/DataQualityBaselineConfig.h>
#include <aws/sagemaker/model/DataQualityAppSpecification.h>
#include <aws/sagemaker/model/DataQualityJobInput.h>
#include <aws/sagemaker/model/MonitoringOutputConfig.h>
#include <aws/sagemaker/model/MonitoringResources.h>
#include <aws/sagemaker/model/MonitoringNetworkConfig.h>
#include <aws/sagemaker/model/MonitoringStoppingCondition.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class DescribeDataQualityJobDefinitionResult
  {
  public:
    AWS_SAGEMAKER_API DescribeDataQualityJobDefinitionResult();
    AWS_SAGEMAKER_API DescribeDataQualityJobDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeDataQualityJobDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the data quality monitoring job
     * definition.</p>
     */
    inline const Aws::String& GetJobDefinitionArn() const{ return m_jobDefinitionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the data quality monitoring job
     * definition.</p>
     */
    inline void SetJobDefinitionArn(const Aws::String& value) { m_jobDefinitionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the data quality monitoring job
     * definition.</p>
     */
    inline void SetJobDefinitionArn(Aws::String&& value) { m_jobDefinitionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the data quality monitoring job
     * definition.</p>
     */
    inline void SetJobDefinitionArn(const char* value) { m_jobDefinitionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the data quality monitoring job
     * definition.</p>
     */
    inline DescribeDataQualityJobDefinitionResult& WithJobDefinitionArn(const Aws::String& value) { SetJobDefinitionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the data quality monitoring job
     * definition.</p>
     */
    inline DescribeDataQualityJobDefinitionResult& WithJobDefinitionArn(Aws::String&& value) { SetJobDefinitionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the data quality monitoring job
     * definition.</p>
     */
    inline DescribeDataQualityJobDefinitionResult& WithJobDefinitionArn(const char* value) { SetJobDefinitionArn(value); return *this;}


    /**
     * <p>The name of the data quality monitoring job definition.</p>
     */
    inline const Aws::String& GetJobDefinitionName() const{ return m_jobDefinitionName; }

    /**
     * <p>The name of the data quality monitoring job definition.</p>
     */
    inline void SetJobDefinitionName(const Aws::String& value) { m_jobDefinitionName = value; }

    /**
     * <p>The name of the data quality monitoring job definition.</p>
     */
    inline void SetJobDefinitionName(Aws::String&& value) { m_jobDefinitionName = std::move(value); }

    /**
     * <p>The name of the data quality monitoring job definition.</p>
     */
    inline void SetJobDefinitionName(const char* value) { m_jobDefinitionName.assign(value); }

    /**
     * <p>The name of the data quality monitoring job definition.</p>
     */
    inline DescribeDataQualityJobDefinitionResult& WithJobDefinitionName(const Aws::String& value) { SetJobDefinitionName(value); return *this;}

    /**
     * <p>The name of the data quality monitoring job definition.</p>
     */
    inline DescribeDataQualityJobDefinitionResult& WithJobDefinitionName(Aws::String&& value) { SetJobDefinitionName(std::move(value)); return *this;}

    /**
     * <p>The name of the data quality monitoring job definition.</p>
     */
    inline DescribeDataQualityJobDefinitionResult& WithJobDefinitionName(const char* value) { SetJobDefinitionName(value); return *this;}


    /**
     * <p>The time that the data quality monitoring job definition was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that the data quality monitoring job definition was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time that the data quality monitoring job definition was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time that the data quality monitoring job definition was created.</p>
     */
    inline DescribeDataQualityJobDefinitionResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that the data quality monitoring job definition was created.</p>
     */
    inline DescribeDataQualityJobDefinitionResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The constraints and baselines for the data quality monitoring job
     * definition.</p>
     */
    inline const DataQualityBaselineConfig& GetDataQualityBaselineConfig() const{ return m_dataQualityBaselineConfig; }

    /**
     * <p>The constraints and baselines for the data quality monitoring job
     * definition.</p>
     */
    inline void SetDataQualityBaselineConfig(const DataQualityBaselineConfig& value) { m_dataQualityBaselineConfig = value; }

    /**
     * <p>The constraints and baselines for the data quality monitoring job
     * definition.</p>
     */
    inline void SetDataQualityBaselineConfig(DataQualityBaselineConfig&& value) { m_dataQualityBaselineConfig = std::move(value); }

    /**
     * <p>The constraints and baselines for the data quality monitoring job
     * definition.</p>
     */
    inline DescribeDataQualityJobDefinitionResult& WithDataQualityBaselineConfig(const DataQualityBaselineConfig& value) { SetDataQualityBaselineConfig(value); return *this;}

    /**
     * <p>The constraints and baselines for the data quality monitoring job
     * definition.</p>
     */
    inline DescribeDataQualityJobDefinitionResult& WithDataQualityBaselineConfig(DataQualityBaselineConfig&& value) { SetDataQualityBaselineConfig(std::move(value)); return *this;}


    /**
     * <p>Information about the container that runs the data quality monitoring
     * job.</p>
     */
    inline const DataQualityAppSpecification& GetDataQualityAppSpecification() const{ return m_dataQualityAppSpecification; }

    /**
     * <p>Information about the container that runs the data quality monitoring
     * job.</p>
     */
    inline void SetDataQualityAppSpecification(const DataQualityAppSpecification& value) { m_dataQualityAppSpecification = value; }

    /**
     * <p>Information about the container that runs the data quality monitoring
     * job.</p>
     */
    inline void SetDataQualityAppSpecification(DataQualityAppSpecification&& value) { m_dataQualityAppSpecification = std::move(value); }

    /**
     * <p>Information about the container that runs the data quality monitoring
     * job.</p>
     */
    inline DescribeDataQualityJobDefinitionResult& WithDataQualityAppSpecification(const DataQualityAppSpecification& value) { SetDataQualityAppSpecification(value); return *this;}

    /**
     * <p>Information about the container that runs the data quality monitoring
     * job.</p>
     */
    inline DescribeDataQualityJobDefinitionResult& WithDataQualityAppSpecification(DataQualityAppSpecification&& value) { SetDataQualityAppSpecification(std::move(value)); return *this;}


    /**
     * <p>The list of inputs for the data quality monitoring job. Currently endpoints
     * are supported.</p>
     */
    inline const DataQualityJobInput& GetDataQualityJobInput() const{ return m_dataQualityJobInput; }

    /**
     * <p>The list of inputs for the data quality monitoring job. Currently endpoints
     * are supported.</p>
     */
    inline void SetDataQualityJobInput(const DataQualityJobInput& value) { m_dataQualityJobInput = value; }

    /**
     * <p>The list of inputs for the data quality monitoring job. Currently endpoints
     * are supported.</p>
     */
    inline void SetDataQualityJobInput(DataQualityJobInput&& value) { m_dataQualityJobInput = std::move(value); }

    /**
     * <p>The list of inputs for the data quality monitoring job. Currently endpoints
     * are supported.</p>
     */
    inline DescribeDataQualityJobDefinitionResult& WithDataQualityJobInput(const DataQualityJobInput& value) { SetDataQualityJobInput(value); return *this;}

    /**
     * <p>The list of inputs for the data quality monitoring job. Currently endpoints
     * are supported.</p>
     */
    inline DescribeDataQualityJobDefinitionResult& WithDataQualityJobInput(DataQualityJobInput&& value) { SetDataQualityJobInput(std::move(value)); return *this;}


    
    inline const MonitoringOutputConfig& GetDataQualityJobOutputConfig() const{ return m_dataQualityJobOutputConfig; }

    
    inline void SetDataQualityJobOutputConfig(const MonitoringOutputConfig& value) { m_dataQualityJobOutputConfig = value; }

    
    inline void SetDataQualityJobOutputConfig(MonitoringOutputConfig&& value) { m_dataQualityJobOutputConfig = std::move(value); }

    
    inline DescribeDataQualityJobDefinitionResult& WithDataQualityJobOutputConfig(const MonitoringOutputConfig& value) { SetDataQualityJobOutputConfig(value); return *this;}

    
    inline DescribeDataQualityJobDefinitionResult& WithDataQualityJobOutputConfig(MonitoringOutputConfig&& value) { SetDataQualityJobOutputConfig(std::move(value)); return *this;}


    
    inline const MonitoringResources& GetJobResources() const{ return m_jobResources; }

    
    inline void SetJobResources(const MonitoringResources& value) { m_jobResources = value; }

    
    inline void SetJobResources(MonitoringResources&& value) { m_jobResources = std::move(value); }

    
    inline DescribeDataQualityJobDefinitionResult& WithJobResources(const MonitoringResources& value) { SetJobResources(value); return *this;}

    
    inline DescribeDataQualityJobDefinitionResult& WithJobResources(MonitoringResources&& value) { SetJobResources(std::move(value)); return *this;}


    /**
     * <p>The networking configuration for the data quality monitoring job.</p>
     */
    inline const MonitoringNetworkConfig& GetNetworkConfig() const{ return m_networkConfig; }

    /**
     * <p>The networking configuration for the data quality monitoring job.</p>
     */
    inline void SetNetworkConfig(const MonitoringNetworkConfig& value) { m_networkConfig = value; }

    /**
     * <p>The networking configuration for the data quality monitoring job.</p>
     */
    inline void SetNetworkConfig(MonitoringNetworkConfig&& value) { m_networkConfig = std::move(value); }

    /**
     * <p>The networking configuration for the data quality monitoring job.</p>
     */
    inline DescribeDataQualityJobDefinitionResult& WithNetworkConfig(const MonitoringNetworkConfig& value) { SetNetworkConfig(value); return *this;}

    /**
     * <p>The networking configuration for the data quality monitoring job.</p>
     */
    inline DescribeDataQualityJobDefinitionResult& WithNetworkConfig(MonitoringNetworkConfig&& value) { SetNetworkConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline DescribeDataQualityJobDefinitionResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline DescribeDataQualityJobDefinitionResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline DescribeDataQualityJobDefinitionResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    
    inline const MonitoringStoppingCondition& GetStoppingCondition() const{ return m_stoppingCondition; }

    
    inline void SetStoppingCondition(const MonitoringStoppingCondition& value) { m_stoppingCondition = value; }

    
    inline void SetStoppingCondition(MonitoringStoppingCondition&& value) { m_stoppingCondition = std::move(value); }

    
    inline DescribeDataQualityJobDefinitionResult& WithStoppingCondition(const MonitoringStoppingCondition& value) { SetStoppingCondition(value); return *this;}

    
    inline DescribeDataQualityJobDefinitionResult& WithStoppingCondition(MonitoringStoppingCondition&& value) { SetStoppingCondition(std::move(value)); return *this;}

  private:

    Aws::String m_jobDefinitionArn;

    Aws::String m_jobDefinitionName;

    Aws::Utils::DateTime m_creationTime;

    DataQualityBaselineConfig m_dataQualityBaselineConfig;

    DataQualityAppSpecification m_dataQualityAppSpecification;

    DataQualityJobInput m_dataQualityJobInput;

    MonitoringOutputConfig m_dataQualityJobOutputConfig;

    MonitoringResources m_jobResources;

    MonitoringNetworkConfig m_networkConfig;

    Aws::String m_roleArn;

    MonitoringStoppingCondition m_stoppingCondition;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
