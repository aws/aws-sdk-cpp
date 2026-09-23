/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/mediapackagev2/model/ContentKeyPeriodTiming.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mediapackagev2 {
namespace Model {

/**
 * <p>The configuration that controls the content key period timing information
 * that MediaPackage signals to your DRM key provider.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/ContentKeyPeriodConfiguration">AWS
 * API Reference</a></p>
 */
class ContentKeyPeriodConfiguration {
 public:
  AWS_MEDIAPACKAGEV2_API ContentKeyPeriodConfiguration() = default;
  AWS_MEDIAPACKAGEV2_API ContentKeyPeriodConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIAPACKAGEV2_API ContentKeyPeriodConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies what timing information MediaPackage signals in the
   * <code>ContentKeyPeriod</code> to your DRM key provider. If you don't specify a
   * value, the default is <code>INDEX_ONLY</code>. Signaling start and end times
   * (<code>START_END_ONLY</code> or <code>INDEX_WITH_START_END</code>) also requires
   * key rotation to be enabled.</p> <p>The allowed values are:</p> <ul> <li> <p>
   * <code>INDEX_ONLY</code> - Signals only the content key index. This is the
   * default and matches the current behavior. It's supported for both SPEKE Version
   * 2.0 and 2.1.</p> </li> <li> <p> <code>START_END_ONLY</code> - Signals only the
   * start and end times the key is used for. Requires <code>SpekeVersion</code>
   * <code>V2_1</code>.</p> </li> <li> <p> <code>INDEX_WITH_START_END</code> -
   * Signals both the content key index and the start and end times the key is used
   * for. Requires <code>SpekeVersion</code> <code>V2_1</code>.</p> </li> </ul>
   */
  inline ContentKeyPeriodTiming GetContentKeyPeriodTiming() const { return m_contentKeyPeriodTiming; }
  inline bool ContentKeyPeriodTimingHasBeenSet() const { return m_contentKeyPeriodTimingHasBeenSet; }
  inline void SetContentKeyPeriodTiming(ContentKeyPeriodTiming value) {
    m_contentKeyPeriodTimingHasBeenSet = true;
    m_contentKeyPeriodTiming = value;
  }
  inline ContentKeyPeriodConfiguration& WithContentKeyPeriodTiming(ContentKeyPeriodTiming value) {
    SetContentKeyPeriodTiming(value);
    return *this;
  }
  ///@}
 private:
  ContentKeyPeriodTiming m_contentKeyPeriodTiming{ContentKeyPeriodTiming::NOT_SET};
  bool m_contentKeyPeriodTimingHasBeenSet = false;
};

}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
