/**
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
    AWS_SECURITYIR_API ListCaseEditsRequest();

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
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListCaseEditsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCaseEditsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCaseEditsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional element to identify how many results to obtain. There is a maximum
     * value of 25.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListCaseEditsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required element used with ListCaseEdits to identify the case to query.</p>
     */
    inline const Aws::String& GetCaseId() const{ return m_caseId; }
    inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }
    inline void SetCaseId(const Aws::String& value) { m_caseIdHasBeenSet = true; m_caseId = value; }
    inline void SetCaseId(Aws::String&& value) { m_caseIdHasBeenSet = true; m_caseId = std::move(value); }
    inline void SetCaseId(const char* value) { m_caseIdHasBeenSet = true; m_caseId.assign(value); }
    inline ListCaseEditsRequest& WithCaseId(const Aws::String& value) { SetCaseId(value); return *this;}
    inline ListCaseEditsRequest& WithCaseId(Aws::String&& value) { SetCaseId(std::move(value)); return *this;}
    inline ListCaseEditsRequest& WithCaseId(const char* value) { SetCaseId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_caseId;
    bool m_caseIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
