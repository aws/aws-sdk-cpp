/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
 * <p>The aliases to add to and remove from a pipeline version. An alias can't
 * appear in both lists. After the update, the version can have up to 10
 * aliases.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AliasOperations">AWS
 * API Reference</a></p>
 */
class AliasOperations {
 public:
  AWS_SAGEMAKER_API AliasOperations() = default;
  AWS_SAGEMAKER_API AliasOperations(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API AliasOperations& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The aliases to add to the pipeline version. If you assigned an alias to
   * another version of the same pipeline, you must remove it from that version
   * before you add it here.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAdd() const { return m_add; }
  inline bool AddHasBeenSet() const { return m_addHasBeenSet; }
  template <typename AddT = Aws::Vector<Aws::String>>
  void SetAdd(AddT&& value) {
    m_addHasBeenSet = true;
    m_add = std::forward<AddT>(value);
  }
  template <typename AddT = Aws::Vector<Aws::String>>
  AliasOperations& WithAdd(AddT&& value) {
    SetAdd(std::forward<AddT>(value));
    return *this;
  }
  template <typename AddT = Aws::String>
  AliasOperations& AddAdd(AddT&& value) {
    m_addHasBeenSet = true;
    m_add.emplace_back(std::forward<AddT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The aliases to remove from the pipeline version.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRemove() const { return m_remove; }
  inline bool RemoveHasBeenSet() const { return m_removeHasBeenSet; }
  template <typename RemoveT = Aws::Vector<Aws::String>>
  void SetRemove(RemoveT&& value) {
    m_removeHasBeenSet = true;
    m_remove = std::forward<RemoveT>(value);
  }
  template <typename RemoveT = Aws::Vector<Aws::String>>
  AliasOperations& WithRemove(RemoveT&& value) {
    SetRemove(std::forward<RemoveT>(value));
    return *this;
  }
  template <typename RemoveT = Aws::String>
  AliasOperations& AddRemove(RemoveT&& value) {
    m_removeHasBeenSet = true;
    m_remove.emplace_back(std::forward<RemoveT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_add;

  Aws::Vector<Aws::String> m_remove;
  bool m_addHasBeenSet = false;
  bool m_removeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
