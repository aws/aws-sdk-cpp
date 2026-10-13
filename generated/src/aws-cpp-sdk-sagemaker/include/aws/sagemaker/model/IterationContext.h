/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>The context for an iteration of a ForEach step.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/IterationContext">AWS
 * API Reference</a></p>
 */
class IterationContext {
 public:
  AWS_SAGEMAKER_API IterationContext() = default;
  AWS_SAGEMAKER_API IterationContext(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API IterationContext& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the ForEach step that generated this iteration.</p>
   */
  inline const Aws::String& GetParentStepName() const { return m_parentStepName; }
  inline bool ParentStepNameHasBeenSet() const { return m_parentStepNameHasBeenSet; }
  template <typename ParentStepNameT = Aws::String>
  void SetParentStepName(ParentStepNameT&& value) {
    m_parentStepNameHasBeenSet = true;
    m_parentStepName = std::forward<ParentStepNameT>(value);
  }
  template <typename ParentStepNameT = Aws::String>
  IterationContext& WithParentStepName(ParentStepNameT&& value) {
    SetParentStepName(std::forward<ParentStepNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The index of the iteration within the ForEach step.</p>
   */
  inline int GetIndex() const { return m_index; }
  inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }
  inline void SetIndex(int value) {
    m_indexHasBeenSet = true;
    m_index = value;
  }
  inline IterationContext& WithIndex(int value) {
    SetIndex(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The input item that is being processed in this iteration.</p>
   */
  inline const Aws::String& GetItem() const { return m_item; }
  inline bool ItemHasBeenSet() const { return m_itemHasBeenSet; }
  template <typename ItemT = Aws::String>
  void SetItem(ItemT&& value) {
    m_itemHasBeenSet = true;
    m_item = std::forward<ItemT>(value);
  }
  template <typename ItemT = Aws::String>
  IterationContext& WithItem(ItemT&& value) {
    SetItem(std::forward<ItemT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_parentStepName;

  int m_index{0};

  Aws::String m_item;
  bool m_parentStepNameHasBeenSet = false;
  bool m_indexHasBeenSet = false;
  bool m_itemHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
