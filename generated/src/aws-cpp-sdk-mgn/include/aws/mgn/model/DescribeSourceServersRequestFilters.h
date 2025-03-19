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
    AWS_MGN_API DescribeSourceServersRequestFilters() = default;
    AWS_MGN_API DescribeSourceServersRequestFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API DescribeSourceServersRequestFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Request to filter Source Servers list by application IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicationIDs() const { return m_applicationIDs; }
    inline bool ApplicationIDsHasBeenSet() const { return m_applicationIDsHasBeenSet; }
    template<typename ApplicationIDsT = Aws::Vector<Aws::String>>
    void SetApplicationIDs(ApplicationIDsT&& value) { m_applicationIDsHasBeenSet = true; m_applicationIDs = std::forward<ApplicationIDsT>(value); }
    template<typename ApplicationIDsT = Aws::Vector<Aws::String>>
    DescribeSourceServersRequestFilters& WithApplicationIDs(ApplicationIDsT&& value) { SetApplicationIDs(std::forward<ApplicationIDsT>(value)); return *this;}
    template<typename ApplicationIDsT = Aws::String>
    DescribeSourceServersRequestFilters& AddApplicationIDs(ApplicationIDsT&& value) { m_applicationIDsHasBeenSet = true; m_applicationIDs.emplace_back(std::forward<ApplicationIDsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Request to filter Source Servers list by archived.</p>
     */
    inline bool GetIsArchived() const { return m_isArchived; }
    inline bool IsArchivedHasBeenSet() const { return m_isArchivedHasBeenSet; }
    inline void SetIsArchived(bool value) { m_isArchivedHasBeenSet = true; m_isArchived = value; }
    inline DescribeSourceServersRequestFilters& WithIsArchived(bool value) { SetIsArchived(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request to filter Source Servers list by life cycle states.</p>
     */
    inline const Aws::Vector<LifeCycleState>& GetLifeCycleStates() const { return m_lifeCycleStates; }
    inline bool LifeCycleStatesHasBeenSet() const { return m_lifeCycleStatesHasBeenSet; }
    template<typename LifeCycleStatesT = Aws::Vector<LifeCycleState>>
    void SetLifeCycleStates(LifeCycleStatesT&& value) { m_lifeCycleStatesHasBeenSet = true; m_lifeCycleStates = std::forward<LifeCycleStatesT>(value); }
    template<typename LifeCycleStatesT = Aws::Vector<LifeCycleState>>
    DescribeSourceServersRequestFilters& WithLifeCycleStates(LifeCycleStatesT&& value) { SetLifeCycleStates(std::forward<LifeCycleStatesT>(value)); return *this;}
    inline DescribeSourceServersRequestFilters& AddLifeCycleStates(LifeCycleState value) { m_lifeCycleStatesHasBeenSet = true; m_lifeCycleStates.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Request to filter Source Servers list by replication type.</p>
     */
    inline const Aws::Vector<ReplicationType>& GetReplicationTypes() const { return m_replicationTypes; }
    inline bool ReplicationTypesHasBeenSet() const { return m_replicationTypesHasBeenSet; }
    template<typename ReplicationTypesT = Aws::Vector<ReplicationType>>
    void SetReplicationTypes(ReplicationTypesT&& value) { m_replicationTypesHasBeenSet = true; m_replicationTypes = std::forward<ReplicationTypesT>(value); }
    template<typename ReplicationTypesT = Aws::Vector<ReplicationType>>
    DescribeSourceServersRequestFilters& WithReplicationTypes(ReplicationTypesT&& value) { SetReplicationTypes(std::forward<ReplicationTypesT>(value)); return *this;}
    inline DescribeSourceServersRequestFilters& AddReplicationTypes(ReplicationType value) { m_replicationTypesHasBeenSet = true; m_replicationTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Request to filter Source Servers list by Source Server ID.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceServerIDs() const { return m_sourceServerIDs; }
    inline bool SourceServerIDsHasBeenSet() const { return m_sourceServerIDsHasBeenSet; }
    template<typename SourceServerIDsT = Aws::Vector<Aws::String>>
    void SetSourceServerIDs(SourceServerIDsT&& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs = std::forward<SourceServerIDsT>(value); }
    template<typename SourceServerIDsT = Aws::Vector<Aws::String>>
    DescribeSourceServersRequestFilters& WithSourceServerIDs(SourceServerIDsT&& value) { SetSourceServerIDs(std::forward<SourceServerIDsT>(value)); return *this;}
    template<typename SourceServerIDsT = Aws::String>
    DescribeSourceServersRequestFilters& AddSourceServerIDs(SourceServerIDsT&& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs.emplace_back(std::forward<SourceServerIDsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_applicationIDs;
    bool m_applicationIDsHasBeenSet = false;

    bool m_isArchived{false};
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
