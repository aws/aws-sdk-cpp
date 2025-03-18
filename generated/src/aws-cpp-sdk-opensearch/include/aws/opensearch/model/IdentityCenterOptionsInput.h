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
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/IdentityCenterOptionsInput">AWS
   * API Reference</a></p>
   */
  class IdentityCenterOptionsInput
  {
  public:
    AWS_OPENSEARCHSERVICE_API IdentityCenterOptionsInput() = default;
    AWS_OPENSEARCHSERVICE_API IdentityCenterOptionsInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API IdentityCenterOptionsInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>True to enable IAM Identity Center for API access in Amazon OpenSearch
     * Service.</p>
     */
    inline bool GetEnabledAPIAccess() const { return m_enabledAPIAccess; }
    inline bool EnabledAPIAccessHasBeenSet() const { return m_enabledAPIAccessHasBeenSet; }
    inline void SetEnabledAPIAccess(bool value) { m_enabledAPIAccessHasBeenSet = true; m_enabledAPIAccess = value; }
    inline IdentityCenterOptionsInput& WithEnabledAPIAccess(bool value) { SetEnabledAPIAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for IAM Identity Center Instance which will be used for IAM Identity
     * Center Application creation.</p>
     */
    inline const Aws::String& GetIdentityCenterInstanceARN() const { return m_identityCenterInstanceARN; }
    inline bool IdentityCenterInstanceARNHasBeenSet() const { return m_identityCenterInstanceARNHasBeenSet; }
    template<typename IdentityCenterInstanceARNT = Aws::String>
    void SetIdentityCenterInstanceARN(IdentityCenterInstanceARNT&& value) { m_identityCenterInstanceARNHasBeenSet = true; m_identityCenterInstanceARN = std::forward<IdentityCenterInstanceARNT>(value); }
    template<typename IdentityCenterInstanceARNT = Aws::String>
    IdentityCenterOptionsInput& WithIdentityCenterInstanceARN(IdentityCenterInstanceARNT&& value) { SetIdentityCenterInstanceARN(std::forward<IdentityCenterInstanceARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the attribute that contains the subject (username, userID, email) of
     * IAM Identity Center.</p>
     */
    inline SubjectKeyIdCOption GetSubjectKey() const { return m_subjectKey; }
    inline bool SubjectKeyHasBeenSet() const { return m_subjectKeyHasBeenSet; }
    inline void SetSubjectKey(SubjectKeyIdCOption value) { m_subjectKeyHasBeenSet = true; m_subjectKey = value; }
    inline IdentityCenterOptionsInput& WithSubjectKey(SubjectKeyIdCOption value) { SetSubjectKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the attribute that contains the backend role (groupName, groupID) of
     * IAM Identity Center</p>
     */
    inline RolesKeyIdCOption GetRolesKey() const { return m_rolesKey; }
    inline bool RolesKeyHasBeenSet() const { return m_rolesKeyHasBeenSet; }
    inline void SetRolesKey(RolesKeyIdCOption value) { m_rolesKeyHasBeenSet = true; m_rolesKey = value; }
    inline IdentityCenterOptionsInput& WithRolesKey(RolesKeyIdCOption value) { SetRolesKey(value); return *this;}
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
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
