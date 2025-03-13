/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Outposts
{
namespace Model
{

  /**
   */
  class UpdateSiteRackPhysicalPropertiesRequest : public OutpostsRequest
  {
  public:
    AWS_OUTPOSTS_API UpdateSiteRackPhysicalPropertiesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSiteRackPhysicalProperties"; }

    AWS_OUTPOSTS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline const Aws::String& GetSiteId() const { return m_siteId; }
    inline bool SiteIdHasBeenSet() const { return m_siteIdHasBeenSet; }
    template<typename SiteIdT = Aws::String>
    void SetSiteId(SiteIdT&& value) { m_siteIdHasBeenSet = true; m_siteId = std::forward<SiteIdT>(value); }
    template<typename SiteIdT = Aws::String>
    UpdateSiteRackPhysicalPropertiesRequest& WithSiteId(SiteIdT&& value) { SetSiteId(std::forward<SiteIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The power draw, in kVA, available at the hardware placement position for the
     * rack.</p>
     */
    inline PowerDrawKva GetPowerDrawKva() const { return m_powerDrawKva; }
    inline bool PowerDrawKvaHasBeenSet() const { return m_powerDrawKvaHasBeenSet; }
    inline void SetPowerDrawKva(PowerDrawKva value) { m_powerDrawKvaHasBeenSet = true; m_powerDrawKva = value; }
    inline UpdateSiteRackPhysicalPropertiesRequest& WithPowerDrawKva(PowerDrawKva value) { SetPowerDrawKva(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The power option that you can provide for hardware. </p> <ul> <li>
     * <p>Single-phase AC feed: 200 V to 277 V, 50 Hz or 60 Hz</p> </li> <li>
     * <p>Three-phase AC feed: 346 V to 480 V, 50 Hz or 60 Hz</p> </li> </ul>
     */
    inline PowerPhase GetPowerPhase() const { return m_powerPhase; }
    inline bool PowerPhaseHasBeenSet() const { return m_powerPhaseHasBeenSet; }
    inline void SetPowerPhase(PowerPhase value) { m_powerPhaseHasBeenSet = true; m_powerPhase = value; }
    inline UpdateSiteRackPhysicalPropertiesRequest& WithPowerPhase(PowerPhase value) { SetPowerPhase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The power connector that Amazon Web Services should plan to provide for
     * connections to the hardware. Note the correlation between
     * <code>PowerPhase</code> and <code>PowerConnector</code>. </p> <ul> <li>
     * <p>Single-phase AC feed</p> <ul> <li> <p> <b>L6-30P</b> – (common in US); 30A;
     * single phase</p> </li> <li> <p> <b>IEC309 (blue)</b> – P+N+E, 6hr; 32 A; single
     * phase</p> </li> </ul> </li> <li> <p>Three-phase AC feed</p> <ul> <li> <p>
     * <b>AH530P7W (red)</b> – 3P+N+E, 7hr; 30A; three phase</p> </li> <li> <p>
     * <b>AH532P6W (red)</b> – 3P+N+E, 6hr; 32A; three phase</p> </li> <li> <p>
     * <b>CS8365C</b> – (common in US); 3P+E, 50A; three phase</p> </li> </ul> </li>
     * </ul>
     */
    inline PowerConnector GetPowerConnector() const { return m_powerConnector; }
    inline bool PowerConnectorHasBeenSet() const { return m_powerConnectorHasBeenSet; }
    inline void SetPowerConnector(PowerConnector value) { m_powerConnectorHasBeenSet = true; m_powerConnector = value; }
    inline UpdateSiteRackPhysicalPropertiesRequest& WithPowerConnector(PowerConnector value) { SetPowerConnector(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the power feed comes above or below the rack. </p>
     */
    inline PowerFeedDrop GetPowerFeedDrop() const { return m_powerFeedDrop; }
    inline bool PowerFeedDropHasBeenSet() const { return m_powerFeedDropHasBeenSet; }
    inline void SetPowerFeedDrop(PowerFeedDrop value) { m_powerFeedDropHasBeenSet = true; m_powerFeedDrop = value; }
    inline UpdateSiteRackPhysicalPropertiesRequest& WithPowerFeedDrop(PowerFeedDrop value) { SetPowerFeedDrop(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The uplink speed the rack should support for the connection to the Region.
     * </p>
     */
    inline UplinkGbps GetUplinkGbps() const { return m_uplinkGbps; }
    inline bool UplinkGbpsHasBeenSet() const { return m_uplinkGbpsHasBeenSet; }
    inline void SetUplinkGbps(UplinkGbps value) { m_uplinkGbpsHasBeenSet = true; m_uplinkGbps = value; }
    inline UpdateSiteRackPhysicalPropertiesRequest& WithUplinkGbps(UplinkGbps value) { SetUplinkGbps(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Racks come with two Outpost network devices. Depending on the supported
     * uplink speed at the site, the Outpost network devices provide a variable number
     * of uplinks. Specify the number of uplinks for each Outpost network device that
     * you intend to use to connect the rack to your network. Note the correlation
     * between <code>UplinkGbps</code> and <code>UplinkCount</code>. </p> <ul> <li>
     * <p>1Gbps - Uplinks available: 1, 2, 4, 6, 8</p> </li> <li> <p>10Gbps - Uplinks
     * available: 1, 2, 4, 8, 12, 16</p> </li> <li> <p>40 and 100 Gbps- Uplinks
     * available: 1, 2, 4</p> </li> </ul>
     */
    inline UplinkCount GetUplinkCount() const { return m_uplinkCount; }
    inline bool UplinkCountHasBeenSet() const { return m_uplinkCountHasBeenSet; }
    inline void SetUplinkCount(UplinkCount value) { m_uplinkCountHasBeenSet = true; m_uplinkCount = value; }
    inline UpdateSiteRackPhysicalPropertiesRequest& WithUplinkCount(UplinkCount value) { SetUplinkCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of fiber that you will use to attach the Outpost to your network.
     * </p>
     */
    inline FiberOpticCableType GetFiberOpticCableType() const { return m_fiberOpticCableType; }
    inline bool FiberOpticCableTypeHasBeenSet() const { return m_fiberOpticCableTypeHasBeenSet; }
    inline void SetFiberOpticCableType(FiberOpticCableType value) { m_fiberOpticCableTypeHasBeenSet = true; m_fiberOpticCableType = value; }
    inline UpdateSiteRackPhysicalPropertiesRequest& WithFiberOpticCableType(FiberOpticCableType value) { SetFiberOpticCableType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of optical standard that you will use to attach the Outpost to your
     * network. This field is dependent on uplink speed, fiber type, and distance to
     * the upstream device. For more information about networking requirements for
     * racks, see <a
     * href="https://docs.aws.amazon.com/outposts/latest/userguide/outposts-requirements.html#facility-networking">Network</a>
     * in the Amazon Web Services Outposts User Guide. </p> <ul> <li> <p>
     * <code>OPTIC_10GBASE_SR</code>: 10GBASE-SR</p> </li> <li> <p>
     * <code>OPTIC_10GBASE_IR</code>: 10GBASE-IR</p> </li> <li> <p>
     * <code>OPTIC_10GBASE_LR</code>: 10GBASE-LR</p> </li> <li> <p>
     * <code>OPTIC_40GBASE_SR</code>: 40GBASE-SR</p> </li> <li> <p>
     * <code>OPTIC_40GBASE_ESR</code>: 40GBASE-ESR</p> </li> <li> <p>
     * <code>OPTIC_40GBASE_IR4_LR4L</code>: 40GBASE-IR (LR4L)</p> </li> <li> <p>
     * <code>OPTIC_40GBASE_LR4</code>: 40GBASE-LR4</p> </li> <li> <p>
     * <code>OPTIC_100GBASE_SR4</code>: 100GBASE-SR4</p> </li> <li> <p>
     * <code>OPTIC_100GBASE_CWDM4</code>: 100GBASE-CWDM4</p> </li> <li> <p>
     * <code>OPTIC_100GBASE_LR4</code>: 100GBASE-LR4</p> </li> <li> <p>
     * <code>OPTIC_100G_PSM4_MSA</code>: 100G PSM4 MSA</p> </li> <li> <p>
     * <code>OPTIC_1000BASE_LX</code>: 1000Base-LX</p> </li> <li> <p>
     * <code>OPTIC_1000BASE_SX</code> : 1000Base-SX</p> </li> </ul>
     */
    inline OpticalStandard GetOpticalStandard() const { return m_opticalStandard; }
    inline bool OpticalStandardHasBeenSet() const { return m_opticalStandardHasBeenSet; }
    inline void SetOpticalStandard(OpticalStandard value) { m_opticalStandardHasBeenSet = true; m_opticalStandard = value; }
    inline UpdateSiteRackPhysicalPropertiesRequest& WithOpticalStandard(OpticalStandard value) { SetOpticalStandard(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum rack weight that this site can support. <code>NO_LIMIT</code> is
     * over 2000lbs. </p>
     */
    inline MaximumSupportedWeightLbs GetMaximumSupportedWeightLbs() const { return m_maximumSupportedWeightLbs; }
    inline bool MaximumSupportedWeightLbsHasBeenSet() const { return m_maximumSupportedWeightLbsHasBeenSet; }
    inline void SetMaximumSupportedWeightLbs(MaximumSupportedWeightLbs value) { m_maximumSupportedWeightLbsHasBeenSet = true; m_maximumSupportedWeightLbs = value; }
    inline UpdateSiteRackPhysicalPropertiesRequest& WithMaximumSupportedWeightLbs(MaximumSupportedWeightLbs value) { SetMaximumSupportedWeightLbs(value); return *this;}
    ///@}
  private:

    Aws::String m_siteId;
    bool m_siteIdHasBeenSet = false;

    PowerDrawKva m_powerDrawKva{PowerDrawKva::NOT_SET};
    bool m_powerDrawKvaHasBeenSet = false;

    PowerPhase m_powerPhase{PowerPhase::NOT_SET};
    bool m_powerPhaseHasBeenSet = false;

    PowerConnector m_powerConnector{PowerConnector::NOT_SET};
    bool m_powerConnectorHasBeenSet = false;

    PowerFeedDrop m_powerFeedDrop{PowerFeedDrop::NOT_SET};
    bool m_powerFeedDropHasBeenSet = false;

    UplinkGbps m_uplinkGbps{UplinkGbps::NOT_SET};
    bool m_uplinkGbpsHasBeenSet = false;

    UplinkCount m_uplinkCount{UplinkCount::NOT_SET};
    bool m_uplinkCountHasBeenSet = false;

    FiberOpticCableType m_fiberOpticCableType{FiberOpticCableType::NOT_SET};
    bool m_fiberOpticCableTypeHasBeenSet = false;

    OpticalStandard m_opticalStandard{OpticalStandard::NOT_SET};
    bool m_opticalStandardHasBeenSet = false;

    MaximumSupportedWeightLbs m_maximumSupportedWeightLbs{MaximumSupportedWeightLbs::NOT_SET};
    bool m_maximumSupportedWeightLbsHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
