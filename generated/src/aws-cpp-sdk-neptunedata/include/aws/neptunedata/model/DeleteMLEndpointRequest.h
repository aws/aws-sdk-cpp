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
  class DeleteMLEndpointRequest : public NeptunedataRequest
  {
  public:
    AWS_NEPTUNEDATA_API DeleteMLEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteMLEndpoint"; }

    AWS_NEPTUNEDATA_API Aws::String SerializePayload() const override;

    AWS_NEPTUNEDATA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The unique identifier of the inference endpoint.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier of the inference endpoint.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier of the inference endpoint.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier of the inference endpoint.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier of the inference endpoint.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier of the inference endpoint.</p>
     */
    inline DeleteMLEndpointRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier of the inference endpoint.</p>
     */
    inline DeleteMLEndpointRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the inference endpoint.</p>
     */
    inline DeleteMLEndpointRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ARN of an IAM role providing Neptune access to SageMaker and Amazon S3
     * resources. This must be listed in your DB cluster parameter group or an error
     * will be thrown.</p>
     */
    inline const Aws::String& GetNeptuneIamRoleArn() const{ return m_neptuneIamRoleArn; }

    /**
     * <p>The ARN of an IAM role providing Neptune access to SageMaker and Amazon S3
     * resources. This must be listed in your DB cluster parameter group or an error
     * will be thrown.</p>
     */
    inline bool NeptuneIamRoleArnHasBeenSet() const { return m_neptuneIamRoleArnHasBeenSet; }

    /**
     * <p>The ARN of an IAM role providing Neptune access to SageMaker and Amazon S3
     * resources. This must be listed in your DB cluster parameter group or an error
     * will be thrown.</p>
     */
    inline void SetNeptuneIamRoleArn(const Aws::String& value) { m_neptuneIamRoleArnHasBeenSet = true; m_neptuneIamRoleArn = value; }

    /**
     * <p>The ARN of an IAM role providing Neptune access to SageMaker and Amazon S3
     * resources. This must be listed in your DB cluster parameter group or an error
     * will be thrown.</p>
     */
    inline void SetNeptuneIamRoleArn(Aws::String&& value) { m_neptuneIamRoleArnHasBeenSet = true; m_neptuneIamRoleArn = std::move(value); }

    /**
     * <p>The ARN of an IAM role providing Neptune access to SageMaker and Amazon S3
     * resources. This must be listed in your DB cluster parameter group or an error
     * will be thrown.</p>
     */
    inline void SetNeptuneIamRoleArn(const char* value) { m_neptuneIamRoleArnHasBeenSet = true; m_neptuneIamRoleArn.assign(value); }

    /**
     * <p>The ARN of an IAM role providing Neptune access to SageMaker and Amazon S3
     * resources. This must be listed in your DB cluster parameter group or an error
     * will be thrown.</p>
     */
    inline DeleteMLEndpointRequest& WithNeptuneIamRoleArn(const Aws::String& value) { SetNeptuneIamRoleArn(value); return *this;}

    /**
     * <p>The ARN of an IAM role providing Neptune access to SageMaker and Amazon S3
     * resources. This must be listed in your DB cluster parameter group or an error
     * will be thrown.</p>
     */
    inline DeleteMLEndpointRequest& WithNeptuneIamRoleArn(Aws::String&& value) { SetNeptuneIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of an IAM role providing Neptune access to SageMaker and Amazon S3
     * resources. This must be listed in your DB cluster parameter group or an error
     * will be thrown.</p>
     */
    inline DeleteMLEndpointRequest& WithNeptuneIamRoleArn(const char* value) { SetNeptuneIamRoleArn(value); return *this;}


    /**
     * <p>If this flag is set to <code>TRUE</code>, all Neptune ML S3 artifacts should
     * be deleted when the job is stopped. The default is <code>FALSE</code>.</p>
     */
    inline bool GetClean() const{ return m_clean; }

    /**
     * <p>If this flag is set to <code>TRUE</code>, all Neptune ML S3 artifacts should
     * be deleted when the job is stopped. The default is <code>FALSE</code>.</p>
     */
    inline bool CleanHasBeenSet() const { return m_cleanHasBeenSet; }

    /**
     * <p>If this flag is set to <code>TRUE</code>, all Neptune ML S3 artifacts should
     * be deleted when the job is stopped. The default is <code>FALSE</code>.</p>
     */
    inline void SetClean(bool value) { m_cleanHasBeenSet = true; m_clean = value; }

    /**
     * <p>If this flag is set to <code>TRUE</code>, all Neptune ML S3 artifacts should
     * be deleted when the job is stopped. The default is <code>FALSE</code>.</p>
     */
    inline DeleteMLEndpointRequest& WithClean(bool value) { SetClean(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_neptuneIamRoleArn;
    bool m_neptuneIamRoleArnHasBeenSet = false;

    bool m_clean;
    bool m_cleanHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
