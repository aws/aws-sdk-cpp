/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/model/ValidationSettings.h>
#include <aws/core/utils/DateTime.h>
#include <aws/verifiedpermissions/model/DeletionProtection.h>
#include <aws/verifiedpermissions/model/CedarVersion.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace VerifiedPermissions
{
namespace Model
{
  class GetPolicyStoreResult
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API GetPolicyStoreResult() = default;
    AWS_VERIFIEDPERMISSIONS_API GetPolicyStoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VERIFIEDPERMISSIONS_API GetPolicyStoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the policy store;</p>
     */
    inline const Aws::String& GetPolicyStoreId() const { return m_policyStoreId; }
    template<typename PolicyStoreIdT = Aws::String>
    void SetPolicyStoreId(PolicyStoreIdT&& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = std::forward<PolicyStoreIdT>(value); }
    template<typename PolicyStoreIdT = Aws::String>
    GetPolicyStoreResult& WithPolicyStoreId(PolicyStoreIdT&& value) { SetPolicyStoreId(std::forward<PolicyStoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the policy store.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetPolicyStoreResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current validation settings for the policy store.</p>
     */
    inline const ValidationSettings& GetValidationSettings() const { return m_validationSettings; }
    template<typename ValidationSettingsT = ValidationSettings>
    void SetValidationSettings(ValidationSettingsT&& value) { m_validationSettingsHasBeenSet = true; m_validationSettings = std::forward<ValidationSettingsT>(value); }
    template<typename ValidationSettingsT = ValidationSettings>
    GetPolicyStoreResult& WithValidationSettings(ValidationSettingsT&& value) { SetValidationSettings(std::forward<ValidationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the policy store was originally created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    GetPolicyStoreResult& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the policy store was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const { return m_lastUpdatedDate; }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    void SetLastUpdatedDate(LastUpdatedDateT&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::forward<LastUpdatedDateT>(value); }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    GetPolicyStoreResult& WithLastUpdatedDate(LastUpdatedDateT&& value) { SetLastUpdatedDate(std::forward<LastUpdatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Descriptive text that you can provide to help with identification of the
     * current policy store.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetPolicyStoreResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the policy store can be deleted. If enabled, the policy
     * store can't be deleted.</p> <p>The default state is <code>DISABLED</code>.</p>
     */
    inline DeletionProtection GetDeletionProtection() const { return m_deletionProtection; }
    inline void SetDeletionProtection(DeletionProtection value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline GetPolicyStoreResult& WithDeletionProtection(DeletionProtection value) { SetDeletionProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Cedar language used with policies, policy templates, and
     * schemas in this policy store. For more information, see <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/userguide/cedar4-faq.html">Amazon
     * Verified Permissions upgrade to Cedar v4 FAQ</a>.</p>
     */
    inline CedarVersion GetCedarVersion() const { return m_cedarVersion; }
    inline void SetCedarVersion(CedarVersion value) { m_cedarVersionHasBeenSet = true; m_cedarVersion = value; }
    inline GetPolicyStoreResult& WithCedarVersion(CedarVersion value) { SetCedarVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tags associated with the policy store.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetPolicyStoreResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetPolicyStoreResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPolicyStoreResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyStoreId;
    bool m_policyStoreIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    ValidationSettings m_validationSettings;
    bool m_validationSettingsHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDate{};
    bool m_lastUpdatedDateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DeletionProtection m_deletionProtection{DeletionProtection::NOT_SET};
    bool m_deletionProtectionHasBeenSet = false;

    CedarVersion m_cedarVersion{CedarVersion::NOT_SET};
    bool m_cedarVersionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
