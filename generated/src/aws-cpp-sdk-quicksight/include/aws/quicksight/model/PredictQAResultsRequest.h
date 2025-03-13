/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/IncludeQuickSightQIndex.h>
#include <aws/quicksight/model/IncludeGeneratedAnswer.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class PredictQAResultsRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API PredictQAResultsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PredictQAResults"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that the user wants to execute
     * Predict QA results in.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    PredictQAResultsRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query text to be used to predict QA results.</p>
     */
    inline const Aws::String& GetQueryText() const { return m_queryText; }
    inline bool QueryTextHasBeenSet() const { return m_queryTextHasBeenSet; }
    template<typename QueryTextT = Aws::String>
    void SetQueryText(QueryTextT&& value) { m_queryTextHasBeenSet = true; m_queryText = std::forward<QueryTextT>(value); }
    template<typename QueryTextT = Aws::String>
    PredictQAResultsRequest& WithQueryText(QueryTextT&& value) { SetQueryText(std::forward<QueryTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Q indicies are included or excluded.</p>
     */
    inline IncludeQuickSightQIndex GetIncludeQuickSightQIndex() const { return m_includeQuickSightQIndex; }
    inline bool IncludeQuickSightQIndexHasBeenSet() const { return m_includeQuickSightQIndexHasBeenSet; }
    inline void SetIncludeQuickSightQIndex(IncludeQuickSightQIndex value) { m_includeQuickSightQIndexHasBeenSet = true; m_includeQuickSightQIndex = value; }
    inline PredictQAResultsRequest& WithIncludeQuickSightQIndex(IncludeQuickSightQIndex value) { SetIncludeQuickSightQIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether generated answers are included or excluded.</p>
     */
    inline IncludeGeneratedAnswer GetIncludeGeneratedAnswer() const { return m_includeGeneratedAnswer; }
    inline bool IncludeGeneratedAnswerHasBeenSet() const { return m_includeGeneratedAnswerHasBeenSet; }
    inline void SetIncludeGeneratedAnswer(IncludeGeneratedAnswer value) { m_includeGeneratedAnswerHasBeenSet = true; m_includeGeneratedAnswer = value; }
    inline PredictQAResultsRequest& WithIncludeGeneratedAnswer(IncludeGeneratedAnswer value) { SetIncludeGeneratedAnswer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of maximum topics to be considered to predict QA results.</p>
     */
    inline int GetMaxTopicsToConsider() const { return m_maxTopicsToConsider; }
    inline bool MaxTopicsToConsiderHasBeenSet() const { return m_maxTopicsToConsiderHasBeenSet; }
    inline void SetMaxTopicsToConsider(int value) { m_maxTopicsToConsiderHasBeenSet = true; m_maxTopicsToConsider = value; }
    inline PredictQAResultsRequest& WithMaxTopicsToConsider(int value) { SetMaxTopicsToConsider(value); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_queryText;
    bool m_queryTextHasBeenSet = false;

    IncludeQuickSightQIndex m_includeQuickSightQIndex{IncludeQuickSightQIndex::NOT_SET};
    bool m_includeQuickSightQIndexHasBeenSet = false;

    IncludeGeneratedAnswer m_includeGeneratedAnswer{IncludeGeneratedAnswer::NOT_SET};
    bool m_includeGeneratedAnswerHasBeenSet = false;

    int m_maxTopicsToConsider{0};
    bool m_maxTopicsToConsiderHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
