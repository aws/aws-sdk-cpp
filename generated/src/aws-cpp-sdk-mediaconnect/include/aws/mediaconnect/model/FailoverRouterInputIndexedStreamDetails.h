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
 * <p>Configuration details for an indexed stream in a failover router input
 * setup.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/FailoverRouterInputIndexedStreamDetails">AWS
 * API Reference</a></p>
 */
class FailoverRouterInputIndexedStreamDetails {
 public:
  AWS_MEDIACONNECT_API FailoverRouterInputIndexedStreamDetails() = default;
  AWS_MEDIACONNECT_API FailoverRouterInputIndexedStreamDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API FailoverRouterInputIndexedStreamDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The index number (0 or 1) assigned to this source in the failover
   * configuration.</p>
   */
  inline int GetSourceIndex() const { return m_sourceIndex; }
  inline bool SourceIndexHasBeenSet() const { return m_sourceIndexHasBeenSet; }
  inline void SetSourceIndex(int value) {
    m_sourceIndexHasBeenSet = true;
    m_sourceIndex = value;
  }
  inline FailoverRouterInputIndexedStreamDetails& WithSourceIndex(int value) {
    SetSourceIndex(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP address of the source for this indexed stream.</p>
   */
  inline const Aws::String& GetSourceIpAddress() const { return m_sourceIpAddress; }
  inline bool SourceIpAddressHasBeenSet() const { return m_sourceIpAddressHasBeenSet; }
  template <typename SourceIpAddressT = Aws::String>
  void SetSourceIpAddress(SourceIpAddressT&& value) {
    m_sourceIpAddressHasBeenSet = true;
    m_sourceIpAddress = std::forward<SourceIpAddressT>(value);
  }
  template <typename SourceIpAddressT = Aws::String>
  FailoverRouterInputIndexedStreamDetails& WithSourceIpAddress(SourceIpAddressT&& value) {
    SetSourceIpAddress(std::forward<SourceIpAddressT>(value));
    return *this;
  }
  ///@}
 private:
  int m_sourceIndex{0};
  bool m_sourceIndexHasBeenSet = false;

  Aws::String m_sourceIpAddress;
  bool m_sourceIpAddressHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
