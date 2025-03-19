/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhubstrategy/model/RemoteSourceCodeAnalysisServerInfo.h>
#include <aws/migrationhubstrategy/model/IPAddressBasedRemoteInfo.h>
#include <aws/migrationhubstrategy/model/PipelineInfo.h>
#include <aws/migrationhubstrategy/model/VcenterBasedRemoteInfo.h>
#include <aws/migrationhubstrategy/model/VersionControlInfo.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   * <p>Summary of the collector configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/ConfigurationSummary">AWS
   * API Reference</a></p>
   */
  class ConfigurationSummary
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ConfigurationSummary() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ConfigurationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ConfigurationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>IP address based configurations.</p>
     */
    inline const Aws::Vector<IPAddressBasedRemoteInfo>& GetIpAddressBasedRemoteInfoList() const { return m_ipAddressBasedRemoteInfoList; }
    inline bool IpAddressBasedRemoteInfoListHasBeenSet() const { return m_ipAddressBasedRemoteInfoListHasBeenSet; }
    template<typename IpAddressBasedRemoteInfoListT = Aws::Vector<IPAddressBasedRemoteInfo>>
    void SetIpAddressBasedRemoteInfoList(IpAddressBasedRemoteInfoListT&& value) { m_ipAddressBasedRemoteInfoListHasBeenSet = true; m_ipAddressBasedRemoteInfoList = std::forward<IpAddressBasedRemoteInfoListT>(value); }
    template<typename IpAddressBasedRemoteInfoListT = Aws::Vector<IPAddressBasedRemoteInfo>>
    ConfigurationSummary& WithIpAddressBasedRemoteInfoList(IpAddressBasedRemoteInfoListT&& value) { SetIpAddressBasedRemoteInfoList(std::forward<IpAddressBasedRemoteInfoListT>(value)); return *this;}
    template<typename IpAddressBasedRemoteInfoListT = IPAddressBasedRemoteInfo>
    ConfigurationSummary& AddIpAddressBasedRemoteInfoList(IpAddressBasedRemoteInfoListT&& value) { m_ipAddressBasedRemoteInfoListHasBeenSet = true; m_ipAddressBasedRemoteInfoList.emplace_back(std::forward<IpAddressBasedRemoteInfoListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of pipeline info configurations.</p>
     */
    inline const Aws::Vector<PipelineInfo>& GetPipelineInfoList() const { return m_pipelineInfoList; }
    inline bool PipelineInfoListHasBeenSet() const { return m_pipelineInfoListHasBeenSet; }
    template<typename PipelineInfoListT = Aws::Vector<PipelineInfo>>
    void SetPipelineInfoList(PipelineInfoListT&& value) { m_pipelineInfoListHasBeenSet = true; m_pipelineInfoList = std::forward<PipelineInfoListT>(value); }
    template<typename PipelineInfoListT = Aws::Vector<PipelineInfo>>
    ConfigurationSummary& WithPipelineInfoList(PipelineInfoListT&& value) { SetPipelineInfoList(std::forward<PipelineInfoListT>(value)); return *this;}
    template<typename PipelineInfoListT = PipelineInfo>
    ConfigurationSummary& AddPipelineInfoList(PipelineInfoListT&& value) { m_pipelineInfoListHasBeenSet = true; m_pipelineInfoList.emplace_back(std::forward<PipelineInfoListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Info about the remote server source code configuration.</p>
     */
    inline const RemoteSourceCodeAnalysisServerInfo& GetRemoteSourceCodeAnalysisServerInfo() const { return m_remoteSourceCodeAnalysisServerInfo; }
    inline bool RemoteSourceCodeAnalysisServerInfoHasBeenSet() const { return m_remoteSourceCodeAnalysisServerInfoHasBeenSet; }
    template<typename RemoteSourceCodeAnalysisServerInfoT = RemoteSourceCodeAnalysisServerInfo>
    void SetRemoteSourceCodeAnalysisServerInfo(RemoteSourceCodeAnalysisServerInfoT&& value) { m_remoteSourceCodeAnalysisServerInfoHasBeenSet = true; m_remoteSourceCodeAnalysisServerInfo = std::forward<RemoteSourceCodeAnalysisServerInfoT>(value); }
    template<typename RemoteSourceCodeAnalysisServerInfoT = RemoteSourceCodeAnalysisServerInfo>
    ConfigurationSummary& WithRemoteSourceCodeAnalysisServerInfo(RemoteSourceCodeAnalysisServerInfoT&& value) { SetRemoteSourceCodeAnalysisServerInfo(std::forward<RemoteSourceCodeAnalysisServerInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of vCenter configurations.</p>
     */
    inline const Aws::Vector<VcenterBasedRemoteInfo>& GetVcenterBasedRemoteInfoList() const { return m_vcenterBasedRemoteInfoList; }
    inline bool VcenterBasedRemoteInfoListHasBeenSet() const { return m_vcenterBasedRemoteInfoListHasBeenSet; }
    template<typename VcenterBasedRemoteInfoListT = Aws::Vector<VcenterBasedRemoteInfo>>
    void SetVcenterBasedRemoteInfoList(VcenterBasedRemoteInfoListT&& value) { m_vcenterBasedRemoteInfoListHasBeenSet = true; m_vcenterBasedRemoteInfoList = std::forward<VcenterBasedRemoteInfoListT>(value); }
    template<typename VcenterBasedRemoteInfoListT = Aws::Vector<VcenterBasedRemoteInfo>>
    ConfigurationSummary& WithVcenterBasedRemoteInfoList(VcenterBasedRemoteInfoListT&& value) { SetVcenterBasedRemoteInfoList(std::forward<VcenterBasedRemoteInfoListT>(value)); return *this;}
    template<typename VcenterBasedRemoteInfoListT = VcenterBasedRemoteInfo>
    ConfigurationSummary& AddVcenterBasedRemoteInfoList(VcenterBasedRemoteInfoListT&& value) { m_vcenterBasedRemoteInfoListHasBeenSet = true; m_vcenterBasedRemoteInfoList.emplace_back(std::forward<VcenterBasedRemoteInfoListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of the version control configurations.</p>
     */
    inline const Aws::Vector<VersionControlInfo>& GetVersionControlInfoList() const { return m_versionControlInfoList; }
    inline bool VersionControlInfoListHasBeenSet() const { return m_versionControlInfoListHasBeenSet; }
    template<typename VersionControlInfoListT = Aws::Vector<VersionControlInfo>>
    void SetVersionControlInfoList(VersionControlInfoListT&& value) { m_versionControlInfoListHasBeenSet = true; m_versionControlInfoList = std::forward<VersionControlInfoListT>(value); }
    template<typename VersionControlInfoListT = Aws::Vector<VersionControlInfo>>
    ConfigurationSummary& WithVersionControlInfoList(VersionControlInfoListT&& value) { SetVersionControlInfoList(std::forward<VersionControlInfoListT>(value)); return *this;}
    template<typename VersionControlInfoListT = VersionControlInfo>
    ConfigurationSummary& AddVersionControlInfoList(VersionControlInfoListT&& value) { m_versionControlInfoListHasBeenSet = true; m_versionControlInfoList.emplace_back(std::forward<VersionControlInfoListT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<IPAddressBasedRemoteInfo> m_ipAddressBasedRemoteInfoList;
    bool m_ipAddressBasedRemoteInfoListHasBeenSet = false;

    Aws::Vector<PipelineInfo> m_pipelineInfoList;
    bool m_pipelineInfoListHasBeenSet = false;

    RemoteSourceCodeAnalysisServerInfo m_remoteSourceCodeAnalysisServerInfo;
    bool m_remoteSourceCodeAnalysisServerInfoHasBeenSet = false;

    Aws::Vector<VcenterBasedRemoteInfo> m_vcenterBasedRemoteInfoList;
    bool m_vcenterBasedRemoteInfoListHasBeenSet = false;

    Aws::Vector<VersionControlInfo> m_versionControlInfoList;
    bool m_versionControlInfoListHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
