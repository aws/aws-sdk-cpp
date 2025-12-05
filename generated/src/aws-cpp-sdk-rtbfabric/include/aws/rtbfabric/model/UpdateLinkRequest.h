/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabricRequest.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/LinkLogSettings.h>

#include <utility>

namespace Aws {
namespace RTBFabric {
namespace Model {

/**
 */
class UpdateLinkRequest : public RTBFabricRequest {
 public:
  AWS_RTBFABRIC_API UpdateLinkRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateLink"; }

  AWS_RTBFABRIC_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the gateway.</p>
   */
  inline const Aws::String& GetGatewayId() const { return m_gatewayId; }
  inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }
  template <typename GatewayIdT = Aws::String>
  void SetGatewayId(GatewayIdT&& value) {
    m_gatewayIdHasBeenSet = true;
    m_gatewayId = std::forward<GatewayIdT>(value);
  }
  template <typename GatewayIdT = Aws::String>
  UpdateLinkRequest& WithGatewayId(GatewayIdT&& value) {
    SetGatewayId(std::forward<GatewayIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the link.</p>
   */
  inline const Aws::String& GetLinkId() const { return m_linkId; }
  inline bool LinkIdHasBeenSet() const { return m_linkIdHasBeenSet; }
  template <typename LinkIdT = Aws::String>
  void SetLinkId(LinkIdT&& value) {
    m_linkIdHasBeenSet = true;
    m_linkId = std::forward<LinkIdT>(value);
  }
  template <typename LinkIdT = Aws::String>
  UpdateLinkRequest& WithLinkId(LinkIdT&& value) {
    SetLinkId(std::forward<LinkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Settings for the application logs.</p>
   */
  inline const LinkLogSettings& GetLogSettings() const { return m_logSettings; }
  inline bool LogSettingsHasBeenSet() const { return m_logSettingsHasBeenSet; }
  template <typename LogSettingsT = LinkLogSettings>
  void SetLogSettings(LogSettingsT&& value) {
    m_logSettingsHasBeenSet = true;
    m_logSettings = std::forward<LogSettingsT>(value);
  }
  template <typename LogSettingsT = LinkLogSettings>
  UpdateLinkRequest& WithLogSettings(LogSettingsT&& value) {
    SetLogSettings(std::forward<LogSettingsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_gatewayId;

  Aws::String m_linkId;

  LinkLogSettings m_logSettings;
  bool m_gatewayIdHasBeenSet = false;
  bool m_linkIdHasBeenSet = false;
  bool m_logSettingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
