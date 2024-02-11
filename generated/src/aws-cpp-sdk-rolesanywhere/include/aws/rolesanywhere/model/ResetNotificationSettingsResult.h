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
    AWS_ROLESANYWHERE_API ResetNotificationSettingsResult();
    AWS_ROLESANYWHERE_API ResetNotificationSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROLESANYWHERE_API ResetNotificationSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const TrustAnchorDetail& GetTrustAnchor() const{ return m_trustAnchor; }

    
    inline void SetTrustAnchor(const TrustAnchorDetail& value) { m_trustAnchor = value; }

    
    inline void SetTrustAnchor(TrustAnchorDetail&& value) { m_trustAnchor = std::move(value); }

    
    inline ResetNotificationSettingsResult& WithTrustAnchor(const TrustAnchorDetail& value) { SetTrustAnchor(value); return *this;}

    
    inline ResetNotificationSettingsResult& WithTrustAnchor(TrustAnchorDetail&& value) { SetTrustAnchor(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ResetNotificationSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ResetNotificationSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ResetNotificationSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    TrustAnchorDetail m_trustAnchor;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
