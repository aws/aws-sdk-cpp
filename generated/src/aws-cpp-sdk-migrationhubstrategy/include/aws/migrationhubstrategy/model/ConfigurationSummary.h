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
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ConfigurationSummary();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ConfigurationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ConfigurationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>IP address based configurations.</p>
     */
    inline const Aws::Vector<IPAddressBasedRemoteInfo>& GetIpAddressBasedRemoteInfoList() const{ return m_ipAddressBasedRemoteInfoList; }
    inline bool IpAddressBasedRemoteInfoListHasBeenSet() const { return m_ipAddressBasedRemoteInfoListHasBeenSet; }
    inline void SetIpAddressBasedRemoteInfoList(const Aws::Vector<IPAddressBasedRemoteInfo>& value) { m_ipAddressBasedRemoteInfoListHasBeenSet = true; m_ipAddressBasedRemoteInfoList = value; }
    inline void SetIpAddressBasedRemoteInfoList(Aws::Vector<IPAddressBasedRemoteInfo>&& value) { m_ipAddressBasedRemoteInfoListHasBeenSet = true; m_ipAddressBasedRemoteInfoList = std::move(value); }
    inline ConfigurationSummary& WithIpAddressBasedRemoteInfoList(const Aws::Vector<IPAddressBasedRemoteInfo>& value) { SetIpAddressBasedRemoteInfoList(value); return *this;}
    inline ConfigurationSummary& WithIpAddressBasedRemoteInfoList(Aws::Vector<IPAddressBasedRemoteInfo>&& value) { SetIpAddressBasedRemoteInfoList(std::move(value)); return *this;}
    inline ConfigurationSummary& AddIpAddressBasedRemoteInfoList(const IPAddressBasedRemoteInfo& value) { m_ipAddressBasedRemoteInfoListHasBeenSet = true; m_ipAddressBasedRemoteInfoList.push_back(value); return *this; }
    inline ConfigurationSummary& AddIpAddressBasedRemoteInfoList(IPAddressBasedRemoteInfo&& value) { m_ipAddressBasedRemoteInfoListHasBeenSet = true; m_ipAddressBasedRemoteInfoList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of pipeline info configurations.</p>
     */
    inline const Aws::Vector<PipelineInfo>& GetPipelineInfoList() const{ return m_pipelineInfoList; }
    inline bool PipelineInfoListHasBeenSet() const { return m_pipelineInfoListHasBeenSet; }
    inline void SetPipelineInfoList(const Aws::Vector<PipelineInfo>& value) { m_pipelineInfoListHasBeenSet = true; m_pipelineInfoList = value; }
    inline void SetPipelineInfoList(Aws::Vector<PipelineInfo>&& value) { m_pipelineInfoListHasBeenSet = true; m_pipelineInfoList = std::move(value); }
    inline ConfigurationSummary& WithPipelineInfoList(const Aws::Vector<PipelineInfo>& value) { SetPipelineInfoList(value); return *this;}
    inline ConfigurationSummary& WithPipelineInfoList(Aws::Vector<PipelineInfo>&& value) { SetPipelineInfoList(std::move(value)); return *this;}
    inline ConfigurationSummary& AddPipelineInfoList(const PipelineInfo& value) { m_pipelineInfoListHasBeenSet = true; m_pipelineInfoList.push_back(value); return *this; }
    inline ConfigurationSummary& AddPipelineInfoList(PipelineInfo&& value) { m_pipelineInfoListHasBeenSet = true; m_pipelineInfoList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Info about the remote server source code configuration.</p>
     */
    inline const RemoteSourceCodeAnalysisServerInfo& GetRemoteSourceCodeAnalysisServerInfo() const{ return m_remoteSourceCodeAnalysisServerInfo; }
    inline bool RemoteSourceCodeAnalysisServerInfoHasBeenSet() const { return m_remoteSourceCodeAnalysisServerInfoHasBeenSet; }
    inline void SetRemoteSourceCodeAnalysisServerInfo(const RemoteSourceCodeAnalysisServerInfo& value) { m_remoteSourceCodeAnalysisServerInfoHasBeenSet = true; m_remoteSourceCodeAnalysisServerInfo = value; }
    inline void SetRemoteSourceCodeAnalysisServerInfo(RemoteSourceCodeAnalysisServerInfo&& value) { m_remoteSourceCodeAnalysisServerInfoHasBeenSet = true; m_remoteSourceCodeAnalysisServerInfo = std::move(value); }
    inline ConfigurationSummary& WithRemoteSourceCodeAnalysisServerInfo(const RemoteSourceCodeAnalysisServerInfo& value) { SetRemoteSourceCodeAnalysisServerInfo(value); return *this;}
    inline ConfigurationSummary& WithRemoteSourceCodeAnalysisServerInfo(RemoteSourceCodeAnalysisServerInfo&& value) { SetRemoteSourceCodeAnalysisServerInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of vCenter configurations.</p>
     */
    inline const Aws::Vector<VcenterBasedRemoteInfo>& GetVcenterBasedRemoteInfoList() const{ return m_vcenterBasedRemoteInfoList; }
    inline bool VcenterBasedRemoteInfoListHasBeenSet() const { return m_vcenterBasedRemoteInfoListHasBeenSet; }
    inline void SetVcenterBasedRemoteInfoList(const Aws::Vector<VcenterBasedRemoteInfo>& value) { m_vcenterBasedRemoteInfoListHasBeenSet = true; m_vcenterBasedRemoteInfoList = value; }
    inline void SetVcenterBasedRemoteInfoList(Aws::Vector<VcenterBasedRemoteInfo>&& value) { m_vcenterBasedRemoteInfoListHasBeenSet = true; m_vcenterBasedRemoteInfoList = std::move(value); }
    inline ConfigurationSummary& WithVcenterBasedRemoteInfoList(const Aws::Vector<VcenterBasedRemoteInfo>& value) { SetVcenterBasedRemoteInfoList(value); return *this;}
    inline ConfigurationSummary& WithVcenterBasedRemoteInfoList(Aws::Vector<VcenterBasedRemoteInfo>&& value) { SetVcenterBasedRemoteInfoList(std::move(value)); return *this;}
    inline ConfigurationSummary& AddVcenterBasedRemoteInfoList(const VcenterBasedRemoteInfo& value) { m_vcenterBasedRemoteInfoListHasBeenSet = true; m_vcenterBasedRemoteInfoList.push_back(value); return *this; }
    inline ConfigurationSummary& AddVcenterBasedRemoteInfoList(VcenterBasedRemoteInfo&& value) { m_vcenterBasedRemoteInfoListHasBeenSet = true; m_vcenterBasedRemoteInfoList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of the version control configurations.</p>
     */
    inline const Aws::Vector<VersionControlInfo>& GetVersionControlInfoList() const{ return m_versionControlInfoList; }
    inline bool VersionControlInfoListHasBeenSet() const { return m_versionControlInfoListHasBeenSet; }
    inline void SetVersionControlInfoList(const Aws::Vector<VersionControlInfo>& value) { m_versionControlInfoListHasBeenSet = true; m_versionControlInfoList = value; }
    inline void SetVersionControlInfoList(Aws::Vector<VersionControlInfo>&& value) { m_versionControlInfoListHasBeenSet = true; m_versionControlInfoList = std::move(value); }
    inline ConfigurationSummary& WithVersionControlInfoList(const Aws::Vector<VersionControlInfo>& value) { SetVersionControlInfoList(value); return *this;}
    inline ConfigurationSummary& WithVersionControlInfoList(Aws::Vector<VersionControlInfo>&& value) { SetVersionControlInfoList(std::move(value)); return *this;}
    inline ConfigurationSummary& AddVersionControlInfoList(const VersionControlInfo& value) { m_versionControlInfoListHasBeenSet = true; m_versionControlInfoList.push_back(value); return *this; }
    inline ConfigurationSummary& AddVersionControlInfoList(VersionControlInfo&& value) { m_versionControlInfoListHasBeenSet = true; m_versionControlInfoList.push_back(std::move(value)); return *this; }
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
