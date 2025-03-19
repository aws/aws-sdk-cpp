/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class GetCommandInvocationRequest : public SSMRequest
  {
  public:
    AWS_SSM_API GetCommandInvocationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCommandInvocation"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>(Required) The parent command ID of the invocation plugin.</p>
     */
    inline const Aws::String& GetCommandId() const { return m_commandId; }
    inline bool CommandIdHasBeenSet() const { return m_commandIdHasBeenSet; }
    template<typename CommandIdT = Aws::String>
    void SetCommandId(CommandIdT&& value) { m_commandIdHasBeenSet = true; m_commandId = std::forward<CommandIdT>(value); }
    template<typename CommandIdT = Aws::String>
    GetCommandInvocationRequest& WithCommandId(CommandIdT&& value) { SetCommandId(std::forward<CommandIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Required) The ID of the managed node targeted by the command. A <i>managed
     * node</i> can be an Amazon Elastic Compute Cloud (Amazon EC2) instance, edge
     * device, and on-premises server or VM in your hybrid environment that is
     * configured for Amazon Web Services Systems Manager.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    GetCommandInvocationRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the step for which you want detailed results. If the document
     * contains only one step, you can omit the name and details for that step. If the
     * document contains more than one step, you must specify the name of the step for
     * which you want to view details. Be sure to specify the name of the step, not the
     * name of a plugin like <code>aws:RunShellScript</code>.</p> <p>To find the
     * <code>PluginName</code>, check the document content and find the name of the
     * step you want details for. Alternatively, use <a>ListCommandInvocations</a> with
     * the <code>CommandId</code> and <code>Details</code> parameters. The
     * <code>PluginName</code> is the <code>Name</code> attribute of the
     * <code>CommandPlugin</code> object in the <code>CommandPlugins</code> list.</p>
     */
    inline const Aws::String& GetPluginName() const { return m_pluginName; }
    inline bool PluginNameHasBeenSet() const { return m_pluginNameHasBeenSet; }
    template<typename PluginNameT = Aws::String>
    void SetPluginName(PluginNameT&& value) { m_pluginNameHasBeenSet = true; m_pluginName = std::forward<PluginNameT>(value); }
    template<typename PluginNameT = Aws::String>
    GetCommandInvocationRequest& WithPluginName(PluginNameT&& value) { SetPluginName(std::forward<PluginNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_commandId;
    bool m_commandIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_pluginName;
    bool m_pluginNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
