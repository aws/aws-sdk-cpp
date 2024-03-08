/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/ConnectorSsmCommandConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class CreateConnectorRequest : public MgnRequest
  {
  public:
    AWS_MGN_API CreateConnectorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConnector"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    /**
     * <p>Create Connector request name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Create Connector request name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Create Connector request name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Create Connector request name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Create Connector request name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Create Connector request name.</p>
     */
    inline CreateConnectorRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Create Connector request name.</p>
     */
    inline CreateConnectorRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Create Connector request name.</p>
     */
    inline CreateConnectorRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Create Connector request SSM command config.</p>
     */
    inline const ConnectorSsmCommandConfig& GetSsmCommandConfig() const{ return m_ssmCommandConfig; }

    /**
     * <p>Create Connector request SSM command config.</p>
     */
    inline bool SsmCommandConfigHasBeenSet() const { return m_ssmCommandConfigHasBeenSet; }

    /**
     * <p>Create Connector request SSM command config.</p>
     */
    inline void SetSsmCommandConfig(const ConnectorSsmCommandConfig& value) { m_ssmCommandConfigHasBeenSet = true; m_ssmCommandConfig = value; }

    /**
     * <p>Create Connector request SSM command config.</p>
     */
    inline void SetSsmCommandConfig(ConnectorSsmCommandConfig&& value) { m_ssmCommandConfigHasBeenSet = true; m_ssmCommandConfig = std::move(value); }

    /**
     * <p>Create Connector request SSM command config.</p>
     */
    inline CreateConnectorRequest& WithSsmCommandConfig(const ConnectorSsmCommandConfig& value) { SetSsmCommandConfig(value); return *this;}

    /**
     * <p>Create Connector request SSM command config.</p>
     */
    inline CreateConnectorRequest& WithSsmCommandConfig(ConnectorSsmCommandConfig&& value) { SetSsmCommandConfig(std::move(value)); return *this;}


    /**
     * <p>Create Connector request SSM instance ID.</p>
     */
    inline const Aws::String& GetSsmInstanceID() const{ return m_ssmInstanceID; }

    /**
     * <p>Create Connector request SSM instance ID.</p>
     */
    inline bool SsmInstanceIDHasBeenSet() const { return m_ssmInstanceIDHasBeenSet; }

    /**
     * <p>Create Connector request SSM instance ID.</p>
     */
    inline void SetSsmInstanceID(const Aws::String& value) { m_ssmInstanceIDHasBeenSet = true; m_ssmInstanceID = value; }

    /**
     * <p>Create Connector request SSM instance ID.</p>
     */
    inline void SetSsmInstanceID(Aws::String&& value) { m_ssmInstanceIDHasBeenSet = true; m_ssmInstanceID = std::move(value); }

    /**
     * <p>Create Connector request SSM instance ID.</p>
     */
    inline void SetSsmInstanceID(const char* value) { m_ssmInstanceIDHasBeenSet = true; m_ssmInstanceID.assign(value); }

    /**
     * <p>Create Connector request SSM instance ID.</p>
     */
    inline CreateConnectorRequest& WithSsmInstanceID(const Aws::String& value) { SetSsmInstanceID(value); return *this;}

    /**
     * <p>Create Connector request SSM instance ID.</p>
     */
    inline CreateConnectorRequest& WithSsmInstanceID(Aws::String&& value) { SetSsmInstanceID(std::move(value)); return *this;}

    /**
     * <p>Create Connector request SSM instance ID.</p>
     */
    inline CreateConnectorRequest& WithSsmInstanceID(const char* value) { SetSsmInstanceID(value); return *this;}


    /**
     * <p>Create Connector request tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Create Connector request tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Create Connector request tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Create Connector request tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Create Connector request tags.</p>
     */
    inline CreateConnectorRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Create Connector request tags.</p>
     */
    inline CreateConnectorRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Create Connector request tags.</p>
     */
    inline CreateConnectorRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Create Connector request tags.</p>
     */
    inline CreateConnectorRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Create Connector request tags.</p>
     */
    inline CreateConnectorRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Create Connector request tags.</p>
     */
    inline CreateConnectorRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Create Connector request tags.</p>
     */
    inline CreateConnectorRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Create Connector request tags.</p>
     */
    inline CreateConnectorRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Create Connector request tags.</p>
     */
    inline CreateConnectorRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ConnectorSsmCommandConfig m_ssmCommandConfig;
    bool m_ssmCommandConfigHasBeenSet = false;

    Aws::String m_ssmInstanceID;
    bool m_ssmInstanceIDHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
