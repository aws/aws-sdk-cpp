/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/DiffFieldPolicy.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchService {
namespace Model {

/**
 * <p>A single field that differs between the source and target copies of an
 * item.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DivergentField">AWS
 * API Reference</a></p>
 */
class DivergentField {
 public:
  AWS_OPENSEARCHSERVICE_API DivergentField() = default;
  AWS_OPENSEARCHSERVICE_API DivergentField(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API DivergentField& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The location of the field within the item.</p>
   */
  inline const Aws::String& GetPath() const { return m_path; }
  inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
  template <typename PathT = Aws::String>
  void SetPath(PathT&& value) {
    m_pathHasBeenSet = true;
    m_path = std::forward<PathT>(value);
  }
  template <typename PathT = Aws::String>
  DivergentField& WithPath(PathT&& value) {
    SetPath(std::forward<PathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The field's value on the source domain.</p>
   */
  inline const Aws::String& GetSourceValue() const { return m_sourceValue; }
  inline bool SourceValueHasBeenSet() const { return m_sourceValueHasBeenSet; }
  template <typename SourceValueT = Aws::String>
  void SetSourceValue(SourceValueT&& value) {
    m_sourceValueHasBeenSet = true;
    m_sourceValue = std::forward<SourceValueT>(value);
  }
  template <typename SourceValueT = Aws::String>
  DivergentField& WithSourceValue(SourceValueT&& value) {
    SetSourceValue(std::forward<SourceValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The field's value on the target domain.</p>
   */
  inline const Aws::String& GetTargetValue() const { return m_targetValue; }
  inline bool TargetValueHasBeenSet() const { return m_targetValueHasBeenSet; }
  template <typename TargetValueT = Aws::String>
  void SetTargetValue(TargetValueT&& value) {
    m_targetValueHasBeenSet = true;
    m_targetValue = std::forward<TargetValueT>(value);
  }
  template <typename TargetValueT = Aws::String>
  DivergentField& WithTargetValue(TargetValueT&& value) {
    SetTargetValue(std::forward<TargetValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How the comparison treats this field.</p>
   */
  inline DiffFieldPolicy GetPolicy() const { return m_policy; }
  inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
  inline void SetPolicy(DiffFieldPolicy value) {
    m_policyHasBeenSet = true;
    m_policy = value;
  }
  inline DivergentField& WithPolicy(DiffFieldPolicy value) {
    SetPolicy(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_path;

  Aws::String m_sourceValue;

  Aws::String m_targetValue;

  DiffFieldPolicy m_policy{DiffFieldPolicy::NOT_SET};
  bool m_pathHasBeenSet = false;
  bool m_sourceValueHasBeenSet = false;
  bool m_targetValueHasBeenSet = false;
  bool m_policyHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
