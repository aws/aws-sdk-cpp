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
   * <p>Container for IAM Identity Center Options settings.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/IdentityCenterOptions">AWS
   * API Reference</a></p>
   */
  class IdentityCenterOptions
  {
  public:
    AWS_OPENSEARCHSERVICE_API IdentityCenterOptions();
    AWS_OPENSEARCHSERVICE_API IdentityCenterOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API IdentityCenterOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>True to enable IAM Identity Center for API access in Amazon OpenSearch
     * Service.</p>
     */
    inline bool GetEnabledAPIAccess() const{ return m_enabledAPIAccess; }
    inline bool EnabledAPIAccessHasBeenSet() const { return m_enabledAPIAccessHasBeenSet; }
    inline void SetEnabledAPIAccess(bool value) { m_enabledAPIAccessHasBeenSet = true; m_enabledAPIAccess = value; }
    inline IdentityCenterOptions& WithEnabledAPIAccess(bool value) { SetEnabledAPIAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for IAM Identity Center Instance.</p>
     */
    inline const Aws::String& GetIdentityCenterInstanceARN() const{ return m_identityCenterInstanceARN; }
    inline bool IdentityCenterInstanceARNHasBeenSet() const { return m_identityCenterInstanceARNHasBeenSet; }
    inline void SetIdentityCenterInstanceARN(const Aws::String& value) { m_identityCenterInstanceARNHasBeenSet = true; m_identityCenterInstanceARN = value; }
    inline void SetIdentityCenterInstanceARN(Aws::String&& value) { m_identityCenterInstanceARNHasBeenSet = true; m_identityCenterInstanceARN = std::move(value); }
    inline void SetIdentityCenterInstanceARN(const char* value) { m_identityCenterInstanceARNHasBeenSet = true; m_identityCenterInstanceARN.assign(value); }
    inline IdentityCenterOptions& WithIdentityCenterInstanceARN(const Aws::String& value) { SetIdentityCenterInstanceARN(value); return *this;}
    inline IdentityCenterOptions& WithIdentityCenterInstanceARN(Aws::String&& value) { SetIdentityCenterInstanceARN(std::move(value)); return *this;}
    inline IdentityCenterOptions& WithIdentityCenterInstanceARN(const char* value) { SetIdentityCenterInstanceARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the attribute that contains the subject (username, userID, email) of
     * IAM Identity Center.</p>
     */
    inline const SubjectKeyIdCOption& GetSubjectKey() const{ return m_subjectKey; }
    inline bool SubjectKeyHasBeenSet() const { return m_subjectKeyHasBeenSet; }
    inline void SetSubjectKey(const SubjectKeyIdCOption& value) { m_subjectKeyHasBeenSet = true; m_subjectKey = value; }
    inline void SetSubjectKey(SubjectKeyIdCOption&& value) { m_subjectKeyHasBeenSet = true; m_subjectKey = std::move(value); }
    inline IdentityCenterOptions& WithSubjectKey(const SubjectKeyIdCOption& value) { SetSubjectKey(value); return *this;}
    inline IdentityCenterOptions& WithSubjectKey(SubjectKeyIdCOption&& value) { SetSubjectKey(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the attribute that contains the backend role (groupName, groupID) of
     * IAM Identity Center</p>
     */
    inline const RolesKeyIdCOption& GetRolesKey() const{ return m_rolesKey; }
    inline bool RolesKeyHasBeenSet() const { return m_rolesKeyHasBeenSet; }
    inline void SetRolesKey(const RolesKeyIdCOption& value) { m_rolesKeyHasBeenSet = true; m_rolesKey = value; }
    inline void SetRolesKey(RolesKeyIdCOption&& value) { m_rolesKeyHasBeenSet = true; m_rolesKey = std::move(value); }
    inline IdentityCenterOptions& WithRolesKey(const RolesKeyIdCOption& value) { SetRolesKey(value); return *this;}
    inline IdentityCenterOptions& WithRolesKey(RolesKeyIdCOption&& value) { SetRolesKey(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for IAM Identity Center Application which will integrate with Amazon
     * OpenSearch Service.</p>
     */
    inline const Aws::String& GetIdentityCenterApplicationARN() const{ return m_identityCenterApplicationARN; }
    inline bool IdentityCenterApplicationARNHasBeenSet() const { return m_identityCenterApplicationARNHasBeenSet; }
    inline void SetIdentityCenterApplicationARN(const Aws::String& value) { m_identityCenterApplicationARNHasBeenSet = true; m_identityCenterApplicationARN = value; }
    inline void SetIdentityCenterApplicationARN(Aws::String&& value) { m_identityCenterApplicationARNHasBeenSet = true; m_identityCenterApplicationARN = std::move(value); }
    inline void SetIdentityCenterApplicationARN(const char* value) { m_identityCenterApplicationARNHasBeenSet = true; m_identityCenterApplicationARN.assign(value); }
    inline IdentityCenterOptions& WithIdentityCenterApplicationARN(const Aws::String& value) { SetIdentityCenterApplicationARN(value); return *this;}
    inline IdentityCenterOptions& WithIdentityCenterApplicationARN(Aws::String&& value) { SetIdentityCenterApplicationARN(std::move(value)); return *this;}
    inline IdentityCenterOptions& WithIdentityCenterApplicationARN(const char* value) { SetIdentityCenterApplicationARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of IAM Identity Store.</p>
     */
    inline const Aws::String& GetIdentityStoreId() const{ return m_identityStoreId; }
    inline bool IdentityStoreIdHasBeenSet() const { return m_identityStoreIdHasBeenSet; }
    inline void SetIdentityStoreId(const Aws::String& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = value; }
    inline void SetIdentityStoreId(Aws::String&& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = std::move(value); }
    inline void SetIdentityStoreId(const char* value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId.assign(value); }
    inline IdentityCenterOptions& WithIdentityStoreId(const Aws::String& value) { SetIdentityStoreId(value); return *this;}
    inline IdentityCenterOptions& WithIdentityStoreId(Aws::String&& value) { SetIdentityStoreId(std::move(value)); return *this;}
    inline IdentityCenterOptions& WithIdentityStoreId(const char* value) { SetIdentityStoreId(value); return *this;}
    ///@}
  private:

    bool m_enabledAPIAccess;
    bool m_enabledAPIAccessHasBeenSet = false;

    Aws::String m_identityCenterInstanceARN;
    bool m_identityCenterInstanceARNHasBeenSet = false;

    SubjectKeyIdCOption m_subjectKey;
    bool m_subjectKeyHasBeenSet = false;

    RolesKeyIdCOption m_rolesKey;
    bool m_rolesKeyHasBeenSet = false;

    Aws::String m_identityCenterApplicationARN;
    bool m_identityCenterApplicationARNHasBeenSet = false;

    Aws::String m_identityStoreId;
    bool m_identityStoreIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
