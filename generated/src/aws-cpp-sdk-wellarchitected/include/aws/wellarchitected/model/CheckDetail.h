/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/CheckProvider.h>
#include <aws/wellarchitected/model/CheckStatus.h>
#include <aws/wellarchitected/model/CheckFailureReason.h>
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
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>Account details for a Well-Architected best practice in relation to Trusted
   * Advisor checks.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/CheckDetail">AWS
   * API Reference</a></p>
   */
  class CheckDetail
  {
  public:
    AWS_WELLARCHITECTED_API CheckDetail() = default;
    AWS_WELLARCHITECTED_API CheckDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API CheckDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Trusted Advisor check ID.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CheckDetail& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Trusted Advisor check name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CheckDetail& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Trusted Advisor check description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CheckDetail& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provider of the check related to the best practice.</p>
     */
    inline CheckProvider GetProvider() const { return m_provider; }
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
    inline void SetProvider(CheckProvider value) { m_providerHasBeenSet = true; m_provider = value; }
    inline CheckDetail& WithProvider(CheckProvider value) { SetProvider(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Well-Architected Lens ARN associated to the check.</p>
     */
    inline const Aws::String& GetLensArn() const { return m_lensArn; }
    inline bool LensArnHasBeenSet() const { return m_lensArnHasBeenSet; }
    template<typename LensArnT = Aws::String>
    void SetLensArn(LensArnT&& value) { m_lensArnHasBeenSet = true; m_lensArn = std::forward<LensArnT>(value); }
    template<typename LensArnT = Aws::String>
    CheckDetail& WithLensArn(LensArnT&& value) { SetLensArn(std::forward<LensArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetPillarId() const { return m_pillarId; }
    inline bool PillarIdHasBeenSet() const { return m_pillarIdHasBeenSet; }
    template<typename PillarIdT = Aws::String>
    void SetPillarId(PillarIdT&& value) { m_pillarIdHasBeenSet = true; m_pillarId = std::forward<PillarIdT>(value); }
    template<typename PillarIdT = Aws::String>
    CheckDetail& WithPillarId(PillarIdT&& value) { SetPillarId(std::forward<PillarIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetQuestionId() const { return m_questionId; }
    inline bool QuestionIdHasBeenSet() const { return m_questionIdHasBeenSet; }
    template<typename QuestionIdT = Aws::String>
    void SetQuestionId(QuestionIdT&& value) { m_questionIdHasBeenSet = true; m_questionId = std::forward<QuestionIdT>(value); }
    template<typename QuestionIdT = Aws::String>
    CheckDetail& WithQuestionId(QuestionIdT&& value) { SetQuestionId(std::forward<QuestionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetChoiceId() const { return m_choiceId; }
    inline bool ChoiceIdHasBeenSet() const { return m_choiceIdHasBeenSet; }
    template<typename ChoiceIdT = Aws::String>
    void SetChoiceId(ChoiceIdT&& value) { m_choiceIdHasBeenSet = true; m_choiceId = std::forward<ChoiceIdT>(value); }
    template<typename ChoiceIdT = Aws::String>
    CheckDetail& WithChoiceId(ChoiceIdT&& value) { SetChoiceId(std::forward<ChoiceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status associated to the check.</p>
     */
    inline CheckStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CheckStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CheckDetail& WithStatus(CheckStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    CheckDetail& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Count of flagged resources associated to the check.</p>
     */
    inline int GetFlaggedResources() const { return m_flaggedResources; }
    inline bool FlaggedResourcesHasBeenSet() const { return m_flaggedResourcesHasBeenSet; }
    inline void SetFlaggedResources(int value) { m_flaggedResourcesHasBeenSet = true; m_flaggedResources = value; }
    inline CheckDetail& WithFlaggedResources(int value) { SetFlaggedResources(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reason associated to the check.</p>
     */
    inline CheckFailureReason GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(CheckFailureReason value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline CheckDetail& WithReason(CheckFailureReason value) { SetReason(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    CheckDetail& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    CheckProvider m_provider{CheckProvider::NOT_SET};
    bool m_providerHasBeenSet = false;

    Aws::String m_lensArn;
    bool m_lensArnHasBeenSet = false;

    Aws::String m_pillarId;
    bool m_pillarIdHasBeenSet = false;

    Aws::String m_questionId;
    bool m_questionIdHasBeenSet = false;

    Aws::String m_choiceId;
    bool m_choiceIdHasBeenSet = false;

    CheckStatus m_status{CheckStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    int m_flaggedResources{0};
    bool m_flaggedResourcesHasBeenSet = false;

    CheckFailureReason m_reason{CheckFailureReason::NOT_SET};
    bool m_reasonHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
