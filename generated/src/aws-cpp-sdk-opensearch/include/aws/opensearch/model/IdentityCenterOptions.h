/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/SubjectKeyIdCOption.h>
#include <aws/opensearch/model/RolesKeyIdCOption.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Settings container for integrating IAM Identity Center with OpenSearch UI
   * applications, which enables enabling secure user authentication and access
   * control across multiple data sources. This setup supports single sign-on (SSO)
   * through IAM Identity Center, allowing centralized user management.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/IdentityCenterOptions">AWS
   * API Reference</a></p>
   */
  class IdentityCenterOptions
  {
  public:
    AWS_OPENSEARCHSERVICE_API IdentityCenterOptions() = default;
    AWS_OPENSEARCHSERVICE_API IdentityCenterOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API IdentityCenterOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether IAM Identity Center is enabled for the application.</p>
     */
    inline bool GetEnabledAPIAccess() const { return m_enabledAPIAccess; }
    inline bool EnabledAPIAccessHasBeenSet() const { return m_enabledAPIAccessHasBeenSet; }
    inline void SetEnabledAPIAccess(bool value) { m_enabledAPIAccessHasBeenSet = true; m_enabledAPIAccess = value; }
    inline IdentityCenterOptions& WithEnabledAPIAccess(bool value) { SetEnabledAPIAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Identity Center instance.</p>
     */
    inline const Aws::String& GetIdentityCenterInstanceARN() const { return m_identityCenterInstanceARN; }
    inline bool IdentityCenterInstanceARNHasBeenSet() const { return m_identityCenterInstanceARNHasBeenSet; }
    template<typename IdentityCenterInstanceARNT = Aws::String>
    void SetIdentityCenterInstanceARN(IdentityCenterInstanceARNT&& value) { m_identityCenterInstanceARNHasBeenSet = true; m_identityCenterInstanceARN = std::forward<IdentityCenterInstanceARNT>(value); }
    template<typename IdentityCenterInstanceARNT = Aws::String>
    IdentityCenterOptions& WithIdentityCenterInstanceARN(IdentityCenterInstanceARNT&& value) { SetIdentityCenterInstanceARN(std::forward<IdentityCenterInstanceARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the attribute that contains the subject identifier (such as
     * username, user ID, or email) in IAM Identity Center.</p>
     */
    inline SubjectKeyIdCOption GetSubjectKey() const { return m_subjectKey; }
    inline bool SubjectKeyHasBeenSet() const { return m_subjectKeyHasBeenSet; }
    inline void SetSubjectKey(SubjectKeyIdCOption value) { m_subjectKeyHasBeenSet = true; m_subjectKey = value; }
    inline IdentityCenterOptions& WithSubjectKey(SubjectKeyIdCOption value) { SetSubjectKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the attribute that contains the backend role identifier (such as
     * group name or group ID) in IAM Identity Center.</p>
     */
    inline RolesKeyIdCOption GetRolesKey() const { return m_rolesKey; }
    inline bool RolesKeyHasBeenSet() const { return m_rolesKeyHasBeenSet; }
    inline void SetRolesKey(RolesKeyIdCOption value) { m_rolesKeyHasBeenSet = true; m_rolesKey = value; }
    inline IdentityCenterOptions& WithRolesKey(RolesKeyIdCOption value) { SetRolesKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM Identity Center application that integrates with Amazon
     * OpenSearch Service.</p>
     */
    inline const Aws::String& GetIdentityCenterApplicationARN() const { return m_identityCenterApplicationARN; }
    inline bool IdentityCenterApplicationARNHasBeenSet() const { return m_identityCenterApplicationARNHasBeenSet; }
    template<typename IdentityCenterApplicationARNT = Aws::String>
    void SetIdentityCenterApplicationARN(IdentityCenterApplicationARNT&& value) { m_identityCenterApplicationARNHasBeenSet = true; m_identityCenterApplicationARN = std::forward<IdentityCenterApplicationARNT>(value); }
    template<typename IdentityCenterApplicationARNT = Aws::String>
    IdentityCenterOptions& WithIdentityCenterApplicationARN(IdentityCenterApplicationARNT&& value) { SetIdentityCenterApplicationARN(std::forward<IdentityCenterApplicationARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the IAM Identity Store.</p>
     */
    inline const Aws::String& GetIdentityStoreId() const { return m_identityStoreId; }
    inline bool IdentityStoreIdHasBeenSet() const { return m_identityStoreIdHasBeenSet; }
    template<typename IdentityStoreIdT = Aws::String>
    void SetIdentityStoreId(IdentityStoreIdT&& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = std::forward<IdentityStoreIdT>(value); }
    template<typename IdentityStoreIdT = Aws::String>
    IdentityCenterOptions& WithIdentityStoreId(IdentityStoreIdT&& value) { SetIdentityStoreId(std::forward<IdentityStoreIdT>(value)); return *this;}
    ///@}
  private:

    bool m_enabledAPIAccess{false};
    bool m_enabledAPIAccessHasBeenSet = false;

    Aws::String m_identityCenterInstanceARN;
    bool m_identityCenterInstanceARNHasBeenSet = false;

    SubjectKeyIdCOption m_subjectKey{SubjectKeyIdCOption::NOT_SET};
    bool m_subjectKeyHasBeenSet = false;

    RolesKeyIdCOption m_rolesKey{RolesKeyIdCOption::NOT_SET};
    bool m_rolesKeyHasBeenSet = false;

    Aws::String m_identityCenterApplicationARN;
    bool m_identityCenterApplicationARNHasBeenSet = false;

    Aws::String m_identityStoreId;
    bool m_identityStoreIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
