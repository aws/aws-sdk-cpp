/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/Tag.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>An activation registers one or more on-premises servers or virtual machines
   * (VMs) with Amazon Web Services so that you can configure those servers or VMs
   * using Run Command. A server or VM that has been registered with Amazon Web
   * Services Systems Manager is called a managed node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/Activation">AWS API
   * Reference</a></p>
   */
  class Activation
  {
  public:
    AWS_SSM_API Activation() = default;
    AWS_SSM_API Activation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Activation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID created by Systems Manager when you submitted the activation.</p>
     */
    inline const Aws::String& GetActivationId() const { return m_activationId; }
    inline bool ActivationIdHasBeenSet() const { return m_activationIdHasBeenSet; }
    template<typename ActivationIdT = Aws::String>
    void SetActivationId(ActivationIdT&& value) { m_activationIdHasBeenSet = true; m_activationId = std::forward<ActivationIdT>(value); }
    template<typename ActivationIdT = Aws::String>
    Activation& WithActivationId(ActivationIdT&& value) { SetActivationId(std::forward<ActivationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user defined description of the activation.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Activation& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the managed node when it is created.</p>
     */
    inline const Aws::String& GetDefaultInstanceName() const { return m_defaultInstanceName; }
    inline bool DefaultInstanceNameHasBeenSet() const { return m_defaultInstanceNameHasBeenSet; }
    template<typename DefaultInstanceNameT = Aws::String>
    void SetDefaultInstanceName(DefaultInstanceNameT&& value) { m_defaultInstanceNameHasBeenSet = true; m_defaultInstanceName = std::forward<DefaultInstanceNameT>(value); }
    template<typename DefaultInstanceNameT = Aws::String>
    Activation& WithDefaultInstanceName(DefaultInstanceNameT&& value) { SetDefaultInstanceName(std::forward<DefaultInstanceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Identity and Access Management (IAM) role to assign to the managed
     * node.</p>
     */
    inline const Aws::String& GetIamRole() const { return m_iamRole; }
    inline bool IamRoleHasBeenSet() const { return m_iamRoleHasBeenSet; }
    template<typename IamRoleT = Aws::String>
    void SetIamRole(IamRoleT&& value) { m_iamRoleHasBeenSet = true; m_iamRole = std::forward<IamRoleT>(value); }
    template<typename IamRoleT = Aws::String>
    Activation& WithIamRole(IamRoleT&& value) { SetIamRole(std::forward<IamRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of managed nodes that can be registered using this
     * activation.</p>
     */
    inline int GetRegistrationLimit() const { return m_registrationLimit; }
    inline bool RegistrationLimitHasBeenSet() const { return m_registrationLimitHasBeenSet; }
    inline void SetRegistrationLimit(int value) { m_registrationLimitHasBeenSet = true; m_registrationLimit = value; }
    inline Activation& WithRegistrationLimit(int value) { SetRegistrationLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of managed nodes already registered with this activation.</p>
     */
    inline int GetRegistrationsCount() const { return m_registrationsCount; }
    inline bool RegistrationsCountHasBeenSet() const { return m_registrationsCountHasBeenSet; }
    inline void SetRegistrationsCount(int value) { m_registrationsCountHasBeenSet = true; m_registrationsCount = value; }
    inline Activation& WithRegistrationsCount(int value) { SetRegistrationsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when this activation can no longer be used to register managed
     * nodes.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const { return m_expirationDate; }
    inline bool ExpirationDateHasBeenSet() const { return m_expirationDateHasBeenSet; }
    template<typename ExpirationDateT = Aws::Utils::DateTime>
    void SetExpirationDate(ExpirationDateT&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = std::forward<ExpirationDateT>(value); }
    template<typename ExpirationDateT = Aws::Utils::DateTime>
    Activation& WithExpirationDate(ExpirationDateT&& value) { SetExpirationDate(std::forward<ExpirationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not the activation is expired.</p>
     */
    inline bool GetExpired() const { return m_expired; }
    inline bool ExpiredHasBeenSet() const { return m_expiredHasBeenSet; }
    inline void SetExpired(bool value) { m_expiredHasBeenSet = true; m_expired = value; }
    inline Activation& WithExpired(bool value) { SetExpired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the activation was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    Activation& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags assigned to the activation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    Activation& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Activation& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_activationId;
    bool m_activationIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_defaultInstanceName;
    bool m_defaultInstanceNameHasBeenSet = false;

    Aws::String m_iamRole;
    bool m_iamRoleHasBeenSet = false;

    int m_registrationLimit{0};
    bool m_registrationLimitHasBeenSet = false;

    int m_registrationsCount{0};
    bool m_registrationsCountHasBeenSet = false;

    Aws::Utils::DateTime m_expirationDate{};
    bool m_expirationDateHasBeenSet = false;

    bool m_expired{false};
    bool m_expiredHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
