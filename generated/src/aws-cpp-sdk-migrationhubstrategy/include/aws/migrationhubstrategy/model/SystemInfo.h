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


    /**
     * <p> CPU architecture type for the server. </p>
     */
    inline const Aws::String& GetCpuArchitecture() const{ return m_cpuArchitecture; }

    /**
     * <p> CPU architecture type for the server. </p>
     */
    inline bool CpuArchitectureHasBeenSet() const { return m_cpuArchitectureHasBeenSet; }

    /**
     * <p> CPU architecture type for the server. </p>
     */
    inline void SetCpuArchitecture(const Aws::String& value) { m_cpuArchitectureHasBeenSet = true; m_cpuArchitecture = value; }

    /**
     * <p> CPU architecture type for the server. </p>
     */
    inline void SetCpuArchitecture(Aws::String&& value) { m_cpuArchitectureHasBeenSet = true; m_cpuArchitecture = std::move(value); }

    /**
     * <p> CPU architecture type for the server. </p>
     */
    inline void SetCpuArchitecture(const char* value) { m_cpuArchitectureHasBeenSet = true; m_cpuArchitecture.assign(value); }

    /**
     * <p> CPU architecture type for the server. </p>
     */
    inline SystemInfo& WithCpuArchitecture(const Aws::String& value) { SetCpuArchitecture(value); return *this;}

    /**
     * <p> CPU architecture type for the server. </p>
     */
    inline SystemInfo& WithCpuArchitecture(Aws::String&& value) { SetCpuArchitecture(std::move(value)); return *this;}

    /**
     * <p> CPU architecture type for the server. </p>
     */
    inline SystemInfo& WithCpuArchitecture(const char* value) { SetCpuArchitecture(value); return *this;}


    /**
     * <p> File system type for the server. </p>
     */
    inline const Aws::String& GetFileSystemType() const{ return m_fileSystemType; }

    /**
     * <p> File system type for the server. </p>
     */
    inline bool FileSystemTypeHasBeenSet() const { return m_fileSystemTypeHasBeenSet; }

    /**
     * <p> File system type for the server. </p>
     */
    inline void SetFileSystemType(const Aws::String& value) { m_fileSystemTypeHasBeenSet = true; m_fileSystemType = value; }

    /**
     * <p> File system type for the server. </p>
     */
    inline void SetFileSystemType(Aws::String&& value) { m_fileSystemTypeHasBeenSet = true; m_fileSystemType = std::move(value); }

    /**
     * <p> File system type for the server. </p>
     */
    inline void SetFileSystemType(const char* value) { m_fileSystemTypeHasBeenSet = true; m_fileSystemType.assign(value); }

    /**
     * <p> File system type for the server. </p>
     */
    inline SystemInfo& WithFileSystemType(const Aws::String& value) { SetFileSystemType(value); return *this;}

    /**
     * <p> File system type for the server. </p>
     */
    inline SystemInfo& WithFileSystemType(Aws::String&& value) { SetFileSystemType(std::move(value)); return *this;}

    /**
     * <p> File system type for the server. </p>
     */
    inline SystemInfo& WithFileSystemType(const char* value) { SetFileSystemType(value); return *this;}


    /**
     * <p> Networking information related to a server. </p>
     */
    inline const Aws::Vector<NetworkInfo>& GetNetworkInfoList() const{ return m_networkInfoList; }

    /**
     * <p> Networking information related to a server. </p>
     */
    inline bool NetworkInfoListHasBeenSet() const { return m_networkInfoListHasBeenSet; }

    /**
     * <p> Networking information related to a server. </p>
     */
    inline void SetNetworkInfoList(const Aws::Vector<NetworkInfo>& value) { m_networkInfoListHasBeenSet = true; m_networkInfoList = value; }

    /**
     * <p> Networking information related to a server. </p>
     */
    inline void SetNetworkInfoList(Aws::Vector<NetworkInfo>&& value) { m_networkInfoListHasBeenSet = true; m_networkInfoList = std::move(value); }

    /**
     * <p> Networking information related to a server. </p>
     */
    inline SystemInfo& WithNetworkInfoList(const Aws::Vector<NetworkInfo>& value) { SetNetworkInfoList(value); return *this;}

    /**
     * <p> Networking information related to a server. </p>
     */
    inline SystemInfo& WithNetworkInfoList(Aws::Vector<NetworkInfo>&& value) { SetNetworkInfoList(std::move(value)); return *this;}

    /**
     * <p> Networking information related to a server. </p>
     */
    inline SystemInfo& AddNetworkInfoList(const NetworkInfo& value) { m_networkInfoListHasBeenSet = true; m_networkInfoList.push_back(value); return *this; }

    /**
     * <p> Networking information related to a server. </p>
     */
    inline SystemInfo& AddNetworkInfoList(NetworkInfo&& value) { m_networkInfoListHasBeenSet = true; m_networkInfoList.push_back(std::move(value)); return *this; }


    /**
     * <p> Operating system corresponding to a server. </p>
     */
    inline const OSInfo& GetOsInfo() const{ return m_osInfo; }

    /**
     * <p> Operating system corresponding to a server. </p>
     */
    inline bool OsInfoHasBeenSet() const { return m_osInfoHasBeenSet; }

    /**
     * <p> Operating system corresponding to a server. </p>
     */
    inline void SetOsInfo(const OSInfo& value) { m_osInfoHasBeenSet = true; m_osInfo = value; }

    /**
     * <p> Operating system corresponding to a server. </p>
     */
    inline void SetOsInfo(OSInfo&& value) { m_osInfoHasBeenSet = true; m_osInfo = std::move(value); }

    /**
     * <p> Operating system corresponding to a server. </p>
     */
    inline SystemInfo& WithOsInfo(const OSInfo& value) { SetOsInfo(value); return *this;}

    /**
     * <p> Operating system corresponding to a server. </p>
     */
    inline SystemInfo& WithOsInfo(OSInfo&& value) { SetOsInfo(std::move(value)); return *this;}

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
