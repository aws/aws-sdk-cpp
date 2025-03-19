/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/NdiState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/NdiDiscoveryServerConfig.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * <p>Specifies the configuration settings for NDI outputs. Required when the flow
   * includes NDI outputs. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/NdiConfig">AWS
   * API Reference</a></p>
   */
  class NdiConfig
  {
  public:
    AWS_MEDIACONNECT_API NdiConfig() = default;
    AWS_MEDIACONNECT_API NdiConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API NdiConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A setting that controls whether NDI outputs can be used in the flow. Must be
     * ENABLED to add NDI outputs. Default is DISABLED. </p>
     */
    inline NdiState GetNdiState() const { return m_ndiState; }
    inline bool NdiStateHasBeenSet() const { return m_ndiStateHasBeenSet; }
    inline void SetNdiState(NdiState value) { m_ndiStateHasBeenSet = true; m_ndiState = value; }
    inline NdiConfig& WithNdiState(NdiState value) { SetNdiState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A prefix for the names of the NDI sources that the flow creates. If a custom
     * name isn't specified, MediaConnect generates a unique 12-character ID as the
     * prefix. </p>
     */
    inline const Aws::String& GetMachineName() const { return m_machineName; }
    inline bool MachineNameHasBeenSet() const { return m_machineNameHasBeenSet; }
    template<typename MachineNameT = Aws::String>
    void SetMachineName(MachineNameT&& value) { m_machineNameHasBeenSet = true; m_machineName = std::forward<MachineNameT>(value); }
    template<typename MachineNameT = Aws::String>
    NdiConfig& WithMachineName(MachineNameT&& value) { SetMachineName(std::forward<MachineNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of up to three NDI discovery server configurations. While not required
     * by the API, this configuration is necessary for NDI functionality to work
     * properly. </p>
     */
    inline const Aws::Vector<NdiDiscoveryServerConfig>& GetNdiDiscoveryServers() const { return m_ndiDiscoveryServers; }
    inline bool NdiDiscoveryServersHasBeenSet() const { return m_ndiDiscoveryServersHasBeenSet; }
    template<typename NdiDiscoveryServersT = Aws::Vector<NdiDiscoveryServerConfig>>
    void SetNdiDiscoveryServers(NdiDiscoveryServersT&& value) { m_ndiDiscoveryServersHasBeenSet = true; m_ndiDiscoveryServers = std::forward<NdiDiscoveryServersT>(value); }
    template<typename NdiDiscoveryServersT = Aws::Vector<NdiDiscoveryServerConfig>>
    NdiConfig& WithNdiDiscoveryServers(NdiDiscoveryServersT&& value) { SetNdiDiscoveryServers(std::forward<NdiDiscoveryServersT>(value)); return *this;}
    template<typename NdiDiscoveryServersT = NdiDiscoveryServerConfig>
    NdiConfig& AddNdiDiscoveryServers(NdiDiscoveryServersT&& value) { m_ndiDiscoveryServersHasBeenSet = true; m_ndiDiscoveryServers.emplace_back(std::forward<NdiDiscoveryServersT>(value)); return *this; }
    ///@}
  private:

    NdiState m_ndiState{NdiState::NOT_SET};
    bool m_ndiStateHasBeenSet = false;

    Aws::String m_machineName;
    bool m_machineNameHasBeenSet = false;

    Aws::Vector<NdiDiscoveryServerConfig> m_ndiDiscoveryServers;
    bool m_ndiDiscoveryServersHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
