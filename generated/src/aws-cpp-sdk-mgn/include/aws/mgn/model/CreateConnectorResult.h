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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace mgn
{
namespace Model
{
  class CreateConnectorResult
  {
  public:
    AWS_MGN_API CreateConnectorResult() = default;
    AWS_MGN_API CreateConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API CreateConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Connector arn.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    CreateConnectorResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connector ID.</p>
     */
    inline const Aws::String& GetConnectorID() const { return m_connectorID; }
    template<typename ConnectorIDT = Aws::String>
    void SetConnectorID(ConnectorIDT&& value) { m_connectorIDHasBeenSet = true; m_connectorID = std::forward<ConnectorIDT>(value); }
    template<typename ConnectorIDT = Aws::String>
    CreateConnectorResult& WithConnectorID(ConnectorIDT&& value) { SetConnectorID(std::forward<ConnectorIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connector name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateConnectorResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connector SSM command config.</p>
     */
    inline const ConnectorSsmCommandConfig& GetSsmCommandConfig() const { return m_ssmCommandConfig; }
    template<typename SsmCommandConfigT = ConnectorSsmCommandConfig>
    void SetSsmCommandConfig(SsmCommandConfigT&& value) { m_ssmCommandConfigHasBeenSet = true; m_ssmCommandConfig = std::forward<SsmCommandConfigT>(value); }
    template<typename SsmCommandConfigT = ConnectorSsmCommandConfig>
    CreateConnectorResult& WithSsmCommandConfig(SsmCommandConfigT&& value) { SetSsmCommandConfig(std::forward<SsmCommandConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connector SSM instance ID.</p>
     */
    inline const Aws::String& GetSsmInstanceID() const { return m_ssmInstanceID; }
    template<typename SsmInstanceIDT = Aws::String>
    void SetSsmInstanceID(SsmInstanceIDT&& value) { m_ssmInstanceIDHasBeenSet = true; m_ssmInstanceID = std::forward<SsmInstanceIDT>(value); }
    template<typename SsmInstanceIDT = Aws::String>
    CreateConnectorResult& WithSsmInstanceID(SsmInstanceIDT&& value) { SetSsmInstanceID(std::forward<SsmInstanceIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connector tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateConnectorResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateConnectorResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateConnectorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
