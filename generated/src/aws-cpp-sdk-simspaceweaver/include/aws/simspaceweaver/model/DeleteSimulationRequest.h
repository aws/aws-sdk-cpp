/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
#include <aws/simspaceweaver/SimSpaceWeaverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace SimSpaceWeaver
{
namespace Model
{

  /**
   */
  class DeleteSimulationRequest : public SimSpaceWeaverRequest
  {
  public:
    AWS_SIMSPACEWEAVER_API DeleteSimulationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSimulation"; }

    AWS_SIMSPACEWEAVER_API Aws::String SerializePayload() const override;

    AWS_SIMSPACEWEAVER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the simulation.</p>
     */
    inline const Aws::String& GetSimulation() const { return m_simulation; }
    inline bool SimulationHasBeenSet() const { return m_simulationHasBeenSet; }
    template<typename SimulationT = Aws::String>
    void SetSimulation(SimulationT&& value) { m_simulationHasBeenSet = true; m_simulation = std::forward<SimulationT>(value); }
    template<typename SimulationT = Aws::String>
    DeleteSimulationRequest& WithSimulation(SimulationT&& value) { SetSimulation(std::forward<SimulationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_simulation;
    bool m_simulationHasBeenSet = false;
  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
