/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/SingleProgramTransportStreamPidMapConfiguration.h>

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
 * <p>The processor settings for a router output.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RouterOutputProcessors">AWS
 * API Reference</a></p>
 */
class RouterOutputProcessors {
 public:
  AWS_MEDIACONNECT_API RouterOutputProcessors() = default;
  AWS_MEDIACONNECT_API RouterOutputProcessors(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RouterOutputProcessors& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration settings for remapping the identification numbers of
   * elementary streams and program identifiers of a single-program transport
   * stream.</p>
   */
  inline const SingleProgramTransportStreamPidMapConfiguration& GetSingleProgramTransportStreamPidMap() const {
    return m_singleProgramTransportStreamPidMap;
  }
  inline bool SingleProgramTransportStreamPidMapHasBeenSet() const { return m_singleProgramTransportStreamPidMapHasBeenSet; }
  template <typename SingleProgramTransportStreamPidMapT = SingleProgramTransportStreamPidMapConfiguration>
  void SetSingleProgramTransportStreamPidMap(SingleProgramTransportStreamPidMapT&& value) {
    m_singleProgramTransportStreamPidMapHasBeenSet = true;
    m_singleProgramTransportStreamPidMap = std::forward<SingleProgramTransportStreamPidMapT>(value);
  }
  template <typename SingleProgramTransportStreamPidMapT = SingleProgramTransportStreamPidMapConfiguration>
  RouterOutputProcessors& WithSingleProgramTransportStreamPidMap(SingleProgramTransportStreamPidMapT&& value) {
    SetSingleProgramTransportStreamPidMap(std::forward<SingleProgramTransportStreamPidMapT>(value));
    return *this;
  }
  ///@}
 private:
  SingleProgramTransportStreamPidMapConfiguration m_singleProgramTransportStreamPidMap;
  bool m_singleProgramTransportStreamPidMapHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
