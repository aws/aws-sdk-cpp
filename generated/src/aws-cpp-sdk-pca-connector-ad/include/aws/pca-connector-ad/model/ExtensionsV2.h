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
   * <p>Certificate extensions for v2 template schema</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/ExtensionsV2">AWS
   * API Reference</a></p>
   */
  class ExtensionsV2
  {
  public:
    AWS_PCACONNECTORAD_API ExtensionsV2() = default;
    AWS_PCACONNECTORAD_API ExtensionsV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API ExtensionsV2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Application policies specify what the certificate is used for and its
     * purpose. </p>
     */
    inline const ApplicationPolicies& GetApplicationPolicies() const { return m_applicationPolicies; }
    inline bool ApplicationPoliciesHasBeenSet() const { return m_applicationPoliciesHasBeenSet; }
    template<typename ApplicationPoliciesT = ApplicationPolicies>
    void SetApplicationPolicies(ApplicationPoliciesT&& value) { m_applicationPoliciesHasBeenSet = true; m_applicationPolicies = std::forward<ApplicationPoliciesT>(value); }
    template<typename ApplicationPoliciesT = ApplicationPolicies>
    ExtensionsV2& WithApplicationPolicies(ApplicationPoliciesT&& value) { SetApplicationPolicies(std::forward<ApplicationPoliciesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key usage extension defines the purpose (e.g., encipherment, signature,
     * certificate signing) of the key contained in the certificate.</p>
     */
    inline const KeyUsage& GetKeyUsage() const { return m_keyUsage; }
    inline bool KeyUsageHasBeenSet() const { return m_keyUsageHasBeenSet; }
    template<typename KeyUsageT = KeyUsage>
    void SetKeyUsage(KeyUsageT&& value) { m_keyUsageHasBeenSet = true; m_keyUsage = std::forward<KeyUsageT>(value); }
    template<typename KeyUsageT = KeyUsage>
    ExtensionsV2& WithKeyUsage(KeyUsageT&& value) { SetKeyUsage(std::forward<KeyUsageT>(value)); return *this;}
    ///@}
  private:

    ApplicationPolicies m_applicationPolicies;
    bool m_applicationPoliciesHasBeenSet = false;

    KeyUsage m_keyUsage;
    bool m_keyUsageHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
