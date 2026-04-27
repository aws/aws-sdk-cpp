/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/MergeConstruct.h>

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
 * <p>An operation that merges constructs from different segments into the target
 * construct.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/MergeOperation">AWS
 * API Reference</a></p>
 */
class MergeOperation {
 public:
  AWS_MGN_API MergeOperation() = default;
  AWS_MGN_API MergeOperation(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API MergeOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of constructs to merge into the target.</p>
   */
  inline const Aws::Vector<MergeConstruct>& GetMergeConstructs() const { return m_mergeConstructs; }
  inline bool MergeConstructsHasBeenSet() const { return m_mergeConstructsHasBeenSet; }
  template <typename MergeConstructsT = Aws::Vector<MergeConstruct>>
  void SetMergeConstructs(MergeConstructsT&& value) {
    m_mergeConstructsHasBeenSet = true;
    m_mergeConstructs = std::forward<MergeConstructsT>(value);
  }
  template <typename MergeConstructsT = Aws::Vector<MergeConstruct>>
  MergeOperation& WithMergeConstructs(MergeConstructsT&& value) {
    SetMergeConstructs(std::forward<MergeConstructsT>(value));
    return *this;
  }
  template <typename MergeConstructsT = MergeConstruct>
  MergeOperation& AddMergeConstructs(MergeConstructsT&& value) {
    m_mergeConstructsHasBeenSet = true;
    m_mergeConstructs.emplace_back(std::forward<MergeConstructsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<MergeConstruct> m_mergeConstructs;
  bool m_mergeConstructsHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
