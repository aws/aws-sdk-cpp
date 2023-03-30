/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/TLSInspectionConfigurationResponse.h>
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
namespace NetworkFirewall
{
namespace Model
{
  class UpdateTLSInspectionConfigurationResult
  {
  public:
    AWS_NETWORKFIREWALL_API UpdateTLSInspectionConfigurationResult();
    AWS_NETWORKFIREWALL_API UpdateTLSInspectionConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API UpdateTLSInspectionConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the TLS inspection configuration. The token marks the state
     * of the TLS inspection configuration resource at the time of the request. </p>
     * <p>To make changes to the TLS inspection configuration, you provide the token in
     * your request. Network Firewall uses the token to ensure that the TLS inspection
     * configuration hasn't changed since you last retrieved it. If it has changed, the
     * operation fails with an <code>InvalidTokenException</code>. If this happens,
     * retrieve the TLS inspection configuration again to get a current copy of it with
     * a current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline const Aws::String& GetUpdateToken() const{ return m_updateToken; }

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the TLS inspection configuration. The token marks the state
     * of the TLS inspection configuration resource at the time of the request. </p>
     * <p>To make changes to the TLS inspection configuration, you provide the token in
     * your request. Network Firewall uses the token to ensure that the TLS inspection
     * configuration hasn't changed since you last retrieved it. If it has changed, the
     * operation fails with an <code>InvalidTokenException</code>. If this happens,
     * retrieve the TLS inspection configuration again to get a current copy of it with
     * a current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline void SetUpdateToken(const Aws::String& value) { m_updateToken = value; }

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the TLS inspection configuration. The token marks the state
     * of the TLS inspection configuration resource at the time of the request. </p>
     * <p>To make changes to the TLS inspection configuration, you provide the token in
     * your request. Network Firewall uses the token to ensure that the TLS inspection
     * configuration hasn't changed since you last retrieved it. If it has changed, the
     * operation fails with an <code>InvalidTokenException</code>. If this happens,
     * retrieve the TLS inspection configuration again to get a current copy of it with
     * a current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline void SetUpdateToken(Aws::String&& value) { m_updateToken = std::move(value); }

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the TLS inspection configuration. The token marks the state
     * of the TLS inspection configuration resource at the time of the request. </p>
     * <p>To make changes to the TLS inspection configuration, you provide the token in
     * your request. Network Firewall uses the token to ensure that the TLS inspection
     * configuration hasn't changed since you last retrieved it. If it has changed, the
     * operation fails with an <code>InvalidTokenException</code>. If this happens,
     * retrieve the TLS inspection configuration again to get a current copy of it with
     * a current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline void SetUpdateToken(const char* value) { m_updateToken.assign(value); }

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the TLS inspection configuration. The token marks the state
     * of the TLS inspection configuration resource at the time of the request. </p>
     * <p>To make changes to the TLS inspection configuration, you provide the token in
     * your request. Network Firewall uses the token to ensure that the TLS inspection
     * configuration hasn't changed since you last retrieved it. If it has changed, the
     * operation fails with an <code>InvalidTokenException</code>. If this happens,
     * retrieve the TLS inspection configuration again to get a current copy of it with
     * a current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline UpdateTLSInspectionConfigurationResult& WithUpdateToken(const Aws::String& value) { SetUpdateToken(value); return *this;}

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the TLS inspection configuration. The token marks the state
     * of the TLS inspection configuration resource at the time of the request. </p>
     * <p>To make changes to the TLS inspection configuration, you provide the token in
     * your request. Network Firewall uses the token to ensure that the TLS inspection
     * configuration hasn't changed since you last retrieved it. If it has changed, the
     * operation fails with an <code>InvalidTokenException</code>. If this happens,
     * retrieve the TLS inspection configuration again to get a current copy of it with
     * a current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline UpdateTLSInspectionConfigurationResult& WithUpdateToken(Aws::String&& value) { SetUpdateToken(std::move(value)); return *this;}

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the TLS inspection configuration. The token marks the state
     * of the TLS inspection configuration resource at the time of the request. </p>
     * <p>To make changes to the TLS inspection configuration, you provide the token in
     * your request. Network Firewall uses the token to ensure that the TLS inspection
     * configuration hasn't changed since you last retrieved it. If it has changed, the
     * operation fails with an <code>InvalidTokenException</code>. If this happens,
     * retrieve the TLS inspection configuration again to get a current copy of it with
     * a current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline UpdateTLSInspectionConfigurationResult& WithUpdateToken(const char* value) { SetUpdateToken(value); return *this;}


    /**
     * <p>The high-level properties of a TLS inspection configuration. This, along with
     * the <a>TLSInspectionConfiguration</a>, define the TLS inspection configuration.
     * You can retrieve all objects for a TLS inspection configuration by calling
     * <a>DescribeTLSInspectionConfiguration</a>. </p>
     */
    inline const TLSInspectionConfigurationResponse& GetTLSInspectionConfigurationResponse() const{ return m_tLSInspectionConfigurationResponse; }

    /**
     * <p>The high-level properties of a TLS inspection configuration. This, along with
     * the <a>TLSInspectionConfiguration</a>, define the TLS inspection configuration.
     * You can retrieve all objects for a TLS inspection configuration by calling
     * <a>DescribeTLSInspectionConfiguration</a>. </p>
     */
    inline void SetTLSInspectionConfigurationResponse(const TLSInspectionConfigurationResponse& value) { m_tLSInspectionConfigurationResponse = value; }

    /**
     * <p>The high-level properties of a TLS inspection configuration. This, along with
     * the <a>TLSInspectionConfiguration</a>, define the TLS inspection configuration.
     * You can retrieve all objects for a TLS inspection configuration by calling
     * <a>DescribeTLSInspectionConfiguration</a>. </p>
     */
    inline void SetTLSInspectionConfigurationResponse(TLSInspectionConfigurationResponse&& value) { m_tLSInspectionConfigurationResponse = std::move(value); }

    /**
     * <p>The high-level properties of a TLS inspection configuration. This, along with
     * the <a>TLSInspectionConfiguration</a>, define the TLS inspection configuration.
     * You can retrieve all objects for a TLS inspection configuration by calling
     * <a>DescribeTLSInspectionConfiguration</a>. </p>
     */
    inline UpdateTLSInspectionConfigurationResult& WithTLSInspectionConfigurationResponse(const TLSInspectionConfigurationResponse& value) { SetTLSInspectionConfigurationResponse(value); return *this;}

    /**
     * <p>The high-level properties of a TLS inspection configuration. This, along with
     * the <a>TLSInspectionConfiguration</a>, define the TLS inspection configuration.
     * You can retrieve all objects for a TLS inspection configuration by calling
     * <a>DescribeTLSInspectionConfiguration</a>. </p>
     */
    inline UpdateTLSInspectionConfigurationResult& WithTLSInspectionConfigurationResponse(TLSInspectionConfigurationResponse&& value) { SetTLSInspectionConfigurationResponse(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateTLSInspectionConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateTLSInspectionConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateTLSInspectionConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_updateToken;

    TLSInspectionConfigurationResponse m_tLSInspectionConfigurationResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
