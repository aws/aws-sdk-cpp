/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
#include <aws/simspaceweaver/SimSpaceWeaverRequest.h>
#include <aws/simspaceweaver/model/S3Destination.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SimSpaceWeaver
{
namespace Model
{

  /**
   */
  class CreateSnapshotRequest : public SimSpaceWeaverRequest
  {
  public:
    AWS_SIMSPACEWEAVER_API CreateSnapshotRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSnapshot"; }

    AWS_SIMSPACEWEAVER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon S3 bucket and optional folder (object key prefix) where SimSpace
     * Weaver creates the snapshot file.</p> <p>The Amazon S3 bucket must be in the
     * same Amazon Web Services Region as the simulation.</p>
     */
    inline const S3Destination& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = S3Destination>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = S3Destination>
    CreateSnapshotRequest& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the simulation.</p>
     */
    inline const Aws::String& GetSimulation() const { return m_simulation; }
    inline bool SimulationHasBeenSet() const { return m_simulationHasBeenSet; }
    template<typename SimulationT = Aws::String>
    void SetSimulation(SimulationT&& value) { m_simulationHasBeenSet = true; m_simulation = std::forward<SimulationT>(value); }
    template<typename SimulationT = Aws::String>
    CreateSnapshotRequest& WithSimulation(SimulationT&& value) { SetSimulation(std::forward<SimulationT>(value)); return *this;}
    ///@}
  private:

    S3Destination m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_simulation;
    bool m_simulationHasBeenSet = false;
  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
