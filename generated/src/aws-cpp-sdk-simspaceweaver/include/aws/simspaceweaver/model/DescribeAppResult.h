/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/simspaceweaver/model/SimulationAppEndpointInfo.h>
#include <aws/simspaceweaver/model/LaunchOverrides.h>
#include <aws/simspaceweaver/model/SimulationAppStatus.h>
#include <aws/simspaceweaver/model/SimulationAppTargetStatus.h>
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
namespace SimSpaceWeaver
{
namespace Model
{
  class DescribeAppResult
  {
  public:
    AWS_SIMSPACEWEAVER_API DescribeAppResult();
    AWS_SIMSPACEWEAVER_API DescribeAppResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SIMSPACEWEAVER_API DescribeAppResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The description of the app.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the app.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the app.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the app.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the app.</p>
     */
    inline DescribeAppResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the app.</p>
     */
    inline DescribeAppResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the app.</p>
     */
    inline DescribeAppResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the domain of the app.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The name of the domain of the app.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domain = value; }

    /**
     * <p>The name of the domain of the app.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domain = std::move(value); }

    /**
     * <p>The name of the domain of the app.</p>
     */
    inline void SetDomain(const char* value) { m_domain.assign(value); }

    /**
     * <p>The name of the domain of the app.</p>
     */
    inline DescribeAppResult& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the domain of the app.</p>
     */
    inline DescribeAppResult& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The name of the domain of the app.</p>
     */
    inline DescribeAppResult& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>Information about the network endpoint for the custom app. You can use the
     * endpoint to connect to the custom app.</p>
     */
    inline const SimulationAppEndpointInfo& GetEndpointInfo() const{ return m_endpointInfo; }

    /**
     * <p>Information about the network endpoint for the custom app. You can use the
     * endpoint to connect to the custom app.</p>
     */
    inline void SetEndpointInfo(const SimulationAppEndpointInfo& value) { m_endpointInfo = value; }

    /**
     * <p>Information about the network endpoint for the custom app. You can use the
     * endpoint to connect to the custom app.</p>
     */
    inline void SetEndpointInfo(SimulationAppEndpointInfo&& value) { m_endpointInfo = std::move(value); }

    /**
     * <p>Information about the network endpoint for the custom app. You can use the
     * endpoint to connect to the custom app.</p>
     */
    inline DescribeAppResult& WithEndpointInfo(const SimulationAppEndpointInfo& value) { SetEndpointInfo(value); return *this;}

    /**
     * <p>Information about the network endpoint for the custom app. You can use the
     * endpoint to connect to the custom app.</p>
     */
    inline DescribeAppResult& WithEndpointInfo(SimulationAppEndpointInfo&& value) { SetEndpointInfo(std::move(value)); return *this;}


    
    inline const LaunchOverrides& GetLaunchOverrides() const{ return m_launchOverrides; }

    
    inline void SetLaunchOverrides(const LaunchOverrides& value) { m_launchOverrides = value; }

    
    inline void SetLaunchOverrides(LaunchOverrides&& value) { m_launchOverrides = std::move(value); }

    
    inline DescribeAppResult& WithLaunchOverrides(const LaunchOverrides& value) { SetLaunchOverrides(value); return *this;}

    
    inline DescribeAppResult& WithLaunchOverrides(LaunchOverrides&& value) { SetLaunchOverrides(std::move(value)); return *this;}


    /**
     * <p>The name of the app.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the app.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the app.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the app.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the app.</p>
     */
    inline DescribeAppResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the app.</p>
     */
    inline DescribeAppResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the app.</p>
     */
    inline DescribeAppResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline const Aws::String& GetSimulation() const{ return m_simulation; }

    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline void SetSimulation(const Aws::String& value) { m_simulation = value; }

    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline void SetSimulation(Aws::String&& value) { m_simulation = std::move(value); }

    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline void SetSimulation(const char* value) { m_simulation.assign(value); }

    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline DescribeAppResult& WithSimulation(const Aws::String& value) { SetSimulation(value); return *this;}

    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline DescribeAppResult& WithSimulation(Aws::String&& value) { SetSimulation(std::move(value)); return *this;}

    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline DescribeAppResult& WithSimulation(const char* value) { SetSimulation(value); return *this;}


    /**
     * <p>The current lifecycle state of the custom app.</p>
     */
    inline const SimulationAppStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current lifecycle state of the custom app.</p>
     */
    inline void SetStatus(const SimulationAppStatus& value) { m_status = value; }

    /**
     * <p>The current lifecycle state of the custom app.</p>
     */
    inline void SetStatus(SimulationAppStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current lifecycle state of the custom app.</p>
     */
    inline DescribeAppResult& WithStatus(const SimulationAppStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current lifecycle state of the custom app.</p>
     */
    inline DescribeAppResult& WithStatus(SimulationAppStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The desired lifecycle state of the custom app.</p>
     */
    inline const SimulationAppTargetStatus& GetTargetStatus() const{ return m_targetStatus; }

    /**
     * <p>The desired lifecycle state of the custom app.</p>
     */
    inline void SetTargetStatus(const SimulationAppTargetStatus& value) { m_targetStatus = value; }

    /**
     * <p>The desired lifecycle state of the custom app.</p>
     */
    inline void SetTargetStatus(SimulationAppTargetStatus&& value) { m_targetStatus = std::move(value); }

    /**
     * <p>The desired lifecycle state of the custom app.</p>
     */
    inline DescribeAppResult& WithTargetStatus(const SimulationAppTargetStatus& value) { SetTargetStatus(value); return *this;}

    /**
     * <p>The desired lifecycle state of the custom app.</p>
     */
    inline DescribeAppResult& WithTargetStatus(SimulationAppTargetStatus&& value) { SetTargetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_description;

    Aws::String m_domain;

    SimulationAppEndpointInfo m_endpointInfo;

    LaunchOverrides m_launchOverrides;

    Aws::String m_name;

    Aws::String m_simulation;

    SimulationAppStatus m_status;

    SimulationAppTargetStatus m_targetStatus;
  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
