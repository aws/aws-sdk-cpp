/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/model/OutputLocation.h>
#include <aws/robomaker/model/LoggingConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/FailureBehavior.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/robomaker/model/VPCConfig.h>
#include <aws/robomaker/model/Compute.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/robomaker/model/RobotApplicationConfig.h>
#include <aws/robomaker/model/SimulationApplicationConfig.h>
#include <aws/robomaker/model/DataSourceConfig.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Information about a simulation job request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/SimulationJobRequest">AWS
   * API Reference</a></p>
   */
  class SimulationJobRequest
  {
  public:
    AWS_ROBOMAKER_API SimulationJobRequest();
    AWS_ROBOMAKER_API SimulationJobRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API SimulationJobRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const OutputLocation& GetOutputLocation() const{ return m_outputLocation; }

    
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }

    
    inline void SetOutputLocation(const OutputLocation& value) { m_outputLocationHasBeenSet = true; m_outputLocation = value; }

    
    inline void SetOutputLocation(OutputLocation&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::move(value); }

    
    inline SimulationJobRequest& WithOutputLocation(const OutputLocation& value) { SetOutputLocation(value); return *this;}

    
    inline SimulationJobRequest& WithOutputLocation(OutputLocation&& value) { SetOutputLocation(std::move(value)); return *this;}


    
    inline const LoggingConfig& GetLoggingConfig() const{ return m_loggingConfig; }

    
    inline bool LoggingConfigHasBeenSet() const { return m_loggingConfigHasBeenSet; }

    
    inline void SetLoggingConfig(const LoggingConfig& value) { m_loggingConfigHasBeenSet = true; m_loggingConfig = value; }

    
    inline void SetLoggingConfig(LoggingConfig&& value) { m_loggingConfigHasBeenSet = true; m_loggingConfig = std::move(value); }

    
    inline SimulationJobRequest& WithLoggingConfig(const LoggingConfig& value) { SetLoggingConfig(value); return *this;}

    
    inline SimulationJobRequest& WithLoggingConfig(LoggingConfig&& value) { SetLoggingConfig(std::move(value)); return *this;}


    /**
     * <p>The maximum simulation job duration in seconds. The value must be 8 days
     * (691,200 seconds) or less.</p>
     */
    inline long long GetMaxJobDurationInSeconds() const{ return m_maxJobDurationInSeconds; }

    /**
     * <p>The maximum simulation job duration in seconds. The value must be 8 days
     * (691,200 seconds) or less.</p>
     */
    inline bool MaxJobDurationInSecondsHasBeenSet() const { return m_maxJobDurationInSecondsHasBeenSet; }

    /**
     * <p>The maximum simulation job duration in seconds. The value must be 8 days
     * (691,200 seconds) or less.</p>
     */
    inline void SetMaxJobDurationInSeconds(long long value) { m_maxJobDurationInSecondsHasBeenSet = true; m_maxJobDurationInSeconds = value; }

    /**
     * <p>The maximum simulation job duration in seconds. The value must be 8 days
     * (691,200 seconds) or less.</p>
     */
    inline SimulationJobRequest& WithMaxJobDurationInSeconds(long long value) { SetMaxJobDurationInSeconds(value); return *this;}


    /**
     * <p>The IAM role name that allows the simulation instance to call the AWS APIs
     * that are specified in its associated policies on your behalf. This is how
     * credentials are passed in to your simulation job. </p>
     */
    inline const Aws::String& GetIamRole() const{ return m_iamRole; }

    /**
     * <p>The IAM role name that allows the simulation instance to call the AWS APIs
     * that are specified in its associated policies on your behalf. This is how
     * credentials are passed in to your simulation job. </p>
     */
    inline bool IamRoleHasBeenSet() const { return m_iamRoleHasBeenSet; }

    /**
     * <p>The IAM role name that allows the simulation instance to call the AWS APIs
     * that are specified in its associated policies on your behalf. This is how
     * credentials are passed in to your simulation job. </p>
     */
    inline void SetIamRole(const Aws::String& value) { m_iamRoleHasBeenSet = true; m_iamRole = value; }

    /**
     * <p>The IAM role name that allows the simulation instance to call the AWS APIs
     * that are specified in its associated policies on your behalf. This is how
     * credentials are passed in to your simulation job. </p>
     */
    inline void SetIamRole(Aws::String&& value) { m_iamRoleHasBeenSet = true; m_iamRole = std::move(value); }

    /**
     * <p>The IAM role name that allows the simulation instance to call the AWS APIs
     * that are specified in its associated policies on your behalf. This is how
     * credentials are passed in to your simulation job. </p>
     */
    inline void SetIamRole(const char* value) { m_iamRoleHasBeenSet = true; m_iamRole.assign(value); }

    /**
     * <p>The IAM role name that allows the simulation instance to call the AWS APIs
     * that are specified in its associated policies on your behalf. This is how
     * credentials are passed in to your simulation job. </p>
     */
    inline SimulationJobRequest& WithIamRole(const Aws::String& value) { SetIamRole(value); return *this;}

    /**
     * <p>The IAM role name that allows the simulation instance to call the AWS APIs
     * that are specified in its associated policies on your behalf. This is how
     * credentials are passed in to your simulation job. </p>
     */
    inline SimulationJobRequest& WithIamRole(Aws::String&& value) { SetIamRole(std::move(value)); return *this;}

    /**
     * <p>The IAM role name that allows the simulation instance to call the AWS APIs
     * that are specified in its associated policies on your behalf. This is how
     * credentials are passed in to your simulation job. </p>
     */
    inline SimulationJobRequest& WithIamRole(const char* value) { SetIamRole(value); return *this;}


    /**
     * <p>The failure behavior the simulation job.</p> <dl> <dt>Continue</dt> <dd>
     * <p>Leaves the host running for its maximum timeout duration after a
     * <code>4XX</code> error code.</p> </dd> <dt>Fail</dt> <dd> <p>Stop the simulation
     * job and terminate the instance.</p> </dd> </dl>
     */
    inline const FailureBehavior& GetFailureBehavior() const{ return m_failureBehavior; }

    /**
     * <p>The failure behavior the simulation job.</p> <dl> <dt>Continue</dt> <dd>
     * <p>Leaves the host running for its maximum timeout duration after a
     * <code>4XX</code> error code.</p> </dd> <dt>Fail</dt> <dd> <p>Stop the simulation
     * job and terminate the instance.</p> </dd> </dl>
     */
    inline bool FailureBehaviorHasBeenSet() const { return m_failureBehaviorHasBeenSet; }

    /**
     * <p>The failure behavior the simulation job.</p> <dl> <dt>Continue</dt> <dd>
     * <p>Leaves the host running for its maximum timeout duration after a
     * <code>4XX</code> error code.</p> </dd> <dt>Fail</dt> <dd> <p>Stop the simulation
     * job and terminate the instance.</p> </dd> </dl>
     */
    inline void SetFailureBehavior(const FailureBehavior& value) { m_failureBehaviorHasBeenSet = true; m_failureBehavior = value; }

    /**
     * <p>The failure behavior the simulation job.</p> <dl> <dt>Continue</dt> <dd>
     * <p>Leaves the host running for its maximum timeout duration after a
     * <code>4XX</code> error code.</p> </dd> <dt>Fail</dt> <dd> <p>Stop the simulation
     * job and terminate the instance.</p> </dd> </dl>
     */
    inline void SetFailureBehavior(FailureBehavior&& value) { m_failureBehaviorHasBeenSet = true; m_failureBehavior = std::move(value); }

    /**
     * <p>The failure behavior the simulation job.</p> <dl> <dt>Continue</dt> <dd>
     * <p>Leaves the host running for its maximum timeout duration after a
     * <code>4XX</code> error code.</p> </dd> <dt>Fail</dt> <dd> <p>Stop the simulation
     * job and terminate the instance.</p> </dd> </dl>
     */
    inline SimulationJobRequest& WithFailureBehavior(const FailureBehavior& value) { SetFailureBehavior(value); return *this;}

    /**
     * <p>The failure behavior the simulation job.</p> <dl> <dt>Continue</dt> <dd>
     * <p>Leaves the host running for its maximum timeout duration after a
     * <code>4XX</code> error code.</p> </dd> <dt>Fail</dt> <dd> <p>Stop the simulation
     * job and terminate the instance.</p> </dd> </dl>
     */
    inline SimulationJobRequest& WithFailureBehavior(FailureBehavior&& value) { SetFailureBehavior(std::move(value)); return *this;}


    /**
     * <p>A Boolean indicating whether to use default applications in the simulation
     * job. Default applications include Gazebo, rqt, rviz and terminal access. </p>
     */
    inline bool GetUseDefaultApplications() const{ return m_useDefaultApplications; }

    /**
     * <p>A Boolean indicating whether to use default applications in the simulation
     * job. Default applications include Gazebo, rqt, rviz and terminal access. </p>
     */
    inline bool UseDefaultApplicationsHasBeenSet() const { return m_useDefaultApplicationsHasBeenSet; }

    /**
     * <p>A Boolean indicating whether to use default applications in the simulation
     * job. Default applications include Gazebo, rqt, rviz and terminal access. </p>
     */
    inline void SetUseDefaultApplications(bool value) { m_useDefaultApplicationsHasBeenSet = true; m_useDefaultApplications = value; }

    /**
     * <p>A Boolean indicating whether to use default applications in the simulation
     * job. Default applications include Gazebo, rqt, rviz and terminal access. </p>
     */
    inline SimulationJobRequest& WithUseDefaultApplications(bool value) { SetUseDefaultApplications(value); return *this;}


    /**
     * <p>The robot applications to use in the simulation job.</p>
     */
    inline const Aws::Vector<RobotApplicationConfig>& GetRobotApplications() const{ return m_robotApplications; }

    /**
     * <p>The robot applications to use in the simulation job.</p>
     */
    inline bool RobotApplicationsHasBeenSet() const { return m_robotApplicationsHasBeenSet; }

    /**
     * <p>The robot applications to use in the simulation job.</p>
     */
    inline void SetRobotApplications(const Aws::Vector<RobotApplicationConfig>& value) { m_robotApplicationsHasBeenSet = true; m_robotApplications = value; }

    /**
     * <p>The robot applications to use in the simulation job.</p>
     */
    inline void SetRobotApplications(Aws::Vector<RobotApplicationConfig>&& value) { m_robotApplicationsHasBeenSet = true; m_robotApplications = std::move(value); }

    /**
     * <p>The robot applications to use in the simulation job.</p>
     */
    inline SimulationJobRequest& WithRobotApplications(const Aws::Vector<RobotApplicationConfig>& value) { SetRobotApplications(value); return *this;}

    /**
     * <p>The robot applications to use in the simulation job.</p>
     */
    inline SimulationJobRequest& WithRobotApplications(Aws::Vector<RobotApplicationConfig>&& value) { SetRobotApplications(std::move(value)); return *this;}

    /**
     * <p>The robot applications to use in the simulation job.</p>
     */
    inline SimulationJobRequest& AddRobotApplications(const RobotApplicationConfig& value) { m_robotApplicationsHasBeenSet = true; m_robotApplications.push_back(value); return *this; }

    /**
     * <p>The robot applications to use in the simulation job.</p>
     */
    inline SimulationJobRequest& AddRobotApplications(RobotApplicationConfig&& value) { m_robotApplicationsHasBeenSet = true; m_robotApplications.push_back(std::move(value)); return *this; }


    /**
     * <p>The simulation applications to use in the simulation job.</p>
     */
    inline const Aws::Vector<SimulationApplicationConfig>& GetSimulationApplications() const{ return m_simulationApplications; }

    /**
     * <p>The simulation applications to use in the simulation job.</p>
     */
    inline bool SimulationApplicationsHasBeenSet() const { return m_simulationApplicationsHasBeenSet; }

    /**
     * <p>The simulation applications to use in the simulation job.</p>
     */
    inline void SetSimulationApplications(const Aws::Vector<SimulationApplicationConfig>& value) { m_simulationApplicationsHasBeenSet = true; m_simulationApplications = value; }

    /**
     * <p>The simulation applications to use in the simulation job.</p>
     */
    inline void SetSimulationApplications(Aws::Vector<SimulationApplicationConfig>&& value) { m_simulationApplicationsHasBeenSet = true; m_simulationApplications = std::move(value); }

    /**
     * <p>The simulation applications to use in the simulation job.</p>
     */
    inline SimulationJobRequest& WithSimulationApplications(const Aws::Vector<SimulationApplicationConfig>& value) { SetSimulationApplications(value); return *this;}

    /**
     * <p>The simulation applications to use in the simulation job.</p>
     */
    inline SimulationJobRequest& WithSimulationApplications(Aws::Vector<SimulationApplicationConfig>&& value) { SetSimulationApplications(std::move(value)); return *this;}

    /**
     * <p>The simulation applications to use in the simulation job.</p>
     */
    inline SimulationJobRequest& AddSimulationApplications(const SimulationApplicationConfig& value) { m_simulationApplicationsHasBeenSet = true; m_simulationApplications.push_back(value); return *this; }

    /**
     * <p>The simulation applications to use in the simulation job.</p>
     */
    inline SimulationJobRequest& AddSimulationApplications(SimulationApplicationConfig&& value) { m_simulationApplicationsHasBeenSet = true; m_simulationApplications.push_back(std::move(value)); return *this; }


    /**
     * <p>Specify data sources to mount read-only files from S3 into your simulation.
     * These files are available under
     * <code>/opt/robomaker/datasources/data_source_name</code>. </p>  <p>There
     * is a limit of 100 files and a combined size of 25GB for all
     * <code>DataSourceConfig</code> objects. </p> 
     */
    inline const Aws::Vector<DataSourceConfig>& GetDataSources() const{ return m_dataSources; }

    /**
     * <p>Specify data sources to mount read-only files from S3 into your simulation.
     * These files are available under
     * <code>/opt/robomaker/datasources/data_source_name</code>. </p>  <p>There
     * is a limit of 100 files and a combined size of 25GB for all
     * <code>DataSourceConfig</code> objects. </p> 
     */
    inline bool DataSourcesHasBeenSet() const { return m_dataSourcesHasBeenSet; }

    /**
     * <p>Specify data sources to mount read-only files from S3 into your simulation.
     * These files are available under
     * <code>/opt/robomaker/datasources/data_source_name</code>. </p>  <p>There
     * is a limit of 100 files and a combined size of 25GB for all
     * <code>DataSourceConfig</code> objects. </p> 
     */
    inline void SetDataSources(const Aws::Vector<DataSourceConfig>& value) { m_dataSourcesHasBeenSet = true; m_dataSources = value; }

    /**
     * <p>Specify data sources to mount read-only files from S3 into your simulation.
     * These files are available under
     * <code>/opt/robomaker/datasources/data_source_name</code>. </p>  <p>There
     * is a limit of 100 files and a combined size of 25GB for all
     * <code>DataSourceConfig</code> objects. </p> 
     */
    inline void SetDataSources(Aws::Vector<DataSourceConfig>&& value) { m_dataSourcesHasBeenSet = true; m_dataSources = std::move(value); }

    /**
     * <p>Specify data sources to mount read-only files from S3 into your simulation.
     * These files are available under
     * <code>/opt/robomaker/datasources/data_source_name</code>. </p>  <p>There
     * is a limit of 100 files and a combined size of 25GB for all
     * <code>DataSourceConfig</code> objects. </p> 
     */
    inline SimulationJobRequest& WithDataSources(const Aws::Vector<DataSourceConfig>& value) { SetDataSources(value); return *this;}

    /**
     * <p>Specify data sources to mount read-only files from S3 into your simulation.
     * These files are available under
     * <code>/opt/robomaker/datasources/data_source_name</code>. </p>  <p>There
     * is a limit of 100 files and a combined size of 25GB for all
     * <code>DataSourceConfig</code> objects. </p> 
     */
    inline SimulationJobRequest& WithDataSources(Aws::Vector<DataSourceConfig>&& value) { SetDataSources(std::move(value)); return *this;}

    /**
     * <p>Specify data sources to mount read-only files from S3 into your simulation.
     * These files are available under
     * <code>/opt/robomaker/datasources/data_source_name</code>. </p>  <p>There
     * is a limit of 100 files and a combined size of 25GB for all
     * <code>DataSourceConfig</code> objects. </p> 
     */
    inline SimulationJobRequest& AddDataSources(const DataSourceConfig& value) { m_dataSourcesHasBeenSet = true; m_dataSources.push_back(value); return *this; }

    /**
     * <p>Specify data sources to mount read-only files from S3 into your simulation.
     * These files are available under
     * <code>/opt/robomaker/datasources/data_source_name</code>. </p>  <p>There
     * is a limit of 100 files and a combined size of 25GB for all
     * <code>DataSourceConfig</code> objects. </p> 
     */
    inline SimulationJobRequest& AddDataSources(DataSourceConfig&& value) { m_dataSourcesHasBeenSet = true; m_dataSources.push_back(std::move(value)); return *this; }


    
    inline const VPCConfig& GetVpcConfig() const{ return m_vpcConfig; }

    
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }

    
    inline void SetVpcConfig(const VPCConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    
    inline void SetVpcConfig(VPCConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    
    inline SimulationJobRequest& WithVpcConfig(const VPCConfig& value) { SetVpcConfig(value); return *this;}

    
    inline SimulationJobRequest& WithVpcConfig(VPCConfig&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>Compute information for the simulation job</p>
     */
    inline const Compute& GetCompute() const{ return m_compute; }

    /**
     * <p>Compute information for the simulation job</p>
     */
    inline bool ComputeHasBeenSet() const { return m_computeHasBeenSet; }

    /**
     * <p>Compute information for the simulation job</p>
     */
    inline void SetCompute(const Compute& value) { m_computeHasBeenSet = true; m_compute = value; }

    /**
     * <p>Compute information for the simulation job</p>
     */
    inline void SetCompute(Compute&& value) { m_computeHasBeenSet = true; m_compute = std::move(value); }

    /**
     * <p>Compute information for the simulation job</p>
     */
    inline SimulationJobRequest& WithCompute(const Compute& value) { SetCompute(value); return *this;}

    /**
     * <p>Compute information for the simulation job</p>
     */
    inline SimulationJobRequest& WithCompute(Compute&& value) { SetCompute(std::move(value)); return *this;}


    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * simulation job request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * simulation job request.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * simulation job request.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * simulation job request.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * simulation job request.</p>
     */
    inline SimulationJobRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * simulation job request.</p>
     */
    inline SimulationJobRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * simulation job request.</p>
     */
    inline SimulationJobRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * simulation job request.</p>
     */
    inline SimulationJobRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * simulation job request.</p>
     */
    inline SimulationJobRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * simulation job request.</p>
     */
    inline SimulationJobRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * simulation job request.</p>
     */
    inline SimulationJobRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * simulation job request.</p>
     */
    inline SimulationJobRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * simulation job request.</p>
     */
    inline SimulationJobRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    OutputLocation m_outputLocation;
    bool m_outputLocationHasBeenSet = false;

    LoggingConfig m_loggingConfig;
    bool m_loggingConfigHasBeenSet = false;

    long long m_maxJobDurationInSeconds;
    bool m_maxJobDurationInSecondsHasBeenSet = false;

    Aws::String m_iamRole;
    bool m_iamRoleHasBeenSet = false;

    FailureBehavior m_failureBehavior;
    bool m_failureBehaviorHasBeenSet = false;

    bool m_useDefaultApplications;
    bool m_useDefaultApplicationsHasBeenSet = false;

    Aws::Vector<RobotApplicationConfig> m_robotApplications;
    bool m_robotApplicationsHasBeenSet = false;

    Aws::Vector<SimulationApplicationConfig> m_simulationApplications;
    bool m_simulationApplicationsHasBeenSet = false;

    Aws::Vector<DataSourceConfig> m_dataSources;
    bool m_dataSourcesHasBeenSet = false;

    VPCConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    Compute m_compute;
    bool m_computeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
