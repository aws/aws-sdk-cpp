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

  class SourceServer
  {
  public:
    AWS_MGN_API SourceServer() = default;
    AWS_MGN_API SourceServer(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API SourceServer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Source server application ID.</p>
     */
    inline const Aws::String& GetApplicationID() const { return m_applicationID; }
    inline bool ApplicationIDHasBeenSet() const { return m_applicationIDHasBeenSet; }
    template<typename ApplicationIDT = Aws::String>
    void SetApplicationID(ApplicationIDT&& value) { m_applicationIDHasBeenSet = true; m_applicationID = std::forward<ApplicationIDT>(value); }
    template<typename ApplicationIDT = Aws::String>
    SourceServer& WithApplicationID(ApplicationIDT&& value) { SetApplicationID(std::forward<ApplicationIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    SourceServer& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source Server connector action.</p>
     */
    inline const SourceServerConnectorAction& GetConnectorAction() const { return m_connectorAction; }
    inline bool ConnectorActionHasBeenSet() const { return m_connectorActionHasBeenSet; }
    template<typename ConnectorActionT = SourceServerConnectorAction>
    void SetConnectorAction(ConnectorActionT&& value) { m_connectorActionHasBeenSet = true; m_connectorAction = std::forward<ConnectorActionT>(value); }
    template<typename ConnectorActionT = SourceServerConnectorAction>
    SourceServer& WithConnectorAction(ConnectorActionT&& value) { SetConnectorAction(std::forward<ConnectorActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server data replication info.</p>
     */
    inline const DataReplicationInfo& GetDataReplicationInfo() const { return m_dataReplicationInfo; }
    inline bool DataReplicationInfoHasBeenSet() const { return m_dataReplicationInfoHasBeenSet; }
    template<typename DataReplicationInfoT = DataReplicationInfo>
    void SetDataReplicationInfo(DataReplicationInfoT&& value) { m_dataReplicationInfoHasBeenSet = true; m_dataReplicationInfo = std::forward<DataReplicationInfoT>(value); }
    template<typename DataReplicationInfoT = DataReplicationInfo>
    SourceServer& WithDataReplicationInfo(DataReplicationInfoT&& value) { SetDataReplicationInfo(std::forward<DataReplicationInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server fqdn for action framework.</p>
     */
    inline const Aws::String& GetFqdnForActionFramework() const { return m_fqdnForActionFramework; }
    inline bool FqdnForActionFrameworkHasBeenSet() const { return m_fqdnForActionFrameworkHasBeenSet; }
    template<typename FqdnForActionFrameworkT = Aws::String>
    void SetFqdnForActionFramework(FqdnForActionFrameworkT&& value) { m_fqdnForActionFrameworkHasBeenSet = true; m_fqdnForActionFramework = std::forward<FqdnForActionFrameworkT>(value); }
    template<typename FqdnForActionFrameworkT = Aws::String>
    SourceServer& WithFqdnForActionFramework(FqdnForActionFrameworkT&& value) { SetFqdnForActionFramework(std::forward<FqdnForActionFrameworkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server archived status.</p>
     */
    inline bool GetIsArchived() const { return m_isArchived; }
    inline bool IsArchivedHasBeenSet() const { return m_isArchivedHasBeenSet; }
    inline void SetIsArchived(bool value) { m_isArchivedHasBeenSet = true; m_isArchived = value; }
    inline SourceServer& WithIsArchived(bool value) { SetIsArchived(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server launched instance.</p>
     */
    inline const LaunchedInstance& GetLaunchedInstance() const { return m_launchedInstance; }
    inline bool LaunchedInstanceHasBeenSet() const { return m_launchedInstanceHasBeenSet; }
    template<typename LaunchedInstanceT = LaunchedInstance>
    void SetLaunchedInstance(LaunchedInstanceT&& value) { m_launchedInstanceHasBeenSet = true; m_launchedInstance = std::forward<LaunchedInstanceT>(value); }
    template<typename LaunchedInstanceT = LaunchedInstance>
    SourceServer& WithLaunchedInstance(LaunchedInstanceT&& value) { SetLaunchedInstance(std::forward<LaunchedInstanceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server lifecycle state.</p>
     */
    inline const LifeCycle& GetLifeCycle() const { return m_lifeCycle; }
    inline bool LifeCycleHasBeenSet() const { return m_lifeCycleHasBeenSet; }
    template<typename LifeCycleT = LifeCycle>
    void SetLifeCycle(LifeCycleT&& value) { m_lifeCycleHasBeenSet = true; m_lifeCycle = std::forward<LifeCycleT>(value); }
    template<typename LifeCycleT = LifeCycle>
    SourceServer& WithLifeCycle(LifeCycleT&& value) { SetLifeCycle(std::forward<LifeCycleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server replication type.</p>
     */
    inline ReplicationType GetReplicationType() const { return m_replicationType; }
    inline bool ReplicationTypeHasBeenSet() const { return m_replicationTypeHasBeenSet; }
    inline void SetReplicationType(ReplicationType value) { m_replicationTypeHasBeenSet = true; m_replicationType = value; }
    inline SourceServer& WithReplicationType(ReplicationType value) { SetReplicationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server properties.</p>
     */
    inline const SourceProperties& GetSourceProperties() const { return m_sourceProperties; }
    inline bool SourcePropertiesHasBeenSet() const { return m_sourcePropertiesHasBeenSet; }
    template<typename SourcePropertiesT = SourceProperties>
    void SetSourceProperties(SourcePropertiesT&& value) { m_sourcePropertiesHasBeenSet = true; m_sourceProperties = std::forward<SourcePropertiesT>(value); }
    template<typename SourcePropertiesT = SourceProperties>
    SourceServer& WithSourceProperties(SourcePropertiesT&& value) { SetSourceProperties(std::forward<SourcePropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server ID.</p>
     */
    inline const Aws::String& GetSourceServerID() const { return m_sourceServerID; }
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }
    template<typename SourceServerIDT = Aws::String>
    void SetSourceServerID(SourceServerIDT&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::forward<SourceServerIDT>(value); }
    template<typename SourceServerIDT = Aws::String>
    SourceServer& WithSourceServerID(SourceServerIDT&& value) { SetSourceServerID(std::forward<SourceServerIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server Tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    SourceServer& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    SourceServer& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Source server user provided ID.</p>
     */
    inline const Aws::String& GetUserProvidedID() const { return m_userProvidedID; }
    inline bool UserProvidedIDHasBeenSet() const { return m_userProvidedIDHasBeenSet; }
    template<typename UserProvidedIDT = Aws::String>
    void SetUserProvidedID(UserProvidedIDT&& value) { m_userProvidedIDHasBeenSet = true; m_userProvidedID = std::forward<UserProvidedIDT>(value); }
    template<typename UserProvidedIDT = Aws::String>
    SourceServer& WithUserProvidedID(UserProvidedIDT&& value) { SetUserProvidedID(std::forward<UserProvidedIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server vCenter client id.</p>
     */
    inline const Aws::String& GetVcenterClientID() const { return m_vcenterClientID; }
    inline bool VcenterClientIDHasBeenSet() const { return m_vcenterClientIDHasBeenSet; }
    template<typename VcenterClientIDT = Aws::String>
    void SetVcenterClientID(VcenterClientIDT&& value) { m_vcenterClientIDHasBeenSet = true; m_vcenterClientID = std::forward<VcenterClientIDT>(value); }
    template<typename VcenterClientIDT = Aws::String>
    SourceServer& WithVcenterClientID(VcenterClientIDT&& value) { SetVcenterClientID(std::forward<VcenterClientIDT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SourceServer& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
