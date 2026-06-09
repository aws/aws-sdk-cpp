/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/DatabaseConnectionStringProfile.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace odb {
namespace Model {

/**
 * <p>The connection strings used to connect to an Autonomous
 * Database.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/AutonomousDatabaseConnectionStrings">AWS
 * API Reference</a></p>
 */
class AutonomousDatabaseConnectionStrings {
 public:
  AWS_ODB_API AutonomousDatabaseConnectionStrings() = default;
  AWS_ODB_API AutonomousDatabaseConnectionStrings(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API AutonomousDatabaseConnectionStrings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of all connection strings that you can use to connect to the
   * Autonomous Database.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetAllConnectionStrings() const { return m_allConnectionStrings; }
  inline bool AllConnectionStringsHasBeenSet() const { return m_allConnectionStringsHasBeenSet; }
  template <typename AllConnectionStringsT = Aws::Map<Aws::String, Aws::String>>
  void SetAllConnectionStrings(AllConnectionStringsT&& value) {
    m_allConnectionStringsHasBeenSet = true;
    m_allConnectionStrings = std::forward<AllConnectionStringsT>(value);
  }
  template <typename AllConnectionStringsT = Aws::Map<Aws::String, Aws::String>>
  AutonomousDatabaseConnectionStrings& WithAllConnectionStrings(AllConnectionStringsT&& value) {
    SetAllConnectionStrings(std::forward<AllConnectionStringsT>(value));
    return *this;
  }
  template <typename AllConnectionStringsKeyT = Aws::String, typename AllConnectionStringsValueT = Aws::String>
  AutonomousDatabaseConnectionStrings& AddAllConnectionStrings(AllConnectionStringsKeyT&& key, AllConnectionStringsValueT&& value) {
    m_allConnectionStringsHasBeenSet = true;
    m_allConnectionStrings.emplace(std::forward<AllConnectionStringsKeyT>(key), std::forward<AllConnectionStringsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection string for connecting to the Autonomous Database with a
   * dedicated service.</p>
   */
  inline const Aws::String& GetDedicated() const { return m_dedicated; }
  inline bool DedicatedHasBeenSet() const { return m_dedicatedHasBeenSet; }
  template <typename DedicatedT = Aws::String>
  void SetDedicated(DedicatedT&& value) {
    m_dedicatedHasBeenSet = true;
    m_dedicated = std::forward<DedicatedT>(value);
  }
  template <typename DedicatedT = Aws::String>
  AutonomousDatabaseConnectionStrings& WithDedicated(DedicatedT&& value) {
    SetDedicated(std::forward<DedicatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection string for the high-priority database service.</p>
   */
  inline const Aws::String& GetHigh() const { return m_high; }
  inline bool HighHasBeenSet() const { return m_highHasBeenSet; }
  template <typename HighT = Aws::String>
  void SetHigh(HighT&& value) {
    m_highHasBeenSet = true;
    m_high = std::forward<HighT>(value);
  }
  template <typename HighT = Aws::String>
  AutonomousDatabaseConnectionStrings& WithHigh(HighT&& value) {
    SetHigh(std::forward<HighT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection string for the medium-priority database service.</p>
   */
  inline const Aws::String& GetMedium() const { return m_medium; }
  inline bool MediumHasBeenSet() const { return m_mediumHasBeenSet; }
  template <typename MediumT = Aws::String>
  void SetMedium(MediumT&& value) {
    m_mediumHasBeenSet = true;
    m_medium = std::forward<MediumT>(value);
  }
  template <typename MediumT = Aws::String>
  AutonomousDatabaseConnectionStrings& WithMedium(MediumT&& value) {
    SetMedium(std::forward<MediumT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection string for the low-priority database service.</p>
   */
  inline const Aws::String& GetLow() const { return m_low; }
  inline bool LowHasBeenSet() const { return m_lowHasBeenSet; }
  template <typename LowT = Aws::String>
  void SetLow(LowT&& value) {
    m_lowHasBeenSet = true;
    m_low = std::forward<LowT>(value);
  }
  template <typename LowT = Aws::String>
  AutonomousDatabaseConnectionStrings& WithLow(LowT&& value) {
    SetLow(std::forward<LowT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of connection string profiles for the Autonomous Database.</p>
   */
  inline const Aws::Vector<DatabaseConnectionStringProfile>& GetProfiles() const { return m_profiles; }
  inline bool ProfilesHasBeenSet() const { return m_profilesHasBeenSet; }
  template <typename ProfilesT = Aws::Vector<DatabaseConnectionStringProfile>>
  void SetProfiles(ProfilesT&& value) {
    m_profilesHasBeenSet = true;
    m_profiles = std::forward<ProfilesT>(value);
  }
  template <typename ProfilesT = Aws::Vector<DatabaseConnectionStringProfile>>
  AutonomousDatabaseConnectionStrings& WithProfiles(ProfilesT&& value) {
    SetProfiles(std::forward<ProfilesT>(value));
    return *this;
  }
  template <typename ProfilesT = DatabaseConnectionStringProfile>
  AutonomousDatabaseConnectionStrings& AddProfiles(ProfilesT&& value) {
    m_profilesHasBeenSet = true;
    m_profiles.emplace_back(std::forward<ProfilesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_allConnectionStrings;

  Aws::String m_dedicated;

  Aws::String m_high;

  Aws::String m_medium;

  Aws::String m_low;

  Aws::Vector<DatabaseConnectionStringProfile> m_profiles;
  bool m_allConnectionStringsHasBeenSet = false;
  bool m_dedicatedHasBeenSet = false;
  bool m_highHasBeenSet = false;
  bool m_mediumHasBeenSet = false;
  bool m_lowHasBeenSet = false;
  bool m_profilesHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
