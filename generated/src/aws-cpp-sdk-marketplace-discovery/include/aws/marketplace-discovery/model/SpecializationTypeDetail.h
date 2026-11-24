/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/SpecializationType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceDiscovery {
namespace Model {

/**
 * <p>Describes a specialization type with its display information.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/SpecializationTypeDetail">AWS
 * API Reference</a></p>
 */
class SpecializationTypeDetail {
 public:
  AWS_MARKETPLACEDISCOVERY_API SpecializationTypeDetail() = default;
  AWS_MARKETPLACEDISCOVERY_API SpecializationTypeDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API SpecializationTypeDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The specialization type.</p>
   */
  inline SpecializationType GetSpecializationType() const { return m_specializationType; }
  inline bool SpecializationTypeHasBeenSet() const { return m_specializationTypeHasBeenSet; }
  inline void SetSpecializationType(SpecializationType value) {
    m_specializationTypeHasBeenSet = true;
    m_specializationType = value;
  }
  inline SpecializationTypeDetail& WithSpecializationType(SpecializationType value) {
    SetSpecializationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the specialization type displayed to you.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  SpecializationTypeDetail& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}
 private:
  SpecializationType m_specializationType{SpecializationType::NOT_SET};

  Aws::String m_displayName;
  bool m_specializationTypeHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
