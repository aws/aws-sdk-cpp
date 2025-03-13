/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   * <p>The summary of network settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/NetworkSettingsSummary">AWS
   * API Reference</a></p>
   */
  class NetworkSettingsSummary
  {
  public:
    AWS_WORKSPACESWEB_API NetworkSettingsSummary() = default;
    AWS_WORKSPACESWEB_API NetworkSettingsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API NetworkSettingsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the network settings.</p>
     */
    inline const Aws::String& GetNetworkSettingsArn() const { return m_networkSettingsArn; }
    inline bool NetworkSettingsArnHasBeenSet() const { return m_networkSettingsArnHasBeenSet; }
    template<typename NetworkSettingsArnT = Aws::String>
    void SetNetworkSettingsArn(NetworkSettingsArnT&& value) { m_networkSettingsArnHasBeenSet = true; m_networkSettingsArn = std::forward<NetworkSettingsArnT>(value); }
    template<typename NetworkSettingsArnT = Aws::String>
    NetworkSettingsSummary& WithNetworkSettingsArn(NetworkSettingsArnT&& value) { SetNetworkSettingsArn(std::forward<NetworkSettingsArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC ID of the network settings.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    NetworkSettingsSummary& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_networkSettingsArn;
    bool m_networkSettingsArnHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
