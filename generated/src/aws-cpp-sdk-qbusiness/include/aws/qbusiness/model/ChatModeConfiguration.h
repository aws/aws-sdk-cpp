/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/PluginConfiguration.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Configuration information for Amazon Q Business conversation modes.</p>
   * <p>For more information, see <a
   * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/guardrails.html">Admin
   * controls and guardrails</a> and <a
   * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/using-web-experience.html#chat-source-scope">Conversation
   * settings</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ChatModeConfiguration">AWS
   * API Reference</a></p>
   */
  class ChatModeConfiguration
  {
  public:
    AWS_QBUSINESS_API ChatModeConfiguration();
    AWS_QBUSINESS_API ChatModeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API ChatModeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configuration information required to invoke chat in
     * <code>PLUGIN_MODE</code>.</p>
     */
    inline const PluginConfiguration& GetPluginConfiguration() const{ return m_pluginConfiguration; }

    /**
     * <p>Configuration information required to invoke chat in
     * <code>PLUGIN_MODE</code>.</p>
     */
    inline bool PluginConfigurationHasBeenSet() const { return m_pluginConfigurationHasBeenSet; }

    /**
     * <p>Configuration information required to invoke chat in
     * <code>PLUGIN_MODE</code>.</p>
     */
    inline void SetPluginConfiguration(const PluginConfiguration& value) { m_pluginConfigurationHasBeenSet = true; m_pluginConfiguration = value; }

    /**
     * <p>Configuration information required to invoke chat in
     * <code>PLUGIN_MODE</code>.</p>
     */
    inline void SetPluginConfiguration(PluginConfiguration&& value) { m_pluginConfigurationHasBeenSet = true; m_pluginConfiguration = std::move(value); }

    /**
     * <p>Configuration information required to invoke chat in
     * <code>PLUGIN_MODE</code>.</p>
     */
    inline ChatModeConfiguration& WithPluginConfiguration(const PluginConfiguration& value) { SetPluginConfiguration(value); return *this;}

    /**
     * <p>Configuration information required to invoke chat in
     * <code>PLUGIN_MODE</code>.</p>
     */
    inline ChatModeConfiguration& WithPluginConfiguration(PluginConfiguration&& value) { SetPluginConfiguration(std::move(value)); return *this;}

  private:

    PluginConfiguration m_pluginConfiguration;
    bool m_pluginConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
