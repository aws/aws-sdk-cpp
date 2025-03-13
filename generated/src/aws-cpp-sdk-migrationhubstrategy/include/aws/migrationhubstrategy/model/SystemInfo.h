/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhubstrategy/model/OSInfo.h>
#include <aws/migrationhubstrategy/model/NetworkInfo.h>
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
   * <p> Information about the server that hosts application components.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/SystemInfo">AWS
   * API Reference</a></p>
   */
  class SystemInfo
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API SystemInfo() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API SystemInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API SystemInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> CPU architecture type for the server. </p>
     */
    inline const Aws::String& GetCpuArchitecture() const { return m_cpuArchitecture; }
    inline bool CpuArchitectureHasBeenSet() const { return m_cpuArchitectureHasBeenSet; }
    template<typename CpuArchitectureT = Aws::String>
    void SetCpuArchitecture(CpuArchitectureT&& value) { m_cpuArchitectureHasBeenSet = true; m_cpuArchitecture = std::forward<CpuArchitectureT>(value); }
    template<typename CpuArchitectureT = Aws::String>
    SystemInfo& WithCpuArchitecture(CpuArchitectureT&& value) { SetCpuArchitecture(std::forward<CpuArchitectureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> File system type for the server. </p>
     */
    inline const Aws::String& GetFileSystemType() const { return m_fileSystemType; }
    inline bool FileSystemTypeHasBeenSet() const { return m_fileSystemTypeHasBeenSet; }
    template<typename FileSystemTypeT = Aws::String>
    void SetFileSystemType(FileSystemTypeT&& value) { m_fileSystemTypeHasBeenSet = true; m_fileSystemType = std::forward<FileSystemTypeT>(value); }
    template<typename FileSystemTypeT = Aws::String>
    SystemInfo& WithFileSystemType(FileSystemTypeT&& value) { SetFileSystemType(std::forward<FileSystemTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Networking information related to a server. </p>
     */
    inline const Aws::Vector<NetworkInfo>& GetNetworkInfoList() const { return m_networkInfoList; }
    inline bool NetworkInfoListHasBeenSet() const { return m_networkInfoListHasBeenSet; }
    template<typename NetworkInfoListT = Aws::Vector<NetworkInfo>>
    void SetNetworkInfoList(NetworkInfoListT&& value) { m_networkInfoListHasBeenSet = true; m_networkInfoList = std::forward<NetworkInfoListT>(value); }
    template<typename NetworkInfoListT = Aws::Vector<NetworkInfo>>
    SystemInfo& WithNetworkInfoList(NetworkInfoListT&& value) { SetNetworkInfoList(std::forward<NetworkInfoListT>(value)); return *this;}
    template<typename NetworkInfoListT = NetworkInfo>
    SystemInfo& AddNetworkInfoList(NetworkInfoListT&& value) { m_networkInfoListHasBeenSet = true; m_networkInfoList.emplace_back(std::forward<NetworkInfoListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Operating system corresponding to a server. </p>
     */
    inline const OSInfo& GetOsInfo() const { return m_osInfo; }
    inline bool OsInfoHasBeenSet() const { return m_osInfoHasBeenSet; }
    template<typename OsInfoT = OSInfo>
    void SetOsInfo(OsInfoT&& value) { m_osInfoHasBeenSet = true; m_osInfo = std::forward<OsInfoT>(value); }
    template<typename OsInfoT = OSInfo>
    SystemInfo& WithOsInfo(OsInfoT&& value) { SetOsInfo(std::forward<OsInfoT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cpuArchitecture;
    bool m_cpuArchitectureHasBeenSet = false;

    Aws::String m_fileSystemType;
    bool m_fileSystemTypeHasBeenSet = false;

    Aws::Vector<NetworkInfo> m_networkInfoList;
    bool m_networkInfoListHasBeenSet = false;

    OSInfo m_osInfo;
    bool m_osInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
