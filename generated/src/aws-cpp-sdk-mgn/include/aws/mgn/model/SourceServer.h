﻿/**
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
    AWS_MGN_API SourceServer();
    AWS_MGN_API SourceServer(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API SourceServer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Source server application ID.</p>
     */
    inline const Aws::String& GetApplicationID() const{ return m_applicationID; }
    inline bool ApplicationIDHasBeenSet() const { return m_applicationIDHasBeenSet; }
    inline void SetApplicationID(const Aws::String& value) { m_applicationIDHasBeenSet = true; m_applicationID = value; }
    inline void SetApplicationID(Aws::String&& value) { m_applicationIDHasBeenSet = true; m_applicationID = std::move(value); }
    inline void SetApplicationID(const char* value) { m_applicationIDHasBeenSet = true; m_applicationID.assign(value); }
    inline SourceServer& WithApplicationID(const Aws::String& value) { SetApplicationID(value); return *this;}
    inline SourceServer& WithApplicationID(Aws::String&& value) { SetApplicationID(std::move(value)); return *this;}
    inline SourceServer& WithApplicationID(const char* value) { SetApplicationID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline SourceServer& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline SourceServer& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline SourceServer& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source Server connector action.</p>
     */
    inline const SourceServerConnectorAction& GetConnectorAction() const{ return m_connectorAction; }
    inline bool ConnectorActionHasBeenSet() const { return m_connectorActionHasBeenSet; }
    inline void SetConnectorAction(const SourceServerConnectorAction& value) { m_connectorActionHasBeenSet = true; m_connectorAction = value; }
    inline void SetConnectorAction(SourceServerConnectorAction&& value) { m_connectorActionHasBeenSet = true; m_connectorAction = std::move(value); }
    inline SourceServer& WithConnectorAction(const SourceServerConnectorAction& value) { SetConnectorAction(value); return *this;}
    inline SourceServer& WithConnectorAction(SourceServerConnectorAction&& value) { SetConnectorAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server data replication info.</p>
     */
    inline const DataReplicationInfo& GetDataReplicationInfo() const{ return m_dataReplicationInfo; }
    inline bool DataReplicationInfoHasBeenSet() const { return m_dataReplicationInfoHasBeenSet; }
    inline void SetDataReplicationInfo(const DataReplicationInfo& value) { m_dataReplicationInfoHasBeenSet = true; m_dataReplicationInfo = value; }
    inline void SetDataReplicationInfo(DataReplicationInfo&& value) { m_dataReplicationInfoHasBeenSet = true; m_dataReplicationInfo = std::move(value); }
    inline SourceServer& WithDataReplicationInfo(const DataReplicationInfo& value) { SetDataReplicationInfo(value); return *this;}
    inline SourceServer& WithDataReplicationInfo(DataReplicationInfo&& value) { SetDataReplicationInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server fqdn for action framework.</p>
     */
    inline const Aws::String& GetFqdnForActionFramework() const{ return m_fqdnForActionFramework; }
    inline bool FqdnForActionFrameworkHasBeenSet() const { return m_fqdnForActionFrameworkHasBeenSet; }
    inline void SetFqdnForActionFramework(const Aws::String& value) { m_fqdnForActionFrameworkHasBeenSet = true; m_fqdnForActionFramework = value; }
    inline void SetFqdnForActionFramework(Aws::String&& value) { m_fqdnForActionFrameworkHasBeenSet = true; m_fqdnForActionFramework = std::move(value); }
    inline void SetFqdnForActionFramework(const char* value) { m_fqdnForActionFrameworkHasBeenSet = true; m_fqdnForActionFramework.assign(value); }
    inline SourceServer& WithFqdnForActionFramework(const Aws::String& value) { SetFqdnForActionFramework(value); return *this;}
    inline SourceServer& WithFqdnForActionFramework(Aws::String&& value) { SetFqdnForActionFramework(std::move(value)); return *this;}
    inline SourceServer& WithFqdnForActionFramework(const char* value) { SetFqdnForActionFramework(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server archived status.</p>
     */
    inline bool GetIsArchived() const{ return m_isArchived; }
    inline bool IsArchivedHasBeenSet() const { return m_isArchivedHasBeenSet; }
    inline void SetIsArchived(bool value) { m_isArchivedHasBeenSet = true; m_isArchived = value; }
    inline SourceServer& WithIsArchived(bool value) { SetIsArchived(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server launched instance.</p>
     */
    inline const LaunchedInstance& GetLaunchedInstance() const{ return m_launchedInstance; }
    inline bool LaunchedInstanceHasBeenSet() const { return m_launchedInstanceHasBeenSet; }
    inline void SetLaunchedInstance(const LaunchedInstance& value) { m_launchedInstanceHasBeenSet = true; m_launchedInstance = value; }
    inline void SetLaunchedInstance(LaunchedInstance&& value) { m_launchedInstanceHasBeenSet = true; m_launchedInstance = std::move(value); }
    inline SourceServer& WithLaunchedInstance(const LaunchedInstance& value) { SetLaunchedInstance(value); return *this;}
    inline SourceServer& WithLaunchedInstance(LaunchedInstance&& value) { SetLaunchedInstance(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server lifecycle state.</p>
     */
    inline const LifeCycle& GetLifeCycle() const{ return m_lifeCycle; }
    inline bool LifeCycleHasBeenSet() const { return m_lifeCycleHasBeenSet; }
    inline void SetLifeCycle(const LifeCycle& value) { m_lifeCycleHasBeenSet = true; m_lifeCycle = value; }
    inline void SetLifeCycle(LifeCycle&& value) { m_lifeCycleHasBeenSet = true; m_lifeCycle = std::move(value); }
    inline SourceServer& WithLifeCycle(const LifeCycle& value) { SetLifeCycle(value); return *this;}
    inline SourceServer& WithLifeCycle(LifeCycle&& value) { SetLifeCycle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server replication type.</p>
     */
    inline const ReplicationType& GetReplicationType() const{ return m_replicationType; }
    inline bool ReplicationTypeHasBeenSet() const { return m_replicationTypeHasBeenSet; }
    inline void SetReplicationType(const ReplicationType& value) { m_replicationTypeHasBeenSet = true; m_replicationType = value; }
    inline void SetReplicationType(ReplicationType&& value) { m_replicationTypeHasBeenSet = true; m_replicationType = std::move(value); }
    inline SourceServer& WithReplicationType(const ReplicationType& value) { SetReplicationType(value); return *this;}
    inline SourceServer& WithReplicationType(ReplicationType&& value) { SetReplicationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server properties.</p>
     */
    inline const SourceProperties& GetSourceProperties() const{ return m_sourceProperties; }
    inline bool SourcePropertiesHasBeenSet() const { return m_sourcePropertiesHasBeenSet; }
    inline void SetSourceProperties(const SourceProperties& value) { m_sourcePropertiesHasBeenSet = true; m_sourceProperties = value; }
    inline void SetSourceProperties(SourceProperties&& value) { m_sourcePropertiesHasBeenSet = true; m_sourceProperties = std::move(value); }
    inline SourceServer& WithSourceProperties(const SourceProperties& value) { SetSourceProperties(value); return *this;}
    inline SourceServer& WithSourceProperties(SourceProperties&& value) { SetSourceProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server ID.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = value; }
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::move(value); }
    inline void SetSourceServerID(const char* value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID.assign(value); }
    inline SourceServer& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}
    inline SourceServer& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}
    inline SourceServer& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server Tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline SourceServer& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline SourceServer& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline SourceServer& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline SourceServer& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline SourceServer& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline SourceServer& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline SourceServer& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline SourceServer& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline SourceServer& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Source server user provided ID.</p>
     */
    inline const Aws::String& GetUserProvidedID() const{ return m_userProvidedID; }
    inline bool UserProvidedIDHasBeenSet() const { return m_userProvidedIDHasBeenSet; }
    inline void SetUserProvidedID(const Aws::String& value) { m_userProvidedIDHasBeenSet = true; m_userProvidedID = value; }
    inline void SetUserProvidedID(Aws::String&& value) { m_userProvidedIDHasBeenSet = true; m_userProvidedID = std::move(value); }
    inline void SetUserProvidedID(const char* value) { m_userProvidedIDHasBeenSet = true; m_userProvidedID.assign(value); }
    inline SourceServer& WithUserProvidedID(const Aws::String& value) { SetUserProvidedID(value); return *this;}
    inline SourceServer& WithUserProvidedID(Aws::String&& value) { SetUserProvidedID(std::move(value)); return *this;}
    inline SourceServer& WithUserProvidedID(const char* value) { SetUserProvidedID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server vCenter client id.</p>
     */
    inline const Aws::String& GetVcenterClientID() const{ return m_vcenterClientID; }
    inline bool VcenterClientIDHasBeenSet() const { return m_vcenterClientIDHasBeenSet; }
    inline void SetVcenterClientID(const Aws::String& value) { m_vcenterClientIDHasBeenSet = true; m_vcenterClientID = value; }
    inline void SetVcenterClientID(Aws::String&& value) { m_vcenterClientIDHasBeenSet = true; m_vcenterClientID = std::move(value); }
    inline void SetVcenterClientID(const char* value) { m_vcenterClientIDHasBeenSet = true; m_vcenterClientID.assign(value); }
    inline SourceServer& WithVcenterClientID(const Aws::String& value) { SetVcenterClientID(value); return *this;}
    inline SourceServer& WithVcenterClientID(Aws::String&& value) { SetVcenterClientID(std::move(value)); return *this;}
    inline SourceServer& WithVcenterClientID(const char* value) { SetVcenterClientID(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline SourceServer& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SourceServer& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SourceServer& WithRequestId(const char* value) { SetRequestId(value); return *this;}
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

    bool m_isArchived;
    bool m_isArchivedHasBeenSet = false;

    LaunchedInstance m_launchedInstance;
    bool m_launchedInstanceHasBeenSet = false;

    LifeCycle m_lifeCycle;
    bool m_lifeCycleHasBeenSet = false;

    ReplicationType m_replicationType;
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
