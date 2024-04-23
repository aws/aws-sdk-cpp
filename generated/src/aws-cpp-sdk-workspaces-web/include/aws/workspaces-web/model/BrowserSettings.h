/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
    AWS_WORKSPACESWEB_API BrowserSettings();
    AWS_WORKSPACESWEB_API BrowserSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API BrowserSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The additional encryption context of the browser settings.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalEncryptionContext() const{ return m_additionalEncryptionContext; }

    /**
     * <p>The additional encryption context of the browser settings.</p>
     */
    inline bool AdditionalEncryptionContextHasBeenSet() const { return m_additionalEncryptionContextHasBeenSet; }

    /**
     * <p>The additional encryption context of the browser settings.</p>
     */
    inline void SetAdditionalEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext = value; }

    /**
     * <p>The additional encryption context of the browser settings.</p>
     */
    inline void SetAdditionalEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext = std::move(value); }

    /**
     * <p>The additional encryption context of the browser settings.</p>
     */
    inline BrowserSettings& WithAdditionalEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalEncryptionContext(value); return *this;}

    /**
     * <p>The additional encryption context of the browser settings.</p>
     */
    inline BrowserSettings& WithAdditionalEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalEncryptionContext(std::move(value)); return *this;}

    /**
     * <p>The additional encryption context of the browser settings.</p>
     */
    inline BrowserSettings& AddAdditionalEncryptionContext(const Aws::String& key, const Aws::String& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, value); return *this; }

    /**
     * <p>The additional encryption context of the browser settings.</p>
     */
    inline BrowserSettings& AddAdditionalEncryptionContext(Aws::String&& key, const Aws::String& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>The additional encryption context of the browser settings.</p>
     */
    inline BrowserSettings& AddAdditionalEncryptionContext(const Aws::String& key, Aws::String&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The additional encryption context of the browser settings.</p>
     */
    inline BrowserSettings& AddAdditionalEncryptionContext(Aws::String&& key, Aws::String&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The additional encryption context of the browser settings.</p>
     */
    inline BrowserSettings& AddAdditionalEncryptionContext(const char* key, Aws::String&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The additional encryption context of the browser settings.</p>
     */
    inline BrowserSettings& AddAdditionalEncryptionContext(Aws::String&& key, const char* value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>The additional encryption context of the browser settings.</p>
     */
    inline BrowserSettings& AddAdditionalEncryptionContext(const char* key, const char* value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, value); return *this; }


    /**
     * <p>A list of web portal ARNs that this browser settings is associated with.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociatedPortalArns() const{ return m_associatedPortalArns; }

    /**
     * <p>A list of web portal ARNs that this browser settings is associated with.</p>
     */
    inline bool AssociatedPortalArnsHasBeenSet() const { return m_associatedPortalArnsHasBeenSet; }

    /**
     * <p>A list of web portal ARNs that this browser settings is associated with.</p>
     */
    inline void SetAssociatedPortalArns(const Aws::Vector<Aws::String>& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns = value; }

    /**
     * <p>A list of web portal ARNs that this browser settings is associated with.</p>
     */
    inline void SetAssociatedPortalArns(Aws::Vector<Aws::String>&& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns = std::move(value); }

    /**
     * <p>A list of web portal ARNs that this browser settings is associated with.</p>
     */
    inline BrowserSettings& WithAssociatedPortalArns(const Aws::Vector<Aws::String>& value) { SetAssociatedPortalArns(value); return *this;}

    /**
     * <p>A list of web portal ARNs that this browser settings is associated with.</p>
     */
    inline BrowserSettings& WithAssociatedPortalArns(Aws::Vector<Aws::String>&& value) { SetAssociatedPortalArns(std::move(value)); return *this;}

    /**
     * <p>A list of web portal ARNs that this browser settings is associated with.</p>
     */
    inline BrowserSettings& AddAssociatedPortalArns(const Aws::String& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns.push_back(value); return *this; }

    /**
     * <p>A list of web portal ARNs that this browser settings is associated with.</p>
     */
    inline BrowserSettings& AddAssociatedPortalArns(Aws::String&& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of web portal ARNs that this browser settings is associated with.</p>
     */
    inline BrowserSettings& AddAssociatedPortalArns(const char* value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns.push_back(value); return *this; }


    /**
     * <p>A JSON string containing Chrome Enterprise policies that will be applied to
     * all streaming sessions.</p>
     */
    inline const Aws::String& GetBrowserPolicy() const{ return m_browserPolicy; }

    /**
     * <p>A JSON string containing Chrome Enterprise policies that will be applied to
     * all streaming sessions.</p>
     */
    inline bool BrowserPolicyHasBeenSet() const { return m_browserPolicyHasBeenSet; }

    /**
     * <p>A JSON string containing Chrome Enterprise policies that will be applied to
     * all streaming sessions.</p>
     */
    inline void SetBrowserPolicy(const Aws::String& value) { m_browserPolicyHasBeenSet = true; m_browserPolicy = value; }

    /**
     * <p>A JSON string containing Chrome Enterprise policies that will be applied to
     * all streaming sessions.</p>
     */
    inline void SetBrowserPolicy(Aws::String&& value) { m_browserPolicyHasBeenSet = true; m_browserPolicy = std::move(value); }

    /**
     * <p>A JSON string containing Chrome Enterprise policies that will be applied to
     * all streaming sessions.</p>
     */
    inline void SetBrowserPolicy(const char* value) { m_browserPolicyHasBeenSet = true; m_browserPolicy.assign(value); }

    /**
     * <p>A JSON string containing Chrome Enterprise policies that will be applied to
     * all streaming sessions.</p>
     */
    inline BrowserSettings& WithBrowserPolicy(const Aws::String& value) { SetBrowserPolicy(value); return *this;}

    /**
     * <p>A JSON string containing Chrome Enterprise policies that will be applied to
     * all streaming sessions.</p>
     */
    inline BrowserSettings& WithBrowserPolicy(Aws::String&& value) { SetBrowserPolicy(std::move(value)); return *this;}

    /**
     * <p>A JSON string containing Chrome Enterprise policies that will be applied to
     * all streaming sessions.</p>
     */
    inline BrowserSettings& WithBrowserPolicy(const char* value) { SetBrowserPolicy(value); return *this;}


    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline const Aws::String& GetBrowserSettingsArn() const{ return m_browserSettingsArn; }

    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline bool BrowserSettingsArnHasBeenSet() const { return m_browserSettingsArnHasBeenSet; }

    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline void SetBrowserSettingsArn(const Aws::String& value) { m_browserSettingsArnHasBeenSet = true; m_browserSettingsArn = value; }

    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline void SetBrowserSettingsArn(Aws::String&& value) { m_browserSettingsArnHasBeenSet = true; m_browserSettingsArn = std::move(value); }

    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline void SetBrowserSettingsArn(const char* value) { m_browserSettingsArnHasBeenSet = true; m_browserSettingsArn.assign(value); }

    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline BrowserSettings& WithBrowserSettingsArn(const Aws::String& value) { SetBrowserSettingsArn(value); return *this;}

    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline BrowserSettings& WithBrowserSettingsArn(Aws::String&& value) { SetBrowserSettingsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline BrowserSettings& WithBrowserSettingsArn(const char* value) { SetBrowserSettingsArn(value); return *this;}


    /**
     * <p>The customer managed key used to encrypt sensitive information in the browser
     * settings.</p>
     */
    inline const Aws::String& GetCustomerManagedKey() const{ return m_customerManagedKey; }

    /**
     * <p>The customer managed key used to encrypt sensitive information in the browser
     * settings.</p>
     */
    inline bool CustomerManagedKeyHasBeenSet() const { return m_customerManagedKeyHasBeenSet; }

    /**
     * <p>The customer managed key used to encrypt sensitive information in the browser
     * settings.</p>
     */
    inline void SetCustomerManagedKey(const Aws::String& value) { m_customerManagedKeyHasBeenSet = true; m_customerManagedKey = value; }

    /**
     * <p>The customer managed key used to encrypt sensitive information in the browser
     * settings.</p>
     */
    inline void SetCustomerManagedKey(Aws::String&& value) { m_customerManagedKeyHasBeenSet = true; m_customerManagedKey = std::move(value); }

    /**
     * <p>The customer managed key used to encrypt sensitive information in the browser
     * settings.</p>
     */
    inline void SetCustomerManagedKey(const char* value) { m_customerManagedKeyHasBeenSet = true; m_customerManagedKey.assign(value); }

    /**
     * <p>The customer managed key used to encrypt sensitive information in the browser
     * settings.</p>
     */
    inline BrowserSettings& WithCustomerManagedKey(const Aws::String& value) { SetCustomerManagedKey(value); return *this;}

    /**
     * <p>The customer managed key used to encrypt sensitive information in the browser
     * settings.</p>
     */
    inline BrowserSettings& WithCustomerManagedKey(Aws::String&& value) { SetCustomerManagedKey(std::move(value)); return *this;}

    /**
     * <p>The customer managed key used to encrypt sensitive information in the browser
     * settings.</p>
     */
    inline BrowserSettings& WithCustomerManagedKey(const char* value) { SetCustomerManagedKey(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_additionalEncryptionContext;
    bool m_additionalEncryptionContextHasBeenSet = false;

    Aws::Vector<Aws::String> m_associatedPortalArns;
    bool m_associatedPortalArnsHasBeenSet = false;

    Aws::String m_browserPolicy;
    bool m_browserPolicyHasBeenSet = false;

    Aws::String m_browserSettingsArn;
    bool m_browserSettingsArnHasBeenSet = false;

    Aws::String m_customerManagedKey;
    bool m_customerManagedKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
