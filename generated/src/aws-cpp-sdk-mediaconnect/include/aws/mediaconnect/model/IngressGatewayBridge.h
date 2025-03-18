﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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

  class IngressGatewayBridge
  {
  public:
    AWS_MEDIACONNECT_API IngressGatewayBridge() = default;
    AWS_MEDIACONNECT_API IngressGatewayBridge(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API IngressGatewayBridge& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The ID of the instance running this bridge.
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    IngressGatewayBridge& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The maximum expected bitrate (in bps) of the ingress bridge.
     */
    inline int GetMaxBitrate() const { return m_maxBitrate; }
    inline bool MaxBitrateHasBeenSet() const { return m_maxBitrateHasBeenSet; }
    inline void SetMaxBitrate(int value) { m_maxBitrateHasBeenSet = true; m_maxBitrate = value; }
    inline IngressGatewayBridge& WithMaxBitrate(int value) { SetMaxBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * The maximum number of outputs on the ingress bridge.
     */
    inline int GetMaxOutputs() const { return m_maxOutputs; }
    inline bool MaxOutputsHasBeenSet() const { return m_maxOutputsHasBeenSet; }
    inline void SetMaxOutputs(int value) { m_maxOutputsHasBeenSet = true; m_maxOutputs = value; }
    inline IngressGatewayBridge& WithMaxOutputs(int value) { SetMaxOutputs(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    int m_maxBitrate{0};
    bool m_maxBitrateHasBeenSet = false;

    int m_maxOutputs{0};
    bool m_maxOutputsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
