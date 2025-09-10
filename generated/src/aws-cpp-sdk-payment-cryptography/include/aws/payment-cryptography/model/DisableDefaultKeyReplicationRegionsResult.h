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
   * <p>Output from disabling default key replication regions for the
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/DisableDefaultKeyReplicationRegionsOutput">AWS
   * API Reference</a></p>
   */
  class DisableDefaultKeyReplicationRegionsResult
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API DisableDefaultKeyReplicationRegionsResult() = default;
    AWS_PAYMENTCRYPTOGRAPHY_API DisableDefaultKeyReplicationRegionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PAYMENTCRYPTOGRAPHY_API DisableDefaultKeyReplicationRegionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The remaining list of regions where default key replication is still enabled
     * for the account.</p> <p>This reflects the account's default replication
     * configuration after removing the specified regions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnabledReplicationRegions() const { return m_enabledReplicationRegions; }
    template<typename EnabledReplicationRegionsT = Aws::Vector<Aws::String>>
    void SetEnabledReplicationRegions(EnabledReplicationRegionsT&& value) { m_enabledReplicationRegionsHasBeenSet = true; m_enabledReplicationRegions = std::forward<EnabledReplicationRegionsT>(value); }
    template<typename EnabledReplicationRegionsT = Aws::Vector<Aws::String>>
    DisableDefaultKeyReplicationRegionsResult& WithEnabledReplicationRegions(EnabledReplicationRegionsT&& value) { SetEnabledReplicationRegions(std::forward<EnabledReplicationRegionsT>(value)); return *this;}
    template<typename EnabledReplicationRegionsT = Aws::String>
    DisableDefaultKeyReplicationRegionsResult& AddEnabledReplicationRegions(EnabledReplicationRegionsT&& value) { m_enabledReplicationRegionsHasBeenSet = true; m_enabledReplicationRegions.emplace_back(std::forward<EnabledReplicationRegionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DisableDefaultKeyReplicationRegionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
