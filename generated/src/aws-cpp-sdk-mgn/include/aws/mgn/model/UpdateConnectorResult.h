﻿/**
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
  class UpdateConnectorResult
  {
  public:
    AWS_MGN_API UpdateConnectorResult();
    AWS_MGN_API UpdateConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API UpdateConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Connector arn.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline UpdateConnectorResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateConnectorResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateConnectorResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connector ID.</p>
     */
    inline const Aws::String& GetConnectorID() const{ return m_connectorID; }
    inline void SetConnectorID(const Aws::String& value) { m_connectorID = value; }
    inline void SetConnectorID(Aws::String&& value) { m_connectorID = std::move(value); }
    inline void SetConnectorID(const char* value) { m_connectorID.assign(value); }
    inline UpdateConnectorResult& WithConnectorID(const Aws::String& value) { SetConnectorID(value); return *this;}
    inline UpdateConnectorResult& WithConnectorID(Aws::String&& value) { SetConnectorID(std::move(value)); return *this;}
    inline UpdateConnectorResult& WithConnectorID(const char* value) { SetConnectorID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connector name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateConnectorResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateConnectorResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateConnectorResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connector SSM command config.</p>
     */
    inline const ConnectorSsmCommandConfig& GetSsmCommandConfig() const{ return m_ssmCommandConfig; }
    inline void SetSsmCommandConfig(const ConnectorSsmCommandConfig& value) { m_ssmCommandConfig = value; }
    inline void SetSsmCommandConfig(ConnectorSsmCommandConfig&& value) { m_ssmCommandConfig = std::move(value); }
    inline UpdateConnectorResult& WithSsmCommandConfig(const ConnectorSsmCommandConfig& value) { SetSsmCommandConfig(value); return *this;}
    inline UpdateConnectorResult& WithSsmCommandConfig(ConnectorSsmCommandConfig&& value) { SetSsmCommandConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connector SSM instance ID.</p>
     */
    inline const Aws::String& GetSsmInstanceID() const{ return m_ssmInstanceID; }
    inline void SetSsmInstanceID(const Aws::String& value) { m_ssmInstanceID = value; }
    inline void SetSsmInstanceID(Aws::String&& value) { m_ssmInstanceID = std::move(value); }
    inline void SetSsmInstanceID(const char* value) { m_ssmInstanceID.assign(value); }
    inline UpdateConnectorResult& WithSsmInstanceID(const Aws::String& value) { SetSsmInstanceID(value); return *this;}
    inline UpdateConnectorResult& WithSsmInstanceID(Aws::String&& value) { SetSsmInstanceID(std::move(value)); return *this;}
    inline UpdateConnectorResult& WithSsmInstanceID(const char* value) { SetSsmInstanceID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connector tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline UpdateConnectorResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline UpdateConnectorResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline UpdateConnectorResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline UpdateConnectorResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline UpdateConnectorResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline UpdateConnectorResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateConnectorResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline UpdateConnectorResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline UpdateConnectorResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateConnectorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateConnectorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateConnectorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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
