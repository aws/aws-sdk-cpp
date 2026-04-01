/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/sustainability/Sustainability_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Sustainability {
namespace Model {

/**
 * <p>Represents a duration of time defined by start and end
 * timestamps.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sustainability-2018-05-10/TimePeriod">AWS
 * API Reference</a></p>
 */
class TimePeriod {
 public:
  AWS_SUSTAINABILITY_API TimePeriod() = default;
  AWS_SUSTAINABILITY_API TimePeriod(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUSTAINABILITY_API TimePeriod& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUSTAINABILITY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The start (inclusive) of the time period. ISO-8601 formatted timestamp, for
   * example: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
   */
  inline const Aws::Utils::DateTime& GetStart() const { return m_start; }
  inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
  template <typename StartT = Aws::Utils::DateTime>
  void SetStart(StartT&& value) {
    m_startHasBeenSet = true;
    m_start = std::forward<StartT>(value);
  }
  template <typename StartT = Aws::Utils::DateTime>
  TimePeriod& WithStart(StartT&& value) {
    SetStart(std::forward<StartT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end (exclusive) of the time period. ISO-8601 formatted timestamp, for
   * example: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
   */
  inline const Aws::Utils::DateTime& GetEnd() const { return m_end; }
  inline bool EndHasBeenSet() const { return m_endHasBeenSet; }
  template <typename EndT = Aws::Utils::DateTime>
  void SetEnd(EndT&& value) {
    m_endHasBeenSet = true;
    m_end = std::forward<EndT>(value);
  }
  template <typename EndT = Aws::Utils::DateTime>
  TimePeriod& WithEnd(EndT&& value) {
    SetEnd(std::forward<EndT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_start{};

  Aws::Utils::DateTime m_end{};
  bool m_startHasBeenSet = false;
  bool m_endHasBeenSet = false;
};

}  // namespace Model
}  // namespace Sustainability
}  // namespace Aws
