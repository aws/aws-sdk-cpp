/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConnect {
namespace Model {

/**
 * <p>The manual RTMP naming configuration, where you specify the application and
 * stream names.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ManualRtmpPushNamingConfiguration">AWS
 * API Reference</a></p>
 */
class ManualRtmpPushNamingConfiguration {
 public:
  AWS_MEDIACONNECT_API ManualRtmpPushNamingConfiguration() = default;
  AWS_MEDIACONNECT_API ManualRtmpPushNamingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API ManualRtmpPushNamingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the RTMP application. Together with the stream name, the
   * application name forms the RTMP URL path, in the pattern
   * <code>rtmp://ingestAddress/applicationName/streamName</code>.</p>
   */
  inline const Aws::String& GetApplicationName() const { return m_applicationName; }
  inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
  template <typename ApplicationNameT = Aws::String>
  void SetApplicationName(ApplicationNameT&& value) {
    m_applicationNameHasBeenSet = true;
    m_applicationName = std::forward<ApplicationNameT>(value);
  }
  template <typename ApplicationNameT = Aws::String>
  ManualRtmpPushNamingConfiguration& WithApplicationName(ApplicationNameT&& value) {
    SetApplicationName(std::forward<ApplicationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the RTMP stream. The stream name forms the final segment of the
   * RTMP URL path.</p>
   */
  inline const Aws::String& GetStreamName() const { return m_streamName; }
  inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
  template <typename StreamNameT = Aws::String>
  void SetStreamName(StreamNameT&& value) {
    m_streamNameHasBeenSet = true;
    m_streamName = std::forward<StreamNameT>(value);
  }
  template <typename StreamNameT = Aws::String>
  ManualRtmpPushNamingConfiguration& WithStreamName(StreamNameT&& value) {
    SetStreamName(std::forward<StreamNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationName;

  Aws::String m_streamName;
  bool m_applicationNameHasBeenSet = false;
  bool m_streamNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
