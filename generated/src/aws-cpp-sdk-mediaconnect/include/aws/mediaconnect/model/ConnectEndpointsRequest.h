/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

#include <utility>

namespace Aws {
namespace MediaConnect {
namespace Model {

/**
 */
class ConnectEndpointsRequest : public MediaConnectRequest {
 public:
  AWS_MEDIACONNECT_API ConnectEndpointsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ConnectEndpoints"; }

  AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the destination endpoint to connect.</p>
   */
  inline const Aws::String& GetDestinationEndpointArn() const { return m_destinationEndpointArn; }
  inline bool DestinationEndpointArnHasBeenSet() const { return m_destinationEndpointArnHasBeenSet; }
  template <typename DestinationEndpointArnT = Aws::String>
  void SetDestinationEndpointArn(DestinationEndpointArnT&& value) {
    m_destinationEndpointArnHasBeenSet = true;
    m_destinationEndpointArn = std::forward<DestinationEndpointArnT>(value);
  }
  template <typename DestinationEndpointArnT = Aws::String>
  ConnectEndpointsRequest& WithDestinationEndpointArn(DestinationEndpointArnT&& value) {
    SetDestinationEndpointArn(std::forward<DestinationEndpointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the source endpoint to connect.</p>
   */
  inline const Aws::String& GetSourceEndpointArn() const { return m_sourceEndpointArn; }
  inline bool SourceEndpointArnHasBeenSet() const { return m_sourceEndpointArnHasBeenSet; }
  template <typename SourceEndpointArnT = Aws::String>
  void SetSourceEndpointArn(SourceEndpointArnT&& value) {
    m_sourceEndpointArnHasBeenSet = true;
    m_sourceEndpointArn = std::forward<SourceEndpointArnT>(value);
  }
  template <typename SourceEndpointArnT = Aws::String>
  ConnectEndpointsRequest& WithSourceEndpointArn(SourceEndpointArnT&& value) {
    SetSourceEndpointArn(std::forward<SourceEndpointArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_destinationEndpointArn;

  Aws::String m_sourceEndpointArn;
  bool m_destinationEndpointArnHasBeenSet = false;
  bool m_sourceEndpointArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
