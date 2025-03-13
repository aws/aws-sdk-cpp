/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace mgn
{
namespace Model
{

  /**
   * <p>S3 bucket source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/S3BucketSource">AWS
   * API Reference</a></p>
   */
  class S3BucketSource
  {
  public:
    AWS_MGN_API S3BucketSource() = default;
    AWS_MGN_API S3BucketSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API S3BucketSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>S3 bucket source s3 bucket.</p>
     */
    inline const Aws::String& GetS3Bucket() const { return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    template<typename S3BucketT = Aws::String>
    void SetS3Bucket(S3BucketT&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::forward<S3BucketT>(value); }
    template<typename S3BucketT = Aws::String>
    S3BucketSource& WithS3Bucket(S3BucketT&& value) { SetS3Bucket(std::forward<S3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>S3 bucket source s3 bucket owner.</p>
     */
    inline const Aws::String& GetS3BucketOwner() const { return m_s3BucketOwner; }
    inline bool S3BucketOwnerHasBeenSet() const { return m_s3BucketOwnerHasBeenSet; }
    template<typename S3BucketOwnerT = Aws::String>
    void SetS3BucketOwner(S3BucketOwnerT&& value) { m_s3BucketOwnerHasBeenSet = true; m_s3BucketOwner = std::forward<S3BucketOwnerT>(value); }
    template<typename S3BucketOwnerT = Aws::String>
    S3BucketSource& WithS3BucketOwner(S3BucketOwnerT&& value) { SetS3BucketOwner(std::forward<S3BucketOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>S3 bucket source s3 key.</p>
     */
    inline const Aws::String& GetS3Key() const { return m_s3Key; }
    inline bool S3KeyHasBeenSet() const { return m_s3KeyHasBeenSet; }
    template<typename S3KeyT = Aws::String>
    void SetS3Key(S3KeyT&& value) { m_s3KeyHasBeenSet = true; m_s3Key = std::forward<S3KeyT>(value); }
    template<typename S3KeyT = Aws::String>
    S3BucketSource& WithS3Key(S3KeyT&& value) { SetS3Key(std::forward<S3KeyT>(value)); return *this;}
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
