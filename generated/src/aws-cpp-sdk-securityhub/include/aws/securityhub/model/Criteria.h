/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/OcsfFindingFilters.h>
#include <aws/securityhub/model/ResourcesFilters.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {

/**
 * <p>Defines the parameters and conditions used to evaluate and filter security
 * findings or resources.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Criteria">AWS
 * API Reference</a></p>
 */
class Criteria {
 public:
  AWS_SECURITYHUB_API Criteria() = default;
  AWS_SECURITYHUB_API Criteria(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Criteria& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The filtering conditions that align with OCSF standards.</p>
   */
  inline const OcsfFindingFilters& GetOcsfFindingCriteria() const { return m_ocsfFindingCriteria; }
  inline bool OcsfFindingCriteriaHasBeenSet() const { return m_ocsfFindingCriteriaHasBeenSet; }
  template <typename OcsfFindingCriteriaT = OcsfFindingFilters>
  void SetOcsfFindingCriteria(OcsfFindingCriteriaT&& value) {
    m_ocsfFindingCriteriaHasBeenSet = true;
    m_ocsfFindingCriteria = std::forward<OcsfFindingCriteriaT>(value);
  }
  template <typename OcsfFindingCriteriaT = OcsfFindingFilters>
  Criteria& WithOcsfFindingCriteria(OcsfFindingCriteriaT&& value) {
    SetOcsfFindingCriteria(std::forward<OcsfFindingCriteriaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The filtering conditions for resources.</p>
   */
  inline const ResourcesFilters& GetResourceCriteria() const { return m_resourceCriteria; }
  inline bool ResourceCriteriaHasBeenSet() const { return m_resourceCriteriaHasBeenSet; }
  template <typename ResourceCriteriaT = ResourcesFilters>
  void SetResourceCriteria(ResourceCriteriaT&& value) {
    m_resourceCriteriaHasBeenSet = true;
    m_resourceCriteria = std::forward<ResourceCriteriaT>(value);
  }
  template <typename ResourceCriteriaT = ResourcesFilters>
  Criteria& WithResourceCriteria(ResourceCriteriaT&& value) {
    SetResourceCriteria(std::forward<ResourceCriteriaT>(value));
    return *this;
  }
  ///@}
 private:
  OcsfFindingFilters m_ocsfFindingCriteria;

  ResourcesFilters m_resourceCriteria;
  bool m_ocsfFindingCriteriaHasBeenSet = false;
  bool m_resourceCriteriaHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
