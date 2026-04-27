/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/SplitConstruct.h>

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
 * <p>An operation that splits a construct into multiple constructs with different
 * CIDR blocks.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/SplitOperation">AWS
 * API Reference</a></p>
 */
class SplitOperation {
 public:
  AWS_MGN_API SplitOperation() = default;
  AWS_MGN_API SplitOperation(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API SplitOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of split targets with their CIDR blocks.</p>
   */
  inline const Aws::Vector<SplitConstruct>& GetSplitConstructs() const { return m_splitConstructs; }
  inline bool SplitConstructsHasBeenSet() const { return m_splitConstructsHasBeenSet; }
  template <typename SplitConstructsT = Aws::Vector<SplitConstruct>>
  void SetSplitConstructs(SplitConstructsT&& value) {
    m_splitConstructsHasBeenSet = true;
    m_splitConstructs = std::forward<SplitConstructsT>(value);
  }
  template <typename SplitConstructsT = Aws::Vector<SplitConstruct>>
  SplitOperation& WithSplitConstructs(SplitConstructsT&& value) {
    SetSplitConstructs(std::forward<SplitConstructsT>(value));
    return *this;
  }
  template <typename SplitConstructsT = SplitConstruct>
  SplitOperation& AddSplitConstructs(SplitConstructsT&& value) {
    m_splitConstructsHasBeenSet = true;
    m_splitConstructs.emplace_back(std::forward<SplitConstructsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<SplitConstruct> m_splitConstructs;
  bool m_splitConstructsHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
