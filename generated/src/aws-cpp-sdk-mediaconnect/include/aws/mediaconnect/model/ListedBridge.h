/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/BridgeState.h>
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
   * <p> Displays details of the selected bridge.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListedBridge">AWS
   * API Reference</a></p>
   */
  class ListedBridge
  {
  public:
    AWS_MEDIACONNECT_API ListedBridge() = default;
    AWS_MEDIACONNECT_API ListedBridge(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API ListedBridge& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ARN of the bridge.</p>
     */
    inline const Aws::String& GetBridgeArn() const { return m_bridgeArn; }
    inline bool BridgeArnHasBeenSet() const { return m_bridgeArnHasBeenSet; }
    template<typename BridgeArnT = Aws::String>
    void SetBridgeArn(BridgeArnT&& value) { m_bridgeArnHasBeenSet = true; m_bridgeArn = std::forward<BridgeArnT>(value); }
    template<typename BridgeArnT = Aws::String>
    ListedBridge& WithBridgeArn(BridgeArnT&& value) { SetBridgeArn(std::forward<BridgeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the bridge. </p>
     */
    inline BridgeState GetBridgeState() const { return m_bridgeState; }
    inline bool BridgeStateHasBeenSet() const { return m_bridgeStateHasBeenSet; }
    inline void SetBridgeState(BridgeState value) { m_bridgeStateHasBeenSet = true; m_bridgeState = value; }
    inline ListedBridge& WithBridgeState(BridgeState value) { SetBridgeState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of the bridge.</p>
     */
    inline const Aws::String& GetBridgeType() const { return m_bridgeType; }
    inline bool BridgeTypeHasBeenSet() const { return m_bridgeTypeHasBeenSet; }
    template<typename BridgeTypeT = Aws::String>
    void SetBridgeType(BridgeTypeT&& value) { m_bridgeTypeHasBeenSet = true; m_bridgeType = std::forward<BridgeTypeT>(value); }
    template<typename BridgeTypeT = Aws::String>
    ListedBridge& WithBridgeType(BridgeTypeT&& value) { SetBridgeType(std::forward<BridgeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the bridge.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ListedBridge& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the gateway associated with the bridge.</p>
     */
    inline const Aws::String& GetPlacementArn() const { return m_placementArn; }
    inline bool PlacementArnHasBeenSet() const { return m_placementArnHasBeenSet; }
    template<typename PlacementArnT = Aws::String>
    void SetPlacementArn(PlacementArnT&& value) { m_placementArnHasBeenSet = true; m_placementArn = std::forward<PlacementArnT>(value); }
    template<typename PlacementArnT = Aws::String>
    ListedBridge& WithPlacementArn(PlacementArnT&& value) { SetPlacementArn(std::forward<PlacementArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bridgeArn;
    bool m_bridgeArnHasBeenSet = false;

    BridgeState m_bridgeState{BridgeState::NOT_SET};
    bool m_bridgeStateHasBeenSet = false;

    Aws::String m_bridgeType;
    bool m_bridgeTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_placementArn;
    bool m_placementArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
