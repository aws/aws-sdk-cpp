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
  class DescribeDatasetExportJobRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API DescribeDatasetExportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDatasetExportJob"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the dataset export job to describe.</p>
     */
    inline const Aws::String& GetDatasetExportJobArn() const{ return m_datasetExportJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset export job to describe.</p>
     */
    inline bool DatasetExportJobArnHasBeenSet() const { return m_datasetExportJobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset export job to describe.</p>
     */
    inline void SetDatasetExportJobArn(const Aws::String& value) { m_datasetExportJobArnHasBeenSet = true; m_datasetExportJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset export job to describe.</p>
     */
    inline void SetDatasetExportJobArn(Aws::String&& value) { m_datasetExportJobArnHasBeenSet = true; m_datasetExportJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset export job to describe.</p>
     */
    inline void SetDatasetExportJobArn(const char* value) { m_datasetExportJobArnHasBeenSet = true; m_datasetExportJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset export job to describe.</p>
     */
    inline DescribeDatasetExportJobRequest& WithDatasetExportJobArn(const Aws::String& value) { SetDatasetExportJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset export job to describe.</p>
     */
    inline DescribeDatasetExportJobRequest& WithDatasetExportJobArn(Aws::String&& value) { SetDatasetExportJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset export job to describe.</p>
     */
    inline DescribeDatasetExportJobRequest& WithDatasetExportJobArn(const char* value) { SetDatasetExportJobArn(value); return *this;}

  private:

    Aws::String m_datasetExportJobArn;
    bool m_datasetExportJobArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
