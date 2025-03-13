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
    AWS_MGN_API Connector() = default;
    AWS_MGN_API Connector(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Connector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Connector arn.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Connector& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connector ID.</p>
     */
    inline const Aws::String& GetConnectorID() const { return m_connectorID; }
    inline bool ConnectorIDHasBeenSet() const { return m_connectorIDHasBeenSet; }
    template<typename ConnectorIDT = Aws::String>
    void SetConnectorID(ConnectorIDT&& value) { m_connectorIDHasBeenSet = true; m_connectorID = std::forward<ConnectorIDT>(value); }
    template<typename ConnectorIDT = Aws::String>
    Connector& WithConnectorID(ConnectorIDT&& value) { SetConnectorID(std::forward<ConnectorIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connector name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Connector& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connector SSM command config.</p>
     */
    inline const ConnectorSsmCommandConfig& GetSsmCommandConfig() const { return m_ssmCommandConfig; }
    inline bool SsmCommandConfigHasBeenSet() const { return m_ssmCommandConfigHasBeenSet; }
    template<typename SsmCommandConfigT = ConnectorSsmCommandConfig>
    void SetSsmCommandConfig(SsmCommandConfigT&& value) { m_ssmCommandConfigHasBeenSet = true; m_ssmCommandConfig = std::forward<SsmCommandConfigT>(value); }
    template<typename SsmCommandConfigT = ConnectorSsmCommandConfig>
    Connector& WithSsmCommandConfig(SsmCommandConfigT&& value) { SetSsmCommandConfig(std::forward<SsmCommandConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connector SSM instance ID.</p>
     */
    inline const Aws::String& GetSsmInstanceID() const { return m_ssmInstanceID; }
    inline bool SsmInstanceIDHasBeenSet() const { return m_ssmInstanceIDHasBeenSet; }
    template<typename SsmInstanceIDT = Aws::String>
    void SetSsmInstanceID(SsmInstanceIDT&& value) { m_ssmInstanceIDHasBeenSet = true; m_ssmInstanceID = std::forward<SsmInstanceIDT>(value); }
    template<typename SsmInstanceIDT = Aws::String>
    Connector& WithSsmInstanceID(SsmInstanceIDT&& value) { SetSsmInstanceID(std::forward<SsmInstanceIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connector tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    Connector& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Connector& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    Connector& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
