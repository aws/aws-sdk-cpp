/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/PowerDrawKva.h>
#include <aws/outposts/model/PowerPhase.h>
#include <aws/outposts/model/PowerConnector.h>
#include <aws/outposts/model/PowerFeedDrop.h>
#include <aws/outposts/model/UplinkGbps.h>
#include <aws/outposts/model/UplinkCount.h>
#include <aws/outposts/model/FiberOpticCableType.h>
#include <aws/outposts/model/OpticalStandard.h>
#include <aws/outposts/model/MaximumSupportedWeightLbs.h>
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
namespace Outposts
{
namespace Model
{

  /**
   * <p> Information about the physical and logistical details for racks at sites.
   * For more information about hardware requirements for racks, see <a
   * href="https://docs.aws.amazon.com/outposts/latest/userguide/outposts-requirements.html#checklist">Network
   * readiness checklist</a> in the Amazon Web Services Outposts User Guide.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/RackPhysicalProperties">AWS
   * API Reference</a></p>
   */
  class RackPhysicalProperties
  {
  public:
    AWS_OUTPOSTS_API RackPhysicalProperties();
    AWS_OUTPOSTS_API RackPhysicalProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API RackPhysicalProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The power draw available at the hardware placement position for the rack.
     * </p>
     */
    inline const PowerDrawKva& GetPowerDrawKva() const{ return m_powerDrawKva; }
    inline bool PowerDrawKvaHasBeenSet() const { return m_powerDrawKvaHasBeenSet; }
    inline void SetPowerDrawKva(const PowerDrawKva& value) { m_powerDrawKvaHasBeenSet = true; m_powerDrawKva = value; }
    inline void SetPowerDrawKva(PowerDrawKva&& value) { m_powerDrawKvaHasBeenSet = true; m_powerDrawKva = std::move(value); }
    inline RackPhysicalProperties& WithPowerDrawKva(const PowerDrawKva& value) { SetPowerDrawKva(value); return *this;}
    inline RackPhysicalProperties& WithPowerDrawKva(PowerDrawKva&& value) { SetPowerDrawKva(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The power option that you can provide for hardware.</p>
     */
    inline const PowerPhase& GetPowerPhase() const{ return m_powerPhase; }
    inline bool PowerPhaseHasBeenSet() const { return m_powerPhaseHasBeenSet; }
    inline void SetPowerPhase(const PowerPhase& value) { m_powerPhaseHasBeenSet = true; m_powerPhase = value; }
    inline void SetPowerPhase(PowerPhase&& value) { m_powerPhaseHasBeenSet = true; m_powerPhase = std::move(value); }
    inline RackPhysicalProperties& WithPowerPhase(const PowerPhase& value) { SetPowerPhase(value); return *this;}
    inline RackPhysicalProperties& WithPowerPhase(PowerPhase&& value) { SetPowerPhase(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The power connector for the hardware. </p>
     */
    inline const PowerConnector& GetPowerConnector() const{ return m_powerConnector; }
    inline bool PowerConnectorHasBeenSet() const { return m_powerConnectorHasBeenSet; }
    inline void SetPowerConnector(const PowerConnector& value) { m_powerConnectorHasBeenSet = true; m_powerConnector = value; }
    inline void SetPowerConnector(PowerConnector&& value) { m_powerConnectorHasBeenSet = true; m_powerConnector = std::move(value); }
    inline RackPhysicalProperties& WithPowerConnector(const PowerConnector& value) { SetPowerConnector(value); return *this;}
    inline RackPhysicalProperties& WithPowerConnector(PowerConnector&& value) { SetPowerConnector(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The position of the power feed.</p>
     */
    inline const PowerFeedDrop& GetPowerFeedDrop() const{ return m_powerFeedDrop; }
    inline bool PowerFeedDropHasBeenSet() const { return m_powerFeedDropHasBeenSet; }
    inline void SetPowerFeedDrop(const PowerFeedDrop& value) { m_powerFeedDropHasBeenSet = true; m_powerFeedDrop = value; }
    inline void SetPowerFeedDrop(PowerFeedDrop&& value) { m_powerFeedDropHasBeenSet = true; m_powerFeedDrop = std::move(value); }
    inline RackPhysicalProperties& WithPowerFeedDrop(const PowerFeedDrop& value) { SetPowerFeedDrop(value); return *this;}
    inline RackPhysicalProperties& WithPowerFeedDrop(PowerFeedDrop&& value) { SetPowerFeedDrop(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The uplink speed the rack supports for the connection to the Region. </p>
     */
    inline const UplinkGbps& GetUplinkGbps() const{ return m_uplinkGbps; }
    inline bool UplinkGbpsHasBeenSet() const { return m_uplinkGbpsHasBeenSet; }
    inline void SetUplinkGbps(const UplinkGbps& value) { m_uplinkGbpsHasBeenSet = true; m_uplinkGbps = value; }
    inline void SetUplinkGbps(UplinkGbps&& value) { m_uplinkGbpsHasBeenSet = true; m_uplinkGbps = std::move(value); }
    inline RackPhysicalProperties& WithUplinkGbps(const UplinkGbps& value) { SetUplinkGbps(value); return *this;}
    inline RackPhysicalProperties& WithUplinkGbps(UplinkGbps&& value) { SetUplinkGbps(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of uplinks each Outpost network device.</p>
     */
    inline const UplinkCount& GetUplinkCount() const{ return m_uplinkCount; }
    inline bool UplinkCountHasBeenSet() const { return m_uplinkCountHasBeenSet; }
    inline void SetUplinkCount(const UplinkCount& value) { m_uplinkCountHasBeenSet = true; m_uplinkCount = value; }
    inline void SetUplinkCount(UplinkCount&& value) { m_uplinkCountHasBeenSet = true; m_uplinkCount = std::move(value); }
    inline RackPhysicalProperties& WithUplinkCount(const UplinkCount& value) { SetUplinkCount(value); return *this;}
    inline RackPhysicalProperties& WithUplinkCount(UplinkCount&& value) { SetUplinkCount(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of fiber used to attach the Outpost to the network. </p>
     */
    inline const FiberOpticCableType& GetFiberOpticCableType() const{ return m_fiberOpticCableType; }
    inline bool FiberOpticCableTypeHasBeenSet() const { return m_fiberOpticCableTypeHasBeenSet; }
    inline void SetFiberOpticCableType(const FiberOpticCableType& value) { m_fiberOpticCableTypeHasBeenSet = true; m_fiberOpticCableType = value; }
    inline void SetFiberOpticCableType(FiberOpticCableType&& value) { m_fiberOpticCableTypeHasBeenSet = true; m_fiberOpticCableType = std::move(value); }
    inline RackPhysicalProperties& WithFiberOpticCableType(const FiberOpticCableType& value) { SetFiberOpticCableType(value); return *this;}
    inline RackPhysicalProperties& WithFiberOpticCableType(FiberOpticCableType&& value) { SetFiberOpticCableType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of optical standard used to attach the Outpost to the network. This
     * field is dependent on uplink speed, fiber type, and distance to the upstream
     * device. For more information about networking requirements for racks, see <a
     * href="https://docs.aws.amazon.com/outposts/latest/userguide/outposts-requirements.html#facility-networking">Network</a>
     * in the Amazon Web Services Outposts User Guide. </p>
     */
    inline const OpticalStandard& GetOpticalStandard() const{ return m_opticalStandard; }
    inline bool OpticalStandardHasBeenSet() const { return m_opticalStandardHasBeenSet; }
    inline void SetOpticalStandard(const OpticalStandard& value) { m_opticalStandardHasBeenSet = true; m_opticalStandard = value; }
    inline void SetOpticalStandard(OpticalStandard&& value) { m_opticalStandardHasBeenSet = true; m_opticalStandard = std::move(value); }
    inline RackPhysicalProperties& WithOpticalStandard(const OpticalStandard& value) { SetOpticalStandard(value); return *this;}
    inline RackPhysicalProperties& WithOpticalStandard(OpticalStandard&& value) { SetOpticalStandard(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum rack weight that this site can support. <code>NO_LIMIT</code> is
     * over 2000 lbs (907 kg). </p>
     */
    inline const MaximumSupportedWeightLbs& GetMaximumSupportedWeightLbs() const{ return m_maximumSupportedWeightLbs; }
    inline bool MaximumSupportedWeightLbsHasBeenSet() const { return m_maximumSupportedWeightLbsHasBeenSet; }
    inline void SetMaximumSupportedWeightLbs(const MaximumSupportedWeightLbs& value) { m_maximumSupportedWeightLbsHasBeenSet = true; m_maximumSupportedWeightLbs = value; }
    inline void SetMaximumSupportedWeightLbs(MaximumSupportedWeightLbs&& value) { m_maximumSupportedWeightLbsHasBeenSet = true; m_maximumSupportedWeightLbs = std::move(value); }
    inline RackPhysicalProperties& WithMaximumSupportedWeightLbs(const MaximumSupportedWeightLbs& value) { SetMaximumSupportedWeightLbs(value); return *this;}
    inline RackPhysicalProperties& WithMaximumSupportedWeightLbs(MaximumSupportedWeightLbs&& value) { SetMaximumSupportedWeightLbs(std::move(value)); return *this;}
    ///@}
  private:

    PowerDrawKva m_powerDrawKva;
    bool m_powerDrawKvaHasBeenSet = false;

    PowerPhase m_powerPhase;
    bool m_powerPhaseHasBeenSet = false;

    PowerConnector m_powerConnector;
    bool m_powerConnectorHasBeenSet = false;

    PowerFeedDrop m_powerFeedDrop;
    bool m_powerFeedDropHasBeenSet = false;

    UplinkGbps m_uplinkGbps;
    bool m_uplinkGbpsHasBeenSet = false;

    UplinkCount m_uplinkCount;
    bool m_uplinkCountHasBeenSet = false;

    FiberOpticCableType m_fiberOpticCableType;
    bool m_fiberOpticCableTypeHasBeenSet = false;

    OpticalStandard m_opticalStandard;
    bool m_opticalStandardHasBeenSet = false;

    MaximumSupportedWeightLbs m_maximumSupportedWeightLbs;
    bool m_maximumSupportedWeightLbsHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
