/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>
#include <aws/sagemakertrainingsessionruntime/model/Datum.h>
#include <aws/sagemakertrainingsessionruntime/model/LossFnName.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMakerTrainingSessionRuntime {
namespace Model {

/**
 * <p>The configuration for a forward-only pass through the model. This computes
 * loss values without computing gradients.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakertrainingsessionruntime-2025-02-10/ForwardConfig">AWS
 * API Reference</a></p>
 */
class ForwardConfig {
 public:
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API ForwardConfig() = default;
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API ForwardConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API ForwardConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the loss function to evaluate during the forward pass.</p>
   */
  inline LossFnName GetLossFnName() const { return m_lossFnName; }
  inline bool LossFnNameHasBeenSet() const { return m_lossFnNameHasBeenSet; }
  inline void SetLossFnName(LossFnName value) {
    m_lossFnNameHasBeenSet = true;
    m_lossFnName = value;
  }
  inline ForwardConfig& WithLossFnName(LossFnName value) {
    SetLossFnName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of input data to feed through the model. Must contain at least one
   * datum, and each datum must have a non-empty modelInput with at least one
   * chunk.</p>
   */
  inline const Aws::Vector<Datum>& GetDatumList() const { return m_datumList; }
  inline bool DatumListHasBeenSet() const { return m_datumListHasBeenSet; }
  template <typename DatumListT = Aws::Vector<Datum>>
  void SetDatumList(DatumListT&& value) {
    m_datumListHasBeenSet = true;
    m_datumList = std::forward<DatumListT>(value);
  }
  template <typename DatumListT = Aws::Vector<Datum>>
  ForwardConfig& WithDatumList(DatumListT&& value) {
    SetDatumList(std::forward<DatumListT>(value));
    return *this;
  }
  template <typename DatumListT = Datum>
  ForwardConfig& AddDatumList(DatumListT&& value) {
    m_datumListHasBeenSet = true;
    m_datumList.emplace_back(std::forward<DatumListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional loss function configuration passed to the engine. Supported keys
   * are <code>clip_low_threshold</code> (valid range: 0 to 1) and
   * <code>clip_high_threshold</code> (valid range: 1 to 10). Unsupported keys are
   * rejected.</p>
   */
  inline Aws::Utils::DocumentView GetLossFnConfig() const { return m_lossFnConfig; }
  inline bool LossFnConfigHasBeenSet() const { return m_lossFnConfigHasBeenSet; }
  template <typename LossFnConfigT = Aws::Utils::Document>
  void SetLossFnConfig(LossFnConfigT&& value) {
    m_lossFnConfigHasBeenSet = true;
    m_lossFnConfig = std::forward<LossFnConfigT>(value);
  }
  template <typename LossFnConfigT = Aws::Utils::Document>
  ForwardConfig& WithLossFnConfig(LossFnConfigT&& value) {
    SetLossFnConfig(std::forward<LossFnConfigT>(value));
    return *this;
  }
  ///@}
 private:
  LossFnName m_lossFnName{LossFnName::NOT_SET};

  Aws::Vector<Datum> m_datumList;

  Aws::Utils::Document m_lossFnConfig;
  bool m_lossFnNameHasBeenSet = false;
  bool m_datumListHasBeenSet = false;
  bool m_lossFnConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
