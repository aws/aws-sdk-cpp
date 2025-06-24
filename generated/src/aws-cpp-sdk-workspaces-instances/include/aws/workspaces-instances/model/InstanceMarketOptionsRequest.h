/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/workspaces-instances/model/MarketTypeEnum.h>
#include <aws/workspaces-instances/model/SpotMarketOptions.h>
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
namespace WorkspacesInstances
{
namespace Model
{

  /**
   * <p>Configures marketplace-specific instance deployment options.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/InstanceMarketOptionsRequest">AWS
   * API Reference</a></p>
   */
  class InstanceMarketOptionsRequest
  {
  public:
    AWS_WORKSPACESINSTANCES_API InstanceMarketOptionsRequest() = default;
    AWS_WORKSPACESINSTANCES_API InstanceMarketOptionsRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API InstanceMarketOptionsRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the type of marketplace for instance deployment.</p>
     */
    inline MarketTypeEnum GetMarketType() const { return m_marketType; }
    inline bool MarketTypeHasBeenSet() const { return m_marketTypeHasBeenSet; }
    inline void SetMarketType(MarketTypeEnum value) { m_marketTypeHasBeenSet = true; m_marketType = value; }
    inline InstanceMarketOptionsRequest& WithMarketType(MarketTypeEnum value) { SetMarketType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration options for spot instance deployment.</p>
     */
    inline const SpotMarketOptions& GetSpotOptions() const { return m_spotOptions; }
    inline bool SpotOptionsHasBeenSet() const { return m_spotOptionsHasBeenSet; }
    template<typename SpotOptionsT = SpotMarketOptions>
    void SetSpotOptions(SpotOptionsT&& value) { m_spotOptionsHasBeenSet = true; m_spotOptions = std::forward<SpotOptionsT>(value); }
    template<typename SpotOptionsT = SpotMarketOptions>
    InstanceMarketOptionsRequest& WithSpotOptions(SpotOptionsT&& value) { SetSpotOptions(std::forward<SpotOptionsT>(value)); return *this;}
    ///@}
  private:

    MarketTypeEnum m_marketType{MarketTypeEnum::NOT_SET};
    bool m_marketTypeHasBeenSet = false;

    SpotMarketOptions m_spotOptions;
    bool m_spotOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
