/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2Request.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/AssessmentStatus.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace resiliencehubv2 {
namespace Model {

/**
 */
class ListServicesRequest : public Resiliencehubv2Request {
 public:
  AWS_RESILIENCEHUBV2_API ListServicesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListServices"; }

  AWS_RESILIENCEHUBV2_API Aws::String SerializePayload() const override;

  AWS_RESILIENCEHUBV2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{

  inline const Aws::String& GetSystemArn() const { return m_systemArn; }
  inline bool SystemArnHasBeenSet() const { return m_systemArnHasBeenSet; }
  template <typename SystemArnT = Aws::String>
  void SetSystemArn(SystemArnT&& value) {
    m_systemArnHasBeenSet = true;
    m_systemArn = std::forward<SystemArnT>(value);
  }
  template <typename SystemArnT = Aws::String>
  ListServicesRequest& WithSystemArn(SystemArnT&& value) {
    SetSystemArn(std::forward<SystemArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter services by user journey identifier.</p>
   */
  inline const Aws::String& GetUserJourneyId() const { return m_userJourneyId; }
  inline bool UserJourneyIdHasBeenSet() const { return m_userJourneyIdHasBeenSet; }
  template <typename UserJourneyIdT = Aws::String>
  void SetUserJourneyId(UserJourneyIdT&& value) {
    m_userJourneyIdHasBeenSet = true;
    m_userJourneyId = std::forward<UserJourneyIdT>(value);
  }
  template <typename UserJourneyIdT = Aws::String>
  ListServicesRequest& WithUserJourneyId(UserJourneyIdT&& value) {
    SetUserJourneyId(std::forward<UserJourneyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter services by organizational unit (OU) identifier.</p>
   */
  inline const Aws::String& GetOuId() const { return m_ouId; }
  inline bool OuIdHasBeenSet() const { return m_ouIdHasBeenSet; }
  template <typename OuIdT = Aws::String>
  void SetOuId(OuIdT&& value) {
    m_ouIdHasBeenSet = true;
    m_ouId = std::forward<OuIdT>(value);
  }
  template <typename OuIdT = Aws::String>
  ListServicesRequest& WithOuId(OuIdT&& value) {
    SetOuId(std::forward<OuIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter services by AWS account ID.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  ListServicesRequest& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter services by assessment status.</p>
   */
  inline AssessmentStatus GetAssessmentStatus() const { return m_assessmentStatus; }
  inline bool AssessmentStatusHasBeenSet() const { return m_assessmentStatusHasBeenSet; }
  inline void SetAssessmentStatus(AssessmentStatus value) {
    m_assessmentStatusHasBeenSet = true;
    m_assessmentStatus = value;
  }
  inline ListServicesRequest& WithAssessmentStatus(AssessmentStatus value) {
    SetAssessmentStatus(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
  inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
  template <typename PolicyArnT = Aws::String>
  void SetPolicyArn(PolicyArnT&& value) {
    m_policyArnHasBeenSet = true;
    m_policyArn = std::forward<PolicyArnT>(value);
  }
  template <typename PolicyArnT = Aws::String>
  ListServicesRequest& WithPolicyArn(PolicyArnT&& value) {
    SetPolicyArn(std::forward<PolicyArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListServicesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListServicesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_systemArn;

  Aws::String m_userJourneyId;

  Aws::String m_ouId;

  Aws::String m_accountId;

  AssessmentStatus m_assessmentStatus{AssessmentStatus::NOT_SET};

  Aws::String m_policyArn;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_systemArnHasBeenSet = false;
  bool m_userJourneyIdHasBeenSet = false;
  bool m_ouIdHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
  bool m_assessmentStatusHasBeenSet = false;
  bool m_policyArnHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
