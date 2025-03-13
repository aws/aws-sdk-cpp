/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/security-ir/model/EngagementType.h>
#include <aws/security-ir/model/CaseStatus.h>
#include <aws/security-ir/model/ResolverType.h>
#include <aws/security-ir/model/PendingAction.h>
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
namespace SecurityIR
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/ListCasesItem">AWS
   * API Reference</a></p>
   */
  class ListCasesItem
  {
  public:
    AWS_SECURITYIR_API ListCasesItem() = default;
    AWS_SECURITYIR_API ListCasesItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYIR_API ListCasesItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYIR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetCaseId() const { return m_caseId; }
    inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }
    template<typename CaseIdT = Aws::String>
    void SetCaseId(CaseIdT&& value) { m_caseIdHasBeenSet = true; m_caseId = std::forward<CaseIdT>(value); }
    template<typename CaseIdT = Aws::String>
    ListCasesItem& WithCaseId(CaseIdT&& value) { SetCaseId(std::forward<CaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const { return m_lastUpdatedDate; }
    inline bool LastUpdatedDateHasBeenSet() const { return m_lastUpdatedDateHasBeenSet; }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    void SetLastUpdatedDate(LastUpdatedDateT&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::forward<LastUpdatedDateT>(value); }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    ListCasesItem& WithLastUpdatedDate(LastUpdatedDateT&& value) { SetLastUpdatedDate(std::forward<LastUpdatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    ListCasesItem& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetCaseArn() const { return m_caseArn; }
    inline bool CaseArnHasBeenSet() const { return m_caseArnHasBeenSet; }
    template<typename CaseArnT = Aws::String>
    void SetCaseArn(CaseArnT&& value) { m_caseArnHasBeenSet = true; m_caseArn = std::forward<CaseArnT>(value); }
    template<typename CaseArnT = Aws::String>
    ListCasesItem& WithCaseArn(CaseArnT&& value) { SetCaseArn(std::forward<CaseArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline EngagementType GetEngagementType() const { return m_engagementType; }
    inline bool EngagementTypeHasBeenSet() const { return m_engagementTypeHasBeenSet; }
    inline void SetEngagementType(EngagementType value) { m_engagementTypeHasBeenSet = true; m_engagementType = value; }
    inline ListCasesItem& WithEngagementType(EngagementType value) { SetEngagementType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline CaseStatus GetCaseStatus() const { return m_caseStatus; }
    inline bool CaseStatusHasBeenSet() const { return m_caseStatusHasBeenSet; }
    inline void SetCaseStatus(CaseStatus value) { m_caseStatusHasBeenSet = true; m_caseStatus = value; }
    inline ListCasesItem& WithCaseStatus(CaseStatus value) { SetCaseStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    ListCasesItem& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Utils::DateTime& GetClosedDate() const { return m_closedDate; }
    inline bool ClosedDateHasBeenSet() const { return m_closedDateHasBeenSet; }
    template<typename ClosedDateT = Aws::Utils::DateTime>
    void SetClosedDate(ClosedDateT&& value) { m_closedDateHasBeenSet = true; m_closedDate = std::forward<ClosedDateT>(value); }
    template<typename ClosedDateT = Aws::Utils::DateTime>
    ListCasesItem& WithClosedDate(ClosedDateT&& value) { SetClosedDate(std::forward<ClosedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline ResolverType GetResolverType() const { return m_resolverType; }
    inline bool ResolverTypeHasBeenSet() const { return m_resolverTypeHasBeenSet; }
    inline void SetResolverType(ResolverType value) { m_resolverTypeHasBeenSet = true; m_resolverType = value; }
    inline ListCasesItem& WithResolverType(ResolverType value) { SetResolverType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline PendingAction GetPendingAction() const { return m_pendingAction; }
    inline bool PendingActionHasBeenSet() const { return m_pendingActionHasBeenSet; }
    inline void SetPendingAction(PendingAction value) { m_pendingActionHasBeenSet = true; m_pendingAction = value; }
    inline ListCasesItem& WithPendingAction(PendingAction value) { SetPendingAction(value); return *this;}
    ///@}
  private:

    Aws::String m_caseId;
    bool m_caseIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDate{};
    bool m_lastUpdatedDateHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_caseArn;
    bool m_caseArnHasBeenSet = false;

    EngagementType m_engagementType{EngagementType::NOT_SET};
    bool m_engagementTypeHasBeenSet = false;

    CaseStatus m_caseStatus{CaseStatus::NOT_SET};
    bool m_caseStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    Aws::Utils::DateTime m_closedDate{};
    bool m_closedDateHasBeenSet = false;

    ResolverType m_resolverType{ResolverType::NOT_SET};
    bool m_resolverTypeHasBeenSet = false;

    PendingAction m_pendingAction{PendingAction::NOT_SET};
    bool m_pendingActionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
