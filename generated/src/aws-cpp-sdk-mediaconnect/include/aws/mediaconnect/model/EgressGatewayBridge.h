/**
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

  class EgressGatewayBridge
  {
  public:
    AWS_MEDIACONNECT_API EgressGatewayBridge();
    AWS_MEDIACONNECT_API EgressGatewayBridge(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API EgressGatewayBridge& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The ID of the instance running this bridge.
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * The ID of the instance running this bridge.
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * The ID of the instance running this bridge.
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * The ID of the instance running this bridge.
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * The ID of the instance running this bridge.
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * The ID of the instance running this bridge.
     */
    inline EgressGatewayBridge& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * The ID of the instance running this bridge.
     */
    inline EgressGatewayBridge& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * The ID of the instance running this bridge.
     */
    inline EgressGatewayBridge& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * The maximum expected bitrate (in bps) of the egress bridge.
     */
    inline int GetMaxBitrate() const{ return m_maxBitrate; }

    /**
     * The maximum expected bitrate (in bps) of the egress bridge.
     */
    inline bool MaxBitrateHasBeenSet() const { return m_maxBitrateHasBeenSet; }

    /**
     * The maximum expected bitrate (in bps) of the egress bridge.
     */
    inline void SetMaxBitrate(int value) { m_maxBitrateHasBeenSet = true; m_maxBitrate = value; }

    /**
     * The maximum expected bitrate (in bps) of the egress bridge.
     */
    inline EgressGatewayBridge& WithMaxBitrate(int value) { SetMaxBitrate(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    int m_maxBitrate;
    bool m_maxBitrateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
