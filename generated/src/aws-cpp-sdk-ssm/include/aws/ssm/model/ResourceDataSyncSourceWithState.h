/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ResourceDataSyncAwsOrganizationsSource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>The data type name for including resource data sync state. There are four
   * sync states:</p> <p> <code>OrganizationNotExists</code> (Your organization
   * doesn't exist)</p> <p> <code>NoPermissions</code> (The system can't locate the
   * service-linked role. This role is automatically created when a user creates a
   * resource data sync in Amazon Web Services Systems Manager Explorer.)</p> <p>
   * <code>InvalidOrganizationalUnit</code> (You specified or selected an invalid
   * unit in the resource data sync configuration.)</p> <p>
   * <code>TrustedAccessDisabled</code> (You disabled Systems Manager access in the
   * organization in Organizations.)</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResourceDataSyncSourceWithState">AWS
   * API Reference</a></p>
   */
  class ResourceDataSyncSourceWithState
  {
  public:
    AWS_SSM_API ResourceDataSyncSourceWithState() = default;
    AWS_SSM_API ResourceDataSyncSourceWithState(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ResourceDataSyncSourceWithState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of data source for the resource data sync. <code>SourceType</code>
     * is either <code>AwsOrganizations</code> (if an organization is present in
     * Organizations) or <code>singleAccountMultiRegions</code>.</p>
     */
    inline const Aws::String& GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    template<typename SourceTypeT = Aws::String>
    void SetSourceType(SourceTypeT&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::forward<SourceTypeT>(value); }
    template<typename SourceTypeT = Aws::String>
    ResourceDataSyncSourceWithState& WithSourceType(SourceTypeT&& value) { SetSourceType(std::forward<SourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field name in <code>SyncSource</code> for the
     * <code>ResourceDataSyncAwsOrganizationsSource</code> type.</p>
     */
    inline const ResourceDataSyncAwsOrganizationsSource& GetAwsOrganizationsSource() const { return m_awsOrganizationsSource; }
    inline bool AwsOrganizationsSourceHasBeenSet() const { return m_awsOrganizationsSourceHasBeenSet; }
    template<typename AwsOrganizationsSourceT = ResourceDataSyncAwsOrganizationsSource>
    void SetAwsOrganizationsSource(AwsOrganizationsSourceT&& value) { m_awsOrganizationsSourceHasBeenSet = true; m_awsOrganizationsSource = std::forward<AwsOrganizationsSourceT>(value); }
    template<typename AwsOrganizationsSourceT = ResourceDataSyncAwsOrganizationsSource>
    ResourceDataSyncSourceWithState& WithAwsOrganizationsSource(AwsOrganizationsSourceT&& value) { SetAwsOrganizationsSource(std::forward<AwsOrganizationsSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>SyncSource</code> Amazon Web Services Regions included in the
     * resource data sync.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceRegions() const { return m_sourceRegions; }
    inline bool SourceRegionsHasBeenSet() const { return m_sourceRegionsHasBeenSet; }
    template<typename SourceRegionsT = Aws::Vector<Aws::String>>
    void SetSourceRegions(SourceRegionsT&& value) { m_sourceRegionsHasBeenSet = true; m_sourceRegions = std::forward<SourceRegionsT>(value); }
    template<typename SourceRegionsT = Aws::Vector<Aws::String>>
    ResourceDataSyncSourceWithState& WithSourceRegions(SourceRegionsT&& value) { SetSourceRegions(std::forward<SourceRegionsT>(value)); return *this;}
    template<typename SourceRegionsT = Aws::String>
    ResourceDataSyncSourceWithState& AddSourceRegions(SourceRegionsT&& value) { m_sourceRegionsHasBeenSet = true; m_sourceRegions.emplace_back(std::forward<SourceRegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether to automatically synchronize and aggregate data from new Amazon Web
     * Services Regions when those Regions come online.</p>
     */
    inline bool GetIncludeFutureRegions() const { return m_includeFutureRegions; }
    inline bool IncludeFutureRegionsHasBeenSet() const { return m_includeFutureRegionsHasBeenSet; }
    inline void SetIncludeFutureRegions(bool value) { m_includeFutureRegionsHasBeenSet = true; m_includeFutureRegions = value; }
    inline ResourceDataSyncSourceWithState& WithIncludeFutureRegions(bool value) { SetIncludeFutureRegions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type name for including resource data sync state. There are four
     * sync states:</p> <p> <code>OrganizationNotExists</code>: Your organization
     * doesn't exist.</p> <p> <code>NoPermissions</code>: The system can't locate the
     * service-linked role. This role is automatically created when a user creates a
     * resource data sync in Explorer.</p> <p> <code>InvalidOrganizationalUnit</code>:
     * You specified or selected an invalid unit in the resource data sync
     * configuration.</p> <p> <code>TrustedAccessDisabled</code>: You disabled Systems
     * Manager access in the organization in Organizations.</p>
     */
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    ResourceDataSyncSourceWithState& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When you create a resource data sync, if you choose one of the Organizations
     * options, then Systems Manager automatically enables all OpsData sources in the
     * selected Amazon Web Services Regions for all Amazon Web Services accounts in
     * your organization (or in the selected organization units). For more information,
     * see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/Explorer-resource-data-sync.html">Setting
     * up Systems Manager Explorer to display data from multiple accounts and
     * Regions</a> in the <i>Amazon Web Services Systems Manager User Guide</i>.</p>
     */
    inline bool GetEnableAllOpsDataSources() const { return m_enableAllOpsDataSources; }
    inline bool EnableAllOpsDataSourcesHasBeenSet() const { return m_enableAllOpsDataSourcesHasBeenSet; }
    inline void SetEnableAllOpsDataSources(bool value) { m_enableAllOpsDataSourcesHasBeenSet = true; m_enableAllOpsDataSources = value; }
    inline ResourceDataSyncSourceWithState& WithEnableAllOpsDataSources(bool value) { SetEnableAllOpsDataSources(value); return *this;}
    ///@}
  private:

    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    ResourceDataSyncAwsOrganizationsSource m_awsOrganizationsSource;
    bool m_awsOrganizationsSourceHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceRegions;
    bool m_sourceRegionsHasBeenSet = false;

    bool m_includeFutureRegions{false};
    bool m_includeFutureRegionsHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    bool m_enableAllOpsDataSources{false};
    bool m_enableAllOpsDataSourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
