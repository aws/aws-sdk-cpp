/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/mpa/MPARequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mpa/model/ApprovalStrategy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mpa/model/ApprovalTeamRequestApprover.h>
#include <aws/mpa/model/PolicyReference.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace MPA
{
namespace Model
{

  /**
   */
  class CreateApprovalTeamRequest : public MPARequest
  {
  public:
    AWS_MPA_API CreateApprovalTeamRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApprovalTeam"; }

    AWS_MPA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If not provided, the Amazon Web Services populates this
     * field.</p>  <p> <b>What is idempotency?</b> </p> <p>When you make a
     * mutating API request, the request typically returns a result before the
     * operation's asynchronous workflows have completed. Operations might also time
     * out or encounter other server issues before they complete, even though the
     * request has already returned a result. This could make it difficult to determine
     * whether the request succeeded or not, and could lead to multiple retries to
     * ensure that the operation completes successfully. However, if the original
     * request and the subsequent retries are successful, the operation is completed
     * multiple times. This means that you might create more resources than you
     * intended.</p> <p> <i>Idempotency</i> ensures that an API request completes no
     * more than one time. With an idempotent request, if the original request
     * completes successfully, any subsequent retries complete successfully without
     * performing any further actions.</p> 
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateApprovalTeamRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>ApprovalStrategy</code> object. Contains details for how the team
     * grants approval.</p>
     */
    inline const ApprovalStrategy& GetApprovalStrategy() const { return m_approvalStrategy; }
    inline bool ApprovalStrategyHasBeenSet() const { return m_approvalStrategyHasBeenSet; }
    template<typename ApprovalStrategyT = ApprovalStrategy>
    void SetApprovalStrategy(ApprovalStrategyT&& value) { m_approvalStrategyHasBeenSet = true; m_approvalStrategy = std::forward<ApprovalStrategyT>(value); }
    template<typename ApprovalStrategyT = ApprovalStrategy>
    CreateApprovalTeamRequest& WithApprovalStrategy(ApprovalStrategyT&& value) { SetApprovalStrategy(std::forward<ApprovalStrategyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ApprovalTeamRequesterApprovers</code> objects. Contains
     * details for the approvers in the team.</p>
     */
    inline const Aws::Vector<ApprovalTeamRequestApprover>& GetApprovers() const { return m_approvers; }
    inline bool ApproversHasBeenSet() const { return m_approversHasBeenSet; }
    template<typename ApproversT = Aws::Vector<ApprovalTeamRequestApprover>>
    void SetApprovers(ApproversT&& value) { m_approversHasBeenSet = true; m_approvers = std::forward<ApproversT>(value); }
    template<typename ApproversT = Aws::Vector<ApprovalTeamRequestApprover>>
    CreateApprovalTeamRequest& WithApprovers(ApproversT&& value) { SetApprovers(std::forward<ApproversT>(value)); return *this;}
    template<typename ApproversT = ApprovalTeamRequestApprover>
    CreateApprovalTeamRequest& AddApprovers(ApproversT&& value) { m_approversHasBeenSet = true; m_approvers.emplace_back(std::forward<ApproversT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Description for the team.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateApprovalTeamRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>PolicyReference</code> objects. Contains a list of policies
     * that define the permissions for team resources.</p> <p>The protected operation
     * for a service integration might require specific permissions. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/mpa/latest/userguide/mpa-integrations.html">How
     * other services work with Multi-party approval</a> in the <i>Multi-party approval
     * User Guide</i>.</p>
     */
    inline const Aws::Vector<PolicyReference>& GetPolicies() const { return m_policies; }
    inline bool PoliciesHasBeenSet() const { return m_policiesHasBeenSet; }
    template<typename PoliciesT = Aws::Vector<PolicyReference>>
    void SetPolicies(PoliciesT&& value) { m_policiesHasBeenSet = true; m_policies = std::forward<PoliciesT>(value); }
    template<typename PoliciesT = Aws::Vector<PolicyReference>>
    CreateApprovalTeamRequest& WithPolicies(PoliciesT&& value) { SetPolicies(std::forward<PoliciesT>(value)); return *this;}
    template<typename PoliciesT = PolicyReference>
    CreateApprovalTeamRequest& AddPolicies(PoliciesT&& value) { m_policiesHasBeenSet = true; m_policies.emplace_back(std::forward<PoliciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Name of the team.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateApprovalTeamRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags you want to attach to the team.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateApprovalTeamRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateApprovalTeamRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    ApprovalStrategy m_approvalStrategy;
    bool m_approvalStrategyHasBeenSet = false;

    Aws::Vector<ApprovalTeamRequestApprover> m_approvers;
    bool m_approversHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<PolicyReference> m_policies;
    bool m_policiesHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
