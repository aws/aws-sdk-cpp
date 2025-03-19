/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/BridgeFlowSource.h>
#include <aws/mediaconnect/model/BridgeNetworkSource.h>
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
   * <p> The bridge's source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/BridgeSource">AWS
   * API Reference</a></p>
   */
  class BridgeSource
  {
  public:
    AWS_MEDIACONNECT_API BridgeSource() = default;
    AWS_MEDIACONNECT_API BridgeSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API BridgeSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The source of the associated flow. </p>
     */
    inline const BridgeFlowSource& GetFlowSource() const { return m_flowSource; }
    inline bool FlowSourceHasBeenSet() const { return m_flowSourceHasBeenSet; }
    template<typename FlowSourceT = BridgeFlowSource>
    void SetFlowSource(FlowSourceT&& value) { m_flowSourceHasBeenSet = true; m_flowSource = std::forward<FlowSourceT>(value); }
    template<typename FlowSourceT = BridgeFlowSource>
    BridgeSource& WithFlowSource(FlowSourceT&& value) { SetFlowSource(std::forward<FlowSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The network source for the bridge. </p>
     */
    inline const BridgeNetworkSource& GetNetworkSource() const { return m_networkSource; }
    inline bool NetworkSourceHasBeenSet() const { return m_networkSourceHasBeenSet; }
    template<typename NetworkSourceT = BridgeNetworkSource>
    void SetNetworkSource(NetworkSourceT&& value) { m_networkSourceHasBeenSet = true; m_networkSource = std::forward<NetworkSourceT>(value); }
    template<typename NetworkSourceT = BridgeNetworkSource>
    BridgeSource& WithNetworkSource(NetworkSourceT&& value) { SetNetworkSource(std::forward<NetworkSourceT>(value)); return *this;}
    ///@}
  private:

    BridgeFlowSource m_flowSource;
    bool m_flowSourceHasBeenSet = false;

    BridgeNetworkSource m_networkSource;
    bool m_networkSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
