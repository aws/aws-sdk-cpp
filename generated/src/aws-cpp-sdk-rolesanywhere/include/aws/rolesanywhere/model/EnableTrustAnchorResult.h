﻿/**
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
  class EnableTrustAnchorResult
  {
  public:
    AWS_ROLESANYWHERE_API EnableTrustAnchorResult();
    AWS_ROLESANYWHERE_API EnableTrustAnchorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROLESANYWHERE_API EnableTrustAnchorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The state of the trust anchor after a read or write operation. </p>
     */
    inline const TrustAnchorDetail& GetTrustAnchor() const{ return m_trustAnchor; }
    inline void SetTrustAnchor(const TrustAnchorDetail& value) { m_trustAnchor = value; }
    inline void SetTrustAnchor(TrustAnchorDetail&& value) { m_trustAnchor = std::move(value); }
    inline EnableTrustAnchorResult& WithTrustAnchor(const TrustAnchorDetail& value) { SetTrustAnchor(value); return *this;}
    inline EnableTrustAnchorResult& WithTrustAnchor(TrustAnchorDetail&& value) { SetTrustAnchor(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline EnableTrustAnchorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline EnableTrustAnchorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline EnableTrustAnchorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    TrustAnchorDetail m_trustAnchor;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
