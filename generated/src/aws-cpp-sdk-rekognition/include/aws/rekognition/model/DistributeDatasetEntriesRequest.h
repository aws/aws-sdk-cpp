/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/DistributeDataset.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class DistributeDatasetEntriesRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API DistributeDatasetEntriesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DistributeDatasetEntries"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARNS for the training dataset and test dataset that you want to use. The
     * datasets must belong to the same project. The test dataset must be empty. </p>
     */
    inline const Aws::Vector<DistributeDataset>& GetDatasets() const{ return m_datasets; }

    /**
     * <p>The ARNS for the training dataset and test dataset that you want to use. The
     * datasets must belong to the same project. The test dataset must be empty. </p>
     */
    inline bool DatasetsHasBeenSet() const { return m_datasetsHasBeenSet; }

    /**
     * <p>The ARNS for the training dataset and test dataset that you want to use. The
     * datasets must belong to the same project. The test dataset must be empty. </p>
     */
    inline void SetDatasets(const Aws::Vector<DistributeDataset>& value) { m_datasetsHasBeenSet = true; m_datasets = value; }

    /**
     * <p>The ARNS for the training dataset and test dataset that you want to use. The
     * datasets must belong to the same project. The test dataset must be empty. </p>
     */
    inline void SetDatasets(Aws::Vector<DistributeDataset>&& value) { m_datasetsHasBeenSet = true; m_datasets = std::move(value); }

    /**
     * <p>The ARNS for the training dataset and test dataset that you want to use. The
     * datasets must belong to the same project. The test dataset must be empty. </p>
     */
    inline DistributeDatasetEntriesRequest& WithDatasets(const Aws::Vector<DistributeDataset>& value) { SetDatasets(value); return *this;}

    /**
     * <p>The ARNS for the training dataset and test dataset that you want to use. The
     * datasets must belong to the same project. The test dataset must be empty. </p>
     */
    inline DistributeDatasetEntriesRequest& WithDatasets(Aws::Vector<DistributeDataset>&& value) { SetDatasets(std::move(value)); return *this;}

    /**
     * <p>The ARNS for the training dataset and test dataset that you want to use. The
     * datasets must belong to the same project. The test dataset must be empty. </p>
     */
    inline DistributeDatasetEntriesRequest& AddDatasets(const DistributeDataset& value) { m_datasetsHasBeenSet = true; m_datasets.push_back(value); return *this; }

    /**
     * <p>The ARNS for the training dataset and test dataset that you want to use. The
     * datasets must belong to the same project. The test dataset must be empty. </p>
     */
    inline DistributeDatasetEntriesRequest& AddDatasets(DistributeDataset&& value) { m_datasetsHasBeenSet = true; m_datasets.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DistributeDataset> m_datasets;
    bool m_datasetsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
