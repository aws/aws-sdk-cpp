﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/BridgePlacement.h>
#include <aws/mediaconnect/model/ConnectionStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/InstanceState.h>
#include <aws/mediaconnect/model/MessageDetail.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * The settings for an instance in a gateway.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/GatewayInstance">AWS
   * API Reference</a></p>
   */
  class GatewayInstance
  {
  public:
    AWS_MEDIACONNECT_API GatewayInstance();
    AWS_MEDIACONNECT_API GatewayInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API GatewayInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The availability of the instance to host new bridges. The bridgePlacement
     * property can be LOCKED or AVAILABLE. If it is LOCKED, no new bridges can be
     * deployed to this instance. If it is AVAILABLE, new bridges can be added to this
     * instance.
     */
    inline const BridgePlacement& GetBridgePlacement() const{ return m_bridgePlacement; }
    inline bool BridgePlacementHasBeenSet() const { return m_bridgePlacementHasBeenSet; }
    inline void SetBridgePlacement(const BridgePlacement& value) { m_bridgePlacementHasBeenSet = true; m_bridgePlacement = value; }
    inline void SetBridgePlacement(BridgePlacement&& value) { m_bridgePlacementHasBeenSet = true; m_bridgePlacement = std::move(value); }
    inline GatewayInstance& WithBridgePlacement(const BridgePlacement& value) { SetBridgePlacement(value); return *this;}
    inline GatewayInstance& WithBridgePlacement(BridgePlacement&& value) { SetBridgePlacement(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The connection state of the instance.
     */
    inline const ConnectionStatus& GetConnectionStatus() const{ return m_connectionStatus; }
    inline bool ConnectionStatusHasBeenSet() const { return m_connectionStatusHasBeenSet; }
    inline void SetConnectionStatus(const ConnectionStatus& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = value; }
    inline void SetConnectionStatus(ConnectionStatus&& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = std::move(value); }
    inline GatewayInstance& WithConnectionStatus(const ConnectionStatus& value) { SetConnectionStatus(value); return *this;}
    inline GatewayInstance& WithConnectionStatus(ConnectionStatus&& value) { SetConnectionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The Amazon Resource Name (ARN) of the instance.
     */
    inline const Aws::String& GetGatewayArn() const{ return m_gatewayArn; }
    inline bool GatewayArnHasBeenSet() const { return m_gatewayArnHasBeenSet; }
    inline void SetGatewayArn(const Aws::String& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = value; }
    inline void SetGatewayArn(Aws::String&& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = std::move(value); }
    inline void SetGatewayArn(const char* value) { m_gatewayArnHasBeenSet = true; m_gatewayArn.assign(value); }
    inline GatewayInstance& WithGatewayArn(const Aws::String& value) { SetGatewayArn(value); return *this;}
    inline GatewayInstance& WithGatewayArn(Aws::String&& value) { SetGatewayArn(std::move(value)); return *this;}
    inline GatewayInstance& WithGatewayArn(const char* value) { SetGatewayArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The Amazon Resource Name (ARN) of the gateway.
     */
    inline const Aws::String& GetGatewayInstanceArn() const{ return m_gatewayInstanceArn; }
    inline bool GatewayInstanceArnHasBeenSet() const { return m_gatewayInstanceArnHasBeenSet; }
    inline void SetGatewayInstanceArn(const Aws::String& value) { m_gatewayInstanceArnHasBeenSet = true; m_gatewayInstanceArn = value; }
    inline void SetGatewayInstanceArn(Aws::String&& value) { m_gatewayInstanceArnHasBeenSet = true; m_gatewayInstanceArn = std::move(value); }
    inline void SetGatewayInstanceArn(const char* value) { m_gatewayInstanceArnHasBeenSet = true; m_gatewayInstanceArn.assign(value); }
    inline GatewayInstance& WithGatewayInstanceArn(const Aws::String& value) { SetGatewayInstanceArn(value); return *this;}
    inline GatewayInstance& WithGatewayInstanceArn(Aws::String&& value) { SetGatewayInstanceArn(std::move(value)); return *this;}
    inline GatewayInstance& WithGatewayInstanceArn(const char* value) { SetGatewayInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The managed instance ID generated by the SSM install. This will begin with
     * "mi-".
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline GatewayInstance& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline GatewayInstance& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline GatewayInstance& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<MessageDetail>& GetInstanceMessages() const{ return m_instanceMessages; }
    inline bool InstanceMessagesHasBeenSet() const { return m_instanceMessagesHasBeenSet; }
    inline void SetInstanceMessages(const Aws::Vector<MessageDetail>& value) { m_instanceMessagesHasBeenSet = true; m_instanceMessages = value; }
    inline void SetInstanceMessages(Aws::Vector<MessageDetail>&& value) { m_instanceMessagesHasBeenSet = true; m_instanceMessages = std::move(value); }
    inline GatewayInstance& WithInstanceMessages(const Aws::Vector<MessageDetail>& value) { SetInstanceMessages(value); return *this;}
    inline GatewayInstance& WithInstanceMessages(Aws::Vector<MessageDetail>&& value) { SetInstanceMessages(std::move(value)); return *this;}
    inline GatewayInstance& AddInstanceMessages(const MessageDetail& value) { m_instanceMessagesHasBeenSet = true; m_instanceMessages.push_back(value); return *this; }
    inline GatewayInstance& AddInstanceMessages(MessageDetail&& value) { m_instanceMessagesHasBeenSet = true; m_instanceMessages.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The status of the instance.
     */
    inline const InstanceState& GetInstanceState() const{ return m_instanceState; }
    inline bool InstanceStateHasBeenSet() const { return m_instanceStateHasBeenSet; }
    inline void SetInstanceState(const InstanceState& value) { m_instanceStateHasBeenSet = true; m_instanceState = value; }
    inline void SetInstanceState(InstanceState&& value) { m_instanceStateHasBeenSet = true; m_instanceState = std::move(value); }
    inline GatewayInstance& WithInstanceState(const InstanceState& value) { SetInstanceState(value); return *this;}
    inline GatewayInstance& WithInstanceState(InstanceState&& value) { SetInstanceState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The running bridge count.
     */
    inline int GetRunningBridgeCount() const{ return m_runningBridgeCount; }
    inline bool RunningBridgeCountHasBeenSet() const { return m_runningBridgeCountHasBeenSet; }
    inline void SetRunningBridgeCount(int value) { m_runningBridgeCountHasBeenSet = true; m_runningBridgeCount = value; }
    inline GatewayInstance& WithRunningBridgeCount(int value) { SetRunningBridgeCount(value); return *this;}
    ///@}
  private:

    BridgePlacement m_bridgePlacement;
    bool m_bridgePlacementHasBeenSet = false;

    ConnectionStatus m_connectionStatus;
    bool m_connectionStatusHasBeenSet = false;

    Aws::String m_gatewayArn;
    bool m_gatewayArnHasBeenSet = false;

    Aws::String m_gatewayInstanceArn;
    bool m_gatewayInstanceArnHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::Vector<MessageDetail> m_instanceMessages;
    bool m_instanceMessagesHasBeenSet = false;

    InstanceState m_instanceState;
    bool m_instanceStateHasBeenSet = false;

    int m_runningBridgeCount;
    bool m_runningBridgeCountHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
