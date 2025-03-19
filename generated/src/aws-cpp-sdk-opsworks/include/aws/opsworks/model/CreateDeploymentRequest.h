/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworks/model/DeploymentCommand.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class CreateDeploymentRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API CreateDeploymentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDeployment"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The stack ID.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    CreateDeploymentRequest& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The app ID. This parameter is required for app deployments, but not for other
     * deployment commands.</p>
     */
    inline const Aws::String& GetAppId() const { return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    template<typename AppIdT = Aws::String>
    void SetAppId(AppIdT&& value) { m_appIdHasBeenSet = true; m_appId = std::forward<AppIdT>(value); }
    template<typename AppIdT = Aws::String>
    CreateDeploymentRequest& WithAppId(AppIdT&& value) { SetAppId(std::forward<AppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance IDs for the deployment targets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const { return m_instanceIds; }
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }
    template<typename InstanceIdsT = Aws::Vector<Aws::String>>
    void SetInstanceIds(InstanceIdsT&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::forward<InstanceIdsT>(value); }
    template<typename InstanceIdsT = Aws::Vector<Aws::String>>
    CreateDeploymentRequest& WithInstanceIds(InstanceIdsT&& value) { SetInstanceIds(std::forward<InstanceIdsT>(value)); return *this;}
    template<typename InstanceIdsT = Aws::String>
    CreateDeploymentRequest& AddInstanceIds(InstanceIdsT&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.emplace_back(std::forward<InstanceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The layer IDs for the deployment targets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLayerIds() const { return m_layerIds; }
    inline bool LayerIdsHasBeenSet() const { return m_layerIdsHasBeenSet; }
    template<typename LayerIdsT = Aws::Vector<Aws::String>>
    void SetLayerIds(LayerIdsT&& value) { m_layerIdsHasBeenSet = true; m_layerIds = std::forward<LayerIdsT>(value); }
    template<typename LayerIdsT = Aws::Vector<Aws::String>>
    CreateDeploymentRequest& WithLayerIds(LayerIdsT&& value) { SetLayerIds(std::forward<LayerIdsT>(value)); return *this;}
    template<typename LayerIdsT = Aws::String>
    CreateDeploymentRequest& AddLayerIds(LayerIdsT&& value) { m_layerIdsHasBeenSet = true; m_layerIds.emplace_back(std::forward<LayerIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A <code>DeploymentCommand</code> object that specifies the deployment command
     * and any associated arguments.</p>
     */
    inline const DeploymentCommand& GetCommand() const { return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    template<typename CommandT = DeploymentCommand>
    void SetCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command = std::forward<CommandT>(value); }
    template<typename CommandT = DeploymentCommand>
    CreateDeploymentRequest& WithCommand(CommandT&& value) { SetCommand(std::forward<CommandT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-defined comment.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    CreateDeploymentRequest& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that contains user-defined, custom JSON. You can use this parameter
     * to override some corresponding default stack configuration JSON values. The
     * string should be in the following format:</p> <p> <code>"{\"key1\": \"value1\",
     * \"key2\": \"value2\",...}"</code> </p> <p>For more information about custom
     * JSON, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a> and <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook-json-override.html">Overriding
     * Attributes With Custom JSON</a>.</p>
     */
    inline const Aws::String& GetCustomJson() const { return m_customJson; }
    inline bool CustomJsonHasBeenSet() const { return m_customJsonHasBeenSet; }
    template<typename CustomJsonT = Aws::String>
    void SetCustomJson(CustomJsonT&& value) { m_customJsonHasBeenSet = true; m_customJson = std::forward<CustomJsonT>(value); }
    template<typename CustomJsonT = Aws::String>
    CreateDeploymentRequest& WithCustomJson(CustomJsonT&& value) { SetCustomJson(std::forward<CustomJsonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_layerIds;
    bool m_layerIdsHasBeenSet = false;

    DeploymentCommand m_command;
    bool m_commandHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::String m_customJson;
    bool m_customJsonHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
