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
   * <p>Output from enabling default key replication regions for the
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/EnableDefaultKeyReplicationRegionsOutput">AWS
   * API Reference</a></p>
   */
  class EnableDefaultKeyReplicationRegionsResult
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API EnableDefaultKeyReplicationRegionsResult() = default;
    AWS_PAYMENTCRYPTOGRAPHY_API EnableDefaultKeyReplicationRegionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PAYMENTCRYPTOGRAPHY_API EnableDefaultKeyReplicationRegionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The complete list of regions where default key replication is now enabled for
     * the account.</p> <p>This includes both previously enabled regions and the newly
     * added regions from this operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnabledReplicationRegions() const { return m_enabledReplicationRegions; }
    template<typename EnabledReplicationRegionsT = Aws::Vector<Aws::String>>
    void SetEnabledReplicationRegions(EnabledReplicationRegionsT&& value) { m_enabledReplicationRegionsHasBeenSet = true; m_enabledReplicationRegions = std::forward<EnabledReplicationRegionsT>(value); }
    template<typename EnabledReplicationRegionsT = Aws::Vector<Aws::String>>
    EnableDefaultKeyReplicationRegionsResult& WithEnabledReplicationRegions(EnabledReplicationRegionsT&& value) { SetEnabledReplicationRegions(std::forward<EnabledReplicationRegionsT>(value)); return *this;}
    template<typename EnabledReplicationRegionsT = Aws::String>
    EnableDefaultKeyReplicationRegionsResult& AddEnabledReplicationRegions(EnabledReplicationRegionsT&& value) { m_enabledReplicationRegionsHasBeenSet = true; m_enabledReplicationRegions.emplace_back(std::forward<EnabledReplicationRegionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    EnableDefaultKeyReplicationRegionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
