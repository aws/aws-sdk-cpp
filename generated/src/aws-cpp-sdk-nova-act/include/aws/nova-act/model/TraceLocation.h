/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>
#include <aws/nova-act/model/TraceLocationType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NovaAct {
namespace Model {

/**
 * <p>Information about where trace data is stored for debugging and
 * monitoring.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/nova-act-2025-08-22/TraceLocation">AWS
 * API Reference</a></p>
 */
class TraceLocation {
 public:
  AWS_NOVAACT_API TraceLocation() = default;
  AWS_NOVAACT_API TraceLocation(Aws::Utils::Json::JsonView jsonValue);
  AWS_NOVAACT_API TraceLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NOVAACT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of storage location for the trace data.</p>
   */
  inline TraceLocationType GetLocationType() const { return m_locationType; }
  inline bool LocationTypeHasBeenSet() const { return m_locationTypeHasBeenSet; }
  inline void SetLocationType(TraceLocationType value) {
    m_locationTypeHasBeenSet = true;
    m_locationType = value;
  }
  inline TraceLocation& WithLocationType(TraceLocationType value) {
    SetLocationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specific location where the trace data is stored.</p>
   */
  inline const Aws::String& GetLocation() const { return m_location; }
  inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
  template <typename LocationT = Aws::String>
  void SetLocation(LocationT&& value) {
    m_locationHasBeenSet = true;
    m_location = std::forward<LocationT>(value);
  }
  template <typename LocationT = Aws::String>
  TraceLocation& WithLocation(LocationT&& value) {
    SetLocation(std::forward<LocationT>(value));
    return *this;
  }
  ///@}
 private:
  TraceLocationType m_locationType{TraceLocationType::NOT_SET};
  bool m_locationTypeHasBeenSet = false;

  Aws::String m_location;
  bool m_locationHasBeenSet = false;
};

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
