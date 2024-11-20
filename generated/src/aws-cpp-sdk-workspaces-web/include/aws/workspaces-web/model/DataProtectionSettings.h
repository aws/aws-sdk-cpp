/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/model/InlineRedactionConfiguration.h>
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
   * <p>The data protection settings resource that can be associated with a web
   * portal.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DataProtectionSettings">AWS
   * API Reference</a></p>
   */
  class DataProtectionSettings
  {
  public:
    AWS_WORKSPACESWEB_API DataProtectionSettings();
    AWS_WORKSPACESWEB_API DataProtectionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API DataProtectionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The additional encryption context of the data protection settings.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalEncryptionContext() const{ return m_additionalEncryptionContext; }
    inline bool AdditionalEncryptionContextHasBeenSet() const { return m_additionalEncryptionContextHasBeenSet; }
    inline void SetAdditionalEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext = value; }
    inline void SetAdditionalEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext = std::move(value); }
    inline DataProtectionSettings& WithAdditionalEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalEncryptionContext(value); return *this;}
    inline DataProtectionSettings& WithAdditionalEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalEncryptionContext(std::move(value)); return *this;}
    inline DataProtectionSettings& AddAdditionalEncryptionContext(const Aws::String& key, const Aws::String& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, value); return *this; }
    inline DataProtectionSettings& AddAdditionalEncryptionContext(Aws::String&& key, const Aws::String& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(std::move(key), value); return *this; }
    inline DataProtectionSettings& AddAdditionalEncryptionContext(const Aws::String& key, Aws::String&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, std::move(value)); return *this; }
    inline DataProtectionSettings& AddAdditionalEncryptionContext(Aws::String&& key, Aws::String&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(std::move(key), std::move(value)); return *this; }
    inline DataProtectionSettings& AddAdditionalEncryptionContext(const char* key, Aws::String&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, std::move(value)); return *this; }
    inline DataProtectionSettings& AddAdditionalEncryptionContext(Aws::String&& key, const char* value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(std::move(key), value); return *this; }
    inline DataProtectionSettings& AddAdditionalEncryptionContext(const char* key, const char* value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of web portal ARNs that this data protection settings resource is
     * associated with.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociatedPortalArns() const{ return m_associatedPortalArns; }
    inline bool AssociatedPortalArnsHasBeenSet() const { return m_associatedPortalArnsHasBeenSet; }
    inline void SetAssociatedPortalArns(const Aws::Vector<Aws::String>& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns = value; }
    inline void SetAssociatedPortalArns(Aws::Vector<Aws::String>&& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns = std::move(value); }
    inline DataProtectionSettings& WithAssociatedPortalArns(const Aws::Vector<Aws::String>& value) { SetAssociatedPortalArns(value); return *this;}
    inline DataProtectionSettings& WithAssociatedPortalArns(Aws::Vector<Aws::String>&& value) { SetAssociatedPortalArns(std::move(value)); return *this;}
    inline DataProtectionSettings& AddAssociatedPortalArns(const Aws::String& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns.push_back(value); return *this; }
    inline DataProtectionSettings& AddAssociatedPortalArns(Aws::String&& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns.push_back(std::move(value)); return *this; }
    inline DataProtectionSettings& AddAssociatedPortalArns(const char* value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The creation date timestamp of the data protection settings.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline DataProtectionSettings& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline DataProtectionSettings& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer managed key used to encrypt sensitive information in the data
     * protection settings.</p>
     */
    inline const Aws::String& GetCustomerManagedKey() const{ return m_customerManagedKey; }
    inline bool CustomerManagedKeyHasBeenSet() const { return m_customerManagedKeyHasBeenSet; }
    inline void SetCustomerManagedKey(const Aws::String& value) { m_customerManagedKeyHasBeenSet = true; m_customerManagedKey = value; }
    inline void SetCustomerManagedKey(Aws::String&& value) { m_customerManagedKeyHasBeenSet = true; m_customerManagedKey = std::move(value); }
    inline void SetCustomerManagedKey(const char* value) { m_customerManagedKeyHasBeenSet = true; m_customerManagedKey.assign(value); }
    inline DataProtectionSettings& WithCustomerManagedKey(const Aws::String& value) { SetCustomerManagedKey(value); return *this;}
    inline DataProtectionSettings& WithCustomerManagedKey(Aws::String&& value) { SetCustomerManagedKey(std::move(value)); return *this;}
    inline DataProtectionSettings& WithCustomerManagedKey(const char* value) { SetCustomerManagedKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the data protection settings resource.</p>
     */
    inline const Aws::String& GetDataProtectionSettingsArn() const{ return m_dataProtectionSettingsArn; }
    inline bool DataProtectionSettingsArnHasBeenSet() const { return m_dataProtectionSettingsArnHasBeenSet; }
    inline void SetDataProtectionSettingsArn(const Aws::String& value) { m_dataProtectionSettingsArnHasBeenSet = true; m_dataProtectionSettingsArn = value; }
    inline void SetDataProtectionSettingsArn(Aws::String&& value) { m_dataProtectionSettingsArnHasBeenSet = true; m_dataProtectionSettingsArn = std::move(value); }
    inline void SetDataProtectionSettingsArn(const char* value) { m_dataProtectionSettingsArnHasBeenSet = true; m_dataProtectionSettingsArn.assign(value); }
    inline DataProtectionSettings& WithDataProtectionSettingsArn(const Aws::String& value) { SetDataProtectionSettingsArn(value); return *this;}
    inline DataProtectionSettings& WithDataProtectionSettingsArn(Aws::String&& value) { SetDataProtectionSettingsArn(std::move(value)); return *this;}
    inline DataProtectionSettings& WithDataProtectionSettingsArn(const char* value) { SetDataProtectionSettingsArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the data protection settings.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline DataProtectionSettings& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DataProtectionSettings& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DataProtectionSettings& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the data protection settings.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline DataProtectionSettings& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline DataProtectionSettings& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline DataProtectionSettings& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inline redaction configuration for the data protection settings.</p>
     */
    inline const InlineRedactionConfiguration& GetInlineRedactionConfiguration() const{ return m_inlineRedactionConfiguration; }
    inline bool InlineRedactionConfigurationHasBeenSet() const { return m_inlineRedactionConfigurationHasBeenSet; }
    inline void SetInlineRedactionConfiguration(const InlineRedactionConfiguration& value) { m_inlineRedactionConfigurationHasBeenSet = true; m_inlineRedactionConfiguration = value; }
    inline void SetInlineRedactionConfiguration(InlineRedactionConfiguration&& value) { m_inlineRedactionConfigurationHasBeenSet = true; m_inlineRedactionConfiguration = std::move(value); }
    inline DataProtectionSettings& WithInlineRedactionConfiguration(const InlineRedactionConfiguration& value) { SetInlineRedactionConfiguration(value); return *this;}
    inline DataProtectionSettings& WithInlineRedactionConfiguration(InlineRedactionConfiguration&& value) { SetInlineRedactionConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_additionalEncryptionContext;
    bool m_additionalEncryptionContextHasBeenSet = false;

    Aws::Vector<Aws::String> m_associatedPortalArns;
    bool m_associatedPortalArnsHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_customerManagedKey;
    bool m_customerManagedKeyHasBeenSet = false;

    Aws::String m_dataProtectionSettingsArn;
    bool m_dataProtectionSettingsArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    InlineRedactionConfiguration m_inlineRedactionConfiguration;
    bool m_inlineRedactionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
