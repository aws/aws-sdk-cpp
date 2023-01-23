/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/CheckProvider.h>
#include <aws/core/utils/DateTime.h>
#include <aws/wellarchitected/model/CheckStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Trusted Advisor check summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/CheckSummary">AWS
   * API Reference</a></p>
   */
  class CheckSummary
  {
  public:
    AWS_WELLARCHITECTED_API CheckSummary();
    AWS_WELLARCHITECTED_API CheckSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API CheckSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Trusted Advisor check ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>Trusted Advisor check ID.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>Trusted Advisor check ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>Trusted Advisor check ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>Trusted Advisor check ID.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>Trusted Advisor check ID.</p>
     */
    inline CheckSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Trusted Advisor check ID.</p>
     */
    inline CheckSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>Trusted Advisor check ID.</p>
     */
    inline CheckSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Trusted Advisor check name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Trusted Advisor check name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Trusted Advisor check name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Trusted Advisor check name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Trusted Advisor check name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Trusted Advisor check name.</p>
     */
    inline CheckSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Trusted Advisor check name.</p>
     */
    inline CheckSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Trusted Advisor check name.</p>
     */
    inline CheckSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Provider of the check related to the best practice.</p>
     */
    inline const CheckProvider& GetProvider() const{ return m_provider; }

    /**
     * <p>Provider of the check related to the best practice.</p>
     */
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }

    /**
     * <p>Provider of the check related to the best practice.</p>
     */
    inline void SetProvider(const CheckProvider& value) { m_providerHasBeenSet = true; m_provider = value; }

    /**
     * <p>Provider of the check related to the best practice.</p>
     */
    inline void SetProvider(CheckProvider&& value) { m_providerHasBeenSet = true; m_provider = std::move(value); }

    /**
     * <p>Provider of the check related to the best practice.</p>
     */
    inline CheckSummary& WithProvider(const CheckProvider& value) { SetProvider(value); return *this;}

    /**
     * <p>Provider of the check related to the best practice.</p>
     */
    inline CheckSummary& WithProvider(CheckProvider&& value) { SetProvider(std::move(value)); return *this;}


    /**
     * <p>Trusted Advisor check description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Trusted Advisor check description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Trusted Advisor check description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Trusted Advisor check description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Trusted Advisor check description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Trusted Advisor check description.</p>
     */
    inline CheckSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Trusted Advisor check description.</p>
     */
    inline CheckSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Trusted Advisor check description.</p>
     */
    inline CheckSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    
    inline CheckSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    
    inline CheckSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>Well-Architected Lens ARN associated to the check.</p>
     */
    inline const Aws::String& GetLensArn() const{ return m_lensArn; }

    /**
     * <p>Well-Architected Lens ARN associated to the check.</p>
     */
    inline bool LensArnHasBeenSet() const { return m_lensArnHasBeenSet; }

    /**
     * <p>Well-Architected Lens ARN associated to the check.</p>
     */
    inline void SetLensArn(const Aws::String& value) { m_lensArnHasBeenSet = true; m_lensArn = value; }

    /**
     * <p>Well-Architected Lens ARN associated to the check.</p>
     */
    inline void SetLensArn(Aws::String&& value) { m_lensArnHasBeenSet = true; m_lensArn = std::move(value); }

    /**
     * <p>Well-Architected Lens ARN associated to the check.</p>
     */
    inline void SetLensArn(const char* value) { m_lensArnHasBeenSet = true; m_lensArn.assign(value); }

    /**
     * <p>Well-Architected Lens ARN associated to the check.</p>
     */
    inline CheckSummary& WithLensArn(const Aws::String& value) { SetLensArn(value); return *this;}

    /**
     * <p>Well-Architected Lens ARN associated to the check.</p>
     */
    inline CheckSummary& WithLensArn(Aws::String&& value) { SetLensArn(std::move(value)); return *this;}

    /**
     * <p>Well-Architected Lens ARN associated to the check.</p>
     */
    inline CheckSummary& WithLensArn(const char* value) { SetLensArn(value); return *this;}


    
    inline const Aws::String& GetPillarId() const{ return m_pillarId; }

    
    inline bool PillarIdHasBeenSet() const { return m_pillarIdHasBeenSet; }

    
    inline void SetPillarId(const Aws::String& value) { m_pillarIdHasBeenSet = true; m_pillarId = value; }

    
    inline void SetPillarId(Aws::String&& value) { m_pillarIdHasBeenSet = true; m_pillarId = std::move(value); }

    
    inline void SetPillarId(const char* value) { m_pillarIdHasBeenSet = true; m_pillarId.assign(value); }

    
    inline CheckSummary& WithPillarId(const Aws::String& value) { SetPillarId(value); return *this;}

    
    inline CheckSummary& WithPillarId(Aws::String&& value) { SetPillarId(std::move(value)); return *this;}

    
    inline CheckSummary& WithPillarId(const char* value) { SetPillarId(value); return *this;}


    
    inline const Aws::String& GetQuestionId() const{ return m_questionId; }

    
    inline bool QuestionIdHasBeenSet() const { return m_questionIdHasBeenSet; }

    
    inline void SetQuestionId(const Aws::String& value) { m_questionIdHasBeenSet = true; m_questionId = value; }

    
    inline void SetQuestionId(Aws::String&& value) { m_questionIdHasBeenSet = true; m_questionId = std::move(value); }

    
    inline void SetQuestionId(const char* value) { m_questionIdHasBeenSet = true; m_questionId.assign(value); }

    
    inline CheckSummary& WithQuestionId(const Aws::String& value) { SetQuestionId(value); return *this;}

    
    inline CheckSummary& WithQuestionId(Aws::String&& value) { SetQuestionId(std::move(value)); return *this;}

    
    inline CheckSummary& WithQuestionId(const char* value) { SetQuestionId(value); return *this;}


    
    inline const Aws::String& GetChoiceId() const{ return m_choiceId; }

    
    inline bool ChoiceIdHasBeenSet() const { return m_choiceIdHasBeenSet; }

    
    inline void SetChoiceId(const Aws::String& value) { m_choiceIdHasBeenSet = true; m_choiceId = value; }

    
    inline void SetChoiceId(Aws::String&& value) { m_choiceIdHasBeenSet = true; m_choiceId = std::move(value); }

    
    inline void SetChoiceId(const char* value) { m_choiceIdHasBeenSet = true; m_choiceId.assign(value); }

    
    inline CheckSummary& WithChoiceId(const Aws::String& value) { SetChoiceId(value); return *this;}

    
    inline CheckSummary& WithChoiceId(Aws::String&& value) { SetChoiceId(std::move(value)); return *this;}

    
    inline CheckSummary& WithChoiceId(const char* value) { SetChoiceId(value); return *this;}


    /**
     * <p>Status associated to the check.</p>
     */
    inline const CheckStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Status associated to the check.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Status associated to the check.</p>
     */
    inline void SetStatus(const CheckStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Status associated to the check.</p>
     */
    inline void SetStatus(CheckStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Status associated to the check.</p>
     */
    inline CheckSummary& WithStatus(const CheckStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Status associated to the check.</p>
     */
    inline CheckSummary& WithStatus(CheckStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Account summary associated to the check.</p>
     */
    inline const Aws::Map<CheckStatus, int>& GetAccountSummary() const{ return m_accountSummary; }

    /**
     * <p>Account summary associated to the check.</p>
     */
    inline bool AccountSummaryHasBeenSet() const { return m_accountSummaryHasBeenSet; }

    /**
     * <p>Account summary associated to the check.</p>
     */
    inline void SetAccountSummary(const Aws::Map<CheckStatus, int>& value) { m_accountSummaryHasBeenSet = true; m_accountSummary = value; }

    /**
     * <p>Account summary associated to the check.</p>
     */
    inline void SetAccountSummary(Aws::Map<CheckStatus, int>&& value) { m_accountSummaryHasBeenSet = true; m_accountSummary = std::move(value); }

    /**
     * <p>Account summary associated to the check.</p>
     */
    inline CheckSummary& WithAccountSummary(const Aws::Map<CheckStatus, int>& value) { SetAccountSummary(value); return *this;}

    /**
     * <p>Account summary associated to the check.</p>
     */
    inline CheckSummary& WithAccountSummary(Aws::Map<CheckStatus, int>&& value) { SetAccountSummary(std::move(value)); return *this;}

    /**
     * <p>Account summary associated to the check.</p>
     */
    inline CheckSummary& AddAccountSummary(const CheckStatus& key, int value) { m_accountSummaryHasBeenSet = true; m_accountSummary.emplace(key, value); return *this; }

    /**
     * <p>Account summary associated to the check.</p>
     */
    inline CheckSummary& AddAccountSummary(CheckStatus&& key, int value) { m_accountSummaryHasBeenSet = true; m_accountSummary.emplace(std::move(key), value); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CheckProvider m_provider;
    bool m_providerHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_lensArn;
    bool m_lensArnHasBeenSet = false;

    Aws::String m_pillarId;
    bool m_pillarIdHasBeenSet = false;

    Aws::String m_questionId;
    bool m_questionIdHasBeenSet = false;

    Aws::String m_choiceId;
    bool m_choiceIdHasBeenSet = false;

    CheckStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<CheckStatus, int> m_accountSummary;
    bool m_accountSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
