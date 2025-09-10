/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace PaymentCryptography
{
namespace Model
{
  /**
   * <p>Output containing the account's current default key replication
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/GetDefaultKeyReplicationRegionsOutput">AWS
   * API Reference</a></p>
   */
  class GetDefaultKeyReplicationRegionsResult
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API GetDefaultKeyReplicationRegionsResult() = default;
    AWS_PAYMENTCRYPTOGRAPHY_API GetDefaultKeyReplicationRegionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PAYMENTCRYPTOGRAPHY_API GetDefaultKeyReplicationRegionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of regions where default key replication is currently enabled for
     * the account.</p> <p>New keys created in this account will automatically be
     * replicated to these regions unless explicitly configured otherwise during key
     * creation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnabledReplicationRegions() const { return m_enabledReplicationRegions; }
    template<typename EnabledReplicationRegionsT = Aws::Vector<Aws::String>>
    void SetEnabledReplicationRegions(EnabledReplicationRegionsT&& value) { m_enabledReplicationRegionsHasBeenSet = true; m_enabledReplicationRegions = std::forward<EnabledReplicationRegionsT>(value); }
    template<typename EnabledReplicationRegionsT = Aws::Vector<Aws::String>>
    GetDefaultKeyReplicationRegionsResult& WithEnabledReplicationRegions(EnabledReplicationRegionsT&& value) { SetEnabledReplicationRegions(std::forward<EnabledReplicationRegionsT>(value)); return *this;}
    template<typename EnabledReplicationRegionsT = Aws::String>
    GetDefaultKeyReplicationRegionsResult& AddEnabledReplicationRegions(EnabledReplicationRegionsT&& value) { m_enabledReplicationRegionsHasBeenSet = true; m_enabledReplicationRegions.emplace_back(std::forward<EnabledReplicationRegionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDefaultKeyReplicationRegionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_enabledReplicationRegions;
    bool m_enabledReplicationRegionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
