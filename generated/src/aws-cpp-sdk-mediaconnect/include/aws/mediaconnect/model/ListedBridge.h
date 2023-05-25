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
   * Displays details of the selected bridge.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListedBridge">AWS
   * API Reference</a></p>
   */
  class ListedBridge
  {
  public:
    AWS_MEDIACONNECT_API ListedBridge();
    AWS_MEDIACONNECT_API ListedBridge(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API ListedBridge& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The ARN of the bridge.
     */
    inline const Aws::String& GetBridgeArn() const{ return m_bridgeArn; }

    /**
     * The ARN of the bridge.
     */
    inline bool BridgeArnHasBeenSet() const { return m_bridgeArnHasBeenSet; }

    /**
     * The ARN of the bridge.
     */
    inline void SetBridgeArn(const Aws::String& value) { m_bridgeArnHasBeenSet = true; m_bridgeArn = value; }

    /**
     * The ARN of the bridge.
     */
    inline void SetBridgeArn(Aws::String&& value) { m_bridgeArnHasBeenSet = true; m_bridgeArn = std::move(value); }

    /**
     * The ARN of the bridge.
     */
    inline void SetBridgeArn(const char* value) { m_bridgeArnHasBeenSet = true; m_bridgeArn.assign(value); }

    /**
     * The ARN of the bridge.
     */
    inline ListedBridge& WithBridgeArn(const Aws::String& value) { SetBridgeArn(value); return *this;}

    /**
     * The ARN of the bridge.
     */
    inline ListedBridge& WithBridgeArn(Aws::String&& value) { SetBridgeArn(std::move(value)); return *this;}

    /**
     * The ARN of the bridge.
     */
    inline ListedBridge& WithBridgeArn(const char* value) { SetBridgeArn(value); return *this;}


    
    inline const BridgeState& GetBridgeState() const{ return m_bridgeState; }

    
    inline bool BridgeStateHasBeenSet() const { return m_bridgeStateHasBeenSet; }

    
    inline void SetBridgeState(const BridgeState& value) { m_bridgeStateHasBeenSet = true; m_bridgeState = value; }

    
    inline void SetBridgeState(BridgeState&& value) { m_bridgeStateHasBeenSet = true; m_bridgeState = std::move(value); }

    
    inline ListedBridge& WithBridgeState(const BridgeState& value) { SetBridgeState(value); return *this;}

    
    inline ListedBridge& WithBridgeState(BridgeState&& value) { SetBridgeState(std::move(value)); return *this;}


    /**
     * The type of the bridge.
     */
    inline const Aws::String& GetBridgeType() const{ return m_bridgeType; }

    /**
     * The type of the bridge.
     */
    inline bool BridgeTypeHasBeenSet() const { return m_bridgeTypeHasBeenSet; }

    /**
     * The type of the bridge.
     */
    inline void SetBridgeType(const Aws::String& value) { m_bridgeTypeHasBeenSet = true; m_bridgeType = value; }

    /**
     * The type of the bridge.
     */
    inline void SetBridgeType(Aws::String&& value) { m_bridgeTypeHasBeenSet = true; m_bridgeType = std::move(value); }

    /**
     * The type of the bridge.
     */
    inline void SetBridgeType(const char* value) { m_bridgeTypeHasBeenSet = true; m_bridgeType.assign(value); }

    /**
     * The type of the bridge.
     */
    inline ListedBridge& WithBridgeType(const Aws::String& value) { SetBridgeType(value); return *this;}

    /**
     * The type of the bridge.
     */
    inline ListedBridge& WithBridgeType(Aws::String&& value) { SetBridgeType(std::move(value)); return *this;}

    /**
     * The type of the bridge.
     */
    inline ListedBridge& WithBridgeType(const char* value) { SetBridgeType(value); return *this;}


    /**
     * The name of the bridge.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the bridge.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the bridge.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the bridge.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the bridge.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the bridge.
     */
    inline ListedBridge& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the bridge.
     */
    inline ListedBridge& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the bridge.
     */
    inline ListedBridge& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The ARN of the gateway associated with the bridge.
     */
    inline const Aws::String& GetPlacementArn() const{ return m_placementArn; }

    /**
     * The ARN of the gateway associated with the bridge.
     */
    inline bool PlacementArnHasBeenSet() const { return m_placementArnHasBeenSet; }

    /**
     * The ARN of the gateway associated with the bridge.
     */
    inline void SetPlacementArn(const Aws::String& value) { m_placementArnHasBeenSet = true; m_placementArn = value; }

    /**
     * The ARN of the gateway associated with the bridge.
     */
    inline void SetPlacementArn(Aws::String&& value) { m_placementArnHasBeenSet = true; m_placementArn = std::move(value); }

    /**
     * The ARN of the gateway associated with the bridge.
     */
    inline void SetPlacementArn(const char* value) { m_placementArnHasBeenSet = true; m_placementArn.assign(value); }

    /**
     * The ARN of the gateway associated with the bridge.
     */
    inline ListedBridge& WithPlacementArn(const Aws::String& value) { SetPlacementArn(value); return *this;}

    /**
     * The ARN of the gateway associated with the bridge.
     */
    inline ListedBridge& WithPlacementArn(Aws::String&& value) { SetPlacementArn(std::move(value)); return *this;}

    /**
     * The ARN of the gateway associated with the bridge.
     */
    inline ListedBridge& WithPlacementArn(const char* value) { SetPlacementArn(value); return *this;}

  private:

    Aws::String m_bridgeArn;
    bool m_bridgeArnHasBeenSet = false;

    BridgeState m_bridgeState;
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
