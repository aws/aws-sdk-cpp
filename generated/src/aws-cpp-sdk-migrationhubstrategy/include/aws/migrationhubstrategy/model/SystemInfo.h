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
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API SystemInfo();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API SystemInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API SystemInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> CPU architecture type for the server. </p>
     */
    inline const Aws::String& GetCpuArchitecture() const{ return m_cpuArchitecture; }
    inline bool CpuArchitectureHasBeenSet() const { return m_cpuArchitectureHasBeenSet; }
    inline void SetCpuArchitecture(const Aws::String& value) { m_cpuArchitectureHasBeenSet = true; m_cpuArchitecture = value; }
    inline void SetCpuArchitecture(Aws::String&& value) { m_cpuArchitectureHasBeenSet = true; m_cpuArchitecture = std::move(value); }
    inline void SetCpuArchitecture(const char* value) { m_cpuArchitectureHasBeenSet = true; m_cpuArchitecture.assign(value); }
    inline SystemInfo& WithCpuArchitecture(const Aws::String& value) { SetCpuArchitecture(value); return *this;}
    inline SystemInfo& WithCpuArchitecture(Aws::String&& value) { SetCpuArchitecture(std::move(value)); return *this;}
    inline SystemInfo& WithCpuArchitecture(const char* value) { SetCpuArchitecture(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> File system type for the server. </p>
     */
    inline const Aws::String& GetFileSystemType() const{ return m_fileSystemType; }
    inline bool FileSystemTypeHasBeenSet() const { return m_fileSystemTypeHasBeenSet; }
    inline void SetFileSystemType(const Aws::String& value) { m_fileSystemTypeHasBeenSet = true; m_fileSystemType = value; }
    inline void SetFileSystemType(Aws::String&& value) { m_fileSystemTypeHasBeenSet = true; m_fileSystemType = std::move(value); }
    inline void SetFileSystemType(const char* value) { m_fileSystemTypeHasBeenSet = true; m_fileSystemType.assign(value); }
    inline SystemInfo& WithFileSystemType(const Aws::String& value) { SetFileSystemType(value); return *this;}
    inline SystemInfo& WithFileSystemType(Aws::String&& value) { SetFileSystemType(std::move(value)); return *this;}
    inline SystemInfo& WithFileSystemType(const char* value) { SetFileSystemType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Networking information related to a server. </p>
     */
    inline const Aws::Vector<NetworkInfo>& GetNetworkInfoList() const{ return m_networkInfoList; }
    inline bool NetworkInfoListHasBeenSet() const { return m_networkInfoListHasBeenSet; }
    inline void SetNetworkInfoList(const Aws::Vector<NetworkInfo>& value) { m_networkInfoListHasBeenSet = true; m_networkInfoList = value; }
    inline void SetNetworkInfoList(Aws::Vector<NetworkInfo>&& value) { m_networkInfoListHasBeenSet = true; m_networkInfoList = std::move(value); }
    inline SystemInfo& WithNetworkInfoList(const Aws::Vector<NetworkInfo>& value) { SetNetworkInfoList(value); return *this;}
    inline SystemInfo& WithNetworkInfoList(Aws::Vector<NetworkInfo>&& value) { SetNetworkInfoList(std::move(value)); return *this;}
    inline SystemInfo& AddNetworkInfoList(const NetworkInfo& value) { m_networkInfoListHasBeenSet = true; m_networkInfoList.push_back(value); return *this; }
    inline SystemInfo& AddNetworkInfoList(NetworkInfo&& value) { m_networkInfoListHasBeenSet = true; m_networkInfoList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Operating system corresponding to a server. </p>
     */
    inline const OSInfo& GetOsInfo() const{ return m_osInfo; }
    inline bool OsInfoHasBeenSet() const { return m_osInfoHasBeenSet; }
    inline void SetOsInfo(const OSInfo& value) { m_osInfoHasBeenSet = true; m_osInfo = value; }
    inline void SetOsInfo(OSInfo&& value) { m_osInfoHasBeenSet = true; m_osInfo = std::move(value); }
    inline SystemInfo& WithOsInfo(const OSInfo& value) { SetOsInfo(value); return *this;}
    inline SystemInfo& WithOsInfo(OSInfo&& value) { SetOsInfo(std::move(value)); return *this;}
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
