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
   * <p>Information about the source of the data included in the resource data
   * sync.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResourceDataSyncSource">AWS
   * API Reference</a></p>
   */
  class ResourceDataSyncSource
  {
  public:
    AWS_SSM_API ResourceDataSyncSource();
    AWS_SSM_API ResourceDataSyncSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ResourceDataSyncSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of data source for the resource data sync. <code>SourceType</code>
     * is either <code>AwsOrganizations</code> (if an organization is present in
     * Organizations) or <code>SingleAccountMultiRegions</code>.</p>
     */
    inline const Aws::String& GetSourceType() const{ return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(const Aws::String& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline void SetSourceType(Aws::String&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }
    inline void SetSourceType(const char* value) { m_sourceTypeHasBeenSet = true; m_sourceType.assign(value); }
    inline ResourceDataSyncSource& WithSourceType(const Aws::String& value) { SetSourceType(value); return *this;}
    inline ResourceDataSyncSource& WithSourceType(Aws::String&& value) { SetSourceType(std::move(value)); return *this;}
    inline ResourceDataSyncSource& WithSourceType(const char* value) { SetSourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the <code>AwsOrganizationsSource</code> resource data sync
     * source. A sync source of this type can synchronize data from Organizations.</p>
     */
    inline const ResourceDataSyncAwsOrganizationsSource& GetAwsOrganizationsSource() const{ return m_awsOrganizationsSource; }
    inline bool AwsOrganizationsSourceHasBeenSet() const { return m_awsOrganizationsSourceHasBeenSet; }
    inline void SetAwsOrganizationsSource(const ResourceDataSyncAwsOrganizationsSource& value) { m_awsOrganizationsSourceHasBeenSet = true; m_awsOrganizationsSource = value; }
    inline void SetAwsOrganizationsSource(ResourceDataSyncAwsOrganizationsSource&& value) { m_awsOrganizationsSourceHasBeenSet = true; m_awsOrganizationsSource = std::move(value); }
    inline ResourceDataSyncSource& WithAwsOrganizationsSource(const ResourceDataSyncAwsOrganizationsSource& value) { SetAwsOrganizationsSource(value); return *this;}
    inline ResourceDataSyncSource& WithAwsOrganizationsSource(ResourceDataSyncAwsOrganizationsSource&& value) { SetAwsOrganizationsSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>SyncSource</code> Amazon Web Services Regions included in the
     * resource data sync.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceRegions() const{ return m_sourceRegions; }
    inline bool SourceRegionsHasBeenSet() const { return m_sourceRegionsHasBeenSet; }
    inline void SetSourceRegions(const Aws::Vector<Aws::String>& value) { m_sourceRegionsHasBeenSet = true; m_sourceRegions = value; }
    inline void SetSourceRegions(Aws::Vector<Aws::String>&& value) { m_sourceRegionsHasBeenSet = true; m_sourceRegions = std::move(value); }
    inline ResourceDataSyncSource& WithSourceRegions(const Aws::Vector<Aws::String>& value) { SetSourceRegions(value); return *this;}
    inline ResourceDataSyncSource& WithSourceRegions(Aws::Vector<Aws::String>&& value) { SetSourceRegions(std::move(value)); return *this;}
    inline ResourceDataSyncSource& AddSourceRegions(const Aws::String& value) { m_sourceRegionsHasBeenSet = true; m_sourceRegions.push_back(value); return *this; }
    inline ResourceDataSyncSource& AddSourceRegions(Aws::String&& value) { m_sourceRegionsHasBeenSet = true; m_sourceRegions.push_back(std::move(value)); return *this; }
    inline ResourceDataSyncSource& AddSourceRegions(const char* value) { m_sourceRegionsHasBeenSet = true; m_sourceRegions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether to automatically synchronize and aggregate data from new Amazon Web
     * Services Regions when those Regions come online.</p>
     */
    inline bool GetIncludeFutureRegions() const{ return m_includeFutureRegions; }
    inline bool IncludeFutureRegionsHasBeenSet() const { return m_includeFutureRegionsHasBeenSet; }
    inline void SetIncludeFutureRegions(bool value) { m_includeFutureRegionsHasBeenSet = true; m_includeFutureRegions = value; }
    inline ResourceDataSyncSource& WithIncludeFutureRegions(bool value) { SetIncludeFutureRegions(value); return *this;}
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
    inline bool GetEnableAllOpsDataSources() const{ return m_enableAllOpsDataSources; }
    inline bool EnableAllOpsDataSourcesHasBeenSet() const { return m_enableAllOpsDataSourcesHasBeenSet; }
    inline void SetEnableAllOpsDataSources(bool value) { m_enableAllOpsDataSourcesHasBeenSet = true; m_enableAllOpsDataSources = value; }
    inline ResourceDataSyncSource& WithEnableAllOpsDataSources(bool value) { SetEnableAllOpsDataSources(value); return *this;}
    ///@}
  private:

    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    ResourceDataSyncAwsOrganizationsSource m_awsOrganizationsSource;
    bool m_awsOrganizationsSourceHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceRegions;
    bool m_sourceRegionsHasBeenSet = false;

    bool m_includeFutureRegions;
    bool m_includeFutureRegionsHasBeenSet = false;

    bool m_enableAllOpsDataSources;
    bool m_enableAllOpsDataSourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
