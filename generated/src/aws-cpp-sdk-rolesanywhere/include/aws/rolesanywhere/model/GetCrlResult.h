﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/model/CrlDetail.h>
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
  class GetCrlResult
  {
  public:
    AWS_ROLESANYWHERE_API GetCrlResult();
    AWS_ROLESANYWHERE_API GetCrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROLESANYWHERE_API GetCrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The state of the certificate revocation list (CRL) after a read or write
     * operation.</p>
     */
    inline const CrlDetail& GetCrl() const{ return m_crl; }

    /**
     * <p>The state of the certificate revocation list (CRL) after a read or write
     * operation.</p>
     */
    inline void SetCrl(const CrlDetail& value) { m_crl = value; }

    /**
     * <p>The state of the certificate revocation list (CRL) after a read or write
     * operation.</p>
     */
    inline void SetCrl(CrlDetail&& value) { m_crl = std::move(value); }

    /**
     * <p>The state of the certificate revocation list (CRL) after a read or write
     * operation.</p>
     */
    inline GetCrlResult& WithCrl(const CrlDetail& value) { SetCrl(value); return *this;}

    /**
     * <p>The state of the certificate revocation list (CRL) after a read or write
     * operation.</p>
     */
    inline GetCrlResult& WithCrl(CrlDetail&& value) { SetCrl(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetCrlResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetCrlResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetCrlResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    CrlDetail m_crl;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
