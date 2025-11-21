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
 * <p>Configuration details for a standard router output stream type. Contains
 * information about the destination IP address and connection state for basic
 * output routing.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/StandardRouterOutputStreamDetails">AWS
 * API Reference</a></p>
 */
class StandardRouterOutputStreamDetails {
 public:
  AWS_MEDIACONNECT_API StandardRouterOutputStreamDetails() = default;
  AWS_MEDIACONNECT_API StandardRouterOutputStreamDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API StandardRouterOutputStreamDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The IP address where the output stream will be sent. This is the destination
   * address that will receive the routed media content.</p>
   */
  inline const Aws::String& GetDestinationIpAddress() const { return m_destinationIpAddress; }
  inline bool DestinationIpAddressHasBeenSet() const { return m_destinationIpAddressHasBeenSet; }
  template <typename DestinationIpAddressT = Aws::String>
  void SetDestinationIpAddress(DestinationIpAddressT&& value) {
    m_destinationIpAddressHasBeenSet = true;
    m_destinationIpAddress = std::forward<DestinationIpAddressT>(value);
  }
  template <typename DestinationIpAddressT = Aws::String>
  StandardRouterOutputStreamDetails& WithDestinationIpAddress(DestinationIpAddressT&& value) {
    SetDestinationIpAddress(std::forward<DestinationIpAddressT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_destinationIpAddress;
  bool m_destinationIpAddressHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
