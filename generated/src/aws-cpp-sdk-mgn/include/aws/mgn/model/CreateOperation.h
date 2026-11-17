/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>An operation that creates a new construct in the segment.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/CreateOperation">AWS
 * API Reference</a></p>
 */
class CreateOperation {
 public:
  AWS_MGN_API CreateOperation() = default;
  AWS_MGN_API CreateOperation(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API CreateOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name for the new construct.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateOperation& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the new construct is excluded from the migration.</p>
   */
  inline bool GetExcluded() const { return m_excluded; }
  inline bool ExcludedHasBeenSet() const { return m_excludedHasBeenSet; }
  inline void SetExcluded(bool value) {
    m_excludedHasBeenSet = true;
    m_excluded = value;
  }
  inline CreateOperation& WithExcluded(bool value) {
    SetExcluded(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The properties of the new construct, using their native value types.</p>
   */
  inline const Aws::Map<Aws::String, Aws::Utils::Document>& GetProperties() const { return m_properties; }
  inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
  template <typename PropertiesT = Aws::Map<Aws::String, Aws::Utils::Document>>
  void SetProperties(PropertiesT&& value) {
    m_propertiesHasBeenSet = true;
    m_properties = std::forward<PropertiesT>(value);
  }
  template <typename PropertiesT = Aws::Map<Aws::String, Aws::Utils::Document>>
  CreateOperation& WithProperties(PropertiesT&& value) {
    SetProperties(std::forward<PropertiesT>(value));
    return *this;
  }
  template <typename PropertiesKeyT = Aws::String, typename PropertiesValueT = Aws::Utils::Document>
  CreateOperation& AddProperties(PropertiesKeyT&& key, PropertiesValueT&& value) {
    m_propertiesHasBeenSet = true;
    m_properties.emplace(std::forward<PropertiesKeyT>(key), std::forward<PropertiesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The initial construct-type-specific behavioral configuration for the new
   * construct.</p>
   */
  inline const OperationConfigurationUnion& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = OperationConfigurationUnion>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = OperationConfigurationUnion>
  CreateOperation& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  bool m_excluded{false};

  Aws::Map<Aws::String, Aws::Utils::Document> m_properties;

  OperationConfigurationUnion m_configuration;
  bool m_nameHasBeenSet = false;
  bool m_excludedHasBeenSet = false;
  bool m_propertiesHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
