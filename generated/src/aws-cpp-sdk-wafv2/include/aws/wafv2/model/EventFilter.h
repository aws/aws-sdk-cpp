/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/EventFilterKey.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WAFV2 {
namespace Model {

/**
 * <p>A filter to narrow the events that are returned by <a>ListEvents</a> and
 * <a>ListEventsByWebACL</a>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/EventFilter">AWS
 * API Reference</a></p>
 */
class EventFilter {
 public:
  AWS_WAFV2_API EventFilter() = default;
  AWS_WAFV2_API EventFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API EventFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the field to filter on. Valid values:</p> <ul> <li> <p>
   * <code>EVENT_CATEGORY</code> - Filter by event category. The only supported
   * filter value is <code>API_SECURITY</code>.</p> </li> <li> <p>
   * <code>RESOURCE_ARN</code> - Filter by protected resource. The filter values are
   * the Amazon Resource Name (ARN)s of the protected resources.</p> </li> </ul>
   */
  inline EventFilterKey GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  inline void SetName(EventFilterKey value) {
    m_nameHasBeenSet = true;
    m_name = value;
  }
  inline EventFilter& WithName(EventFilterKey value) {
    SetName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The values to filter on. You can specify up to 10 values.</p>
   */
  inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  EventFilter& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  template <typename ValuesT = Aws::String>
  EventFilter& AddValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values.emplace_back(std::forward<ValuesT>(value));
    return *this;
  }
  ///@}
 private:
  EventFilterKey m_name{EventFilterKey::NOT_SET};

  Aws::Vector<Aws::String> m_values;
  bool m_nameHasBeenSet = false;
  bool m_valuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
