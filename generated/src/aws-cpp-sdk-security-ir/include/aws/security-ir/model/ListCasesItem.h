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
    AWS_SECURITYIR_API ListCasesItem();
    AWS_SECURITYIR_API ListCasesItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYIR_API ListCasesItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYIR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetCaseId() const{ return m_caseId; }
    inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }
    inline void SetCaseId(const Aws::String& value) { m_caseIdHasBeenSet = true; m_caseId = value; }
    inline void SetCaseId(Aws::String&& value) { m_caseIdHasBeenSet = true; m_caseId = std::move(value); }
    inline void SetCaseId(const char* value) { m_caseIdHasBeenSet = true; m_caseId.assign(value); }
    inline ListCasesItem& WithCaseId(const Aws::String& value) { SetCaseId(value); return *this;}
    inline ListCasesItem& WithCaseId(Aws::String&& value) { SetCaseId(std::move(value)); return *this;}
    inline ListCasesItem& WithCaseId(const char* value) { SetCaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }
    inline bool LastUpdatedDateHasBeenSet() const { return m_lastUpdatedDateHasBeenSet; }
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = value; }
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::move(value); }
    inline ListCasesItem& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}
    inline ListCasesItem& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline ListCasesItem& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline ListCasesItem& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline ListCasesItem& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetCaseArn() const{ return m_caseArn; }
    inline bool CaseArnHasBeenSet() const { return m_caseArnHasBeenSet; }
    inline void SetCaseArn(const Aws::String& value) { m_caseArnHasBeenSet = true; m_caseArn = value; }
    inline void SetCaseArn(Aws::String&& value) { m_caseArnHasBeenSet = true; m_caseArn = std::move(value); }
    inline void SetCaseArn(const char* value) { m_caseArnHasBeenSet = true; m_caseArn.assign(value); }
    inline ListCasesItem& WithCaseArn(const Aws::String& value) { SetCaseArn(value); return *this;}
    inline ListCasesItem& WithCaseArn(Aws::String&& value) { SetCaseArn(std::move(value)); return *this;}
    inline ListCasesItem& WithCaseArn(const char* value) { SetCaseArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const EngagementType& GetEngagementType() const{ return m_engagementType; }
    inline bool EngagementTypeHasBeenSet() const { return m_engagementTypeHasBeenSet; }
    inline void SetEngagementType(const EngagementType& value) { m_engagementTypeHasBeenSet = true; m_engagementType = value; }
    inline void SetEngagementType(EngagementType&& value) { m_engagementTypeHasBeenSet = true; m_engagementType = std::move(value); }
    inline ListCasesItem& WithEngagementType(const EngagementType& value) { SetEngagementType(value); return *this;}
    inline ListCasesItem& WithEngagementType(EngagementType&& value) { SetEngagementType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const CaseStatus& GetCaseStatus() const{ return m_caseStatus; }
    inline bool CaseStatusHasBeenSet() const { return m_caseStatusHasBeenSet; }
    inline void SetCaseStatus(const CaseStatus& value) { m_caseStatusHasBeenSet = true; m_caseStatus = value; }
    inline void SetCaseStatus(CaseStatus&& value) { m_caseStatusHasBeenSet = true; m_caseStatus = std::move(value); }
    inline ListCasesItem& WithCaseStatus(const CaseStatus& value) { SetCaseStatus(value); return *this;}
    inline ListCasesItem& WithCaseStatus(CaseStatus&& value) { SetCaseStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }
    inline ListCasesItem& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline ListCasesItem& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Utils::DateTime& GetClosedDate() const{ return m_closedDate; }
    inline bool ClosedDateHasBeenSet() const { return m_closedDateHasBeenSet; }
    inline void SetClosedDate(const Aws::Utils::DateTime& value) { m_closedDateHasBeenSet = true; m_closedDate = value; }
    inline void SetClosedDate(Aws::Utils::DateTime&& value) { m_closedDateHasBeenSet = true; m_closedDate = std::move(value); }
    inline ListCasesItem& WithClosedDate(const Aws::Utils::DateTime& value) { SetClosedDate(value); return *this;}
    inline ListCasesItem& WithClosedDate(Aws::Utils::DateTime&& value) { SetClosedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const ResolverType& GetResolverType() const{ return m_resolverType; }
    inline bool ResolverTypeHasBeenSet() const { return m_resolverTypeHasBeenSet; }
    inline void SetResolverType(const ResolverType& value) { m_resolverTypeHasBeenSet = true; m_resolverType = value; }
    inline void SetResolverType(ResolverType&& value) { m_resolverTypeHasBeenSet = true; m_resolverType = std::move(value); }
    inline ListCasesItem& WithResolverType(const ResolverType& value) { SetResolverType(value); return *this;}
    inline ListCasesItem& WithResolverType(ResolverType&& value) { SetResolverType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const PendingAction& GetPendingAction() const{ return m_pendingAction; }
    inline bool PendingActionHasBeenSet() const { return m_pendingActionHasBeenSet; }
    inline void SetPendingAction(const PendingAction& value) { m_pendingActionHasBeenSet = true; m_pendingAction = value; }
    inline void SetPendingAction(PendingAction&& value) { m_pendingActionHasBeenSet = true; m_pendingAction = std::move(value); }
    inline ListCasesItem& WithPendingAction(const PendingAction& value) { SetPendingAction(value); return *this;}
    inline ListCasesItem& WithPendingAction(PendingAction&& value) { SetPendingAction(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_caseId;
    bool m_caseIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDate;
    bool m_lastUpdatedDateHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_caseArn;
    bool m_caseArnHasBeenSet = false;

    EngagementType m_engagementType;
    bool m_engagementTypeHasBeenSet = false;

    CaseStatus m_caseStatus;
    bool m_caseStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::Utils::DateTime m_closedDate;
    bool m_closedDateHasBeenSet = false;

    ResolverType m_resolverType;
    bool m_resolverTypeHasBeenSet = false;

    PendingAction m_pendingAction;
    bool m_pendingActionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
