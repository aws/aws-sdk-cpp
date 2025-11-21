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
 * <p>Configuration details for a standard router input stream type.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/StandardRouterInputStreamDetails">AWS
 * API Reference</a></p>
 */
class StandardRouterInputStreamDetails {
 public:
  AWS_MEDIACONNECT_API StandardRouterInputStreamDetails() = default;
  AWS_MEDIACONNECT_API StandardRouterInputStreamDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API StandardRouterInputStreamDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The source IP address for the standard router input stream.</p>
   */
  inline const Aws::String& GetSourceIpAddress() const { return m_sourceIpAddress; }
  inline bool SourceIpAddressHasBeenSet() const { return m_sourceIpAddressHasBeenSet; }
  template <typename SourceIpAddressT = Aws::String>
  void SetSourceIpAddress(SourceIpAddressT&& value) {
    m_sourceIpAddressHasBeenSet = true;
    m_sourceIpAddress = std::forward<SourceIpAddressT>(value);
  }
  template <typename SourceIpAddressT = Aws::String>
  StandardRouterInputStreamDetails& WithSourceIpAddress(SourceIpAddressT&& value) {
    SetSourceIpAddress(std::forward<SourceIpAddressT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceIpAddress;
  bool m_sourceIpAddressHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
