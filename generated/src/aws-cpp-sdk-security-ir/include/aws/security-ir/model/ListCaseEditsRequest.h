﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/security-ir/SecurityIRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityIR
{
namespace Model
{

  /**
   */
  class ListCaseEditsRequest : public SecurityIRRequest
  {
  public:
    AWS_SECURITYIR_API ListCaseEditsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCaseEdits"; }

    AWS_SECURITYIR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Optional element for a customer provided token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCaseEditsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional element to identify how many results to obtain. There is a maximum
     * value of 25.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListCaseEditsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required element used with ListCaseEdits to identify the case to query.</p>
     */
    inline const Aws::String& GetCaseId() const { return m_caseId; }
    inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }
    template<typename CaseIdT = Aws::String>
    void SetCaseId(CaseIdT&& value) { m_caseIdHasBeenSet = true; m_caseId = std::forward<CaseIdT>(value); }
    template<typename CaseIdT = Aws::String>
    ListCaseEditsRequest& WithCaseId(CaseIdT&& value) { SetCaseId(std::forward<CaseIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_caseId;
    bool m_caseIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
