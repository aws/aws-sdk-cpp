/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/CapacityDetails.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchServerless {
namespace Model {

/**
 * <p>Current search and indexing capacity for an OpenSearch Serverless collection
 * group. Measured in OpenSearch Compute Units (OCUs).</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/CurrentCapacity">AWS
 * API Reference</a></p>
 */
class CurrentCapacity {
 public:
  AWS_OPENSEARCHSERVERLESS_API CurrentCapacity() = default;
  AWS_OPENSEARCHSERVERLESS_API CurrentCapacity(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVERLESS_API CurrentCapacity& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The search capacity for the collection group.</p>
   */
  inline const CapacityDetails& GetSearch() const { return m_search; }
  inline bool SearchHasBeenSet() const { return m_searchHasBeenSet; }
  template <typename SearchT = CapacityDetails>
  void SetSearch(SearchT&& value) {
    m_searchHasBeenSet = true;
    m_search = std::forward<SearchT>(value);
  }
  template <typename SearchT = CapacityDetails>
  CurrentCapacity& WithSearch(SearchT&& value) {
    SetSearch(std::forward<SearchT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The indexing capacity for the collection group.</p>
   */
  inline const CapacityDetails& GetIndexing() const { return m_indexing; }
  inline bool IndexingHasBeenSet() const { return m_indexingHasBeenSet; }
  template <typename IndexingT = CapacityDetails>
  void SetIndexing(IndexingT&& value) {
    m_indexingHasBeenSet = true;
    m_indexing = std::forward<IndexingT>(value);
  }
  template <typename IndexingT = CapacityDetails>
  CurrentCapacity& WithIndexing(IndexingT&& value) {
    SetIndexing(std::forward<IndexingT>(value));
    return *this;
  }
  ///@}
 private:
  CapacityDetails m_search;

  CapacityDetails m_indexing;
  bool m_searchHasBeenSet = false;
  bool m_indexingHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
