/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/pca-connector-ad/model/ApplicationPolicies.h>
#include <aws/pca-connector-ad/model/KeyUsage.h>
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
namespace PcaConnectorAd
{
namespace Model
{

  /**
   * <p>Certificate extensions for v4 template schema</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/ExtensionsV4">AWS
   * API Reference</a></p>
   */
  class ExtensionsV4
  {
  public:
    AWS_PCACONNECTORAD_API ExtensionsV4();
    AWS_PCACONNECTORAD_API ExtensionsV4(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API ExtensionsV4& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Application policies specify what the certificate is used for and its
     * purpose.</p>
     */
    inline const ApplicationPolicies& GetApplicationPolicies() const{ return m_applicationPolicies; }

    /**
     * <p>Application policies specify what the certificate is used for and its
     * purpose.</p>
     */
    inline bool ApplicationPoliciesHasBeenSet() const { return m_applicationPoliciesHasBeenSet; }

    /**
     * <p>Application policies specify what the certificate is used for and its
     * purpose.</p>
     */
    inline void SetApplicationPolicies(const ApplicationPolicies& value) { m_applicationPoliciesHasBeenSet = true; m_applicationPolicies = value; }

    /**
     * <p>Application policies specify what the certificate is used for and its
     * purpose.</p>
     */
    inline void SetApplicationPolicies(ApplicationPolicies&& value) { m_applicationPoliciesHasBeenSet = true; m_applicationPolicies = std::move(value); }

    /**
     * <p>Application policies specify what the certificate is used for and its
     * purpose.</p>
     */
    inline ExtensionsV4& WithApplicationPolicies(const ApplicationPolicies& value) { SetApplicationPolicies(value); return *this;}

    /**
     * <p>Application policies specify what the certificate is used for and its
     * purpose.</p>
     */
    inline ExtensionsV4& WithApplicationPolicies(ApplicationPolicies&& value) { SetApplicationPolicies(std::move(value)); return *this;}


    /**
     * <p>The key usage extension defines the purpose (e.g., encipherment, signature)
     * of the key contained in the certificate.</p>
     */
    inline const KeyUsage& GetKeyUsage() const{ return m_keyUsage; }

    /**
     * <p>The key usage extension defines the purpose (e.g., encipherment, signature)
     * of the key contained in the certificate.</p>
     */
    inline bool KeyUsageHasBeenSet() const { return m_keyUsageHasBeenSet; }

    /**
     * <p>The key usage extension defines the purpose (e.g., encipherment, signature)
     * of the key contained in the certificate.</p>
     */
    inline void SetKeyUsage(const KeyUsage& value) { m_keyUsageHasBeenSet = true; m_keyUsage = value; }

    /**
     * <p>The key usage extension defines the purpose (e.g., encipherment, signature)
     * of the key contained in the certificate.</p>
     */
    inline void SetKeyUsage(KeyUsage&& value) { m_keyUsageHasBeenSet = true; m_keyUsage = std::move(value); }

    /**
     * <p>The key usage extension defines the purpose (e.g., encipherment, signature)
     * of the key contained in the certificate.</p>
     */
    inline ExtensionsV4& WithKeyUsage(const KeyUsage& value) { SetKeyUsage(value); return *this;}

    /**
     * <p>The key usage extension defines the purpose (e.g., encipherment, signature)
     * of the key contained in the certificate.</p>
     */
    inline ExtensionsV4& WithKeyUsage(KeyUsage&& value) { SetKeyUsage(std::move(value)); return *this;}

  private:

    ApplicationPolicies m_applicationPolicies;
    bool m_applicationPoliciesHasBeenSet = false;

    KeyUsage m_keyUsage;
    bool m_keyUsageHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
