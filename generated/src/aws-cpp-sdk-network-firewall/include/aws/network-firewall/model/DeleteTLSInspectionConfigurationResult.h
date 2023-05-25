/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/TLSInspectionConfigurationResponse.h>
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
namespace NetworkFirewall
{
namespace Model
{
  class DeleteTLSInspectionConfigurationResult
  {
  public:
    AWS_NETWORKFIREWALL_API DeleteTLSInspectionConfigurationResult();
    AWS_NETWORKFIREWALL_API DeleteTLSInspectionConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API DeleteTLSInspectionConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DeleteTLSInspectionConfigurationResult& WithTLSInspectionConfigurationResponse(const TLSInspectionConfigurationResponse& value) { SetTLSInspectionConfigurationResponse(value); return *this;}

    /**
     * <p>The high-level properties of a TLS inspection configuration. This, along with
     * the <a>TLSInspectionConfiguration</a>, define the TLS inspection configuration.
     * You can retrieve all objects for a TLS inspection configuration by calling
     * <a>DescribeTLSInspectionConfiguration</a>. </p>
     */
    inline DeleteTLSInspectionConfigurationResult& WithTLSInspectionConfigurationResponse(TLSInspectionConfigurationResponse&& value) { SetTLSInspectionConfigurationResponse(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteTLSInspectionConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteTLSInspectionConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteTLSInspectionConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    TLSInspectionConfigurationResponse m_tLSInspectionConfigurationResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
