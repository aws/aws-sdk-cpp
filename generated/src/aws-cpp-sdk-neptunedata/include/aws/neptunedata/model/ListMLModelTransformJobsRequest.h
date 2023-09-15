/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/neptunedata/NeptunedataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace neptunedata
{
namespace Model
{

  /**
   */
  class ListMLModelTransformJobsRequest : public NeptunedataRequest
  {
  public:
    AWS_NEPTUNEDATA_API ListMLModelTransformJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMLModelTransformJobs"; }

    AWS_NEPTUNEDATA_API Aws::String SerializePayload() const override;

    AWS_NEPTUNEDATA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The maximum number of items to return (from 1 to 1024; the default is
     * 10).</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The maximum number of items to return (from 1 to 1024; the default is
     * 10).</p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>The maximum number of items to return (from 1 to 1024; the default is
     * 10).</p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The maximum number of items to return (from 1 to 1024; the default is
     * 10).</p>
     */
    inline ListMLModelTransformJobsRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}


    /**
     * <p>The ARN of an IAM role that provides Neptune access to SageMaker and Amazon
     * S3 resources. This must be listed in your DB cluster parameter group or an error
     * will occur.</p>
     */
    inline const Aws::String& GetNeptuneIamRoleArn() const{ return m_neptuneIamRoleArn; }

    /**
     * <p>The ARN of an IAM role that provides Neptune access to SageMaker and Amazon
     * S3 resources. This must be listed in your DB cluster parameter group or an error
     * will occur.</p>
     */
    inline bool NeptuneIamRoleArnHasBeenSet() const { return m_neptuneIamRoleArnHasBeenSet; }

    /**
     * <p>The ARN of an IAM role that provides Neptune access to SageMaker and Amazon
     * S3 resources. This must be listed in your DB cluster parameter group or an error
     * will occur.</p>
     */
    inline void SetNeptuneIamRoleArn(const Aws::String& value) { m_neptuneIamRoleArnHasBeenSet = true; m_neptuneIamRoleArn = value; }

    /**
     * <p>The ARN of an IAM role that provides Neptune access to SageMaker and Amazon
     * S3 resources. This must be listed in your DB cluster parameter group or an error
     * will occur.</p>
     */
    inline void SetNeptuneIamRoleArn(Aws::String&& value) { m_neptuneIamRoleArnHasBeenSet = true; m_neptuneIamRoleArn = std::move(value); }

    /**
     * <p>The ARN of an IAM role that provides Neptune access to SageMaker and Amazon
     * S3 resources. This must be listed in your DB cluster parameter group or an error
     * will occur.</p>
     */
    inline void SetNeptuneIamRoleArn(const char* value) { m_neptuneIamRoleArnHasBeenSet = true; m_neptuneIamRoleArn.assign(value); }

    /**
     * <p>The ARN of an IAM role that provides Neptune access to SageMaker and Amazon
     * S3 resources. This must be listed in your DB cluster parameter group or an error
     * will occur.</p>
     */
    inline ListMLModelTransformJobsRequest& WithNeptuneIamRoleArn(const Aws::String& value) { SetNeptuneIamRoleArn(value); return *this;}

    /**
     * <p>The ARN of an IAM role that provides Neptune access to SageMaker and Amazon
     * S3 resources. This must be listed in your DB cluster parameter group or an error
     * will occur.</p>
     */
    inline ListMLModelTransformJobsRequest& WithNeptuneIamRoleArn(Aws::String&& value) { SetNeptuneIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of an IAM role that provides Neptune access to SageMaker and Amazon
     * S3 resources. This must be listed in your DB cluster parameter group or an error
     * will occur.</p>
     */
    inline ListMLModelTransformJobsRequest& WithNeptuneIamRoleArn(const char* value) { SetNeptuneIamRoleArn(value); return *this;}

  private:

    int m_maxItems;
    bool m_maxItemsHasBeenSet = false;

    Aws::String m_neptuneIamRoleArn;
    bool m_neptuneIamRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
