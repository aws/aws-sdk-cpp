/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class ListDatasetLabelsRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API ListDatasetLabelsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDatasetLabels"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The Amazon Resource Name (ARN) of the dataset that you want to use. </p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the dataset that you want to use. </p>
     */
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the dataset that you want to use. </p>
     */
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArnHasBeenSet = true; m_datasetArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the dataset that you want to use. </p>
     */
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the dataset that you want to use. </p>
     */
    inline void SetDatasetArn(const char* value) { m_datasetArnHasBeenSet = true; m_datasetArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the dataset that you want to use. </p>
     */
    inline ListDatasetLabelsRequest& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the dataset that you want to use. </p>
     */
    inline ListDatasetLabelsRequest& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the dataset that you want to use. </p>
     */
    inline ListDatasetLabelsRequest& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}


    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline ListDatasetLabelsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline ListDatasetLabelsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline ListDatasetLabelsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return per paginated call. The largest value
     * you can specify is 100. If you specify a value greater than 100, a
     * ValidationException error occurs. The default value is 100. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return per paginated call. The largest value
     * you can specify is 100. If you specify a value greater than 100, a
     * ValidationException error occurs. The default value is 100. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return per paginated call. The largest value
     * you can specify is 100. If you specify a value greater than 100, a
     * ValidationException error occurs. The default value is 100. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return per paginated call. The largest value
     * you can specify is 100. If you specify a value greater than 100, a
     * ValidationException error occurs. The default value is 100. </p>
     */
    inline ListDatasetLabelsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
