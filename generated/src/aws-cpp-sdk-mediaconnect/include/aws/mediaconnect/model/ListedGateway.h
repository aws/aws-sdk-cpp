/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/GatewayState.h>
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
   * <p> A summary of a gateway, including its name, ARN, and status.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListedGateway">AWS
   * API Reference</a></p>
   */
  class ListedGateway
  {
  public:
    AWS_MEDIACONNECT_API ListedGateway() = default;
    AWS_MEDIACONNECT_API ListedGateway(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API ListedGateway& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the gateway.</p>
     */
    inline const Aws::String& GetGatewayArn() const { return m_gatewayArn; }
    inline bool GatewayArnHasBeenSet() const { return m_gatewayArnHasBeenSet; }
    template<typename GatewayArnT = Aws::String>
    void SetGatewayArn(GatewayArnT&& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = std::forward<GatewayArnT>(value); }
    template<typename GatewayArnT = Aws::String>
    ListedGateway& WithGatewayArn(GatewayArnT&& value) { SetGatewayArn(std::forward<GatewayArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the gateway.</p>
     */
    inline GatewayState GetGatewayState() const { return m_gatewayState; }
    inline bool GatewayStateHasBeenSet() const { return m_gatewayStateHasBeenSet; }
    inline void SetGatewayState(GatewayState value) { m_gatewayStateHasBeenSet = true; m_gatewayState = value; }
    inline ListedGateway& WithGatewayState(GatewayState value) { SetGatewayState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the gateway.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ListedGateway& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_gatewayArn;
    bool m_gatewayArnHasBeenSet = false;

    GatewayState m_gatewayState{GatewayState::NOT_SET};
    bool m_gatewayStateHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
