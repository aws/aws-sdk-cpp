/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/S3Tag.h>
#include <utility>

namespace Aws
{
namespace S3Control
{
namespace Model
{

  /**
   */
  class PutJobTaggingRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API PutJobTaggingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutJobTagging"; }

    AWS_S3CONTROL_API Aws::String SerializePayload() const override;

    AWS_S3CONTROL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3CONTROL_API EndpointParameters GetEndpointContextParams() const override;

    /**
     * <p>The Amazon Web Services account ID associated with the S3 Batch Operations
     * job.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID associated with the S3 Batch Operations
     * job.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID associated with the S3 Batch Operations
     * job.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID associated with the S3 Batch Operations
     * job.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID associated with the S3 Batch Operations
     * job.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID associated with the S3 Batch Operations
     * job.</p>
     */
    inline PutJobTaggingRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID associated with the S3 Batch Operations
     * job.</p>
     */
    inline PutJobTaggingRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID associated with the S3 Batch Operations
     * job.</p>
     */
    inline PutJobTaggingRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The ID for the S3 Batch Operations job whose tags you want to replace.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The ID for the S3 Batch Operations job whose tags you want to replace.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The ID for the S3 Batch Operations job whose tags you want to replace.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The ID for the S3 Batch Operations job whose tags you want to replace.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The ID for the S3 Batch Operations job whose tags you want to replace.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The ID for the S3 Batch Operations job whose tags you want to replace.</p>
     */
    inline PutJobTaggingRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The ID for the S3 Batch Operations job whose tags you want to replace.</p>
     */
    inline PutJobTaggingRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The ID for the S3 Batch Operations job whose tags you want to replace.</p>
     */
    inline PutJobTaggingRequest& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The set of tags to associate with the S3 Batch Operations job.</p>
     */
    inline const Aws::Vector<S3Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The set of tags to associate with the S3 Batch Operations job.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The set of tags to associate with the S3 Batch Operations job.</p>
     */
    inline void SetTags(const Aws::Vector<S3Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The set of tags to associate with the S3 Batch Operations job.</p>
     */
    inline void SetTags(Aws::Vector<S3Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The set of tags to associate with the S3 Batch Operations job.</p>
     */
    inline PutJobTaggingRequest& WithTags(const Aws::Vector<S3Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The set of tags to associate with the S3 Batch Operations job.</p>
     */
    inline PutJobTaggingRequest& WithTags(Aws::Vector<S3Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The set of tags to associate with the S3 Batch Operations job.</p>
     */
    inline PutJobTaggingRequest& AddTags(const S3Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The set of tags to associate with the S3 Batch Operations job.</p>
     */
    inline PutJobTaggingRequest& AddTags(S3Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::Vector<S3Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
