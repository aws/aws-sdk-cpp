/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/TrustedTokenIssuerType.h>
#include <aws/sso-admin/model/TrustedTokenIssuerConfiguration.h>
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
namespace SSOAdmin
{
namespace Model
{
  class DescribeTrustedTokenIssuerResult
  {
  public:
    AWS_SSOADMIN_API DescribeTrustedTokenIssuerResult() = default;
    AWS_SSOADMIN_API DescribeTrustedTokenIssuerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API DescribeTrustedTokenIssuerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the trusted token issuer configuration.</p>
     */
    inline const Aws::String& GetTrustedTokenIssuerArn() const { return m_trustedTokenIssuerArn; }
    template<typename TrustedTokenIssuerArnT = Aws::String>
    void SetTrustedTokenIssuerArn(TrustedTokenIssuerArnT&& value) { m_trustedTokenIssuerArnHasBeenSet = true; m_trustedTokenIssuerArn = std::forward<TrustedTokenIssuerArnT>(value); }
    template<typename TrustedTokenIssuerArnT = Aws::String>
    DescribeTrustedTokenIssuerResult& WithTrustedTokenIssuerArn(TrustedTokenIssuerArnT&& value) { SetTrustedTokenIssuerArn(std::forward<TrustedTokenIssuerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the trusted token issuer configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeTrustedTokenIssuerResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the trusted token issuer.</p>
     */
    inline TrustedTokenIssuerType GetTrustedTokenIssuerType() const { return m_trustedTokenIssuerType; }
    inline void SetTrustedTokenIssuerType(TrustedTokenIssuerType value) { m_trustedTokenIssuerTypeHasBeenSet = true; m_trustedTokenIssuerType = value; }
    inline DescribeTrustedTokenIssuerResult& WithTrustedTokenIssuerType(TrustedTokenIssuerType value) { SetTrustedTokenIssuerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure the describes the settings that apply of this trusted token
     * issuer.</p>
     */
    inline const TrustedTokenIssuerConfiguration& GetTrustedTokenIssuerConfiguration() const { return m_trustedTokenIssuerConfiguration; }
    template<typename TrustedTokenIssuerConfigurationT = TrustedTokenIssuerConfiguration>
    void SetTrustedTokenIssuerConfiguration(TrustedTokenIssuerConfigurationT&& value) { m_trustedTokenIssuerConfigurationHasBeenSet = true; m_trustedTokenIssuerConfiguration = std::forward<TrustedTokenIssuerConfigurationT>(value); }
    template<typename TrustedTokenIssuerConfigurationT = TrustedTokenIssuerConfiguration>
    DescribeTrustedTokenIssuerResult& WithTrustedTokenIssuerConfiguration(TrustedTokenIssuerConfigurationT&& value) { SetTrustedTokenIssuerConfiguration(std::forward<TrustedTokenIssuerConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeTrustedTokenIssuerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trustedTokenIssuerArn;
    bool m_trustedTokenIssuerArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TrustedTokenIssuerType m_trustedTokenIssuerType{TrustedTokenIssuerType::NOT_SET};
    bool m_trustedTokenIssuerTypeHasBeenSet = false;

    TrustedTokenIssuerConfiguration m_trustedTokenIssuerConfiguration;
    bool m_trustedTokenIssuerConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
