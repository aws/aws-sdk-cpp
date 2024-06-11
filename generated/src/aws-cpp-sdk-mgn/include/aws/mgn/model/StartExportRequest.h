/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   * <p>Start export request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/StartExportRequest">AWS
   * API Reference</a></p>
   */
  class StartExportRequest : public MgnRequest
  {
  public:
    AWS_MGN_API StartExportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartExport"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Start export request s3 bucket.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }
    inline StartExportRequest& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}
    inline StartExportRequest& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}
    inline StartExportRequest& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Start export request s3 bucket owner.</p>
     */
    inline const Aws::String& GetS3BucketOwner() const{ return m_s3BucketOwner; }
    inline bool S3BucketOwnerHasBeenSet() const { return m_s3BucketOwnerHasBeenSet; }
    inline void SetS3BucketOwner(const Aws::String& value) { m_s3BucketOwnerHasBeenSet = true; m_s3BucketOwner = value; }
    inline void SetS3BucketOwner(Aws::String&& value) { m_s3BucketOwnerHasBeenSet = true; m_s3BucketOwner = std::move(value); }
    inline void SetS3BucketOwner(const char* value) { m_s3BucketOwnerHasBeenSet = true; m_s3BucketOwner.assign(value); }
    inline StartExportRequest& WithS3BucketOwner(const Aws::String& value) { SetS3BucketOwner(value); return *this;}
    inline StartExportRequest& WithS3BucketOwner(Aws::String&& value) { SetS3BucketOwner(std::move(value)); return *this;}
    inline StartExportRequest& WithS3BucketOwner(const char* value) { SetS3BucketOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Start export request s3key.</p>
     */
    inline const Aws::String& GetS3Key() const{ return m_s3Key; }
    inline bool S3KeyHasBeenSet() const { return m_s3KeyHasBeenSet; }
    inline void SetS3Key(const Aws::String& value) { m_s3KeyHasBeenSet = true; m_s3Key = value; }
    inline void SetS3Key(Aws::String&& value) { m_s3KeyHasBeenSet = true; m_s3Key = std::move(value); }
    inline void SetS3Key(const char* value) { m_s3KeyHasBeenSet = true; m_s3Key.assign(value); }
    inline StartExportRequest& WithS3Key(const Aws::String& value) { SetS3Key(value); return *this;}
    inline StartExportRequest& WithS3Key(Aws::String&& value) { SetS3Key(std::move(value)); return *this;}
    inline StartExportRequest& WithS3Key(const char* value) { SetS3Key(value); return *this;}
    ///@}
  private:

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3BucketOwner;
    bool m_s3BucketOwnerHasBeenSet = false;

    Aws::String m_s3Key;
    bool m_s3KeyHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
