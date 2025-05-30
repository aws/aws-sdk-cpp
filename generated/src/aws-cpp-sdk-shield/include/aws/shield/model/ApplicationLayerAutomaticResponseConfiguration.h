﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/model/ApplicationLayerAutomaticResponseStatus.h>
#include <aws/shield/model/ResponseAction.h>
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
namespace Shield
{
namespace Model
{

  /**
   * <p>The automatic application layer DDoS mitigation settings for a
   * <a>Protection</a>. This configuration determines whether Shield Advanced
   * automatically manages rules in the web ACL in order to respond to application
   * layer events that Shield Advanced determines to be DDoS attacks. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/ApplicationLayerAutomaticResponseConfiguration">AWS
   * API Reference</a></p>
   */
  class ApplicationLayerAutomaticResponseConfiguration
  {
  public:
    AWS_SHIELD_API ApplicationLayerAutomaticResponseConfiguration() = default;
    AWS_SHIELD_API ApplicationLayerAutomaticResponseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API ApplicationLayerAutomaticResponseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether automatic application layer DDoS mitigation is enabled for
     * the protection. </p>
     */
    inline ApplicationLayerAutomaticResponseStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ApplicationLayerAutomaticResponseStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ApplicationLayerAutomaticResponseConfiguration& WithStatus(ApplicationLayerAutomaticResponseStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the action setting that Shield Advanced should use in the WAF rules
     * that it creates on behalf of the protected resource in response to DDoS attacks.
     * You specify this as part of the configuration for the automatic application
     * layer DDoS mitigation feature, when you enable or update automatic mitigation.
     * Shield Advanced creates the WAF rules in a Shield Advanced-managed rule group,
     * inside the web ACL that you have associated with the resource. </p>
     */
    inline const ResponseAction& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = ResponseAction>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = ResponseAction>
    ApplicationLayerAutomaticResponseConfiguration& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}
  private:

    ApplicationLayerAutomaticResponseStatus m_status{ApplicationLayerAutomaticResponseStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ResponseAction m_action;
    bool m_actionHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
