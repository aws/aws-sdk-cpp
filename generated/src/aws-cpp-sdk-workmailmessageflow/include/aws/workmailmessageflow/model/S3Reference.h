/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmailmessageflow/WorkMailMessageFlow_EXPORTS.h>
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
namespace WorkMailMessageFlow
{
namespace Model
{

  /**
   * <p>Amazon S3 object representing the updated message content, in MIME
   * format.</p>  <p>The region for the S3 bucket containing the S3 object must
   * match the region used for WorkMail operations. Also, for WorkMail to process an
   * S3 object, it must have permission to access that object. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/workmail/latest/adminguide/update-with-lambda.html">
   * Updating message content with AWS Lambda</a>.</p> <p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmailmessageflow-2019-05-01/S3Reference">AWS
   * API Reference</a></p>
   */
  class S3Reference
  {
  public:
    AWS_WORKMAILMESSAGEFLOW_API S3Reference() = default;
    AWS_WORKMAILMESSAGEFLOW_API S3Reference(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAILMESSAGEFLOW_API S3Reference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAILMESSAGEFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The S3 bucket name.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    S3Reference& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 key object name.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    S3Reference& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you enable versioning for the bucket, you can specify the object
     * version.</p>
     */
    inline const Aws::String& GetObjectVersion() const { return m_objectVersion; }
    inline bool ObjectVersionHasBeenSet() const { return m_objectVersionHasBeenSet; }
    template<typename ObjectVersionT = Aws::String>
    void SetObjectVersion(ObjectVersionT&& value) { m_objectVersionHasBeenSet = true; m_objectVersion = std::forward<ObjectVersionT>(value); }
    template<typename ObjectVersionT = Aws::String>
    S3Reference& WithObjectVersion(ObjectVersionT&& value) { SetObjectVersion(std::forward<ObjectVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_objectVersion;
    bool m_objectVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMailMessageFlow
} // namespace Aws
