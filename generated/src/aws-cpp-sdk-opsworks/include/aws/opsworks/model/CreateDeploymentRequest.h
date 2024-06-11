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
    AWS_OPSWORKS_API CreateDeploymentRequest();

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
    inline const Aws::String& GetStackId() const{ return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }
    inline CreateDeploymentRequest& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}
    inline CreateDeploymentRequest& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}
    inline CreateDeploymentRequest& WithStackId(const char* value) { SetStackId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The app ID. This parameter is required for app deployments, but not for other
     * deployment commands.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }
    inline CreateDeploymentRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}
    inline CreateDeploymentRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}
    inline CreateDeploymentRequest& WithAppId(const char* value) { SetAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance IDs for the deployment targets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const{ return m_instanceIds; }
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }
    inline void SetInstanceIds(const Aws::Vector<Aws::String>& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }
    inline void SetInstanceIds(Aws::Vector<Aws::String>&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::move(value); }
    inline CreateDeploymentRequest& WithInstanceIds(const Aws::Vector<Aws::String>& value) { SetInstanceIds(value); return *this;}
    inline CreateDeploymentRequest& WithInstanceIds(Aws::Vector<Aws::String>&& value) { SetInstanceIds(std::move(value)); return *this;}
    inline CreateDeploymentRequest& AddInstanceIds(const Aws::String& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }
    inline CreateDeploymentRequest& AddInstanceIds(Aws::String&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(std::move(value)); return *this; }
    inline CreateDeploymentRequest& AddInstanceIds(const char* value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The layer IDs for the deployment targets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLayerIds() const{ return m_layerIds; }
    inline bool LayerIdsHasBeenSet() const { return m_layerIdsHasBeenSet; }
    inline void SetLayerIds(const Aws::Vector<Aws::String>& value) { m_layerIdsHasBeenSet = true; m_layerIds = value; }
    inline void SetLayerIds(Aws::Vector<Aws::String>&& value) { m_layerIdsHasBeenSet = true; m_layerIds = std::move(value); }
    inline CreateDeploymentRequest& WithLayerIds(const Aws::Vector<Aws::String>& value) { SetLayerIds(value); return *this;}
    inline CreateDeploymentRequest& WithLayerIds(Aws::Vector<Aws::String>&& value) { SetLayerIds(std::move(value)); return *this;}
    inline CreateDeploymentRequest& AddLayerIds(const Aws::String& value) { m_layerIdsHasBeenSet = true; m_layerIds.push_back(value); return *this; }
    inline CreateDeploymentRequest& AddLayerIds(Aws::String&& value) { m_layerIdsHasBeenSet = true; m_layerIds.push_back(std::move(value)); return *this; }
    inline CreateDeploymentRequest& AddLayerIds(const char* value) { m_layerIdsHasBeenSet = true; m_layerIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A <code>DeploymentCommand</code> object that specifies the deployment command
     * and any associated arguments.</p>
     */
    inline const DeploymentCommand& GetCommand() const{ return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    inline void SetCommand(const DeploymentCommand& value) { m_commandHasBeenSet = true; m_command = value; }
    inline void SetCommand(DeploymentCommand&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }
    inline CreateDeploymentRequest& WithCommand(const DeploymentCommand& value) { SetCommand(value); return *this;}
    inline CreateDeploymentRequest& WithCommand(DeploymentCommand&& value) { SetCommand(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-defined comment.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }
    inline CreateDeploymentRequest& WithComment(const Aws::String& value) { SetComment(value); return *this;}
    inline CreateDeploymentRequest& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}
    inline CreateDeploymentRequest& WithComment(const char* value) { SetComment(value); return *this;}
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
    inline const Aws::String& GetCustomJson() const{ return m_customJson; }
    inline bool CustomJsonHasBeenSet() const { return m_customJsonHasBeenSet; }
    inline void SetCustomJson(const Aws::String& value) { m_customJsonHasBeenSet = true; m_customJson = value; }
    inline void SetCustomJson(Aws::String&& value) { m_customJsonHasBeenSet = true; m_customJson = std::move(value); }
    inline void SetCustomJson(const char* value) { m_customJsonHasBeenSet = true; m_customJson.assign(value); }
    inline CreateDeploymentRequest& WithCustomJson(const Aws::String& value) { SetCustomJson(value); return *this;}
    inline CreateDeploymentRequest& WithCustomJson(Aws::String&& value) { SetCustomJson(std::move(value)); return *this;}
    inline CreateDeploymentRequest& WithCustomJson(const char* value) { SetCustomJson(value); return *this;}
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
