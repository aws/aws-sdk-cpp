/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   * <p>The browser settings resource that can be associated with a web portal. Once
   * associated with a web portal, browser settings control how the browser will
   * behave once a user starts a streaming session for the web portal. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/BrowserSettings">AWS
   * API Reference</a></p>
   */
  class BrowserSettings
  {
  public:
    AWS_WORKSPACESWEB_API BrowserSettings() = default;
    AWS_WORKSPACESWEB_API BrowserSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API BrowserSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline const Aws::String& GetBrowserSettingsArn() const { return m_browserSettingsArn; }
    inline bool BrowserSettingsArnHasBeenSet() const { return m_browserSettingsArnHasBeenSet; }
    template<typename BrowserSettingsArnT = Aws::String>
    void SetBrowserSettingsArn(BrowserSettingsArnT&& value) { m_browserSettingsArnHasBeenSet = true; m_browserSettingsArn = std::forward<BrowserSettingsArnT>(value); }
    template<typename BrowserSettingsArnT = Aws::String>
    BrowserSettings& WithBrowserSettingsArn(BrowserSettingsArnT&& value) { SetBrowserSettingsArn(std::forward<BrowserSettingsArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of web portal ARNs that this browser settings is associated with.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociatedPortalArns() const { return m_associatedPortalArns; }
    inline bool AssociatedPortalArnsHasBeenSet() const { return m_associatedPortalArnsHasBeenSet; }
    template<typename AssociatedPortalArnsT = Aws::Vector<Aws::String>>
    void SetAssociatedPortalArns(AssociatedPortalArnsT&& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns = std::forward<AssociatedPortalArnsT>(value); }
    template<typename AssociatedPortalArnsT = Aws::Vector<Aws::String>>
    BrowserSettings& WithAssociatedPortalArns(AssociatedPortalArnsT&& value) { SetAssociatedPortalArns(std::forward<AssociatedPortalArnsT>(value)); return *this;}
    template<typename AssociatedPortalArnsT = Aws::String>
    BrowserSettings& AddAssociatedPortalArns(AssociatedPortalArnsT&& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns.emplace_back(std::forward<AssociatedPortalArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A JSON string containing Chrome Enterprise policies that will be applied to
     * all streaming sessions.</p>
     */
    inline const Aws::String& GetBrowserPolicy() const { return m_browserPolicy; }
    inline bool BrowserPolicyHasBeenSet() const { return m_browserPolicyHasBeenSet; }
    template<typename BrowserPolicyT = Aws::String>
    void SetBrowserPolicy(BrowserPolicyT&& value) { m_browserPolicyHasBeenSet = true; m_browserPolicy = std::forward<BrowserPolicyT>(value); }
    template<typename BrowserPolicyT = Aws::String>
    BrowserSettings& WithBrowserPolicy(BrowserPolicyT&& value) { SetBrowserPolicy(std::forward<BrowserPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer managed key used to encrypt sensitive information in the browser
     * settings.</p>
     */
    inline const Aws::String& GetCustomerManagedKey() const { return m_customerManagedKey; }
    inline bool CustomerManagedKeyHasBeenSet() const { return m_customerManagedKeyHasBeenSet; }
    template<typename CustomerManagedKeyT = Aws::String>
    void SetCustomerManagedKey(CustomerManagedKeyT&& value) { m_customerManagedKeyHasBeenSet = true; m_customerManagedKey = std::forward<CustomerManagedKeyT>(value); }
    template<typename CustomerManagedKeyT = Aws::String>
    BrowserSettings& WithCustomerManagedKey(CustomerManagedKeyT&& value) { SetCustomerManagedKey(std::forward<CustomerManagedKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The additional encryption context of the browser settings.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalEncryptionContext() const { return m_additionalEncryptionContext; }
    inline bool AdditionalEncryptionContextHasBeenSet() const { return m_additionalEncryptionContextHasBeenSet; }
    template<typename AdditionalEncryptionContextT = Aws::Map<Aws::String, Aws::String>>
    void SetAdditionalEncryptionContext(AdditionalEncryptionContextT&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext = std::forward<AdditionalEncryptionContextT>(value); }
    template<typename AdditionalEncryptionContextT = Aws::Map<Aws::String, Aws::String>>
    BrowserSettings& WithAdditionalEncryptionContext(AdditionalEncryptionContextT&& value) { SetAdditionalEncryptionContext(std::forward<AdditionalEncryptionContextT>(value)); return *this;}
    template<typename AdditionalEncryptionContextKeyT = Aws::String, typename AdditionalEncryptionContextValueT = Aws::String>
    BrowserSettings& AddAdditionalEncryptionContext(AdditionalEncryptionContextKeyT&& key, AdditionalEncryptionContextValueT&& value) {
      m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(std::forward<AdditionalEncryptionContextKeyT>(key), std::forward<AdditionalEncryptionContextValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_browserSettingsArn;
    bool m_browserSettingsArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_associatedPortalArns;
    bool m_associatedPortalArnsHasBeenSet = false;

    Aws::String m_browserPolicy;
    bool m_browserPolicyHasBeenSet = false;

    Aws::String m_customerManagedKey;
    bool m_customerManagedKeyHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_additionalEncryptionContext;
    bool m_additionalEncryptionContextHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
