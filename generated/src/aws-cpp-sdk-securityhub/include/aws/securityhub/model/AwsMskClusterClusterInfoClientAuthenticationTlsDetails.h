/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Provides details for client authentication using TLS.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsMskClusterClusterInfoClientAuthenticationTlsDetails">AWS
   * API Reference</a></p>
   */
  class AwsMskClusterClusterInfoClientAuthenticationTlsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsMskClusterClusterInfoClientAuthenticationTlsDetails() = default;
    AWS_SECURITYHUB_API AwsMskClusterClusterInfoClientAuthenticationTlsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsMskClusterClusterInfoClientAuthenticationTlsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> List of Amazon Web Services Private CA Amazon Resource Names (ARNs). Amazon
     * Web Services Private CA enables creation of private certificate authority (CA)
     * hierarchies, including root and subordinate CAs, without the investment and
     * maintenance costs of operating an on-premises CA.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCertificateAuthorityArnList() const { return m_certificateAuthorityArnList; }
    inline bool CertificateAuthorityArnListHasBeenSet() const { return m_certificateAuthorityArnListHasBeenSet; }
    template<typename CertificateAuthorityArnListT = Aws::Vector<Aws::String>>
    void SetCertificateAuthorityArnList(CertificateAuthorityArnListT&& value) { m_certificateAuthorityArnListHasBeenSet = true; m_certificateAuthorityArnList = std::forward<CertificateAuthorityArnListT>(value); }
    template<typename CertificateAuthorityArnListT = Aws::Vector<Aws::String>>
    AwsMskClusterClusterInfoClientAuthenticationTlsDetails& WithCertificateAuthorityArnList(CertificateAuthorityArnListT&& value) { SetCertificateAuthorityArnList(std::forward<CertificateAuthorityArnListT>(value)); return *this;}
    template<typename CertificateAuthorityArnListT = Aws::String>
    AwsMskClusterClusterInfoClientAuthenticationTlsDetails& AddCertificateAuthorityArnList(CertificateAuthorityArnListT&& value) { m_certificateAuthorityArnListHasBeenSet = true; m_certificateAuthorityArnList.emplace_back(std::forward<CertificateAuthorityArnListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Indicates whether TLS authentication is enabled or not.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline AwsMskClusterClusterInfoClientAuthenticationTlsDetails& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_certificateAuthorityArnList;
    bool m_certificateAuthorityArnListHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
