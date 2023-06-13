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
    AWS_SIMSPACEWEAVER_API CreateSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSnapshot"; }

    AWS_SIMSPACEWEAVER_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon S3 bucket and optional folder (object key prefix) where SimSpace
     * Weaver creates the snapshot file.</p> <p>The Amazon S3 bucket must be in the
     * same Amazon Web Services Region as the simulation.</p>
     */
    inline const S3Destination& GetDestination() const{ return m_destination; }

    /**
     * <p>The Amazon S3 bucket and optional folder (object key prefix) where SimSpace
     * Weaver creates the snapshot file.</p> <p>The Amazon S3 bucket must be in the
     * same Amazon Web Services Region as the simulation.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket and optional folder (object key prefix) where SimSpace
     * Weaver creates the snapshot file.</p> <p>The Amazon S3 bucket must be in the
     * same Amazon Web Services Region as the simulation.</p>
     */
    inline void SetDestination(const S3Destination& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The Amazon S3 bucket and optional folder (object key prefix) where SimSpace
     * Weaver creates the snapshot file.</p> <p>The Amazon S3 bucket must be in the
     * same Amazon Web Services Region as the simulation.</p>
     */
    inline void SetDestination(S3Destination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The Amazon S3 bucket and optional folder (object key prefix) where SimSpace
     * Weaver creates the snapshot file.</p> <p>The Amazon S3 bucket must be in the
     * same Amazon Web Services Region as the simulation.</p>
     */
    inline CreateSnapshotRequest& WithDestination(const S3Destination& value) { SetDestination(value); return *this;}

    /**
     * <p>The Amazon S3 bucket and optional folder (object key prefix) where SimSpace
     * Weaver creates the snapshot file.</p> <p>The Amazon S3 bucket must be in the
     * same Amazon Web Services Region as the simulation.</p>
     */
    inline CreateSnapshotRequest& WithDestination(S3Destination&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * <p>The name of the simulation.</p>
     */
    inline const Aws::String& GetSimulation() const{ return m_simulation; }

    /**
     * <p>The name of the simulation.</p>
     */
    inline bool SimulationHasBeenSet() const { return m_simulationHasBeenSet; }

    /**
     * <p>The name of the simulation.</p>
     */
    inline void SetSimulation(const Aws::String& value) { m_simulationHasBeenSet = true; m_simulation = value; }

    /**
     * <p>The name of the simulation.</p>
     */
    inline void SetSimulation(Aws::String&& value) { m_simulationHasBeenSet = true; m_simulation = std::move(value); }

    /**
     * <p>The name of the simulation.</p>
     */
    inline void SetSimulation(const char* value) { m_simulationHasBeenSet = true; m_simulation.assign(value); }

    /**
     * <p>The name of the simulation.</p>
     */
    inline CreateSnapshotRequest& WithSimulation(const Aws::String& value) { SetSimulation(value); return *this;}

    /**
     * <p>The name of the simulation.</p>
     */
    inline CreateSnapshotRequest& WithSimulation(Aws::String&& value) { SetSimulation(std::move(value)); return *this;}

    /**
     * <p>The name of the simulation.</p>
     */
    inline CreateSnapshotRequest& WithSimulation(const char* value) { SetSimulation(value); return *this;}

  private:

    S3Destination m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_simulation;
    bool m_simulationHasBeenSet = false;
  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
