/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/SecurityConfigDetail.h>
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
namespace OpenSearchServerless
{
namespace Model
{
  class GetSecurityConfigResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API GetSecurityConfigResult();
    AWS_OPENSEARCHSERVERLESS_API GetSecurityConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API GetSecurityConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details of the requested security configuration.</p>
     */
    inline const SecurityConfigDetail& GetSecurityConfigDetail() const{ return m_securityConfigDetail; }

    /**
     * <p>Details of the requested security configuration.</p>
     */
    inline void SetSecurityConfigDetail(const SecurityConfigDetail& value) { m_securityConfigDetail = value; }

    /**
     * <p>Details of the requested security configuration.</p>
     */
    inline void SetSecurityConfigDetail(SecurityConfigDetail&& value) { m_securityConfigDetail = std::move(value); }

    /**
     * <p>Details of the requested security configuration.</p>
     */
    inline GetSecurityConfigResult& WithSecurityConfigDetail(const SecurityConfigDetail& value) { SetSecurityConfigDetail(value); return *this;}

    /**
     * <p>Details of the requested security configuration.</p>
     */
    inline GetSecurityConfigResult& WithSecurityConfigDetail(SecurityConfigDetail&& value) { SetSecurityConfigDetail(std::move(value)); return *this;}

  private:

    SecurityConfigDetail m_securityConfigDetail;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
