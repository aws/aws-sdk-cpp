/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/RouterInputSourceMetadataDetails.h>

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
class GetRouterInputSourceMetadataResult {
 public:
  AWS_MEDIACONNECT_API GetRouterInputSourceMetadataResult() = default;
  AWS_MEDIACONNECT_API GetRouterInputSourceMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MEDIACONNECT_API GetRouterInputSourceMetadataResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the router input.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GetRouterInputSourceMetadataResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the router input.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetRouterInputSourceMetadataResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Detailed metadata information about the router input source, including
   * connection state, timestamps, and stream configuration.</p>
   */
  inline const RouterInputSourceMetadataDetails& GetSourceMetadataDetails() const { return m_sourceMetadataDetails; }
  template <typename SourceMetadataDetailsT = RouterInputSourceMetadataDetails>
  void SetSourceMetadataDetails(SourceMetadataDetailsT&& value) {
    m_sourceMetadataDetailsHasBeenSet = true;
    m_sourceMetadataDetails = std::forward<SourceMetadataDetailsT>(value);
  }
  template <typename SourceMetadataDetailsT = RouterInputSourceMetadataDetails>
  GetRouterInputSourceMetadataResult& WithSourceMetadataDetails(SourceMetadataDetailsT&& value) {
    SetSourceMetadataDetails(std::forward<SourceMetadataDetailsT>(value));
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
  GetRouterInputSourceMetadataResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;
  bool m_arnHasBeenSet = false;

  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  RouterInputSourceMetadataDetails m_sourceMetadataDetails;
  bool m_sourceMetadataDetailsHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
