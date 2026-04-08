/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/MediaLive_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaLive {
namespace Model {

/**
 * Map of MediaLive pipeline IDs to the ARNs of the MediaConnect Router Inputs to
 * which this Output is connected.<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MediaConnectRouterOutputConnectionMap">AWS
 * API Reference</a></p>
 */
class MediaConnectRouterOutputConnectionMap {
 public:
  AWS_MEDIALIVE_API MediaConnectRouterOutputConnectionMap() = default;
  AWS_MEDIALIVE_API MediaConnectRouterOutputConnectionMap(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API MediaConnectRouterOutputConnectionMap& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * The ARN of the MediaConnect Router Input connected to pipeline 0.
   */
  inline const Aws::String& GetPipeline0() const { return m_pipeline0; }
  inline bool Pipeline0HasBeenSet() const { return m_pipeline0HasBeenSet; }
  template <typename Pipeline0T = Aws::String>
  void SetPipeline0(Pipeline0T&& value) {
    m_pipeline0HasBeenSet = true;
    m_pipeline0 = std::forward<Pipeline0T>(value);
  }
  template <typename Pipeline0T = Aws::String>
  MediaConnectRouterOutputConnectionMap& WithPipeline0(Pipeline0T&& value) {
    SetPipeline0(std::forward<Pipeline0T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * The ARN of the MediaConnect Router Input connected to pipeline 1.
   */
  inline const Aws::String& GetPipeline1() const { return m_pipeline1; }
  inline bool Pipeline1HasBeenSet() const { return m_pipeline1HasBeenSet; }
  template <typename Pipeline1T = Aws::String>
  void SetPipeline1(Pipeline1T&& value) {
    m_pipeline1HasBeenSet = true;
    m_pipeline1 = std::forward<Pipeline1T>(value);
  }
  template <typename Pipeline1T = Aws::String>
  MediaConnectRouterOutputConnectionMap& WithPipeline1(Pipeline1T&& value) {
    SetPipeline1(std::forward<Pipeline1T>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_pipeline0;

  Aws::String m_pipeline1;
  bool m_pipeline0HasBeenSet = false;
  bool m_pipeline1HasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
