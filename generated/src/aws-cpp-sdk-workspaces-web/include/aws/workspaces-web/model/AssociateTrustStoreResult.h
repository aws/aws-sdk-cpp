﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
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
namespace WorkSpacesWeb
{
namespace Model
{
  class AssociateTrustStoreResult
  {
  public:
    AWS_WORKSPACESWEB_API AssociateTrustStoreResult();
    AWS_WORKSPACESWEB_API AssociateTrustStoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API AssociateTrustStoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the web portal.</p>
     */
    inline const Aws::String& GetPortalArn() const{ return m_portalArn; }
    inline void SetPortalArn(const Aws::String& value) { m_portalArn = value; }
    inline void SetPortalArn(Aws::String&& value) { m_portalArn = std::move(value); }
    inline void SetPortalArn(const char* value) { m_portalArn.assign(value); }
    inline AssociateTrustStoreResult& WithPortalArn(const Aws::String& value) { SetPortalArn(value); return *this;}
    inline AssociateTrustStoreResult& WithPortalArn(Aws::String&& value) { SetPortalArn(std::move(value)); return *this;}
    inline AssociateTrustStoreResult& WithPortalArn(const char* value) { SetPortalArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the trust store.</p>
     */
    inline const Aws::String& GetTrustStoreArn() const{ return m_trustStoreArn; }
    inline void SetTrustStoreArn(const Aws::String& value) { m_trustStoreArn = value; }
    inline void SetTrustStoreArn(Aws::String&& value) { m_trustStoreArn = std::move(value); }
    inline void SetTrustStoreArn(const char* value) { m_trustStoreArn.assign(value); }
    inline AssociateTrustStoreResult& WithTrustStoreArn(const Aws::String& value) { SetTrustStoreArn(value); return *this;}
    inline AssociateTrustStoreResult& WithTrustStoreArn(Aws::String&& value) { SetTrustStoreArn(std::move(value)); return *this;}
    inline AssociateTrustStoreResult& WithTrustStoreArn(const char* value) { SetTrustStoreArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AssociateTrustStoreResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AssociateTrustStoreResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AssociateTrustStoreResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_portalArn;

    Aws::String m_trustStoreArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
