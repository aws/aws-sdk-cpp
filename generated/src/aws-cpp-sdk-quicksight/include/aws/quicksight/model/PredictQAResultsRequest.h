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
    AWS_QUICKSIGHT_API PredictQAResultsRequest();

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
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline PredictQAResultsRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline PredictQAResultsRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline PredictQAResultsRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query text to be used to predict QA results.</p>
     */
    inline const Aws::String& GetQueryText() const{ return m_queryText; }
    inline bool QueryTextHasBeenSet() const { return m_queryTextHasBeenSet; }
    inline void SetQueryText(const Aws::String& value) { m_queryTextHasBeenSet = true; m_queryText = value; }
    inline void SetQueryText(Aws::String&& value) { m_queryTextHasBeenSet = true; m_queryText = std::move(value); }
    inline void SetQueryText(const char* value) { m_queryTextHasBeenSet = true; m_queryText.assign(value); }
    inline PredictQAResultsRequest& WithQueryText(const Aws::String& value) { SetQueryText(value); return *this;}
    inline PredictQAResultsRequest& WithQueryText(Aws::String&& value) { SetQueryText(std::move(value)); return *this;}
    inline PredictQAResultsRequest& WithQueryText(const char* value) { SetQueryText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Q indicies are included or excluded.</p>
     */
    inline const IncludeQuickSightQIndex& GetIncludeQuickSightQIndex() const{ return m_includeQuickSightQIndex; }
    inline bool IncludeQuickSightQIndexHasBeenSet() const { return m_includeQuickSightQIndexHasBeenSet; }
    inline void SetIncludeQuickSightQIndex(const IncludeQuickSightQIndex& value) { m_includeQuickSightQIndexHasBeenSet = true; m_includeQuickSightQIndex = value; }
    inline void SetIncludeQuickSightQIndex(IncludeQuickSightQIndex&& value) { m_includeQuickSightQIndexHasBeenSet = true; m_includeQuickSightQIndex = std::move(value); }
    inline PredictQAResultsRequest& WithIncludeQuickSightQIndex(const IncludeQuickSightQIndex& value) { SetIncludeQuickSightQIndex(value); return *this;}
    inline PredictQAResultsRequest& WithIncludeQuickSightQIndex(IncludeQuickSightQIndex&& value) { SetIncludeQuickSightQIndex(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether generated answers are included or excluded.</p>
     */
    inline const IncludeGeneratedAnswer& GetIncludeGeneratedAnswer() const{ return m_includeGeneratedAnswer; }
    inline bool IncludeGeneratedAnswerHasBeenSet() const { return m_includeGeneratedAnswerHasBeenSet; }
    inline void SetIncludeGeneratedAnswer(const IncludeGeneratedAnswer& value) { m_includeGeneratedAnswerHasBeenSet = true; m_includeGeneratedAnswer = value; }
    inline void SetIncludeGeneratedAnswer(IncludeGeneratedAnswer&& value) { m_includeGeneratedAnswerHasBeenSet = true; m_includeGeneratedAnswer = std::move(value); }
    inline PredictQAResultsRequest& WithIncludeGeneratedAnswer(const IncludeGeneratedAnswer& value) { SetIncludeGeneratedAnswer(value); return *this;}
    inline PredictQAResultsRequest& WithIncludeGeneratedAnswer(IncludeGeneratedAnswer&& value) { SetIncludeGeneratedAnswer(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of maximum topics to be considered to predict QA results.</p>
     */
    inline int GetMaxTopicsToConsider() const{ return m_maxTopicsToConsider; }
    inline bool MaxTopicsToConsiderHasBeenSet() const { return m_maxTopicsToConsiderHasBeenSet; }
    inline void SetMaxTopicsToConsider(int value) { m_maxTopicsToConsiderHasBeenSet = true; m_maxTopicsToConsider = value; }
    inline PredictQAResultsRequest& WithMaxTopicsToConsider(int value) { SetMaxTopicsToConsider(value); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_queryText;
    bool m_queryTextHasBeenSet = false;

    IncludeQuickSightQIndex m_includeQuickSightQIndex;
    bool m_includeQuickSightQIndexHasBeenSet = false;

    IncludeGeneratedAnswer m_includeGeneratedAnswer;
    bool m_includeGeneratedAnswerHasBeenSet = false;

    int m_maxTopicsToConsider;
    bool m_maxTopicsToConsiderHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
