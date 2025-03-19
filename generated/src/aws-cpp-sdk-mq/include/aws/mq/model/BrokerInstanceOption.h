/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mq/model/EngineType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mq/model/BrokerStorageType.h>
#include <aws/mq/model/AvailabilityZone.h>
#include <aws/mq/model/DeploymentMode.h>
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
namespace MQ
{
namespace Model
{

  /**
   * <p>Option for host instance type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/BrokerInstanceOption">AWS
   * API Reference</a></p>
   */
  class BrokerInstanceOption
  {
  public:
    AWS_MQ_API BrokerInstanceOption() = default;
    AWS_MQ_API BrokerInstanceOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API BrokerInstanceOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of available az.</p>
     */
    inline const Aws::Vector<AvailabilityZone>& GetAvailabilityZones() const { return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    template<typename AvailabilityZonesT = Aws::Vector<AvailabilityZone>>
    void SetAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::forward<AvailabilityZonesT>(value); }
    template<typename AvailabilityZonesT = Aws::Vector<AvailabilityZone>>
    BrokerInstanceOption& WithAvailabilityZones(AvailabilityZonesT&& value) { SetAvailabilityZones(std::forward<AvailabilityZonesT>(value)); return *this;}
    template<typename AvailabilityZonesT = AvailabilityZone>
    BrokerInstanceOption& AddAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The broker's engine type.</p>
     */
    inline EngineType GetEngineType() const { return m_engineType; }
    inline bool EngineTypeHasBeenSet() const { return m_engineTypeHasBeenSet; }
    inline void SetEngineType(EngineType value) { m_engineTypeHasBeenSet = true; m_engineType = value; }
    inline BrokerInstanceOption& WithEngineType(EngineType value) { SetEngineType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker's instance type.</p>
     */
    inline const Aws::String& GetHostInstanceType() const { return m_hostInstanceType; }
    inline bool HostInstanceTypeHasBeenSet() const { return m_hostInstanceTypeHasBeenSet; }
    template<typename HostInstanceTypeT = Aws::String>
    void SetHostInstanceType(HostInstanceTypeT&& value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType = std::forward<HostInstanceTypeT>(value); }
    template<typename HostInstanceTypeT = Aws::String>
    BrokerInstanceOption& WithHostInstanceType(HostInstanceTypeT&& value) { SetHostInstanceType(std::forward<HostInstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker's storage type.</p>
     */
    inline BrokerStorageType GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(BrokerStorageType value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline BrokerInstanceOption& WithStorageType(BrokerStorageType value) { SetStorageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of supported deployment modes.</p>
     */
    inline const Aws::Vector<DeploymentMode>& GetSupportedDeploymentModes() const { return m_supportedDeploymentModes; }
    inline bool SupportedDeploymentModesHasBeenSet() const { return m_supportedDeploymentModesHasBeenSet; }
    template<typename SupportedDeploymentModesT = Aws::Vector<DeploymentMode>>
    void SetSupportedDeploymentModes(SupportedDeploymentModesT&& value) { m_supportedDeploymentModesHasBeenSet = true; m_supportedDeploymentModes = std::forward<SupportedDeploymentModesT>(value); }
    template<typename SupportedDeploymentModesT = Aws::Vector<DeploymentMode>>
    BrokerInstanceOption& WithSupportedDeploymentModes(SupportedDeploymentModesT&& value) { SetSupportedDeploymentModes(std::forward<SupportedDeploymentModesT>(value)); return *this;}
    inline BrokerInstanceOption& AddSupportedDeploymentModes(DeploymentMode value) { m_supportedDeploymentModesHasBeenSet = true; m_supportedDeploymentModes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of supported engine versions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedEngineVersions() const { return m_supportedEngineVersions; }
    inline bool SupportedEngineVersionsHasBeenSet() const { return m_supportedEngineVersionsHasBeenSet; }
    template<typename SupportedEngineVersionsT = Aws::Vector<Aws::String>>
    void SetSupportedEngineVersions(SupportedEngineVersionsT&& value) { m_supportedEngineVersionsHasBeenSet = true; m_supportedEngineVersions = std::forward<SupportedEngineVersionsT>(value); }
    template<typename SupportedEngineVersionsT = Aws::Vector<Aws::String>>
    BrokerInstanceOption& WithSupportedEngineVersions(SupportedEngineVersionsT&& value) { SetSupportedEngineVersions(std::forward<SupportedEngineVersionsT>(value)); return *this;}
    template<typename SupportedEngineVersionsT = Aws::String>
    BrokerInstanceOption& AddSupportedEngineVersions(SupportedEngineVersionsT&& value) { m_supportedEngineVersionsHasBeenSet = true; m_supportedEngineVersions.emplace_back(std::forward<SupportedEngineVersionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AvailabilityZone> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    EngineType m_engineType{EngineType::NOT_SET};
    bool m_engineTypeHasBeenSet = false;

    Aws::String m_hostInstanceType;
    bool m_hostInstanceTypeHasBeenSet = false;

    BrokerStorageType m_storageType{BrokerStorageType::NOT_SET};
    bool m_storageTypeHasBeenSet = false;

    Aws::Vector<DeploymentMode> m_supportedDeploymentModes;
    bool m_supportedDeploymentModesHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedEngineVersions;
    bool m_supportedEngineVersionsHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
