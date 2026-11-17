/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/OperationConfigurationUnion.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mgn {
namespace Model {

/**
 * <p>An operation that updates a construct using native property value types and
 * construct-type-specific behavioral configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/UpdateOperationV2">AWS
 * API Reference</a></p>
 */
class UpdateOperationV2 {
 public:
  AWS_MGN_API UpdateOperationV2() = default;
  AWS_MGN_API UpdateOperationV2(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API UpdateOperationV2& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The updated name for the construct.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateOperationV2& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to exclude this construct from the migration.</p>
   */
  inline bool GetExcluded() const { return m_excluded; }
  inline bool ExcludedHasBeenSet() const { return m_excludedHasBeenSet; }
  inline void SetExcluded(bool value) {
    m_excludedHasBeenSet = true;
    m_excluded = value;
  }
  inline UpdateOperationV2& WithExcluded(bool value) {
    SetExcluded(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The properties to set or overwrite on the construct, using their native value
   * types; omitted keys are unchanged.</p>
   */
  inline const Aws::Map<Aws::String, Aws::Utils::Document>& GetProperties() const { return m_properties; }
  inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
  template <typename PropertiesT = Aws::Map<Aws::String, Aws::Utils::Document>>
  void SetProperties(PropertiesT&& value) {
    m_propertiesHasBeenSet = true;
    m_properties = std::forward<PropertiesT>(value);
  }
  template <typename PropertiesT = Aws::Map<Aws::String, Aws::Utils::Document>>
  UpdateOperationV2& WithProperties(PropertiesT&& value) {
    SetProperties(std::forward<PropertiesT>(value));
    return *this;
  }
  template <typename PropertiesKeyT = Aws::String, typename PropertiesValueT = Aws::Utils::Document>
  UpdateOperationV2& AddProperties(PropertiesKeyT&& key, PropertiesValueT&& value) {
    m_propertiesHasBeenSet = true;
    m_properties.emplace(std::forward<PropertiesKeyT>(key), std::forward<PropertiesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The property keys to remove from the construct.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPropertiesToDelete() const { return m_propertiesToDelete; }
  inline bool PropertiesToDeleteHasBeenSet() const { return m_propertiesToDeleteHasBeenSet; }
  template <typename PropertiesToDeleteT = Aws::Vector<Aws::String>>
  void SetPropertiesToDelete(PropertiesToDeleteT&& value) {
    m_propertiesToDeleteHasBeenSet = true;
    m_propertiesToDelete = std::forward<PropertiesToDeleteT>(value);
  }
  template <typename PropertiesToDeleteT = Aws::Vector<Aws::String>>
  UpdateOperationV2& WithPropertiesToDelete(PropertiesToDeleteT&& value) {
    SetPropertiesToDelete(std::forward<PropertiesToDeleteT>(value));
    return *this;
  }
  template <typename PropertiesToDeleteT = Aws::String>
  UpdateOperationV2& AddPropertiesToDelete(PropertiesToDeleteT&& value) {
    m_propertiesToDeleteHasBeenSet = true;
    m_propertiesToDelete.emplace_back(std::forward<PropertiesToDeleteT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Construct-type-specific behavioral configuration to apply, such as security
   * group associations or security group rule referencing.</p>
   */
  inline const OperationConfigurationUnion& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = OperationConfigurationUnion>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = OperationConfigurationUnion>
  UpdateOperationV2& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  bool m_excluded{false};

  Aws::Map<Aws::String, Aws::Utils::Document> m_properties;

  Aws::Vector<Aws::String> m_propertiesToDelete;

  OperationConfigurationUnion m_configuration;
  bool m_nameHasBeenSet = false;
  bool m_excludedHasBeenSet = false;
  bool m_propertiesHasBeenSet = false;
  bool m_propertiesToDeleteHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
