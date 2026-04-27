/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>

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
 * <p>An operation that updates the properties of a construct.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/UpdateOperation">AWS
 * API Reference</a></p>
 */
class UpdateOperation {
 public:
  AWS_MGN_API UpdateOperation() = default;
  AWS_MGN_API UpdateOperation(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API UpdateOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  UpdateOperation& WithName(NameT&& value) {
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
  inline UpdateOperation& WithExcluded(bool value) {
    SetExcluded(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The properties to update on the construct.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetProperties() const { return m_properties; }
  inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
  template <typename PropertiesT = Aws::Map<Aws::String, Aws::String>>
  void SetProperties(PropertiesT&& value) {
    m_propertiesHasBeenSet = true;
    m_properties = std::forward<PropertiesT>(value);
  }
  template <typename PropertiesT = Aws::Map<Aws::String, Aws::String>>
  UpdateOperation& WithProperties(PropertiesT&& value) {
    SetProperties(std::forward<PropertiesT>(value));
    return *this;
  }
  template <typename PropertiesKeyT = Aws::String, typename PropertiesValueT = Aws::String>
  UpdateOperation& AddProperties(PropertiesKeyT&& key, PropertiesValueT&& value) {
    m_propertiesHasBeenSet = true;
    m_properties.emplace(std::forward<PropertiesKeyT>(key), std::forward<PropertiesValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  bool m_excluded{false};

  Aws::Map<Aws::String, Aws::String> m_properties;
  bool m_nameHasBeenSet = false;
  bool m_excludedHasBeenSet = false;
  bool m_propertiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
