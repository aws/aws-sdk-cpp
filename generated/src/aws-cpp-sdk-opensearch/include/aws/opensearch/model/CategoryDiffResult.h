/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/DiffItems.h>
#include <aws/opensearch/model/DiffStatus.h>

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
 * <p>The result of comparing one metadata category between two
 * domains.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/CategoryDiffResult">AWS
 * API Reference</a></p>
 */
class CategoryDiffResult {
 public:
  AWS_OPENSEARCHSERVICE_API CategoryDiffResult() = default;
  AWS_OPENSEARCHSERVICE_API CategoryDiffResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API CategoryDiffResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether the category was compared successfully. <code>compared</code> means
   * the result is complete; <code>error</code> means the category could not be
   * read.</p>
   */
  inline DiffStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(DiffStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CategoryDiffResult& WithStatus(DiffStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of items that are identical on both domains.</p>
   */
  inline int GetInSync() const { return m_inSync; }
  inline bool InSyncHasBeenSet() const { return m_inSyncHasBeenSet; }
  inline void SetInSync(int value) {
    m_inSyncHasBeenSet = true;
    m_inSync = value;
  }
  inline CategoryDiffResult& WithInSync(int value) {
    SetInSync(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of items that exist only on the source domain.</p>
   */
  inline int GetSourceOnly() const { return m_sourceOnly; }
  inline bool SourceOnlyHasBeenSet() const { return m_sourceOnlyHasBeenSet; }
  inline void SetSourceOnly(int value) {
    m_sourceOnlyHasBeenSet = true;
    m_sourceOnly = value;
  }
  inline CategoryDiffResult& WithSourceOnly(int value) {
    SetSourceOnly(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of items that exist only on the target domain.</p>
   */
  inline int GetTargetOnly() const { return m_targetOnly; }
  inline bool TargetOnlyHasBeenSet() const { return m_targetOnlyHasBeenSet; }
  inline void SetTargetOnly(int value) {
    m_targetOnlyHasBeenSet = true;
    m_targetOnly = value;
  }
  inline CategoryDiffResult& WithTargetOnly(int value) {
    SetTargetOnly(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of items that exist on both domains but differ.</p>
   */
  inline int GetDiverged() const { return m_diverged; }
  inline bool DivergedHasBeenSet() const { return m_divergedHasBeenSet; }
  inline void SetDiverged(int value) {
    m_divergedHasBeenSet = true;
    m_diverged = value;
  }
  inline CategoryDiffResult& WithDiverged(int value) {
    SetDiverged(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The names of the items that differ, and for diverging items, the fields that
   * differ.</p>
   */
  inline const DiffItems& GetItems() const { return m_items; }
  inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
  template <typename ItemsT = DiffItems>
  void SetItems(ItemsT&& value) {
    m_itemsHasBeenSet = true;
    m_items = std::forward<ItemsT>(value);
  }
  template <typename ItemsT = DiffItems>
  CategoryDiffResult& WithItems(ItemsT&& value) {
    SetItems(std::forward<ItemsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether <code>Items</code> omits some differences because the category
   * contained more than the response can carry. The counts remain complete when this
   * is <code>true</code>.</p>
   */
  inline bool GetTruncated() const { return m_truncated; }
  inline bool TruncatedHasBeenSet() const { return m_truncatedHasBeenSet; }
  inline void SetTruncated(bool value) {
    m_truncatedHasBeenSet = true;
    m_truncated = value;
  }
  inline CategoryDiffResult& WithTruncated(bool value) {
    SetTruncated(value);
    return *this;
  }
  ///@}
 private:
  DiffStatus m_status{DiffStatus::NOT_SET};

  int m_inSync{0};

  int m_sourceOnly{0};

  int m_targetOnly{0};

  int m_diverged{0};

  DiffItems m_items;

  bool m_truncated{false};
  bool m_statusHasBeenSet = false;
  bool m_inSyncHasBeenSet = false;
  bool m_sourceOnlyHasBeenSet = false;
  bool m_targetOnlyHasBeenSet = false;
  bool m_divergedHasBeenSet = false;
  bool m_itemsHasBeenSet = false;
  bool m_truncatedHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
