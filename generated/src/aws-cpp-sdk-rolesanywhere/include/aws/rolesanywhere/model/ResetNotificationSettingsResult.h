/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/model/TrustAnchorDetail.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace RolesAnywhere
{
namespace Model
{
  class ResetNotificationSettingsResult
  {
  public:
    AWS_ROLESANYWHERE_API ResetNotificationSettingsResult() = default;
    AWS_ROLESANYWHERE_API ResetNotificationSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROLESANYWHERE_API ResetNotificationSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const TrustAnchorDetail& GetTrustAnchor() const { return m_trustAnchor; }
    template<typename TrustAnchorT = TrustAnchorDetail>
    void SetTrustAnchor(TrustAnchorT&& value) { m_trustAnchorHasBeenSet = true; m_trustAnchor = std::forward<TrustAnchorT>(value); }
    template<typename TrustAnchorT = TrustAnchorDetail>
    ResetNotificationSettingsResult& WithTrustAnchor(TrustAnchorT&& value) { SetTrustAnchor(std::forward<TrustAnchorT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ResetNotificationSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TrustAnchorDetail m_trustAnchor;
    bool m_trustAnchorHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
