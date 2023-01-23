/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/LifeCycleState.h>
#include <aws/mgn/model/ReplicationType.h>
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

  /**
   * <p>Request to filter Source Servers list.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DescribeSourceServersRequestFilters">AWS
   * API Reference</a></p>
   */
  class DescribeSourceServersRequestFilters
  {
  public:
    AWS_MGN_API DescribeSourceServersRequestFilters();
    AWS_MGN_API DescribeSourceServersRequestFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API DescribeSourceServersRequestFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Request to filter Source Servers list by application IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicationIDs() const{ return m_applicationIDs; }

    /**
     * <p>Request to filter Source Servers list by application IDs.</p>
     */
    inline bool ApplicationIDsHasBeenSet() const { return m_applicationIDsHasBeenSet; }

    /**
     * <p>Request to filter Source Servers list by application IDs.</p>
     */
    inline void SetApplicationIDs(const Aws::Vector<Aws::String>& value) { m_applicationIDsHasBeenSet = true; m_applicationIDs = value; }

    /**
     * <p>Request to filter Source Servers list by application IDs.</p>
     */
    inline void SetApplicationIDs(Aws::Vector<Aws::String>&& value) { m_applicationIDsHasBeenSet = true; m_applicationIDs = std::move(value); }

    /**
     * <p>Request to filter Source Servers list by application IDs.</p>
     */
    inline DescribeSourceServersRequestFilters& WithApplicationIDs(const Aws::Vector<Aws::String>& value) { SetApplicationIDs(value); return *this;}

    /**
     * <p>Request to filter Source Servers list by application IDs.</p>
     */
    inline DescribeSourceServersRequestFilters& WithApplicationIDs(Aws::Vector<Aws::String>&& value) { SetApplicationIDs(std::move(value)); return *this;}

    /**
     * <p>Request to filter Source Servers list by application IDs.</p>
     */
    inline DescribeSourceServersRequestFilters& AddApplicationIDs(const Aws::String& value) { m_applicationIDsHasBeenSet = true; m_applicationIDs.push_back(value); return *this; }

    /**
     * <p>Request to filter Source Servers list by application IDs.</p>
     */
    inline DescribeSourceServersRequestFilters& AddApplicationIDs(Aws::String&& value) { m_applicationIDsHasBeenSet = true; m_applicationIDs.push_back(std::move(value)); return *this; }

    /**
     * <p>Request to filter Source Servers list by application IDs.</p>
     */
    inline DescribeSourceServersRequestFilters& AddApplicationIDs(const char* value) { m_applicationIDsHasBeenSet = true; m_applicationIDs.push_back(value); return *this; }


    /**
     * <p>Request to filter Source Servers list by archived.</p>
     */
    inline bool GetIsArchived() const{ return m_isArchived; }

    /**
     * <p>Request to filter Source Servers list by archived.</p>
     */
    inline bool IsArchivedHasBeenSet() const { return m_isArchivedHasBeenSet; }

    /**
     * <p>Request to filter Source Servers list by archived.</p>
     */
    inline void SetIsArchived(bool value) { m_isArchivedHasBeenSet = true; m_isArchived = value; }

    /**
     * <p>Request to filter Source Servers list by archived.</p>
     */
    inline DescribeSourceServersRequestFilters& WithIsArchived(bool value) { SetIsArchived(value); return *this;}


    /**
     * <p>Request to filter Source Servers list by life cycle states.</p>
     */
    inline const Aws::Vector<LifeCycleState>& GetLifeCycleStates() const{ return m_lifeCycleStates; }

    /**
     * <p>Request to filter Source Servers list by life cycle states.</p>
     */
    inline bool LifeCycleStatesHasBeenSet() const { return m_lifeCycleStatesHasBeenSet; }

    /**
     * <p>Request to filter Source Servers list by life cycle states.</p>
     */
    inline void SetLifeCycleStates(const Aws::Vector<LifeCycleState>& value) { m_lifeCycleStatesHasBeenSet = true; m_lifeCycleStates = value; }

    /**
     * <p>Request to filter Source Servers list by life cycle states.</p>
     */
    inline void SetLifeCycleStates(Aws::Vector<LifeCycleState>&& value) { m_lifeCycleStatesHasBeenSet = true; m_lifeCycleStates = std::move(value); }

    /**
     * <p>Request to filter Source Servers list by life cycle states.</p>
     */
    inline DescribeSourceServersRequestFilters& WithLifeCycleStates(const Aws::Vector<LifeCycleState>& value) { SetLifeCycleStates(value); return *this;}

    /**
     * <p>Request to filter Source Servers list by life cycle states.</p>
     */
    inline DescribeSourceServersRequestFilters& WithLifeCycleStates(Aws::Vector<LifeCycleState>&& value) { SetLifeCycleStates(std::move(value)); return *this;}

    /**
     * <p>Request to filter Source Servers list by life cycle states.</p>
     */
    inline DescribeSourceServersRequestFilters& AddLifeCycleStates(const LifeCycleState& value) { m_lifeCycleStatesHasBeenSet = true; m_lifeCycleStates.push_back(value); return *this; }

    /**
     * <p>Request to filter Source Servers list by life cycle states.</p>
     */
    inline DescribeSourceServersRequestFilters& AddLifeCycleStates(LifeCycleState&& value) { m_lifeCycleStatesHasBeenSet = true; m_lifeCycleStates.push_back(std::move(value)); return *this; }


    /**
     * <p>Request to filter Source Servers list by replication type.</p>
     */
    inline const Aws::Vector<ReplicationType>& GetReplicationTypes() const{ return m_replicationTypes; }

    /**
     * <p>Request to filter Source Servers list by replication type.</p>
     */
    inline bool ReplicationTypesHasBeenSet() const { return m_replicationTypesHasBeenSet; }

    /**
     * <p>Request to filter Source Servers list by replication type.</p>
     */
    inline void SetReplicationTypes(const Aws::Vector<ReplicationType>& value) { m_replicationTypesHasBeenSet = true; m_replicationTypes = value; }

    /**
     * <p>Request to filter Source Servers list by replication type.</p>
     */
    inline void SetReplicationTypes(Aws::Vector<ReplicationType>&& value) { m_replicationTypesHasBeenSet = true; m_replicationTypes = std::move(value); }

    /**
     * <p>Request to filter Source Servers list by replication type.</p>
     */
    inline DescribeSourceServersRequestFilters& WithReplicationTypes(const Aws::Vector<ReplicationType>& value) { SetReplicationTypes(value); return *this;}

    /**
     * <p>Request to filter Source Servers list by replication type.</p>
     */
    inline DescribeSourceServersRequestFilters& WithReplicationTypes(Aws::Vector<ReplicationType>&& value) { SetReplicationTypes(std::move(value)); return *this;}

    /**
     * <p>Request to filter Source Servers list by replication type.</p>
     */
    inline DescribeSourceServersRequestFilters& AddReplicationTypes(const ReplicationType& value) { m_replicationTypesHasBeenSet = true; m_replicationTypes.push_back(value); return *this; }

    /**
     * <p>Request to filter Source Servers list by replication type.</p>
     */
    inline DescribeSourceServersRequestFilters& AddReplicationTypes(ReplicationType&& value) { m_replicationTypesHasBeenSet = true; m_replicationTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>Request to filter Source Servers list by Source Server ID.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceServerIDs() const{ return m_sourceServerIDs; }

    /**
     * <p>Request to filter Source Servers list by Source Server ID.</p>
     */
    inline bool SourceServerIDsHasBeenSet() const { return m_sourceServerIDsHasBeenSet; }

    /**
     * <p>Request to filter Source Servers list by Source Server ID.</p>
     */
    inline void SetSourceServerIDs(const Aws::Vector<Aws::String>& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs = value; }

    /**
     * <p>Request to filter Source Servers list by Source Server ID.</p>
     */
    inline void SetSourceServerIDs(Aws::Vector<Aws::String>&& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs = std::move(value); }

    /**
     * <p>Request to filter Source Servers list by Source Server ID.</p>
     */
    inline DescribeSourceServersRequestFilters& WithSourceServerIDs(const Aws::Vector<Aws::String>& value) { SetSourceServerIDs(value); return *this;}

    /**
     * <p>Request to filter Source Servers list by Source Server ID.</p>
     */
    inline DescribeSourceServersRequestFilters& WithSourceServerIDs(Aws::Vector<Aws::String>&& value) { SetSourceServerIDs(std::move(value)); return *this;}

    /**
     * <p>Request to filter Source Servers list by Source Server ID.</p>
     */
    inline DescribeSourceServersRequestFilters& AddSourceServerIDs(const Aws::String& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs.push_back(value); return *this; }

    /**
     * <p>Request to filter Source Servers list by Source Server ID.</p>
     */
    inline DescribeSourceServersRequestFilters& AddSourceServerIDs(Aws::String&& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs.push_back(std::move(value)); return *this; }

    /**
     * <p>Request to filter Source Servers list by Source Server ID.</p>
     */
    inline DescribeSourceServersRequestFilters& AddSourceServerIDs(const char* value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_applicationIDs;
    bool m_applicationIDsHasBeenSet = false;

    bool m_isArchived;
    bool m_isArchivedHasBeenSet = false;

    Aws::Vector<LifeCycleState> m_lifeCycleStates;
    bool m_lifeCycleStatesHasBeenSet = false;

    Aws::Vector<ReplicationType> m_replicationTypes;
    bool m_replicationTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceServerIDs;
    bool m_sourceServerIDsHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
