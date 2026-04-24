/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/TransportMediaInfo.h>

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
 * <p>Metadata information associated with the router input, including stream
 * details and connection state.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RouterInputMetadata">AWS
 * API Reference</a></p>
 */
class RouterInputMetadata {
 public:
  AWS_MEDIACONNECT_API RouterInputMetadata() = default;
  AWS_MEDIACONNECT_API RouterInputMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RouterInputMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const TransportMediaInfo& GetTransportStreamMediaInfo() const { return m_transportStreamMediaInfo; }
  inline bool TransportStreamMediaInfoHasBeenSet() const { return m_transportStreamMediaInfoHasBeenSet; }
  template <typename TransportStreamMediaInfoT = TransportMediaInfo>
  void SetTransportStreamMediaInfo(TransportStreamMediaInfoT&& value) {
    m_transportStreamMediaInfoHasBeenSet = true;
    m_transportStreamMediaInfo = std::forward<TransportStreamMediaInfoT>(value);
  }
  template <typename TransportStreamMediaInfoT = TransportMediaInfo>
  RouterInputMetadata& WithTransportStreamMediaInfo(TransportStreamMediaInfoT&& value) {
    SetTransportStreamMediaInfo(std::forward<TransportStreamMediaInfoT>(value));
    return *this;
  }
  ///@}
 private:
  TransportMediaInfo m_transportStreamMediaInfo;
  bool m_transportStreamMediaInfoHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
