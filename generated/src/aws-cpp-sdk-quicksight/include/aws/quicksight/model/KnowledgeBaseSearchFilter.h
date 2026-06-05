/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/KnowledgeBaseSearchFilterName.h>
#include <aws/quicksight/model/KnowledgeBaseSearchOperator.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>A filter to apply when searching knowledge bases.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/KnowledgeBaseSearchFilter">AWS
 * API Reference</a></p>
 */
class KnowledgeBaseSearchFilter {
 public:
  AWS_QUICKSIGHT_API KnowledgeBaseSearchFilter() = default;
  AWS_QUICKSIGHT_API KnowledgeBaseSearchFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API KnowledgeBaseSearchFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the field to filter on.</p>
   */
  inline KnowledgeBaseSearchFilterName GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  inline void SetName(KnowledgeBaseSearchFilterName value) {
    m_nameHasBeenSet = true;
    m_name = value;
  }
  inline KnowledgeBaseSearchFilter& WithName(KnowledgeBaseSearchFilterName value) {
    SetName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The comparison operator to use for the filter.</p>
   */
  inline KnowledgeBaseSearchOperator GetOperator() const { return m_operator; }
  inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
  inline void SetOperator(KnowledgeBaseSearchOperator value) {
    m_operatorHasBeenSet = true;
    m_operator = value;
  }
  inline KnowledgeBaseSearchFilter& WithOperator(KnowledgeBaseSearchOperator value) {
    SetOperator(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value to filter on.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  KnowledgeBaseSearchFilter& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  KnowledgeBaseSearchFilterName m_name{KnowledgeBaseSearchFilterName::NOT_SET};

  KnowledgeBaseSearchOperator m_operator{KnowledgeBaseSearchOperator::NOT_SET};

  Aws::String m_value;
  bool m_nameHasBeenSet = false;
  bool m_operatorHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
