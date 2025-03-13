/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class DescribeDatasetRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API DescribeDatasetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDataset"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset to describe.</p>
     */
    inline const Aws::String& GetDatasetArn() const { return m_datasetArn; }
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }
    template<typename DatasetArnT = Aws::String>
    void SetDatasetArn(DatasetArnT&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::forward<DatasetArnT>(value); }
    template<typename DatasetArnT = Aws::String>
    DescribeDatasetRequest& WithDatasetArn(DatasetArnT&& value) { SetDatasetArn(std::forward<DatasetArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
