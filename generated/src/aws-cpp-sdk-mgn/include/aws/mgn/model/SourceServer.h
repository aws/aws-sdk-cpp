/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    /**
     * <p>Source server application ID.</p>
     */
    inline const Aws::String& GetApplicationID() const{ return m_applicationID; }

    /**
     * <p>Source server application ID.</p>
     */
    inline bool ApplicationIDHasBeenSet() const { return m_applicationIDHasBeenSet; }

    /**
     * <p>Source server application ID.</p>
     */
    inline void SetApplicationID(const Aws::String& value) { m_applicationIDHasBeenSet = true; m_applicationID = value; }

    /**
     * <p>Source server application ID.</p>
     */
    inline void SetApplicationID(Aws::String&& value) { m_applicationIDHasBeenSet = true; m_applicationID = std::move(value); }

    /**
     * <p>Source server application ID.</p>
     */
    inline void SetApplicationID(const char* value) { m_applicationIDHasBeenSet = true; m_applicationID.assign(value); }

    /**
     * <p>Source server application ID.</p>
     */
    inline SourceServer& WithApplicationID(const Aws::String& value) { SetApplicationID(value); return *this;}

    /**
     * <p>Source server application ID.</p>
     */
    inline SourceServer& WithApplicationID(Aws::String&& value) { SetApplicationID(std::move(value)); return *this;}

    /**
     * <p>Source server application ID.</p>
     */
    inline SourceServer& WithApplicationID(const char* value) { SetApplicationID(value); return *this;}


    /**
     * <p>Source server ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Source server ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>Source server ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>Source server ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>Source server ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>Source server ARN.</p>
     */
    inline SourceServer& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Source server ARN.</p>
     */
    inline SourceServer& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Source server ARN.</p>
     */
    inline SourceServer& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Source server data replication info.</p>
     */
    inline const DataReplicationInfo& GetDataReplicationInfo() const{ return m_dataReplicationInfo; }

    /**
     * <p>Source server data replication info.</p>
     */
    inline bool DataReplicationInfoHasBeenSet() const { return m_dataReplicationInfoHasBeenSet; }

    /**
     * <p>Source server data replication info.</p>
     */
    inline void SetDataReplicationInfo(const DataReplicationInfo& value) { m_dataReplicationInfoHasBeenSet = true; m_dataReplicationInfo = value; }

    /**
     * <p>Source server data replication info.</p>
     */
    inline void SetDataReplicationInfo(DataReplicationInfo&& value) { m_dataReplicationInfoHasBeenSet = true; m_dataReplicationInfo = std::move(value); }

    /**
     * <p>Source server data replication info.</p>
     */
    inline SourceServer& WithDataReplicationInfo(const DataReplicationInfo& value) { SetDataReplicationInfo(value); return *this;}

    /**
     * <p>Source server data replication info.</p>
     */
    inline SourceServer& WithDataReplicationInfo(DataReplicationInfo&& value) { SetDataReplicationInfo(std::move(value)); return *this;}


    /**
     * <p>Source server archived status.</p>
     */
    inline bool GetIsArchived() const{ return m_isArchived; }

    /**
     * <p>Source server archived status.</p>
     */
    inline bool IsArchivedHasBeenSet() const { return m_isArchivedHasBeenSet; }

    /**
     * <p>Source server archived status.</p>
     */
    inline void SetIsArchived(bool value) { m_isArchivedHasBeenSet = true; m_isArchived = value; }

    /**
     * <p>Source server archived status.</p>
     */
    inline SourceServer& WithIsArchived(bool value) { SetIsArchived(value); return *this;}


    /**
     * <p>Source server launched instance.</p>
     */
    inline const LaunchedInstance& GetLaunchedInstance() const{ return m_launchedInstance; }

    /**
     * <p>Source server launched instance.</p>
     */
    inline bool LaunchedInstanceHasBeenSet() const { return m_launchedInstanceHasBeenSet; }

    /**
     * <p>Source server launched instance.</p>
     */
    inline void SetLaunchedInstance(const LaunchedInstance& value) { m_launchedInstanceHasBeenSet = true; m_launchedInstance = value; }

    /**
     * <p>Source server launched instance.</p>
     */
    inline void SetLaunchedInstance(LaunchedInstance&& value) { m_launchedInstanceHasBeenSet = true; m_launchedInstance = std::move(value); }

    /**
     * <p>Source server launched instance.</p>
     */
    inline SourceServer& WithLaunchedInstance(const LaunchedInstance& value) { SetLaunchedInstance(value); return *this;}

    /**
     * <p>Source server launched instance.</p>
     */
    inline SourceServer& WithLaunchedInstance(LaunchedInstance&& value) { SetLaunchedInstance(std::move(value)); return *this;}


    /**
     * <p>Source server lifecycle state.</p>
     */
    inline const LifeCycle& GetLifeCycle() const{ return m_lifeCycle; }

    /**
     * <p>Source server lifecycle state.</p>
     */
    inline bool LifeCycleHasBeenSet() const { return m_lifeCycleHasBeenSet; }

    /**
     * <p>Source server lifecycle state.</p>
     */
    inline void SetLifeCycle(const LifeCycle& value) { m_lifeCycleHasBeenSet = true; m_lifeCycle = value; }

    /**
     * <p>Source server lifecycle state.</p>
     */
    inline void SetLifeCycle(LifeCycle&& value) { m_lifeCycleHasBeenSet = true; m_lifeCycle = std::move(value); }

    /**
     * <p>Source server lifecycle state.</p>
     */
    inline SourceServer& WithLifeCycle(const LifeCycle& value) { SetLifeCycle(value); return *this;}

    /**
     * <p>Source server lifecycle state.</p>
     */
    inline SourceServer& WithLifeCycle(LifeCycle&& value) { SetLifeCycle(std::move(value)); return *this;}


    /**
     * <p>Source server replication type.</p>
     */
    inline const ReplicationType& GetReplicationType() const{ return m_replicationType; }

    /**
     * <p>Source server replication type.</p>
     */
    inline bool ReplicationTypeHasBeenSet() const { return m_replicationTypeHasBeenSet; }

    /**
     * <p>Source server replication type.</p>
     */
    inline void SetReplicationType(const ReplicationType& value) { m_replicationTypeHasBeenSet = true; m_replicationType = value; }

    /**
     * <p>Source server replication type.</p>
     */
    inline void SetReplicationType(ReplicationType&& value) { m_replicationTypeHasBeenSet = true; m_replicationType = std::move(value); }

    /**
     * <p>Source server replication type.</p>
     */
    inline SourceServer& WithReplicationType(const ReplicationType& value) { SetReplicationType(value); return *this;}

    /**
     * <p>Source server replication type.</p>
     */
    inline SourceServer& WithReplicationType(ReplicationType&& value) { SetReplicationType(std::move(value)); return *this;}


    /**
     * <p>Source server properties.</p>
     */
    inline const SourceProperties& GetSourceProperties() const{ return m_sourceProperties; }

    /**
     * <p>Source server properties.</p>
     */
    inline bool SourcePropertiesHasBeenSet() const { return m_sourcePropertiesHasBeenSet; }

    /**
     * <p>Source server properties.</p>
     */
    inline void SetSourceProperties(const SourceProperties& value) { m_sourcePropertiesHasBeenSet = true; m_sourceProperties = value; }

    /**
     * <p>Source server properties.</p>
     */
    inline void SetSourceProperties(SourceProperties&& value) { m_sourcePropertiesHasBeenSet = true; m_sourceProperties = std::move(value); }

    /**
     * <p>Source server properties.</p>
     */
    inline SourceServer& WithSourceProperties(const SourceProperties& value) { SetSourceProperties(value); return *this;}

    /**
     * <p>Source server properties.</p>
     */
    inline SourceServer& WithSourceProperties(SourceProperties&& value) { SetSourceProperties(std::move(value)); return *this;}


    /**
     * <p>Source server ID.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }

    /**
     * <p>Source server ID.</p>
     */
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }

    /**
     * <p>Source server ID.</p>
     */
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = value; }

    /**
     * <p>Source server ID.</p>
     */
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::move(value); }

    /**
     * <p>Source server ID.</p>
     */
    inline void SetSourceServerID(const char* value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID.assign(value); }

    /**
     * <p>Source server ID.</p>
     */
    inline SourceServer& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}

    /**
     * <p>Source server ID.</p>
     */
    inline SourceServer& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}

    /**
     * <p>Source server ID.</p>
     */
    inline SourceServer& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}


    /**
     * <p>Source server Tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Source server Tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Source server Tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Source server Tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Source server Tags.</p>
     */
    inline SourceServer& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Source server Tags.</p>
     */
    inline SourceServer& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Source server Tags.</p>
     */
    inline SourceServer& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Source server Tags.</p>
     */
    inline SourceServer& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Source server Tags.</p>
     */
    inline SourceServer& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Source server Tags.</p>
     */
    inline SourceServer& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Source server Tags.</p>
     */
    inline SourceServer& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Source server Tags.</p>
     */
    inline SourceServer& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Source server Tags.</p>
     */
    inline SourceServer& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>Source server vCenter client id.</p>
     */
    inline const Aws::String& GetVcenterClientID() const{ return m_vcenterClientID; }

    /**
     * <p>Source server vCenter client id.</p>
     */
    inline bool VcenterClientIDHasBeenSet() const { return m_vcenterClientIDHasBeenSet; }

    /**
     * <p>Source server vCenter client id.</p>
     */
    inline void SetVcenterClientID(const Aws::String& value) { m_vcenterClientIDHasBeenSet = true; m_vcenterClientID = value; }

    /**
     * <p>Source server vCenter client id.</p>
     */
    inline void SetVcenterClientID(Aws::String&& value) { m_vcenterClientIDHasBeenSet = true; m_vcenterClientID = std::move(value); }

    /**
     * <p>Source server vCenter client id.</p>
     */
    inline void SetVcenterClientID(const char* value) { m_vcenterClientIDHasBeenSet = true; m_vcenterClientID.assign(value); }

    /**
     * <p>Source server vCenter client id.</p>
     */
    inline SourceServer& WithVcenterClientID(const Aws::String& value) { SetVcenterClientID(value); return *this;}

    /**
     * <p>Source server vCenter client id.</p>
     */
    inline SourceServer& WithVcenterClientID(Aws::String&& value) { SetVcenterClientID(std::move(value)); return *this;}

    /**
     * <p>Source server vCenter client id.</p>
     */
    inline SourceServer& WithVcenterClientID(const char* value) { SetVcenterClientID(value); return *this;}

  private:

    Aws::String m_applicationID;
    bool m_applicationIDHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    DataReplicationInfo m_dataReplicationInfo;
    bool m_dataReplicationInfoHasBeenSet = false;

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

    Aws::String m_vcenterClientID;
    bool m_vcenterClientIDHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
