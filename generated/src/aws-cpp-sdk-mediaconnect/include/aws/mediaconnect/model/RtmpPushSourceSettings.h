/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/RtmpPushNamingType.h>

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
 * <p>The settings for the RTMP (Real-Time Messaging Protocol)
 * source.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RtmpPushSourceSettings">AWS
 * API Reference</a></p>
 */
class RtmpPushSourceSettings {
 public:
  AWS_MEDIACONNECT_API RtmpPushSourceSettings() = default;
  AWS_MEDIACONNECT_API RtmpPushSourceSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RtmpPushSourceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  RtmpPushSourceSettings& WithApplicationName(ApplicationNameT&& value) {
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
  RtmpPushSourceSettings& WithStreamName(StreamNameT&& value) {
    SetStreamName(std::forward<StreamNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The naming type that the source uses. With <code>AUTOMATIC</code> naming,
   * MediaConnect generates the application and stream names.</p>
   */
  inline RtmpPushNamingType GetNamingType() const { return m_namingType; }
  inline bool NamingTypeHasBeenSet() const { return m_namingTypeHasBeenSet; }
  inline void SetNamingType(RtmpPushNamingType value) {
    m_namingTypeHasBeenSet = true;
    m_namingType = value;
  }
  inline RtmpPushSourceSettings& WithNamingType(RtmpPushNamingType value) {
    SetNamingType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationName;

  Aws::String m_streamName;

  RtmpPushNamingType m_namingType{RtmpPushNamingType::NOT_SET};
  bool m_applicationNameHasBeenSet = false;
  bool m_streamNameHasBeenSet = false;
  bool m_namingTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
