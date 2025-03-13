/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class ListDatasetEntriesRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API ListDatasetEntriesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDatasetEntries"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) for the dataset that you want to use. </p>
     */
    inline const Aws::String& GetDatasetArn() const { return m_datasetArn; }
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }
    template<typename DatasetArnT = Aws::String>
    void SetDatasetArn(DatasetArnT&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::forward<DatasetArnT>(value); }
    template<typename DatasetArnT = Aws::String>
    ListDatasetEntriesRequest& WithDatasetArn(DatasetArnT&& value) { SetDatasetArn(std::forward<DatasetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a label filter for the response. The response includes an entry
     * only if one or more of the labels in <code>ContainsLabels</code> exist in the
     * entry. </p>
     */
    inline const Aws::Vector<Aws::String>& GetContainsLabels() const { return m_containsLabels; }
    inline bool ContainsLabelsHasBeenSet() const { return m_containsLabelsHasBeenSet; }
    template<typename ContainsLabelsT = Aws::Vector<Aws::String>>
    void SetContainsLabels(ContainsLabelsT&& value) { m_containsLabelsHasBeenSet = true; m_containsLabels = std::forward<ContainsLabelsT>(value); }
    template<typename ContainsLabelsT = Aws::Vector<Aws::String>>
    ListDatasetEntriesRequest& WithContainsLabels(ContainsLabelsT&& value) { SetContainsLabels(std::forward<ContainsLabelsT>(value)); return *this;}
    template<typename ContainsLabelsT = Aws::String>
    ListDatasetEntriesRequest& AddContainsLabels(ContainsLabelsT&& value) { m_containsLabelsHasBeenSet = true; m_containsLabels.emplace_back(std::forward<ContainsLabelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Specify <code>true</code> to get only the JSON Lines where the image is
     * labeled. Specify <code>false</code> to get only the JSON Lines where the image
     * isn't labeled. If you don't specify <code>Labeled</code>,
     * <code>ListDatasetEntries</code> returns JSON Lines for labeled and unlabeled
     * images. </p>
     */
    inline bool GetLabeled() const { return m_labeled; }
    inline bool LabeledHasBeenSet() const { return m_labeledHasBeenSet; }
    inline void SetLabeled(bool value) { m_labeledHasBeenSet = true; m_labeled = value; }
    inline ListDatasetEntriesRequest& WithLabeled(bool value) { SetLabeled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, <code>ListDatasetEntries</code> only returns JSON Lines where
     * the value of <code>SourceRefContains</code> is part of the
     * <code>source-ref</code> field. The <code>source-ref</code> field contains the
     * Amazon S3 location of the image. You can use <code>SouceRefContains</code> for
     * tasks such as getting the JSON Line for a single image, or gettting JSON Lines
     * for all images within a specific folder.</p>
     */
    inline const Aws::String& GetSourceRefContains() const { return m_sourceRefContains; }
    inline bool SourceRefContainsHasBeenSet() const { return m_sourceRefContainsHasBeenSet; }
    template<typename SourceRefContainsT = Aws::String>
    void SetSourceRefContains(SourceRefContainsT&& value) { m_sourceRefContainsHasBeenSet = true; m_sourceRefContains = std::forward<SourceRefContainsT>(value); }
    template<typename SourceRefContainsT = Aws::String>
    ListDatasetEntriesRequest& WithSourceRefContains(SourceRefContainsT&& value) { SetSourceRefContains(std::forward<SourceRefContainsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an error filter for the response. Specify <code>True</code> to only
     * include entries that have errors. </p>
     */
    inline bool GetHasErrors() const { return m_hasErrors; }
    inline bool HasErrorsHasBeenSet() const { return m_hasErrorsHasBeenSet; }
    inline void SetHasErrors(bool value) { m_hasErrorsHasBeenSet = true; m_hasErrors = value; }
    inline ListDatasetEntriesRequest& WithHasErrors(bool value) { SetHasErrors(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDatasetEntriesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per paginated call. The largest value
     * you can specify is 100. If you specify a value greater than 100, a
     * ValidationException error occurs. The default value is 100. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListDatasetEntriesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_containsLabels;
    bool m_containsLabelsHasBeenSet = false;

    bool m_labeled{false};
    bool m_labeledHasBeenSet = false;

    Aws::String m_sourceRefContains;
    bool m_sourceRefContainsHasBeenSet = false;

    bool m_hasErrors{false};
    bool m_hasErrorsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
