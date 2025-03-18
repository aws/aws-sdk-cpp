/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/meteringmarketplace/MarketplaceMetering_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace MarketplaceMetering
{
namespace Model
{
  class RegisterUsageResult
  {
  public:
    AWS_MARKETPLACEMETERING_API RegisterUsageResult() = default;
    AWS_MARKETPLACEMETERING_API RegisterUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MARKETPLACEMETERING_API RegisterUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>(Optional) Only included when public key version has expired</p>
     */
    inline const Aws::Utils::DateTime& GetPublicKeyRotationTimestamp() const { return m_publicKeyRotationTimestamp; }
    template<typename PublicKeyRotationTimestampT = Aws::Utils::DateTime>
    void SetPublicKeyRotationTimestamp(PublicKeyRotationTimestampT&& value) { m_publicKeyRotationTimestampHasBeenSet = true; m_publicKeyRotationTimestamp = std::forward<PublicKeyRotationTimestampT>(value); }
    template<typename PublicKeyRotationTimestampT = Aws::Utils::DateTime>
    RegisterUsageResult& WithPublicKeyRotationTimestamp(PublicKeyRotationTimestampT&& value) { SetPublicKeyRotationTimestamp(std::forward<PublicKeyRotationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>JWT Token</p>
     */
    inline const Aws::String& GetSignature() const { return m_signature; }
    template<typename SignatureT = Aws::String>
    void SetSignature(SignatureT&& value) { m_signatureHasBeenSet = true; m_signature = std::forward<SignatureT>(value); }
    template<typename SignatureT = Aws::String>
    RegisterUsageResult& WithSignature(SignatureT&& value) { SetSignature(std::forward<SignatureT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RegisterUsageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_publicKeyRotationTimestamp{};
    bool m_publicKeyRotationTimestampHasBeenSet = false;

    Aws::String m_signature;
    bool m_signatureHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceMetering
} // namespace Aws
