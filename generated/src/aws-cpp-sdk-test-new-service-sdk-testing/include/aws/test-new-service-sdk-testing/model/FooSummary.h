/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/test-new-service-sdk-testing/TestNewServiceSDKTesting_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace TestNewServiceSDKTesting {
namespace Model {

class FooSummary {
 public:
  AWS_TESTNEWSERVICESDKTESTING_API FooSummary() = default;
  AWS_TESTNEWSERVICESDKTESTING_API FooSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_TESTNEWSERVICESDKTESTING_API FooSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TESTNEWSERVICESDKTESTING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetFooId() const { return m_fooId; }
  inline bool FooIdHasBeenSet() const { return m_fooIdHasBeenSet; }
  template <typename FooIdT = Aws::String>
  void SetFooId(FooIdT&& value) {
    m_fooIdHasBeenSet = true;
    m_fooId = std::forward<FooIdT>(value);
  }
  template <typename FooIdT = Aws::String>
  FooSummary& WithFooId(FooIdT&& value) {
    SetFooId(std::forward<FooIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  FooSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline int GetCount() const { return m_count; }
  inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
  inline void SetCount(int value) {
    m_countHasBeenSet = true;
    m_count = value;
  }
  inline FooSummary& WithCount(int value) {
    SetCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_fooId;

  Aws::String m_name;

  int m_count{0};
  bool m_fooIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_countHasBeenSet = false;
};

}  // namespace Model
}  // namespace TestNewServiceSDKTesting
}  // namespace Aws
