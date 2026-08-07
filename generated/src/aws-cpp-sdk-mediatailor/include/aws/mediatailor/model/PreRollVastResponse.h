/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/PreRollAdSequencingMode.h>

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
 * <p>The settings that control how MediaTailor processes VAST responses from the
 * ad decision server for live pre-roll ad breaks.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/PreRollVastResponse">AWS
 * API Reference</a></p>
 */
class PreRollVastResponse {
 public:
  AWS_MEDIATAILOR_API PreRollVastResponse() = default;
  AWS_MEDIATAILOR_API PreRollVastResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API PreRollVastResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ad sequencing mode for live pre-roll ads. <code>FOLLOW_AD_SEQUENCE</code>
   * inserts sequenced ads in increasing order and uses standalone ads only as
   * replacements when a sequenced ad fails. <code>IGNORE_AD_SEQUENCE</code> inserts
   * ads in the order they appear in the VAST response, regardless of sequence
   * attributes. The default behavior is <code>IGNORE_AD_SEQUENCE</code>.</p>
   */
  inline PreRollAdSequencingMode GetAdSequencingMode() const { return m_adSequencingMode; }
  inline bool AdSequencingModeHasBeenSet() const { return m_adSequencingModeHasBeenSet; }
  inline void SetAdSequencingMode(PreRollAdSequencingMode value) {
    m_adSequencingModeHasBeenSet = true;
    m_adSequencingMode = value;
  }
  inline PreRollVastResponse& WithAdSequencingMode(PreRollAdSequencingMode value) {
    SetAdSequencingMode(value);
    return *this;
  }
  ///@}
 private:
  PreRollAdSequencingMode m_adSequencingMode{PreRollAdSequencingMode::NOT_SET};
  bool m_adSequencingModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
