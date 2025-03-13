/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mgn/model/IdentificationHints.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/OS.h>
#include <aws/mgn/model/CPU.h>
#include <aws/mgn/model/Disk.h>
#include <aws/mgn/model/NetworkInterface.h>
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
   * <p>Source server properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/SourceProperties">AWS
   * API Reference</a></p>
   */
  class SourceProperties
  {
  public:
    AWS_MGN_API SourceProperties() = default;
    AWS_MGN_API SourceProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API SourceProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Source Server CPUs.</p>
     */
    inline const Aws::Vector<CPU>& GetCpus() const { return m_cpus; }
    inline bool CpusHasBeenSet() const { return m_cpusHasBeenSet; }
    template<typename CpusT = Aws::Vector<CPU>>
    void SetCpus(CpusT&& value) { m_cpusHasBeenSet = true; m_cpus = std::forward<CpusT>(value); }
    template<typename CpusT = Aws::Vector<CPU>>
    SourceProperties& WithCpus(CpusT&& value) { SetCpus(std::forward<CpusT>(value)); return *this;}
    template<typename CpusT = CPU>
    SourceProperties& AddCpus(CpusT&& value) { m_cpusHasBeenSet = true; m_cpus.emplace_back(std::forward<CpusT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Source Server disks.</p>
     */
    inline const Aws::Vector<Disk>& GetDisks() const { return m_disks; }
    inline bool DisksHasBeenSet() const { return m_disksHasBeenSet; }
    template<typename DisksT = Aws::Vector<Disk>>
    void SetDisks(DisksT&& value) { m_disksHasBeenSet = true; m_disks = std::forward<DisksT>(value); }
    template<typename DisksT = Aws::Vector<Disk>>
    SourceProperties& WithDisks(DisksT&& value) { SetDisks(std::forward<DisksT>(value)); return *this;}
    template<typename DisksT = Disk>
    SourceProperties& AddDisks(DisksT&& value) { m_disksHasBeenSet = true; m_disks.emplace_back(std::forward<DisksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Source server identification hints.</p>
     */
    inline const IdentificationHints& GetIdentificationHints() const { return m_identificationHints; }
    inline bool IdentificationHintsHasBeenSet() const { return m_identificationHintsHasBeenSet; }
    template<typename IdentificationHintsT = IdentificationHints>
    void SetIdentificationHints(IdentificationHintsT&& value) { m_identificationHintsHasBeenSet = true; m_identificationHints = std::forward<IdentificationHintsT>(value); }
    template<typename IdentificationHintsT = IdentificationHints>
    SourceProperties& WithIdentificationHints(IdentificationHintsT&& value) { SetIdentificationHints(std::forward<IdentificationHintsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server last update date and time.</p>
     */
    inline const Aws::String& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    template<typename LastUpdatedDateTimeT = Aws::String>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::String>
    SourceProperties& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server network interfaces.</p>
     */
    inline const Aws::Vector<NetworkInterface>& GetNetworkInterfaces() const { return m_networkInterfaces; }
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }
    template<typename NetworkInterfacesT = Aws::Vector<NetworkInterface>>
    void SetNetworkInterfaces(NetworkInterfacesT&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::forward<NetworkInterfacesT>(value); }
    template<typename NetworkInterfacesT = Aws::Vector<NetworkInterface>>
    SourceProperties& WithNetworkInterfaces(NetworkInterfacesT&& value) { SetNetworkInterfaces(std::forward<NetworkInterfacesT>(value)); return *this;}
    template<typename NetworkInterfacesT = NetworkInterface>
    SourceProperties& AddNetworkInterfaces(NetworkInterfacesT&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.emplace_back(std::forward<NetworkInterfacesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Source server OS.</p>
     */
    inline const OS& GetOs() const { return m_os; }
    inline bool OsHasBeenSet() const { return m_osHasBeenSet; }
    template<typename OsT = OS>
    void SetOs(OsT&& value) { m_osHasBeenSet = true; m_os = std::forward<OsT>(value); }
    template<typename OsT = OS>
    SourceProperties& WithOs(OsT&& value) { SetOs(std::forward<OsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server RAM in bytes.</p>
     */
    inline long long GetRamBytes() const { return m_ramBytes; }
    inline bool RamBytesHasBeenSet() const { return m_ramBytesHasBeenSet; }
    inline void SetRamBytes(long long value) { m_ramBytesHasBeenSet = true; m_ramBytes = value; }
    inline SourceProperties& WithRamBytes(long long value) { SetRamBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server recommended instance type.</p>
     */
    inline const Aws::String& GetRecommendedInstanceType() const { return m_recommendedInstanceType; }
    inline bool RecommendedInstanceTypeHasBeenSet() const { return m_recommendedInstanceTypeHasBeenSet; }
    template<typename RecommendedInstanceTypeT = Aws::String>
    void SetRecommendedInstanceType(RecommendedInstanceTypeT&& value) { m_recommendedInstanceTypeHasBeenSet = true; m_recommendedInstanceType = std::forward<RecommendedInstanceTypeT>(value); }
    template<typename RecommendedInstanceTypeT = Aws::String>
    SourceProperties& WithRecommendedInstanceType(RecommendedInstanceTypeT&& value) { SetRecommendedInstanceType(std::forward<RecommendedInstanceTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CPU> m_cpus;
    bool m_cpusHasBeenSet = false;

    Aws::Vector<Disk> m_disks;
    bool m_disksHasBeenSet = false;

    IdentificationHints m_identificationHints;
    bool m_identificationHintsHasBeenSet = false;

    Aws::String m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    Aws::Vector<NetworkInterface> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet = false;

    OS m_os;
    bool m_osHasBeenSet = false;

    long long m_ramBytes{0};
    bool m_ramBytesHasBeenSet = false;

    Aws::String m_recommendedInstanceType;
    bool m_recommendedInstanceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
