/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/SourceServerConnectorAction.h>
#include <aws/mgn/model/DataReplicationInfo.h>
#include <aws/mgn/model/LaunchedInstance.h>
#include <aws/mgn/model/LifeCycle.h>
#include <aws/mgn/model/ReplicationType.h>
#include <aws/mgn/model/SourceProperties.h>
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
  class RetryDataReplicationResult
  {
  public:
    AWS_MGN_API RetryDataReplicationResult();
    AWS_MGN_API RetryDataReplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API RetryDataReplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Source server application ID.</p>
     */
    inline const Aws::String& GetApplicationID() const{ return m_applicationID; }
    inline void SetApplicationID(const Aws::String& value) { m_applicationID = value; }
    inline void SetApplicationID(Aws::String&& value) { m_applicationID = std::move(value); }
    inline void SetApplicationID(const char* value) { m_applicationID.assign(value); }
    inline RetryDataReplicationResult& WithApplicationID(const Aws::String& value) { SetApplicationID(value); return *this;}
    inline RetryDataReplicationResult& WithApplicationID(Aws::String&& value) { SetApplicationID(std::move(value)); return *this;}
    inline RetryDataReplicationResult& WithApplicationID(const char* value) { SetApplicationID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline RetryDataReplicationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline RetryDataReplicationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline RetryDataReplicationResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source Server connector action.</p>
     */
    inline const SourceServerConnectorAction& GetConnectorAction() const{ return m_connectorAction; }
    inline void SetConnectorAction(const SourceServerConnectorAction& value) { m_connectorAction = value; }
    inline void SetConnectorAction(SourceServerConnectorAction&& value) { m_connectorAction = std::move(value); }
    inline RetryDataReplicationResult& WithConnectorAction(const SourceServerConnectorAction& value) { SetConnectorAction(value); return *this;}
    inline RetryDataReplicationResult& WithConnectorAction(SourceServerConnectorAction&& value) { SetConnectorAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server data replication info.</p>
     */
    inline const DataReplicationInfo& GetDataReplicationInfo() const{ return m_dataReplicationInfo; }
    inline void SetDataReplicationInfo(const DataReplicationInfo& value) { m_dataReplicationInfo = value; }
    inline void SetDataReplicationInfo(DataReplicationInfo&& value) { m_dataReplicationInfo = std::move(value); }
    inline RetryDataReplicationResult& WithDataReplicationInfo(const DataReplicationInfo& value) { SetDataReplicationInfo(value); return *this;}
    inline RetryDataReplicationResult& WithDataReplicationInfo(DataReplicationInfo&& value) { SetDataReplicationInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server fqdn for action framework.</p>
     */
    inline const Aws::String& GetFqdnForActionFramework() const{ return m_fqdnForActionFramework; }
    inline void SetFqdnForActionFramework(const Aws::String& value) { m_fqdnForActionFramework = value; }
    inline void SetFqdnForActionFramework(Aws::String&& value) { m_fqdnForActionFramework = std::move(value); }
    inline void SetFqdnForActionFramework(const char* value) { m_fqdnForActionFramework.assign(value); }
    inline RetryDataReplicationResult& WithFqdnForActionFramework(const Aws::String& value) { SetFqdnForActionFramework(value); return *this;}
    inline RetryDataReplicationResult& WithFqdnForActionFramework(Aws::String&& value) { SetFqdnForActionFramework(std::move(value)); return *this;}
    inline RetryDataReplicationResult& WithFqdnForActionFramework(const char* value) { SetFqdnForActionFramework(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server archived status.</p>
     */
    inline bool GetIsArchived() const{ return m_isArchived; }
    inline void SetIsArchived(bool value) { m_isArchived = value; }
    inline RetryDataReplicationResult& WithIsArchived(bool value) { SetIsArchived(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server launched instance.</p>
     */
    inline const LaunchedInstance& GetLaunchedInstance() const{ return m_launchedInstance; }
    inline void SetLaunchedInstance(const LaunchedInstance& value) { m_launchedInstance = value; }
    inline void SetLaunchedInstance(LaunchedInstance&& value) { m_launchedInstance = std::move(value); }
    inline RetryDataReplicationResult& WithLaunchedInstance(const LaunchedInstance& value) { SetLaunchedInstance(value); return *this;}
    inline RetryDataReplicationResult& WithLaunchedInstance(LaunchedInstance&& value) { SetLaunchedInstance(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server lifecycle state.</p>
     */
    inline const LifeCycle& GetLifeCycle() const{ return m_lifeCycle; }
    inline void SetLifeCycle(const LifeCycle& value) { m_lifeCycle = value; }
    inline void SetLifeCycle(LifeCycle&& value) { m_lifeCycle = std::move(value); }
    inline RetryDataReplicationResult& WithLifeCycle(const LifeCycle& value) { SetLifeCycle(value); return *this;}
    inline RetryDataReplicationResult& WithLifeCycle(LifeCycle&& value) { SetLifeCycle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server replication type.</p>
     */
    inline const ReplicationType& GetReplicationType() const{ return m_replicationType; }
    inline void SetReplicationType(const ReplicationType& value) { m_replicationType = value; }
    inline void SetReplicationType(ReplicationType&& value) { m_replicationType = std::move(value); }
    inline RetryDataReplicationResult& WithReplicationType(const ReplicationType& value) { SetReplicationType(value); return *this;}
    inline RetryDataReplicationResult& WithReplicationType(ReplicationType&& value) { SetReplicationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server properties.</p>
     */
    inline const SourceProperties& GetSourceProperties() const{ return m_sourceProperties; }
    inline void SetSourceProperties(const SourceProperties& value) { m_sourceProperties = value; }
    inline void SetSourceProperties(SourceProperties&& value) { m_sourceProperties = std::move(value); }
    inline RetryDataReplicationResult& WithSourceProperties(const SourceProperties& value) { SetSourceProperties(value); return *this;}
    inline RetryDataReplicationResult& WithSourceProperties(SourceProperties&& value) { SetSourceProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server ID.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerID = value; }
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerID = std::move(value); }
    inline void SetSourceServerID(const char* value) { m_sourceServerID.assign(value); }
    inline RetryDataReplicationResult& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}
    inline RetryDataReplicationResult& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}
    inline RetryDataReplicationResult& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server Tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline RetryDataReplicationResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline RetryDataReplicationResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline RetryDataReplicationResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline RetryDataReplicationResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline RetryDataReplicationResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline RetryDataReplicationResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline RetryDataReplicationResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline RetryDataReplicationResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline RetryDataReplicationResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Source server user provided ID.</p>
     */
    inline const Aws::String& GetUserProvidedID() const{ return m_userProvidedID; }
    inline void SetUserProvidedID(const Aws::String& value) { m_userProvidedID = value; }
    inline void SetUserProvidedID(Aws::String&& value) { m_userProvidedID = std::move(value); }
    inline void SetUserProvidedID(const char* value) { m_userProvidedID.assign(value); }
    inline RetryDataReplicationResult& WithUserProvidedID(const Aws::String& value) { SetUserProvidedID(value); return *this;}
    inline RetryDataReplicationResult& WithUserProvidedID(Aws::String&& value) { SetUserProvidedID(std::move(value)); return *this;}
    inline RetryDataReplicationResult& WithUserProvidedID(const char* value) { SetUserProvidedID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server vCenter client id.</p>
     */
    inline const Aws::String& GetVcenterClientID() const{ return m_vcenterClientID; }
    inline void SetVcenterClientID(const Aws::String& value) { m_vcenterClientID = value; }
    inline void SetVcenterClientID(Aws::String&& value) { m_vcenterClientID = std::move(value); }
    inline void SetVcenterClientID(const char* value) { m_vcenterClientID.assign(value); }
    inline RetryDataReplicationResult& WithVcenterClientID(const Aws::String& value) { SetVcenterClientID(value); return *this;}
    inline RetryDataReplicationResult& WithVcenterClientID(Aws::String&& value) { SetVcenterClientID(std::move(value)); return *this;}
    inline RetryDataReplicationResult& WithVcenterClientID(const char* value) { SetVcenterClientID(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RetryDataReplicationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RetryDataReplicationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RetryDataReplicationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationID;

    Aws::String m_arn;

    SourceServerConnectorAction m_connectorAction;

    DataReplicationInfo m_dataReplicationInfo;

    Aws::String m_fqdnForActionFramework;

    bool m_isArchived;

    LaunchedInstance m_launchedInstance;

    LifeCycle m_lifeCycle;

    ReplicationType m_replicationType;

    SourceProperties m_sourceProperties;

    Aws::String m_sourceServerID;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_userProvidedID;

    Aws::String m_vcenterClientID;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
