/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

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

  class AddEgressGatewayBridgeRequest
  {
  public:
    AWS_MEDIACONNECT_API AddEgressGatewayBridgeRequest();
    AWS_MEDIACONNECT_API AddEgressGatewayBridgeRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API AddEgressGatewayBridgeRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The maximum expected bitrate (in bps).
     */
    inline int GetMaxBitrate() const{ return m_maxBitrate; }

    /**
     * The maximum expected bitrate (in bps).
     */
    inline bool MaxBitrateHasBeenSet() const { return m_maxBitrateHasBeenSet; }

    /**
     * The maximum expected bitrate (in bps).
     */
    inline void SetMaxBitrate(int value) { m_maxBitrateHasBeenSet = true; m_maxBitrate = value; }

    /**
     * The maximum expected bitrate (in bps).
     */
    inline AddEgressGatewayBridgeRequest& WithMaxBitrate(int value) { SetMaxBitrate(value); return *this;}

  private:

    int m_maxBitrate;
    bool m_maxBitrateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
