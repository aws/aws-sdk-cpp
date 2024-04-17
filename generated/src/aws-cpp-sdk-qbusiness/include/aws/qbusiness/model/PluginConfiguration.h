/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Configuration information required to invoke chat in
   * <code>PLUGIN_MODE</code>.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/guardrails.html">Admin
   * controls and guardrails</a>, <a
   * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/plugins.html">Plugins</a>,
   * and <a
   * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/using-web-experience.html#chat-source-scope">Conversation
   * settings</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/PluginConfiguration">AWS
   * API Reference</a></p>
   */
  class PluginConfiguration
  {
  public:
    AWS_QBUSINESS_API PluginConfiguration();
    AWS_QBUSINESS_API PluginConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API PluginConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The identifier of the plugin you want to use.</p>
     */
    inline const Aws::String& GetPluginId() const{ return m_pluginId; }

    /**
     * <p> The identifier of the plugin you want to use.</p>
     */
    inline bool PluginIdHasBeenSet() const { return m_pluginIdHasBeenSet; }

    /**
     * <p> The identifier of the plugin you want to use.</p>
     */
    inline void SetPluginId(const Aws::String& value) { m_pluginIdHasBeenSet = true; m_pluginId = value; }

    /**
     * <p> The identifier of the plugin you want to use.</p>
     */
    inline void SetPluginId(Aws::String&& value) { m_pluginIdHasBeenSet = true; m_pluginId = std::move(value); }

    /**
     * <p> The identifier of the plugin you want to use.</p>
     */
    inline void SetPluginId(const char* value) { m_pluginIdHasBeenSet = true; m_pluginId.assign(value); }

    /**
     * <p> The identifier of the plugin you want to use.</p>
     */
    inline PluginConfiguration& WithPluginId(const Aws::String& value) { SetPluginId(value); return *this;}

    /**
     * <p> The identifier of the plugin you want to use.</p>
     */
    inline PluginConfiguration& WithPluginId(Aws::String&& value) { SetPluginId(std::move(value)); return *this;}

    /**
     * <p> The identifier of the plugin you want to use.</p>
     */
    inline PluginConfiguration& WithPluginId(const char* value) { SetPluginId(value); return *this;}

  private:

    Aws::String m_pluginId;
    bool m_pluginIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
