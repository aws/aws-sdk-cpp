﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/ResilienceHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

  /**
   */
  class ListAppAssessmentComplianceDriftsRequest : public ResilienceHubRequest
  {
  public:
    AWS_RESILIENCEHUB_API ListAppAssessmentComplianceDriftsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAppAssessmentComplianceDrifts"; }

    AWS_RESILIENCEHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline const Aws::String& GetAssessmentArn() const{ return m_assessmentArn; }
    inline bool AssessmentArnHasBeenSet() const { return m_assessmentArnHasBeenSet; }
    inline void SetAssessmentArn(const Aws::String& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = value; }
    inline void SetAssessmentArn(Aws::String&& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = std::move(value); }
    inline void SetAssessmentArn(const char* value) { m_assessmentArnHasBeenSet = true; m_assessmentArn.assign(value); }
    inline ListAppAssessmentComplianceDriftsRequest& WithAssessmentArn(const Aws::String& value) { SetAssessmentArn(value); return *this;}
    inline ListAppAssessmentComplianceDriftsRequest& WithAssessmentArn(Aws::String&& value) { SetAssessmentArn(std::move(value)); return *this;}
    inline ListAppAssessmentComplianceDriftsRequest& WithAssessmentArn(const char* value) { SetAssessmentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the maximum number of applications requested.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAppAssessmentComplianceDriftsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the unique token number of the next application to be checked for
     * compliance and regulatory requirements from the list of applications.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListAppAssessmentComplianceDriftsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAppAssessmentComplianceDriftsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAppAssessmentComplianceDriftsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_assessmentArn;
    bool m_assessmentArnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
