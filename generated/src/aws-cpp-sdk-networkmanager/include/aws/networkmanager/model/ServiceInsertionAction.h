/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/SegmentActionServiceInsertion.h>
#include <aws/networkmanager/model/SendViaMode.h>
#include <aws/networkmanager/model/WhenSentTo.h>
#include <aws/networkmanager/model/Via.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes the action that the service insertion will take for any segments
   * associated with it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ServiceInsertionAction">AWS
   * API Reference</a></p>
   */
  class ServiceInsertionAction
  {
  public:
    AWS_NETWORKMANAGER_API ServiceInsertionAction();
    AWS_NETWORKMANAGER_API ServiceInsertionAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API ServiceInsertionAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action the service insertion takes for traffic. <code>send-via</code>
     * sends east-west traffic between attachments. <code>send-to</code> sends
     * north-south traffic to the security appliance, and then from that to either the
     * Internet or to an on-premesis location. </p>
     */
    inline const SegmentActionServiceInsertion& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const SegmentActionServiceInsertion& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(SegmentActionServiceInsertion&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline ServiceInsertionAction& WithAction(const SegmentActionServiceInsertion& value) { SetAction(value); return *this;}
    inline ServiceInsertionAction& WithAction(SegmentActionServiceInsertion&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the mode packets take for the <code>send-via</code> action. This is
     * not used when the action is <code>send-to</code>. <code>dual-hop</code> packets
     * traverse attachments in both the source to the destination core network edges.
     * This mode requires that an inspection attachment must be present in all Regions
     * of the service insertion-enabled segments. For <code>single-hop</code>, packets
     * traverse a single intermediate inserted attachment. You can use
     * <code>EdgeOverride</code> to specify a specific edge to use. </p>
     */
    inline const SendViaMode& GetMode() const{ return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(const SendViaMode& value) { m_modeHasBeenSet = true; m_mode = value; }
    inline void SetMode(SendViaMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }
    inline ServiceInsertionAction& WithMode(const SendViaMode& value) { SetMode(value); return *this;}
    inline ServiceInsertionAction& WithMode(SendViaMode&& value) { SetMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of destination segments if the service insertion action is
     * <code>send-via</code>.</p>
     */
    inline const WhenSentTo& GetWhenSentTo() const{ return m_whenSentTo; }
    inline bool WhenSentToHasBeenSet() const { return m_whenSentToHasBeenSet; }
    inline void SetWhenSentTo(const WhenSentTo& value) { m_whenSentToHasBeenSet = true; m_whenSentTo = value; }
    inline void SetWhenSentTo(WhenSentTo&& value) { m_whenSentToHasBeenSet = true; m_whenSentTo = std::move(value); }
    inline ServiceInsertionAction& WithWhenSentTo(const WhenSentTo& value) { SetWhenSentTo(value); return *this;}
    inline ServiceInsertionAction& WithWhenSentTo(WhenSentTo&& value) { SetWhenSentTo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of network function groups and any edge overrides for the chosen
     * service insertion action. Used for both <code>send-to</code> or
     * <code>send-via</code>.</p>
     */
    inline const Via& GetVia() const{ return m_via; }
    inline bool ViaHasBeenSet() const { return m_viaHasBeenSet; }
    inline void SetVia(const Via& value) { m_viaHasBeenSet = true; m_via = value; }
    inline void SetVia(Via&& value) { m_viaHasBeenSet = true; m_via = std::move(value); }
    inline ServiceInsertionAction& WithVia(const Via& value) { SetVia(value); return *this;}
    inline ServiceInsertionAction& WithVia(Via&& value) { SetVia(std::move(value)); return *this;}
    ///@}
  private:

    SegmentActionServiceInsertion m_action;
    bool m_actionHasBeenSet = false;

    SendViaMode m_mode;
    bool m_modeHasBeenSet = false;

    WhenSentTo m_whenSentTo;
    bool m_whenSentToHasBeenSet = false;

    Via m_via;
    bool m_viaHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
