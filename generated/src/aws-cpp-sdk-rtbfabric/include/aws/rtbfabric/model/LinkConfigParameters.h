/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/LinkLogSettings.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RTBFabric {
namespace Model {

/**
 * <p>A requested link configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/LinkConfigParameters">AWS
 * API Reference</a></p>
 */
class LinkConfigParameters {
 public:
  AWS_RTBFABRIC_API LinkConfigParameters() = default;
  AWS_RTBFABRIC_API LinkConfigParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API LinkConfigParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const LinkLogSettings& GetLogSettings() const { return m_logSettings; }
  inline bool LogSettingsHasBeenSet() const { return m_logSettingsHasBeenSet; }
  template <typename LogSettingsT = LinkLogSettings>
  void SetLogSettings(LogSettingsT&& value) {
    m_logSettingsHasBeenSet = true;
    m_logSettings = std::forward<LogSettingsT>(value);
  }
  template <typename LogSettingsT = LinkLogSettings>
  LinkConfigParameters& WithLogSettings(LogSettingsT&& value) {
    SetLogSettings(std::forward<LogSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timeout value in milliseconds.</p>
   */
  inline long long GetTimeoutInMillis() const { return m_timeoutInMillis; }
  inline bool TimeoutInMillisHasBeenSet() const { return m_timeoutInMillisHasBeenSet; }
  inline void SetTimeoutInMillis(long long value) {
    m_timeoutInMillisHasBeenSet = true;
    m_timeoutInMillis = value;
  }
  inline LinkConfigParameters& WithTimeoutInMillis(long long value) {
    SetTimeoutInMillis(value);
    return *this;
  }
  ///@}
 private:
  LinkLogSettings m_logSettings;

  long long m_timeoutInMillis{0};
  bool m_logSettingsHasBeenSet = false;
  bool m_timeoutInMillisHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
