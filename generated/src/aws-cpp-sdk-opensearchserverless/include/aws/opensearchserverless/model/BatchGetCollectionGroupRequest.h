/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearchserverless/OpenSearchServerlessRequest.h>
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>

#include <utility>

namespace Aws {
namespace OpenSearchServerless {
namespace Model {

/**
 */
class BatchGetCollectionGroupRequest : public OpenSearchServerlessRequest {
 public:
  AWS_OPENSEARCHSERVERLESS_API BatchGetCollectionGroupRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchGetCollectionGroup"; }

  AWS_OPENSEARCHSERVERLESS_API Aws::String SerializePayload() const override;

  AWS_OPENSEARCHSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>A list of collection group IDs. You can't provide names and IDs in the same
   * request.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIds() const { return m_ids; }
  inline bool IdsHasBeenSet() const { return m_idsHasBeenSet; }
  template <typename IdsT = Aws::Vector<Aws::String>>
  void SetIds(IdsT&& value) {
    m_idsHasBeenSet = true;
    m_ids = std::forward<IdsT>(value);
  }
  template <typename IdsT = Aws::Vector<Aws::String>>
  BatchGetCollectionGroupRequest& WithIds(IdsT&& value) {
    SetIds(std::forward<IdsT>(value));
    return *this;
  }
  template <typename IdsT = Aws::String>
  BatchGetCollectionGroupRequest& AddIds(IdsT&& value) {
    m_idsHasBeenSet = true;
    m_ids.emplace_back(std::forward<IdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of collection group names. You can't provide names and IDs in the same
   * request.</p>
   */
  inline const Aws::Vector<Aws::String>& GetNames() const { return m_names; }
  inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }
  template <typename NamesT = Aws::Vector<Aws::String>>
  void SetNames(NamesT&& value) {
    m_namesHasBeenSet = true;
    m_names = std::forward<NamesT>(value);
  }
  template <typename NamesT = Aws::Vector<Aws::String>>
  BatchGetCollectionGroupRequest& WithNames(NamesT&& value) {
    SetNames(std::forward<NamesT>(value));
    return *this;
  }
  template <typename NamesT = Aws::String>
  BatchGetCollectionGroupRequest& AddNames(NamesT&& value) {
    m_namesHasBeenSet = true;
    m_names.emplace_back(std::forward<NamesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_ids;

  Aws::Vector<Aws::String> m_names;
  bool m_idsHasBeenSet = false;
  bool m_namesHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
