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
    AWS_NETWORKFIREWALL_API DeleteTLSInspectionConfigurationResult() = default;
    AWS_NETWORKFIREWALL_API DeleteTLSInspectionConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API DeleteTLSInspectionConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The high-level properties of a TLS inspection configuration. This, along with
     * the <a>TLSInspectionConfiguration</a>, define the TLS inspection configuration.
     * You can retrieve all objects for a TLS inspection configuration by calling
     * <a>DescribeTLSInspectionConfiguration</a>. </p>
     */
    inline const TLSInspectionConfigurationResponse& GetTLSInspectionConfigurationResponse() const { return m_tLSInspectionConfigurationResponse; }
    template<typename TLSInspectionConfigurationResponseT = TLSInspectionConfigurationResponse>
    void SetTLSInspectionConfigurationResponse(TLSInspectionConfigurationResponseT&& value) { m_tLSInspectionConfigurationResponseHasBeenSet = true; m_tLSInspectionConfigurationResponse = std::forward<TLSInspectionConfigurationResponseT>(value); }
    template<typename TLSInspectionConfigurationResponseT = TLSInspectionConfigurationResponse>
    DeleteTLSInspectionConfigurationResult& WithTLSInspectionConfigurationResponse(TLSInspectionConfigurationResponseT&& value) { SetTLSInspectionConfigurationResponse(std::forward<TLSInspectionConfigurationResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteTLSInspectionConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TLSInspectionConfigurationResponse m_tLSInspectionConfigurationResponse;
    bool m_tLSInspectionConfigurationResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
