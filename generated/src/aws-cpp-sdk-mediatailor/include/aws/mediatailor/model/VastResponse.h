/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/AdSequencingMode.h>

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
 * ad decision server.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/VastResponse">AWS
 * API Reference</a></p>
 */
class VastResponse {
 public:
  AWS_MEDIATAILOR_API VastResponse() = default;
  AWS_MEDIATAILOR_API VastResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API VastResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ad sequencing mode that controls how MediaTailor handles sequenced and
   * standalone ads in VAST responses. <code>FOLLOW_AD_SEQUENCE</code> inserts
   * sequenced ads in increasing order for both live and VOD workflows, using
   * standalone ads only as replacements when a sequenced ad fails.
   * <code>FOLLOW_AD_SEQUENCE_ONLY_LIVE</code> enables ad sequencing for live
   * workflows only. <code>FOLLOW_AD_SEQUENCE_ONLY_VOD</code> enables ad sequencing
   * for VOD workflows only. <code>IGNORE_AD_SEQUENCE</code> inserts ads in the order
   * they appear in the VAST response, regardless of sequence attributes. The default
   * behavior is <code>IGNORE_AD_SEQUENCE</code>.</p>
   */
  inline AdSequencingMode GetAdSequencingMode() const { return m_adSequencingMode; }
  inline bool AdSequencingModeHasBeenSet() const { return m_adSequencingModeHasBeenSet; }
  inline void SetAdSequencingMode(AdSequencingMode value) {
    m_adSequencingModeHasBeenSet = true;
    m_adSequencingMode = value;
  }
  inline VastResponse& WithAdSequencingMode(AdSequencingMode value) {
    SetAdSequencingMode(value);
    return *this;
  }
  ///@}
 private:
  AdSequencingMode m_adSequencingMode{AdSequencingMode::NOT_SET};
  bool m_adSequencingModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
