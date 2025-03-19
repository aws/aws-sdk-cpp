/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/AddBridgeFlowSourceRequest.h>
#include <aws/mediaconnect/model/AddBridgeNetworkSourceRequest.h>
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
   * <p> Add an output to a bridge. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddBridgeSourceRequest">AWS
   * API Reference</a></p>
   */
  class AddBridgeSourceRequest
  {
  public:
    AWS_MEDIACONNECT_API AddBridgeSourceRequest() = default;
    AWS_MEDIACONNECT_API AddBridgeSourceRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API AddBridgeSourceRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The source of the flow. </p>
     */
    inline const AddBridgeFlowSourceRequest& GetFlowSource() const { return m_flowSource; }
    inline bool FlowSourceHasBeenSet() const { return m_flowSourceHasBeenSet; }
    template<typename FlowSourceT = AddBridgeFlowSourceRequest>
    void SetFlowSource(FlowSourceT&& value) { m_flowSourceHasBeenSet = true; m_flowSource = std::forward<FlowSourceT>(value); }
    template<typename FlowSourceT = AddBridgeFlowSourceRequest>
    AddBridgeSourceRequest& WithFlowSource(FlowSourceT&& value) { SetFlowSource(std::forward<FlowSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The source of the network. </p>
     */
    inline const AddBridgeNetworkSourceRequest& GetNetworkSource() const { return m_networkSource; }
    inline bool NetworkSourceHasBeenSet() const { return m_networkSourceHasBeenSet; }
    template<typename NetworkSourceT = AddBridgeNetworkSourceRequest>
    void SetNetworkSource(NetworkSourceT&& value) { m_networkSourceHasBeenSet = true; m_networkSource = std::forward<NetworkSourceT>(value); }
    template<typename NetworkSourceT = AddBridgeNetworkSourceRequest>
    AddBridgeSourceRequest& WithNetworkSource(NetworkSourceT&& value) { SetNetworkSource(std::forward<NetworkSourceT>(value)); return *this;}
    ///@}
  private:

    AddBridgeFlowSourceRequest m_flowSource;
    bool m_flowSourceHasBeenSet = false;

    AddBridgeNetworkSourceRequest m_networkSource;
    bool m_networkSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
