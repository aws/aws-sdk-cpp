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
    AWS_SIMSPACEWEAVER_API DescribeAppResult() = default;
    AWS_SIMSPACEWEAVER_API DescribeAppResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SIMSPACEWEAVER_API DescribeAppResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The description of the app.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeAppResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the domain of the app.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    DescribeAppResult& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the network endpoint for the custom app. You can use the
     * endpoint to connect to the custom app.</p>
     */
    inline const SimulationAppEndpointInfo& GetEndpointInfo() const { return m_endpointInfo; }
    template<typename EndpointInfoT = SimulationAppEndpointInfo>
    void SetEndpointInfo(EndpointInfoT&& value) { m_endpointInfoHasBeenSet = true; m_endpointInfo = std::forward<EndpointInfoT>(value); }
    template<typename EndpointInfoT = SimulationAppEndpointInfo>
    DescribeAppResult& WithEndpointInfo(EndpointInfoT&& value) { SetEndpointInfo(std::forward<EndpointInfoT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const LaunchOverrides& GetLaunchOverrides() const { return m_launchOverrides; }
    template<typename LaunchOverridesT = LaunchOverrides>
    void SetLaunchOverrides(LaunchOverridesT&& value) { m_launchOverridesHasBeenSet = true; m_launchOverrides = std::forward<LaunchOverridesT>(value); }
    template<typename LaunchOverridesT = LaunchOverrides>
    DescribeAppResult& WithLaunchOverrides(LaunchOverridesT&& value) { SetLaunchOverrides(std::forward<LaunchOverridesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the app.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeAppResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline const Aws::String& GetSimulation() const { return m_simulation; }
    template<typename SimulationT = Aws::String>
    void SetSimulation(SimulationT&& value) { m_simulationHasBeenSet = true; m_simulation = std::forward<SimulationT>(value); }
    template<typename SimulationT = Aws::String>
    DescribeAppResult& WithSimulation(SimulationT&& value) { SetSimulation(std::forward<SimulationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current lifecycle state of the custom app.</p>
     */
    inline SimulationAppStatus GetStatus() const { return m_status; }
    inline void SetStatus(SimulationAppStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeAppResult& WithStatus(SimulationAppStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired lifecycle state of the custom app.</p>
     */
    inline SimulationAppTargetStatus GetTargetStatus() const { return m_targetStatus; }
    inline void SetTargetStatus(SimulationAppTargetStatus value) { m_targetStatusHasBeenSet = true; m_targetStatus = value; }
    inline DescribeAppResult& WithTargetStatus(SimulationAppTargetStatus value) { SetTargetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAppResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    SimulationAppEndpointInfo m_endpointInfo;
    bool m_endpointInfoHasBeenSet = false;

    LaunchOverrides m_launchOverrides;
    bool m_launchOverridesHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_simulation;
    bool m_simulationHasBeenSet = false;

    SimulationAppStatus m_status{SimulationAppStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    SimulationAppTargetStatus m_targetStatus{SimulationAppTargetStatus::NOT_SET};
    bool m_targetStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
