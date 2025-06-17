/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mpa/model/PolicyType.h>
#include <aws/mpa/model/PolicyStatus.h>
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
namespace MPA
{
namespace Model
{

  /**
   * <p>Contains details for the version of a policy. Policies define what operations
   * a team that define the permissions for team resources.</p> <p>The protected
   * operation for a service integration might require specific permissions. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/mpa/latest/userguide/mpa-integrations.html">How
   * other services work with Multi-party approval</a> in the <i>Multi-party approval
   * User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/PolicyVersion">AWS
   * API Reference</a></p>
   */
  class PolicyVersion
  {
  public:
    AWS_MPA_API PolicyVersion() = default;
    AWS_MPA_API PolicyVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_MPA_API PolicyVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MPA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for the team.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    PolicyVersion& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for the policy.</p>
     */
    inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
    template<typename PolicyArnT = Aws::String>
    void SetPolicyArn(PolicyArnT&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::forward<PolicyArnT>(value); }
    template<typename PolicyArnT = Aws::String>
    PolicyVersion& WithPolicyArn(PolicyArnT&& value) { SetPolicyArn(std::forward<PolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Verison ID</p>
     */
    inline int GetVersionId() const { return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    inline void SetVersionId(int value) { m_versionIdHasBeenSet = true; m_versionId = value; }
    inline PolicyVersion& WithVersionId(int value) { SetVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of policy.</p>
     */
    inline PolicyType GetPolicyType() const { return m_policyType; }
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }
    inline void SetPolicyType(PolicyType value) { m_policyTypeHasBeenSet = true; m_policyType = value; }
    inline PolicyVersion& WithPolicyType(PolicyType value) { SetPolicyType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines if the specified policy is the default for the team.</p>
     */
    inline bool GetIsDefault() const { return m_isDefault; }
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }
    inline PolicyVersion& WithIsDefault(bool value) { SetIsDefault(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the policy.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PolicyVersion& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status for the policy. For example, if the policy is <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_groups_manage_attach-policy.html">attachable</a>
     * or <a
     * href="https://docs.aws.amazon.com/access_policies_managed-deprecated.html">deprecated</a>.</p>
     */
    inline PolicyStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(PolicyStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline PolicyVersion& WithStatus(PolicyStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp when the policy was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    PolicyVersion& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp when the policy was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    PolicyVersion& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Document that contains the policy contents.</p>
     */
    inline const Aws::String& GetDocument() const { return m_document; }
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }
    template<typename DocumentT = Aws::String>
    void SetDocument(DocumentT&& value) { m_documentHasBeenSet = true; m_document = std::forward<DocumentT>(value); }
    template<typename DocumentT = Aws::String>
    PolicyVersion& WithDocument(DocumentT&& value) { SetDocument(std::forward<DocumentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    int m_versionId{0};
    bool m_versionIdHasBeenSet = false;

    PolicyType m_policyType{PolicyType::NOT_SET};
    bool m_policyTypeHasBeenSet = false;

    bool m_isDefault{false};
    bool m_isDefaultHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PolicyStatus m_status{PolicyStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_document;
    bool m_documentHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
