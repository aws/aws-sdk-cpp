/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/PreRollVastResponse.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaTailor {
namespace Model {

/**
 * <p>The ad decision server configuration for live pre-roll ads. It contains
 * settings that control how MediaTailor processes VAST responses for pre-roll ad
 * breaks.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/PreRollAdDecisionServerConfiguration">AWS
 * API Reference</a></p>
 */
class PreRollAdDecisionServerConfiguration {
 public:
  AWS_MEDIATAILOR_API PreRollAdDecisionServerConfiguration() = default;
  AWS_MEDIATAILOR_API PreRollAdDecisionServerConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API PreRollAdDecisionServerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The settings that control how MediaTailor processes VAST responses for live
   * pre-roll ad breaks.</p>
   */
  inline const PreRollVastResponse& GetVastResponse() const { return m_vastResponse; }
  inline bool VastResponseHasBeenSet() const { return m_vastResponseHasBeenSet; }
  template <typename VastResponseT = PreRollVastResponse>
  void SetVastResponse(VastResponseT&& value) {
    m_vastResponseHasBeenSet = true;
    m_vastResponse = std::forward<VastResponseT>(value);
  }
  template <typename VastResponseT = PreRollVastResponse>
  PreRollAdDecisionServerConfiguration& WithVastResponse(VastResponseT&& value) {
    SetVastResponse(std::forward<VastResponseT>(value));
    return *this;
  }
  ///@}
 private:
  PreRollVastResponse m_vastResponse;
  bool m_vastResponseHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
