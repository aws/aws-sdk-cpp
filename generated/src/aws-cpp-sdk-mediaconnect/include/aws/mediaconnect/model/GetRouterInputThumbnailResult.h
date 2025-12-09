/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/RouterInputThumbnailDetails.h>

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
class GetRouterInputThumbnailResult {
 public:
  AWS_MEDIACONNECT_API GetRouterInputThumbnailResult() = default;
  AWS_MEDIACONNECT_API GetRouterInputThumbnailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MEDIACONNECT_API GetRouterInputThumbnailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ARN of the router input.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GetRouterInputThumbnailResult& WithArn(ArnT&& value) {
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
  GetRouterInputThumbnailResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of the thumbnail associated with the router input, including the
   * thumbnail image, timecode, timestamp, and any associated error messages.</p>
   */
  inline const RouterInputThumbnailDetails& GetThumbnailDetails() const { return m_thumbnailDetails; }
  template <typename ThumbnailDetailsT = RouterInputThumbnailDetails>
  void SetThumbnailDetails(ThumbnailDetailsT&& value) {
    m_thumbnailDetailsHasBeenSet = true;
    m_thumbnailDetails = std::forward<ThumbnailDetailsT>(value);
  }
  template <typename ThumbnailDetailsT = RouterInputThumbnailDetails>
  GetRouterInputThumbnailResult& WithThumbnailDetails(ThumbnailDetailsT&& value) {
    SetThumbnailDetails(std::forward<ThumbnailDetailsT>(value));
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
  GetRouterInputThumbnailResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_name;

  RouterInputThumbnailDetails m_thumbnailDetails;

  Aws::String m_requestId;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_thumbnailDetailsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
