/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/ConnectorSsmCommandConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace mgn
{
namespace Model
{

  class Connector
  {
  public:
    AWS_MGN_API Connector();
    AWS_MGN_API Connector(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Connector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Connector arn.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Connector& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Connector& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Connector& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connector ID.</p>
     */
    inline const Aws::String& GetConnectorID() const{ return m_connectorID; }
    inline bool ConnectorIDHasBeenSet() const { return m_connectorIDHasBeenSet; }
    inline void SetConnectorID(const Aws::String& value) { m_connectorIDHasBeenSet = true; m_connectorID = value; }
    inline void SetConnectorID(Aws::String&& value) { m_connectorIDHasBeenSet = true; m_connectorID = std::move(value); }
    inline void SetConnectorID(const char* value) { m_connectorIDHasBeenSet = true; m_connectorID.assign(value); }
    inline Connector& WithConnectorID(const Aws::String& value) { SetConnectorID(value); return *this;}
    inline Connector& WithConnectorID(Aws::String&& value) { SetConnectorID(std::move(value)); return *this;}
    inline Connector& WithConnectorID(const char* value) { SetConnectorID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connector name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Connector& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Connector& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Connector& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connector SSM command config.</p>
     */
    inline const ConnectorSsmCommandConfig& GetSsmCommandConfig() const{ return m_ssmCommandConfig; }
    inline bool SsmCommandConfigHasBeenSet() const { return m_ssmCommandConfigHasBeenSet; }
    inline void SetSsmCommandConfig(const ConnectorSsmCommandConfig& value) { m_ssmCommandConfigHasBeenSet = true; m_ssmCommandConfig = value; }
    inline void SetSsmCommandConfig(ConnectorSsmCommandConfig&& value) { m_ssmCommandConfigHasBeenSet = true; m_ssmCommandConfig = std::move(value); }
    inline Connector& WithSsmCommandConfig(const ConnectorSsmCommandConfig& value) { SetSsmCommandConfig(value); return *this;}
    inline Connector& WithSsmCommandConfig(ConnectorSsmCommandConfig&& value) { SetSsmCommandConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connector SSM instance ID.</p>
     */
    inline const Aws::String& GetSsmInstanceID() const{ return m_ssmInstanceID; }
    inline bool SsmInstanceIDHasBeenSet() const { return m_ssmInstanceIDHasBeenSet; }
    inline void SetSsmInstanceID(const Aws::String& value) { m_ssmInstanceIDHasBeenSet = true; m_ssmInstanceID = value; }
    inline void SetSsmInstanceID(Aws::String&& value) { m_ssmInstanceIDHasBeenSet = true; m_ssmInstanceID = std::move(value); }
    inline void SetSsmInstanceID(const char* value) { m_ssmInstanceIDHasBeenSet = true; m_ssmInstanceID.assign(value); }
    inline Connector& WithSsmInstanceID(const Aws::String& value) { SetSsmInstanceID(value); return *this;}
    inline Connector& WithSsmInstanceID(Aws::String&& value) { SetSsmInstanceID(std::move(value)); return *this;}
    inline Connector& WithSsmInstanceID(const char* value) { SetSsmInstanceID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connector tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Connector& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline Connector& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline Connector& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline Connector& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Connector& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Connector& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline Connector& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Connector& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Connector& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline Connector& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline Connector& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline Connector& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_connectorID;
    bool m_connectorIDHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ConnectorSsmCommandConfig m_ssmCommandConfig;
    bool m_ssmCommandConfigHasBeenSet = false;

    Aws::String m_ssmInstanceID;
    bool m_ssmInstanceIDHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
