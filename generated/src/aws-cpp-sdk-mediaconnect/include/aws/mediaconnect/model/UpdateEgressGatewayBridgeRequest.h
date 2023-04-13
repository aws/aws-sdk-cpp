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

  class UpdateEgressGatewayBridgeRequest
  {
  public:
    AWS_MEDIACONNECT_API UpdateEgressGatewayBridgeRequest();
    AWS_MEDIACONNECT_API UpdateEgressGatewayBridgeRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API UpdateEgressGatewayBridgeRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Update an existing egress-type bridge.
     */
    inline int GetMaxBitrate() const{ return m_maxBitrate; }

    /**
     * Update an existing egress-type bridge.
     */
    inline bool MaxBitrateHasBeenSet() const { return m_maxBitrateHasBeenSet; }

    /**
     * Update an existing egress-type bridge.
     */
    inline void SetMaxBitrate(int value) { m_maxBitrateHasBeenSet = true; m_maxBitrate = value; }

    /**
     * Update an existing egress-type bridge.
     */
    inline UpdateEgressGatewayBridgeRequest& WithMaxBitrate(int value) { SetMaxBitrate(value); return *this;}

  private:

    int m_maxBitrate;
    bool m_maxBitrateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
