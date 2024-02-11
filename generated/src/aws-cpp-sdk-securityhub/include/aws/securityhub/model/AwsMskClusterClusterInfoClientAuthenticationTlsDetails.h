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
    AWS_SECURITYHUB_API AwsMskClusterClusterInfoClientAuthenticationTlsDetails();
    AWS_SECURITYHUB_API AwsMskClusterClusterInfoClientAuthenticationTlsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsMskClusterClusterInfoClientAuthenticationTlsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> List of Amazon Web Services Private CA Amazon Resource Names (ARNs). Amazon
     * Web Services Private CA enables creation of private certificate authority (CA)
     * hierarchies, including root and subordinate CAs, without the investment and
     * maintenance costs of operating an on-premises CA.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCertificateAuthorityArnList() const{ return m_certificateAuthorityArnList; }

    /**
     * <p> List of Amazon Web Services Private CA Amazon Resource Names (ARNs). Amazon
     * Web Services Private CA enables creation of private certificate authority (CA)
     * hierarchies, including root and subordinate CAs, without the investment and
     * maintenance costs of operating an on-premises CA.</p>
     */
    inline bool CertificateAuthorityArnListHasBeenSet() const { return m_certificateAuthorityArnListHasBeenSet; }

    /**
     * <p> List of Amazon Web Services Private CA Amazon Resource Names (ARNs). Amazon
     * Web Services Private CA enables creation of private certificate authority (CA)
     * hierarchies, including root and subordinate CAs, without the investment and
     * maintenance costs of operating an on-premises CA.</p>
     */
    inline void SetCertificateAuthorityArnList(const Aws::Vector<Aws::String>& value) { m_certificateAuthorityArnListHasBeenSet = true; m_certificateAuthorityArnList = value; }

    /**
     * <p> List of Amazon Web Services Private CA Amazon Resource Names (ARNs). Amazon
     * Web Services Private CA enables creation of private certificate authority (CA)
     * hierarchies, including root and subordinate CAs, without the investment and
     * maintenance costs of operating an on-premises CA.</p>
     */
    inline void SetCertificateAuthorityArnList(Aws::Vector<Aws::String>&& value) { m_certificateAuthorityArnListHasBeenSet = true; m_certificateAuthorityArnList = std::move(value); }

    /**
     * <p> List of Amazon Web Services Private CA Amazon Resource Names (ARNs). Amazon
     * Web Services Private CA enables creation of private certificate authority (CA)
     * hierarchies, including root and subordinate CAs, without the investment and
     * maintenance costs of operating an on-premises CA.</p>
     */
    inline AwsMskClusterClusterInfoClientAuthenticationTlsDetails& WithCertificateAuthorityArnList(const Aws::Vector<Aws::String>& value) { SetCertificateAuthorityArnList(value); return *this;}

    /**
     * <p> List of Amazon Web Services Private CA Amazon Resource Names (ARNs). Amazon
     * Web Services Private CA enables creation of private certificate authority (CA)
     * hierarchies, including root and subordinate CAs, without the investment and
     * maintenance costs of operating an on-premises CA.</p>
     */
    inline AwsMskClusterClusterInfoClientAuthenticationTlsDetails& WithCertificateAuthorityArnList(Aws::Vector<Aws::String>&& value) { SetCertificateAuthorityArnList(std::move(value)); return *this;}

    /**
     * <p> List of Amazon Web Services Private CA Amazon Resource Names (ARNs). Amazon
     * Web Services Private CA enables creation of private certificate authority (CA)
     * hierarchies, including root and subordinate CAs, without the investment and
     * maintenance costs of operating an on-premises CA.</p>
     */
    inline AwsMskClusterClusterInfoClientAuthenticationTlsDetails& AddCertificateAuthorityArnList(const Aws::String& value) { m_certificateAuthorityArnListHasBeenSet = true; m_certificateAuthorityArnList.push_back(value); return *this; }

    /**
     * <p> List of Amazon Web Services Private CA Amazon Resource Names (ARNs). Amazon
     * Web Services Private CA enables creation of private certificate authority (CA)
     * hierarchies, including root and subordinate CAs, without the investment and
     * maintenance costs of operating an on-premises CA.</p>
     */
    inline AwsMskClusterClusterInfoClientAuthenticationTlsDetails& AddCertificateAuthorityArnList(Aws::String&& value) { m_certificateAuthorityArnListHasBeenSet = true; m_certificateAuthorityArnList.push_back(std::move(value)); return *this; }

    /**
     * <p> List of Amazon Web Services Private CA Amazon Resource Names (ARNs). Amazon
     * Web Services Private CA enables creation of private certificate authority (CA)
     * hierarchies, including root and subordinate CAs, without the investment and
     * maintenance costs of operating an on-premises CA.</p>
     */
    inline AwsMskClusterClusterInfoClientAuthenticationTlsDetails& AddCertificateAuthorityArnList(const char* value) { m_certificateAuthorityArnListHasBeenSet = true; m_certificateAuthorityArnList.push_back(value); return *this; }


    /**
     * <p> Indicates whether TLS authentication is enabled or not.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p> Indicates whether TLS authentication is enabled or not.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p> Indicates whether TLS authentication is enabled or not.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p> Indicates whether TLS authentication is enabled or not.</p>
     */
    inline AwsMskClusterClusterInfoClientAuthenticationTlsDetails& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_certificateAuthorityArnList;
    bool m_certificateAuthorityArnListHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
