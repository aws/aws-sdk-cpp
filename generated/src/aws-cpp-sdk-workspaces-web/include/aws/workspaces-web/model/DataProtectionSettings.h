/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/model/InlineRedactionConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The data protection settings resource that can be associated with a web
   * portal.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DataProtectionSettings">AWS
   * API Reference</a></p>
   */
  class DataProtectionSettings
  {
  public:
    AWS_WORKSPACESWEB_API DataProtectionSettings() = default;
    AWS_WORKSPACESWEB_API DataProtectionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API DataProtectionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the data protection settings resource.</p>
     */
    inline const Aws::String& GetDataProtectionSettingsArn() const { return m_dataProtectionSettingsArn; }
    inline bool DataProtectionSettingsArnHasBeenSet() const { return m_dataProtectionSettingsArnHasBeenSet; }
    template<typename DataProtectionSettingsArnT = Aws::String>
    void SetDataProtectionSettingsArn(DataProtectionSettingsArnT&& value) { m_dataProtectionSettingsArnHasBeenSet = true; m_dataProtectionSettingsArn = std::forward<DataProtectionSettingsArnT>(value); }
    template<typename DataProtectionSettingsArnT = Aws::String>
    DataProtectionSettings& WithDataProtectionSettingsArn(DataProtectionSettingsArnT&& value) { SetDataProtectionSettingsArn(std::forward<DataProtectionSettingsArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inline redaction configuration for the data protection settings.</p>
     */
    inline const InlineRedactionConfiguration& GetInlineRedactionConfiguration() const { return m_inlineRedactionConfiguration; }
    inline bool InlineRedactionConfigurationHasBeenSet() const { return m_inlineRedactionConfigurationHasBeenSet; }
    template<typename InlineRedactionConfigurationT = InlineRedactionConfiguration>
    void SetInlineRedactionConfiguration(InlineRedactionConfigurationT&& value) { m_inlineRedactionConfigurationHasBeenSet = true; m_inlineRedactionConfiguration = std::forward<InlineRedactionConfigurationT>(value); }
    template<typename InlineRedactionConfigurationT = InlineRedactionConfiguration>
    DataProtectionSettings& WithInlineRedactionConfiguration(InlineRedactionConfigurationT&& value) { SetInlineRedactionConfiguration(std::forward<InlineRedactionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of web portal ARNs that this data protection settings resource is
     * associated with.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociatedPortalArns() const { return m_associatedPortalArns; }
    inline bool AssociatedPortalArnsHasBeenSet() const { return m_associatedPortalArnsHasBeenSet; }
    template<typename AssociatedPortalArnsT = Aws::Vector<Aws::String>>
    void SetAssociatedPortalArns(AssociatedPortalArnsT&& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns = std::forward<AssociatedPortalArnsT>(value); }
    template<typename AssociatedPortalArnsT = Aws::Vector<Aws::String>>
    DataProtectionSettings& WithAssociatedPortalArns(AssociatedPortalArnsT&& value) { SetAssociatedPortalArns(std::forward<AssociatedPortalArnsT>(value)); return *this;}
    template<typename AssociatedPortalArnsT = Aws::String>
    DataProtectionSettings& AddAssociatedPortalArns(AssociatedPortalArnsT&& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns.emplace_back(std::forward<AssociatedPortalArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The display name of the data protection settings.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    DataProtectionSettings& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the data protection settings.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DataProtectionSettings& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date timestamp of the data protection settings.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    DataProtectionSettings& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer managed key used to encrypt sensitive information in the data
     * protection settings.</p>
     */
    inline const Aws::String& GetCustomerManagedKey() const { return m_customerManagedKey; }
    inline bool CustomerManagedKeyHasBeenSet() const { return m_customerManagedKeyHasBeenSet; }
    template<typename CustomerManagedKeyT = Aws::String>
    void SetCustomerManagedKey(CustomerManagedKeyT&& value) { m_customerManagedKeyHasBeenSet = true; m_customerManagedKey = std::forward<CustomerManagedKeyT>(value); }
    template<typename CustomerManagedKeyT = Aws::String>
    DataProtectionSettings& WithCustomerManagedKey(CustomerManagedKeyT&& value) { SetCustomerManagedKey(std::forward<CustomerManagedKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The additional encryption context of the data protection settings.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalEncryptionContext() const { return m_additionalEncryptionContext; }
    inline bool AdditionalEncryptionContextHasBeenSet() const { return m_additionalEncryptionContextHasBeenSet; }
    template<typename AdditionalEncryptionContextT = Aws::Map<Aws::String, Aws::String>>
    void SetAdditionalEncryptionContext(AdditionalEncryptionContextT&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext = std::forward<AdditionalEncryptionContextT>(value); }
    template<typename AdditionalEncryptionContextT = Aws::Map<Aws::String, Aws::String>>
    DataProtectionSettings& WithAdditionalEncryptionContext(AdditionalEncryptionContextT&& value) { SetAdditionalEncryptionContext(std::forward<AdditionalEncryptionContextT>(value)); return *this;}
    template<typename AdditionalEncryptionContextKeyT = Aws::String, typename AdditionalEncryptionContextValueT = Aws::String>
    DataProtectionSettings& AddAdditionalEncryptionContext(AdditionalEncryptionContextKeyT&& key, AdditionalEncryptionContextValueT&& value) {
      m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(std::forward<AdditionalEncryptionContextKeyT>(key), std::forward<AdditionalEncryptionContextValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_dataProtectionSettingsArn;
    bool m_dataProtectionSettingsArnHasBeenSet = false;

    InlineRedactionConfiguration m_inlineRedactionConfiguration;
    bool m_inlineRedactionConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_associatedPortalArns;
    bool m_associatedPortalArnsHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::String m_customerManagedKey;
    bool m_customerManagedKeyHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_additionalEncryptionContext;
    bool m_additionalEncryptionContextHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
