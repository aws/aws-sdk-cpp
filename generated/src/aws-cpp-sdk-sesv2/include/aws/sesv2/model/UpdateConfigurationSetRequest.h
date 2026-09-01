/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/MessageSecurityOptions.h>

#include <utility>

namespace Aws {
namespace SESV2 {
namespace Model {

/**
 * <p>A request to update the configuration of an existing configuration
 * set.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateConfigurationSetRequest">AWS
 * API Reference</a></p>
 */
class UpdateConfigurationSetRequest : public SESV2Request {
 public:
  AWS_SESV2_API UpdateConfigurationSetRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateConfigurationSet"; }

  AWS_SESV2_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the configuration set to update.</p>
   */
  inline const Aws::String& GetConfigurationSetName() const { return m_configurationSetName; }
  inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }
  template <typename ConfigurationSetNameT = Aws::String>
  void SetConfigurationSetName(ConfigurationSetNameT&& value) {
    m_configurationSetNameHasBeenSet = true;
    m_configurationSetName = std::forward<ConfigurationSetNameT>(value);
  }
  template <typename ConfigurationSetNameT = Aws::String>
  UpdateConfigurationSetRequest& WithConfigurationSetName(ConfigurationSetNameT&& value) {
    SetConfigurationSetName(std::forward<ConfigurationSetNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The security options that apply to the MIME message itself for messages sent
   * with the configuration set.</p>
   */
  inline const MessageSecurityOptions& GetMessageSecurityOptions() const { return m_messageSecurityOptions; }
  inline bool MessageSecurityOptionsHasBeenSet() const { return m_messageSecurityOptionsHasBeenSet; }
  template <typename MessageSecurityOptionsT = MessageSecurityOptions>
  void SetMessageSecurityOptions(MessageSecurityOptionsT&& value) {
    m_messageSecurityOptionsHasBeenSet = true;
    m_messageSecurityOptions = std::forward<MessageSecurityOptionsT>(value);
  }
  template <typename MessageSecurityOptionsT = MessageSecurityOptions>
  UpdateConfigurationSetRequest& WithMessageSecurityOptions(MessageSecurityOptionsT&& value) {
    SetMessageSecurityOptions(std::forward<MessageSecurityOptionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_configurationSetName;

  MessageSecurityOptions m_messageSecurityOptions;
  bool m_configurationSetNameHasBeenSet = false;
  bool m_messageSecurityOptionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
