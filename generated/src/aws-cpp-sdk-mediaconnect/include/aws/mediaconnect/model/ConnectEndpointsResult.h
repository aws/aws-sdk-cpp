/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace MediaConnect {
namespace Model {
class ConnectEndpointsResult {
 public:
  AWS_MEDIACONNECT_API ConnectEndpointsResult() = default;
  AWS_MEDIACONNECT_API ConnectEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MEDIACONNECT_API ConnectEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the connected destination endpoint.</p>
   */
  inline const Aws::String& GetDestinationEndpointArn() const { return m_destinationEndpointArn; }
  template <typename DestinationEndpointArnT = Aws::String>
  void SetDestinationEndpointArn(DestinationEndpointArnT&& value) {
    m_destinationEndpointArnHasBeenSet = true;
    m_destinationEndpointArn = std::forward<DestinationEndpointArnT>(value);
  }
  template <typename DestinationEndpointArnT = Aws::String>
  ConnectEndpointsResult& WithDestinationEndpointArn(DestinationEndpointArnT&& value) {
    SetDestinationEndpointArn(std::forward<DestinationEndpointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the connected destination endpoint.</p>
   */
  inline const Aws::String& GetDestinationEndpointName() const { return m_destinationEndpointName; }
  template <typename DestinationEndpointNameT = Aws::String>
  void SetDestinationEndpointName(DestinationEndpointNameT&& value) {
    m_destinationEndpointNameHasBeenSet = true;
    m_destinationEndpointName = std::forward<DestinationEndpointNameT>(value);
  }
  template <typename DestinationEndpointNameT = Aws::String>
  ConnectEndpointsResult& WithDestinationEndpointName(DestinationEndpointNameT&& value) {
    SetDestinationEndpointName(std::forward<DestinationEndpointNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the connected source endpoint.</p>
   */
  inline const Aws::String& GetSourceEndpointArn() const { return m_sourceEndpointArn; }
  template <typename SourceEndpointArnT = Aws::String>
  void SetSourceEndpointArn(SourceEndpointArnT&& value) {
    m_sourceEndpointArnHasBeenSet = true;
    m_sourceEndpointArn = std::forward<SourceEndpointArnT>(value);
  }
  template <typename SourceEndpointArnT = Aws::String>
  ConnectEndpointsResult& WithSourceEndpointArn(SourceEndpointArnT&& value) {
    SetSourceEndpointArn(std::forward<SourceEndpointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the connected source endpoint.</p>
   */
  inline const Aws::String& GetSourceEndpointName() const { return m_sourceEndpointName; }
  template <typename SourceEndpointNameT = Aws::String>
  void SetSourceEndpointName(SourceEndpointNameT&& value) {
    m_sourceEndpointNameHasBeenSet = true;
    m_sourceEndpointName = std::forward<SourceEndpointNameT>(value);
  }
  template <typename SourceEndpointNameT = Aws::String>
  ConnectEndpointsResult& WithSourceEndpointName(SourceEndpointNameT&& value) {
    SetSourceEndpointName(std::forward<SourceEndpointNameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ConnectEndpointsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_destinationEndpointArn;

  Aws::String m_destinationEndpointName;

  Aws::String m_sourceEndpointArn;

  Aws::String m_sourceEndpointName;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_destinationEndpointArnHasBeenSet = false;
  bool m_destinationEndpointNameHasBeenSet = false;
  bool m_sourceEndpointArnHasBeenSet = false;
  bool m_sourceEndpointNameHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
