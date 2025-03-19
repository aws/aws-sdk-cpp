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
    AWS_MGN_API RetryDataReplicationResult() = default;
    AWS_MGN_API RetryDataReplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API RetryDataReplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Source server application ID.</p>
     */
    inline const Aws::String& GetApplicationID() const { return m_applicationID; }
    template<typename ApplicationIDT = Aws::String>
    void SetApplicationID(ApplicationIDT&& value) { m_applicationIDHasBeenSet = true; m_applicationID = std::forward<ApplicationIDT>(value); }
    template<typename ApplicationIDT = Aws::String>
    RetryDataReplicationResult& WithApplicationID(ApplicationIDT&& value) { SetApplicationID(std::forward<ApplicationIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    RetryDataReplicationResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source Server connector action.</p>
     */
    inline const SourceServerConnectorAction& GetConnectorAction() const { return m_connectorAction; }
    template<typename ConnectorActionT = SourceServerConnectorAction>
    void SetConnectorAction(ConnectorActionT&& value) { m_connectorActionHasBeenSet = true; m_connectorAction = std::forward<ConnectorActionT>(value); }
    template<typename ConnectorActionT = SourceServerConnectorAction>
    RetryDataReplicationResult& WithConnectorAction(ConnectorActionT&& value) { SetConnectorAction(std::forward<ConnectorActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server data replication info.</p>
     */
    inline const DataReplicationInfo& GetDataReplicationInfo() const { return m_dataReplicationInfo; }
    template<typename DataReplicationInfoT = DataReplicationInfo>
    void SetDataReplicationInfo(DataReplicationInfoT&& value) { m_dataReplicationInfoHasBeenSet = true; m_dataReplicationInfo = std::forward<DataReplicationInfoT>(value); }
    template<typename DataReplicationInfoT = DataReplicationInfo>
    RetryDataReplicationResult& WithDataReplicationInfo(DataReplicationInfoT&& value) { SetDataReplicationInfo(std::forward<DataReplicationInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server fqdn for action framework.</p>
     */
    inline const Aws::String& GetFqdnForActionFramework() const { return m_fqdnForActionFramework; }
    template<typename FqdnForActionFrameworkT = Aws::String>
    void SetFqdnForActionFramework(FqdnForActionFrameworkT&& value) { m_fqdnForActionFrameworkHasBeenSet = true; m_fqdnForActionFramework = std::forward<FqdnForActionFrameworkT>(value); }
    template<typename FqdnForActionFrameworkT = Aws::String>
    RetryDataReplicationResult& WithFqdnForActionFramework(FqdnForActionFrameworkT&& value) { SetFqdnForActionFramework(std::forward<FqdnForActionFrameworkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server archived status.</p>
     */
    inline bool GetIsArchived() const { return m_isArchived; }
    inline void SetIsArchived(bool value) { m_isArchivedHasBeenSet = true; m_isArchived = value; }
    inline RetryDataReplicationResult& WithIsArchived(bool value) { SetIsArchived(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server launched instance.</p>
     */
    inline const LaunchedInstance& GetLaunchedInstance() const { return m_launchedInstance; }
    template<typename LaunchedInstanceT = LaunchedInstance>
    void SetLaunchedInstance(LaunchedInstanceT&& value) { m_launchedInstanceHasBeenSet = true; m_launchedInstance = std::forward<LaunchedInstanceT>(value); }
    template<typename LaunchedInstanceT = LaunchedInstance>
    RetryDataReplicationResult& WithLaunchedInstance(LaunchedInstanceT&& value) { SetLaunchedInstance(std::forward<LaunchedInstanceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server lifecycle state.</p>
     */
    inline const LifeCycle& GetLifeCycle() const { return m_lifeCycle; }
    template<typename LifeCycleT = LifeCycle>
    void SetLifeCycle(LifeCycleT&& value) { m_lifeCycleHasBeenSet = true; m_lifeCycle = std::forward<LifeCycleT>(value); }
    template<typename LifeCycleT = LifeCycle>
    RetryDataReplicationResult& WithLifeCycle(LifeCycleT&& value) { SetLifeCycle(std::forward<LifeCycleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server replication type.</p>
     */
    inline ReplicationType GetReplicationType() const { return m_replicationType; }
    inline void SetReplicationType(ReplicationType value) { m_replicationTypeHasBeenSet = true; m_replicationType = value; }
    inline RetryDataReplicationResult& WithReplicationType(ReplicationType value) { SetReplicationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server properties.</p>
     */
    inline const SourceProperties& GetSourceProperties() const { return m_sourceProperties; }
    template<typename SourcePropertiesT = SourceProperties>
    void SetSourceProperties(SourcePropertiesT&& value) { m_sourcePropertiesHasBeenSet = true; m_sourceProperties = std::forward<SourcePropertiesT>(value); }
    template<typename SourcePropertiesT = SourceProperties>
    RetryDataReplicationResult& WithSourceProperties(SourcePropertiesT&& value) { SetSourceProperties(std::forward<SourcePropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server ID.</p>
     */
    inline const Aws::String& GetSourceServerID() const { return m_sourceServerID; }
    template<typename SourceServerIDT = Aws::String>
    void SetSourceServerID(SourceServerIDT&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::forward<SourceServerIDT>(value); }
    template<typename SourceServerIDT = Aws::String>
    RetryDataReplicationResult& WithSourceServerID(SourceServerIDT&& value) { SetSourceServerID(std::forward<SourceServerIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server Tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    RetryDataReplicationResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    RetryDataReplicationResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Source server user provided ID.</p>
     */
    inline const Aws::String& GetUserProvidedID() const { return m_userProvidedID; }
    template<typename UserProvidedIDT = Aws::String>
    void SetUserProvidedID(UserProvidedIDT&& value) { m_userProvidedIDHasBeenSet = true; m_userProvidedID = std::forward<UserProvidedIDT>(value); }
    template<typename UserProvidedIDT = Aws::String>
    RetryDataReplicationResult& WithUserProvidedID(UserProvidedIDT&& value) { SetUserProvidedID(std::forward<UserProvidedIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server vCenter client id.</p>
     */
    inline const Aws::String& GetVcenterClientID() const { return m_vcenterClientID; }
    template<typename VcenterClientIDT = Aws::String>
    void SetVcenterClientID(VcenterClientIDT&& value) { m_vcenterClientIDHasBeenSet = true; m_vcenterClientID = std::forward<VcenterClientIDT>(value); }
    template<typename VcenterClientIDT = Aws::String>
    RetryDataReplicationResult& WithVcenterClientID(VcenterClientIDT&& value) { SetVcenterClientID(std::forward<VcenterClientIDT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RetryDataReplicationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationID;
    bool m_applicationIDHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    SourceServerConnectorAction m_connectorAction;
    bool m_connectorActionHasBeenSet = false;

    DataReplicationInfo m_dataReplicationInfo;
    bool m_dataReplicationInfoHasBeenSet = false;

    Aws::String m_fqdnForActionFramework;
    bool m_fqdnForActionFrameworkHasBeenSet = false;

    bool m_isArchived{false};
    bool m_isArchivedHasBeenSet = false;

    LaunchedInstance m_launchedInstance;
    bool m_launchedInstanceHasBeenSet = false;

    LifeCycle m_lifeCycle;
    bool m_lifeCycleHasBeenSet = false;

    ReplicationType m_replicationType{ReplicationType::NOT_SET};
    bool m_replicationTypeHasBeenSet = false;

    SourceProperties m_sourceProperties;
    bool m_sourcePropertiesHasBeenSet = false;

    Aws::String m_sourceServerID;
    bool m_sourceServerIDHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_userProvidedID;
    bool m_userProvidedIDHasBeenSet = false;

    Aws::String m_vcenterClientID;
    bool m_vcenterClientIDHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
