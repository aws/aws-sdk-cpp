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

  /**
   * <p> Update an existing ingress-type bridge. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateIngressGatewayBridgeRequest">AWS
   * API Reference</a></p>
   */
  class UpdateIngressGatewayBridgeRequest
  {
  public:
    AWS_MEDIACONNECT_API UpdateIngressGatewayBridgeRequest() = default;
    AWS_MEDIACONNECT_API UpdateIngressGatewayBridgeRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API UpdateIngressGatewayBridgeRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The maximum expected bitrate (in bps).</p>
     */
    inline int GetMaxBitrate() const { return m_maxBitrate; }
    inline bool MaxBitrateHasBeenSet() const { return m_maxBitrateHasBeenSet; }
    inline void SetMaxBitrate(int value) { m_maxBitrateHasBeenSet = true; m_maxBitrate = value; }
    inline UpdateIngressGatewayBridgeRequest& WithMaxBitrate(int value) { SetMaxBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of expected outputs.</p>
     */
    inline int GetMaxOutputs() const { return m_maxOutputs; }
    inline bool MaxOutputsHasBeenSet() const { return m_maxOutputsHasBeenSet; }
    inline void SetMaxOutputs(int value) { m_maxOutputsHasBeenSet = true; m_maxOutputs = value; }
    inline UpdateIngressGatewayBridgeRequest& WithMaxOutputs(int value) { SetMaxOutputs(value); return *this;}
    ///@}
  private:

    int m_maxBitrate{0};
    bool m_maxBitrateHasBeenSet = false;

    int m_maxOutputs{0};
    bool m_maxOutputsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
