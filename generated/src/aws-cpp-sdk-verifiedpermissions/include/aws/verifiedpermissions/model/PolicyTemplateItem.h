/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace VerifiedPermissions
{
namespace Model
{

  /**
   * <p>Contains details about a policy template</p> <p>This data type is used as a
   * response parameter for the <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_ListPolicyTemplates.html">ListPolicyTemplates</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/PolicyTemplateItem">AWS
   * API Reference</a></p>
   */
  class PolicyTemplateItem
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API PolicyTemplateItem();
    AWS_VERIFIEDPERMISSIONS_API PolicyTemplateItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API PolicyTemplateItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the policy store that contains the template.</p>
     */
    inline const Aws::String& GetPolicyStoreId() const{ return m_policyStoreId; }
    inline bool PolicyStoreIdHasBeenSet() const { return m_policyStoreIdHasBeenSet; }
    inline void SetPolicyStoreId(const Aws::String& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = value; }
    inline void SetPolicyStoreId(Aws::String&& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = std::move(value); }
    inline void SetPolicyStoreId(const char* value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId.assign(value); }
    inline PolicyTemplateItem& WithPolicyStoreId(const Aws::String& value) { SetPolicyStoreId(value); return *this;}
    inline PolicyTemplateItem& WithPolicyStoreId(Aws::String&& value) { SetPolicyStoreId(std::move(value)); return *this;}
    inline PolicyTemplateItem& WithPolicyStoreId(const char* value) { SetPolicyStoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the policy template.</p>
     */
    inline const Aws::String& GetPolicyTemplateId() const{ return m_policyTemplateId; }
    inline bool PolicyTemplateIdHasBeenSet() const { return m_policyTemplateIdHasBeenSet; }
    inline void SetPolicyTemplateId(const Aws::String& value) { m_policyTemplateIdHasBeenSet = true; m_policyTemplateId = value; }
    inline void SetPolicyTemplateId(Aws::String&& value) { m_policyTemplateIdHasBeenSet = true; m_policyTemplateId = std::move(value); }
    inline void SetPolicyTemplateId(const char* value) { m_policyTemplateIdHasBeenSet = true; m_policyTemplateId.assign(value); }
    inline PolicyTemplateItem& WithPolicyTemplateId(const Aws::String& value) { SetPolicyTemplateId(value); return *this;}
    inline PolicyTemplateItem& WithPolicyTemplateId(Aws::String&& value) { SetPolicyTemplateId(std::move(value)); return *this;}
    inline PolicyTemplateItem& WithPolicyTemplateId(const char* value) { SetPolicyTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description attached to the policy template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline PolicyTemplateItem& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline PolicyTemplateItem& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline PolicyTemplateItem& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the policy template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }
    inline PolicyTemplateItem& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline PolicyTemplateItem& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the policy template was most recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }
    inline bool LastUpdatedDateHasBeenSet() const { return m_lastUpdatedDateHasBeenSet; }
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = value; }
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::move(value); }
    inline PolicyTemplateItem& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}
    inline PolicyTemplateItem& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyStoreId;
    bool m_policyStoreIdHasBeenSet = false;

    Aws::String m_policyTemplateId;
    bool m_policyTemplateIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDate;
    bool m_lastUpdatedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
