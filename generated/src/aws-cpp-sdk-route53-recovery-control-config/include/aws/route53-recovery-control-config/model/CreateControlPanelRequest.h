/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Route53RecoveryControlConfig
{
namespace Model
{

  /**
   * <p>The details of the control panel that you're creating.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/CreateControlPanelRequest">AWS
   * API Reference</a></p>
   */
  class CreateControlPanelRequest : public Route53RecoveryControlConfigRequest
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API CreateControlPanelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateControlPanel"; }

    AWS_ROUTE53RECOVERYCONTROLCONFIG_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique, case-sensitive string of up to 64 ASCII characters. To make an
     * idempotent API request with an action, specify a client token in the
     * request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateControlPanelRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateControlPanelRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateControlPanelRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the cluster for the control panel.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }
    inline CreateControlPanelRequest& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}
    inline CreateControlPanelRequest& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}
    inline CreateControlPanelRequest& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the control panel.</p>
     */
    inline const Aws::String& GetControlPanelName() const{ return m_controlPanelName; }
    inline bool ControlPanelNameHasBeenSet() const { return m_controlPanelNameHasBeenSet; }
    inline void SetControlPanelName(const Aws::String& value) { m_controlPanelNameHasBeenSet = true; m_controlPanelName = value; }
    inline void SetControlPanelName(Aws::String&& value) { m_controlPanelNameHasBeenSet = true; m_controlPanelName = std::move(value); }
    inline void SetControlPanelName(const char* value) { m_controlPanelNameHasBeenSet = true; m_controlPanelName.assign(value); }
    inline CreateControlPanelRequest& WithControlPanelName(const Aws::String& value) { SetControlPanelName(value); return *this;}
    inline CreateControlPanelRequest& WithControlPanelName(Aws::String&& value) { SetControlPanelName(std::move(value)); return *this;}
    inline CreateControlPanelRequest& WithControlPanelName(const char* value) { SetControlPanelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the control panel.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateControlPanelRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateControlPanelRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateControlPanelRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateControlPanelRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateControlPanelRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateControlPanelRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateControlPanelRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateControlPanelRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateControlPanelRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_controlPanelName;
    bool m_controlPanelNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
