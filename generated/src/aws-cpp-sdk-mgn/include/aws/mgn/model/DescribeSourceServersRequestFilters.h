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


    ///@{
    /**
     * <p>Request to filter Source Servers list by application IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicationIDs() const{ return m_applicationIDs; }
    inline bool ApplicationIDsHasBeenSet() const { return m_applicationIDsHasBeenSet; }
    inline void SetApplicationIDs(const Aws::Vector<Aws::String>& value) { m_applicationIDsHasBeenSet = true; m_applicationIDs = value; }
    inline void SetApplicationIDs(Aws::Vector<Aws::String>&& value) { m_applicationIDsHasBeenSet = true; m_applicationIDs = std::move(value); }
    inline DescribeSourceServersRequestFilters& WithApplicationIDs(const Aws::Vector<Aws::String>& value) { SetApplicationIDs(value); return *this;}
    inline DescribeSourceServersRequestFilters& WithApplicationIDs(Aws::Vector<Aws::String>&& value) { SetApplicationIDs(std::move(value)); return *this;}
    inline DescribeSourceServersRequestFilters& AddApplicationIDs(const Aws::String& value) { m_applicationIDsHasBeenSet = true; m_applicationIDs.push_back(value); return *this; }
    inline DescribeSourceServersRequestFilters& AddApplicationIDs(Aws::String&& value) { m_applicationIDsHasBeenSet = true; m_applicationIDs.push_back(std::move(value)); return *this; }
    inline DescribeSourceServersRequestFilters& AddApplicationIDs(const char* value) { m_applicationIDsHasBeenSet = true; m_applicationIDs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Request to filter Source Servers list by archived.</p>
     */
    inline bool GetIsArchived() const{ return m_isArchived; }
    inline bool IsArchivedHasBeenSet() const { return m_isArchivedHasBeenSet; }
    inline void SetIsArchived(bool value) { m_isArchivedHasBeenSet = true; m_isArchived = value; }
    inline DescribeSourceServersRequestFilters& WithIsArchived(bool value) { SetIsArchived(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request to filter Source Servers list by life cycle states.</p>
     */
    inline const Aws::Vector<LifeCycleState>& GetLifeCycleStates() const{ return m_lifeCycleStates; }
    inline bool LifeCycleStatesHasBeenSet() const { return m_lifeCycleStatesHasBeenSet; }
    inline void SetLifeCycleStates(const Aws::Vector<LifeCycleState>& value) { m_lifeCycleStatesHasBeenSet = true; m_lifeCycleStates = value; }
    inline void SetLifeCycleStates(Aws::Vector<LifeCycleState>&& value) { m_lifeCycleStatesHasBeenSet = true; m_lifeCycleStates = std::move(value); }
    inline DescribeSourceServersRequestFilters& WithLifeCycleStates(const Aws::Vector<LifeCycleState>& value) { SetLifeCycleStates(value); return *this;}
    inline DescribeSourceServersRequestFilters& WithLifeCycleStates(Aws::Vector<LifeCycleState>&& value) { SetLifeCycleStates(std::move(value)); return *this;}
    inline DescribeSourceServersRequestFilters& AddLifeCycleStates(const LifeCycleState& value) { m_lifeCycleStatesHasBeenSet = true; m_lifeCycleStates.push_back(value); return *this; }
    inline DescribeSourceServersRequestFilters& AddLifeCycleStates(LifeCycleState&& value) { m_lifeCycleStatesHasBeenSet = true; m_lifeCycleStates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Request to filter Source Servers list by replication type.</p>
     */
    inline const Aws::Vector<ReplicationType>& GetReplicationTypes() const{ return m_replicationTypes; }
    inline bool ReplicationTypesHasBeenSet() const { return m_replicationTypesHasBeenSet; }
    inline void SetReplicationTypes(const Aws::Vector<ReplicationType>& value) { m_replicationTypesHasBeenSet = true; m_replicationTypes = value; }
    inline void SetReplicationTypes(Aws::Vector<ReplicationType>&& value) { m_replicationTypesHasBeenSet = true; m_replicationTypes = std::move(value); }
    inline DescribeSourceServersRequestFilters& WithReplicationTypes(const Aws::Vector<ReplicationType>& value) { SetReplicationTypes(value); return *this;}
    inline DescribeSourceServersRequestFilters& WithReplicationTypes(Aws::Vector<ReplicationType>&& value) { SetReplicationTypes(std::move(value)); return *this;}
    inline DescribeSourceServersRequestFilters& AddReplicationTypes(const ReplicationType& value) { m_replicationTypesHasBeenSet = true; m_replicationTypes.push_back(value); return *this; }
    inline DescribeSourceServersRequestFilters& AddReplicationTypes(ReplicationType&& value) { m_replicationTypesHasBeenSet = true; m_replicationTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Request to filter Source Servers list by Source Server ID.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceServerIDs() const{ return m_sourceServerIDs; }
    inline bool SourceServerIDsHasBeenSet() const { return m_sourceServerIDsHasBeenSet; }
    inline void SetSourceServerIDs(const Aws::Vector<Aws::String>& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs = value; }
    inline void SetSourceServerIDs(Aws::Vector<Aws::String>&& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs = std::move(value); }
    inline DescribeSourceServersRequestFilters& WithSourceServerIDs(const Aws::Vector<Aws::String>& value) { SetSourceServerIDs(value); return *this;}
    inline DescribeSourceServersRequestFilters& WithSourceServerIDs(Aws::Vector<Aws::String>&& value) { SetSourceServerIDs(std::move(value)); return *this;}
    inline DescribeSourceServersRequestFilters& AddSourceServerIDs(const Aws::String& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs.push_back(value); return *this; }
    inline DescribeSourceServersRequestFilters& AddSourceServerIDs(Aws::String&& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs.push_back(std::move(value)); return *this; }
    inline DescribeSourceServersRequestFilters& AddSourceServerIDs(const char* value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs.push_back(value); return *this; }
    ///@}
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
