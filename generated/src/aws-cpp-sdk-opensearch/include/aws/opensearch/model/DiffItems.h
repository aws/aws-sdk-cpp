/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/DivergentItem.h>

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
 * <p>The items that differ within one metadata category.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DiffItems">AWS
 * API Reference</a></p>
 */
class DiffItems {
 public:
  AWS_OPENSEARCHSERVICE_API DiffItems() = default;
  AWS_OPENSEARCHSERVICE_API DiffItems(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API DiffItems& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The names of items that exist only on the source domain.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSourceOnly() const { return m_sourceOnly; }
  inline bool SourceOnlyHasBeenSet() const { return m_sourceOnlyHasBeenSet; }
  template <typename SourceOnlyT = Aws::Vector<Aws::String>>
  void SetSourceOnly(SourceOnlyT&& value) {
    m_sourceOnlyHasBeenSet = true;
    m_sourceOnly = std::forward<SourceOnlyT>(value);
  }
  template <typename SourceOnlyT = Aws::Vector<Aws::String>>
  DiffItems& WithSourceOnly(SourceOnlyT&& value) {
    SetSourceOnly(std::forward<SourceOnlyT>(value));
    return *this;
  }
  template <typename SourceOnlyT = Aws::String>
  DiffItems& AddSourceOnly(SourceOnlyT&& value) {
    m_sourceOnlyHasBeenSet = true;
    m_sourceOnly.emplace_back(std::forward<SourceOnlyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The names of items that exist only on the target domain.</p>
   */
  inline const Aws::Vector<Aws::String>& GetTargetOnly() const { return m_targetOnly; }
  inline bool TargetOnlyHasBeenSet() const { return m_targetOnlyHasBeenSet; }
  template <typename TargetOnlyT = Aws::Vector<Aws::String>>
  void SetTargetOnly(TargetOnlyT&& value) {
    m_targetOnlyHasBeenSet = true;
    m_targetOnly = std::forward<TargetOnlyT>(value);
  }
  template <typename TargetOnlyT = Aws::Vector<Aws::String>>
  DiffItems& WithTargetOnly(TargetOnlyT&& value) {
    SetTargetOnly(std::forward<TargetOnlyT>(value));
    return *this;
  }
  template <typename TargetOnlyT = Aws::String>
  DiffItems& AddTargetOnly(TargetOnlyT&& value) {
    m_targetOnlyHasBeenSet = true;
    m_targetOnly.emplace_back(std::forward<TargetOnlyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The items that exist on both domains but differ, with the diverging
   * fields.</p>
   */
  inline const Aws::Vector<DivergentItem>& GetDiverged() const { return m_diverged; }
  inline bool DivergedHasBeenSet() const { return m_divergedHasBeenSet; }
  template <typename DivergedT = Aws::Vector<DivergentItem>>
  void SetDiverged(DivergedT&& value) {
    m_divergedHasBeenSet = true;
    m_diverged = std::forward<DivergedT>(value);
  }
  template <typename DivergedT = Aws::Vector<DivergentItem>>
  DiffItems& WithDiverged(DivergedT&& value) {
    SetDiverged(std::forward<DivergedT>(value));
    return *this;
  }
  template <typename DivergedT = DivergentItem>
  DiffItems& AddDiverged(DivergedT&& value) {
    m_divergedHasBeenSet = true;
    m_diverged.emplace_back(std::forward<DivergedT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_sourceOnly;

  Aws::Vector<Aws::String> m_targetOnly;

  Aws::Vector<DivergentItem> m_diverged;
  bool m_sourceOnlyHasBeenSet = false;
  bool m_targetOnlyHasBeenSet = false;
  bool m_divergedHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
