/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WellArchitected {
namespace Model {

/**
 * <p>A return-on-investment estimate with context.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/Roi">AWS
 * API Reference</a></p>
 */
class Roi {
 public:
  AWS_WELLARCHITECTED_API Roi() = default;
  AWS_WELLARCHITECTED_API Roi(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API Roi& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A short statistic or key metric. Optional when there is no quantifiable
   * figure.</p>
   */
  inline const Aws::String& GetEstimate() const { return m_estimate; }
  inline bool EstimateHasBeenSet() const { return m_estimateHasBeenSet; }
  template <typename EstimateT = Aws::String>
  void SetEstimate(EstimateT&& value) {
    m_estimateHasBeenSet = true;
    m_estimate = std::forward<EstimateT>(value);
  }
  template <typename EstimateT = Aws::String>
  Roi& WithEstimate(EstimateT&& value) {
    SetEstimate(std::forward<EstimateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A sentence providing context for the estimate.</p>
   */
  inline const Aws::String& GetDetail() const { return m_detail; }
  inline bool DetailHasBeenSet() const { return m_detailHasBeenSet; }
  template <typename DetailT = Aws::String>
  void SetDetail(DetailT&& value) {
    m_detailHasBeenSet = true;
    m_detail = std::forward<DetailT>(value);
  }
  template <typename DetailT = Aws::String>
  Roi& WithDetail(DetailT&& value) {
    SetDetail(std::forward<DetailT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_estimate;

  Aws::String m_detail;
  bool m_estimateHasBeenSet = false;
  bool m_detailHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
