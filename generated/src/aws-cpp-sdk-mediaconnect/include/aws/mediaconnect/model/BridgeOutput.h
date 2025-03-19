/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/BridgeFlowOutput.h>
#include <aws/mediaconnect/model/BridgeNetworkOutput.h>
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
   * <p> The output of the bridge.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/BridgeOutput">AWS
   * API Reference</a></p>
   */
  class BridgeOutput
  {
  public:
    AWS_MEDIACONNECT_API BridgeOutput() = default;
    AWS_MEDIACONNECT_API BridgeOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API BridgeOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The output of the associated flow. </p>
     */
    inline const BridgeFlowOutput& GetFlowOutput() const { return m_flowOutput; }
    inline bool FlowOutputHasBeenSet() const { return m_flowOutputHasBeenSet; }
    template<typename FlowOutputT = BridgeFlowOutput>
    void SetFlowOutput(FlowOutputT&& value) { m_flowOutputHasBeenSet = true; m_flowOutput = std::forward<FlowOutputT>(value); }
    template<typename FlowOutputT = BridgeFlowOutput>
    BridgeOutput& WithFlowOutput(FlowOutputT&& value) { SetFlowOutput(std::forward<FlowOutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The network output for the bridge. </p>
     */
    inline const BridgeNetworkOutput& GetNetworkOutput() const { return m_networkOutput; }
    inline bool NetworkOutputHasBeenSet() const { return m_networkOutputHasBeenSet; }
    template<typename NetworkOutputT = BridgeNetworkOutput>
    void SetNetworkOutput(NetworkOutputT&& value) { m_networkOutputHasBeenSet = true; m_networkOutput = std::forward<NetworkOutputT>(value); }
    template<typename NetworkOutputT = BridgeNetworkOutput>
    BridgeOutput& WithNetworkOutput(NetworkOutputT&& value) { SetNetworkOutput(std::forward<NetworkOutputT>(value)); return *this;}
    ///@}
  private:

    BridgeFlowOutput m_flowOutput;
    bool m_flowOutputHasBeenSet = false;

    BridgeNetworkOutput m_networkOutput;
    bool m_networkOutputHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
