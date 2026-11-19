/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/Platform.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace PartnerCentralMarketing {
namespace Model {
/**
 * <p>Output for CreateSocialConnectionAuthorizationUrl.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/CreateSocialConnectionAuthorizationUrlResponse">AWS
 * API Reference</a></p>
 */
class CreateSocialConnectionAuthorizationUrlResult {
 public:
  AWS_PARTNERCENTRALMARKETING_API CreateSocialConnectionAuthorizationUrlResult() = default;
  AWS_PARTNERCENTRALMARKETING_API CreateSocialConnectionAuthorizationUrlResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_PARTNERCENTRALMARKETING_API CreateSocialConnectionAuthorizationUrlResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>Social platform the URL authorizes.</p>
   */
  inline Platform GetPlatform() const { return m_platform; }
  inline void SetPlatform(Platform value) {
    m_platformHasBeenSet = true;
    m_platform = value;
  }
  inline CreateSocialConnectionAuthorizationUrlResult& WithPlatform(Platform value) {
    SetPlatform(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Fresh single-use URL the partner visits to grant authorization.</p>
   */
  inline const Aws::String& GetAuthorizationUrl() const { return m_authorizationUrl; }
  template <typename AuthorizationUrlT = Aws::String>
  void SetAuthorizationUrl(AuthorizationUrlT&& value) {
    m_authorizationUrlHasBeenSet = true;
    m_authorizationUrl = std::forward<AuthorizationUrlT>(value);
  }
  template <typename AuthorizationUrlT = Aws::String>
  CreateSocialConnectionAuthorizationUrlResult& WithAuthorizationUrl(AuthorizationUrlT&& value) {
    SetAuthorizationUrl(std::forward<AuthorizationUrlT>(value));
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
  CreateSocialConnectionAuthorizationUrlResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Platform m_platform{Platform::NOT_SET};

  Aws::String m_authorizationUrl;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_platformHasBeenSet = false;
  bool m_authorizationUrlHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
