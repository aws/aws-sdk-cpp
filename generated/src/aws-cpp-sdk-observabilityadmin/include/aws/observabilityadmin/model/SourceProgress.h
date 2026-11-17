/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p>A summary of source activation for an external-cloud telemetry pipeline, with
 * the number of active sources and the total number of discovered
 * sources.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/SourceProgress">AWS
 * API Reference</a></p>
 */
class SourceProgress {
 public:
  AWS_OBSERVABILITYADMIN_API SourceProgress() = default;
  AWS_OBSERVABILITYADMIN_API SourceProgress(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API SourceProgress& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of discovered sources that are active and sending telemetry to the
   * pipeline.</p>
   */
  inline int GetActive() const { return m_active; }
  inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }
  inline void SetActive(int value) {
    m_activeHasBeenSet = true;
    m_active = value;
  }
  inline SourceProgress& WithActive(int value) {
    SetActive(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of sources discovered for the pipeline.</p>
   */
  inline int GetTotal() const { return m_total; }
  inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }
  inline void SetTotal(int value) {
    m_totalHasBeenSet = true;
    m_total = value;
  }
  inline SourceProgress& WithTotal(int value) {
    SetTotal(value);
    return *this;
  }
  ///@}
 private:
  int m_active{0};

  int m_total{0};
  bool m_activeHasBeenSet = false;
  bool m_totalHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
