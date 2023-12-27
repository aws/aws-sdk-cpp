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
    AWS_MGN_API CreateConnectorResult();
    AWS_MGN_API CreateConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API CreateConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Connector arn.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Connector arn.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>Connector arn.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>Connector arn.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>Connector arn.</p>
     */
    inline CreateConnectorResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Connector arn.</p>
     */
    inline CreateConnectorResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Connector arn.</p>
     */
    inline CreateConnectorResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Connector ID.</p>
     */
    inline const Aws::String& GetConnectorID() const{ return m_connectorID; }

    /**
     * <p>Connector ID.</p>
     */
    inline void SetConnectorID(const Aws::String& value) { m_connectorID = value; }

    /**
     * <p>Connector ID.</p>
     */
    inline void SetConnectorID(Aws::String&& value) { m_connectorID = std::move(value); }

    /**
     * <p>Connector ID.</p>
     */
    inline void SetConnectorID(const char* value) { m_connectorID.assign(value); }

    /**
     * <p>Connector ID.</p>
     */
    inline CreateConnectorResult& WithConnectorID(const Aws::String& value) { SetConnectorID(value); return *this;}

    /**
     * <p>Connector ID.</p>
     */
    inline CreateConnectorResult& WithConnectorID(Aws::String&& value) { SetConnectorID(std::move(value)); return *this;}

    /**
     * <p>Connector ID.</p>
     */
    inline CreateConnectorResult& WithConnectorID(const char* value) { SetConnectorID(value); return *this;}


    /**
     * <p>Connector name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Connector name.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>Connector name.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>Connector name.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>Connector name.</p>
     */
    inline CreateConnectorResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Connector name.</p>
     */
    inline CreateConnectorResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Connector name.</p>
     */
    inline CreateConnectorResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Connector SSM command config.</p>
     */
    inline const ConnectorSsmCommandConfig& GetSsmCommandConfig() const{ return m_ssmCommandConfig; }

    /**
     * <p>Connector SSM command config.</p>
     */
    inline void SetSsmCommandConfig(const ConnectorSsmCommandConfig& value) { m_ssmCommandConfig = value; }

    /**
     * <p>Connector SSM command config.</p>
     */
    inline void SetSsmCommandConfig(ConnectorSsmCommandConfig&& value) { m_ssmCommandConfig = std::move(value); }

    /**
     * <p>Connector SSM command config.</p>
     */
    inline CreateConnectorResult& WithSsmCommandConfig(const ConnectorSsmCommandConfig& value) { SetSsmCommandConfig(value); return *this;}

    /**
     * <p>Connector SSM command config.</p>
     */
    inline CreateConnectorResult& WithSsmCommandConfig(ConnectorSsmCommandConfig&& value) { SetSsmCommandConfig(std::move(value)); return *this;}


    /**
     * <p>Connector SSM instance ID.</p>
     */
    inline const Aws::String& GetSsmInstanceID() const{ return m_ssmInstanceID; }

    /**
     * <p>Connector SSM instance ID.</p>
     */
    inline void SetSsmInstanceID(const Aws::String& value) { m_ssmInstanceID = value; }

    /**
     * <p>Connector SSM instance ID.</p>
     */
    inline void SetSsmInstanceID(Aws::String&& value) { m_ssmInstanceID = std::move(value); }

    /**
     * <p>Connector SSM instance ID.</p>
     */
    inline void SetSsmInstanceID(const char* value) { m_ssmInstanceID.assign(value); }

    /**
     * <p>Connector SSM instance ID.</p>
     */
    inline CreateConnectorResult& WithSsmInstanceID(const Aws::String& value) { SetSsmInstanceID(value); return *this;}

    /**
     * <p>Connector SSM instance ID.</p>
     */
    inline CreateConnectorResult& WithSsmInstanceID(Aws::String&& value) { SetSsmInstanceID(std::move(value)); return *this;}

    /**
     * <p>Connector SSM instance ID.</p>
     */
    inline CreateConnectorResult& WithSsmInstanceID(const char* value) { SetSsmInstanceID(value); return *this;}


    /**
     * <p>Connector tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Connector tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Connector tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Connector tags.</p>
     */
    inline CreateConnectorResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Connector tags.</p>
     */
    inline CreateConnectorResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Connector tags.</p>
     */
    inline CreateConnectorResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Connector tags.</p>
     */
    inline CreateConnectorResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Connector tags.</p>
     */
    inline CreateConnectorResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Connector tags.</p>
     */
    inline CreateConnectorResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Connector tags.</p>
     */
    inline CreateConnectorResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Connector tags.</p>
     */
    inline CreateConnectorResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Connector tags.</p>
     */
    inline CreateConnectorResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateConnectorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateConnectorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateConnectorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_connectorID;

    Aws::String m_name;

    ConnectorSsmCommandConfig m_ssmCommandConfig;

    Aws::String m_ssmInstanceID;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
