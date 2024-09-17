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

  class AddIngressGatewayBridgeRequest
  {
  public:
    AWS_MEDIACONNECT_API AddIngressGatewayBridgeRequest();
    AWS_MEDIACONNECT_API AddIngressGatewayBridgeRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API AddIngressGatewayBridgeRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The maximum expected bitrate (in bps).
     */
    inline int GetMaxBitrate() const{ return m_maxBitrate; }
    inline bool MaxBitrateHasBeenSet() const { return m_maxBitrateHasBeenSet; }
    inline void SetMaxBitrate(int value) { m_maxBitrateHasBeenSet = true; m_maxBitrate = value; }
    inline AddIngressGatewayBridgeRequest& WithMaxBitrate(int value) { SetMaxBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * The maximum number of expected outputs.
     */
    inline int GetMaxOutputs() const{ return m_maxOutputs; }
    inline bool MaxOutputsHasBeenSet() const { return m_maxOutputsHasBeenSet; }
    inline void SetMaxOutputs(int value) { m_maxOutputsHasBeenSet = true; m_maxOutputs = value; }
    inline AddIngressGatewayBridgeRequest& WithMaxOutputs(int value) { SetMaxOutputs(value); return *this;}
    ///@}
  private:

    int m_maxBitrate;
    bool m_maxBitrateHasBeenSet = false;

    int m_maxOutputs;
    bool m_maxOutputsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
