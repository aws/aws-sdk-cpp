/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
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
namespace SSOAdmin
{
namespace Model
{

  /**
   * <p>An entity that contains IAM policies.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/PermissionSet">AWS
   * API Reference</a></p>
   */
  class PermissionSet
  {
  public:
    AWS_SSOADMIN_API PermissionSet() = default;
    AWS_SSOADMIN_API PermissionSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API PermissionSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the permission set.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PermissionSet& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the permission set. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline const Aws::String& GetPermissionSetArn() const { return m_permissionSetArn; }
    inline bool PermissionSetArnHasBeenSet() const { return m_permissionSetArnHasBeenSet; }
    template<typename PermissionSetArnT = Aws::String>
    void SetPermissionSetArn(PermissionSetArnT&& value) { m_permissionSetArnHasBeenSet = true; m_permissionSetArn = std::forward<PermissionSetArnT>(value); }
    template<typename PermissionSetArnT = Aws::String>
    PermissionSet& WithPermissionSetArn(PermissionSetArnT&& value) { SetPermissionSetArn(std::forward<PermissionSetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the <a>PermissionSet</a>.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    PermissionSet& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the permission set was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    PermissionSet& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length of time that the application user sessions are valid for in the
     * ISO-8601 standard.</p>
     */
    inline const Aws::String& GetSessionDuration() const { return m_sessionDuration; }
    inline bool SessionDurationHasBeenSet() const { return m_sessionDurationHasBeenSet; }
    template<typename SessionDurationT = Aws::String>
    void SetSessionDuration(SessionDurationT&& value) { m_sessionDurationHasBeenSet = true; m_sessionDuration = std::forward<SessionDurationT>(value); }
    template<typename SessionDurationT = Aws::String>
    PermissionSet& WithSessionDuration(SessionDurationT&& value) { SetSessionDuration(std::forward<SessionDurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used to redirect users within the application during the federation
     * authentication process.</p>
     */
    inline const Aws::String& GetRelayState() const { return m_relayState; }
    inline bool RelayStateHasBeenSet() const { return m_relayStateHasBeenSet; }
    template<typename RelayStateT = Aws::String>
    void SetRelayState(RelayStateT&& value) { m_relayStateHasBeenSet = true; m_relayState = std::forward<RelayStateT>(value); }
    template<typename RelayStateT = Aws::String>
    PermissionSet& WithRelayState(RelayStateT&& value) { SetRelayState(std::forward<RelayStateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_permissionSetArn;
    bool m_permissionSetArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    Aws::String m_sessionDuration;
    bool m_sessionDurationHasBeenSet = false;

    Aws::String m_relayState;
    bool m_relayStateHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
