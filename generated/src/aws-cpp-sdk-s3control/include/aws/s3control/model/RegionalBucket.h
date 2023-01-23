/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>The container for the regional bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/RegionalBucket">AWS
   * API Reference</a></p>
   */
  class RegionalBucket
  {
  public:
    AWS_S3CONTROL_API RegionalBucket();
    AWS_S3CONTROL_API RegionalBucket(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API RegionalBucket& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p/>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p/>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p/>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p/>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p/>
     */
    inline RegionalBucket& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p/>
     */
    inline RegionalBucket& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline RegionalBucket& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the regional bucket.</p>
     */
    inline const Aws::String& GetBucketArn() const{ return m_bucketArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the regional bucket.</p>
     */
    inline bool BucketArnHasBeenSet() const { return m_bucketArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the regional bucket.</p>
     */
    inline void SetBucketArn(const Aws::String& value) { m_bucketArnHasBeenSet = true; m_bucketArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the regional bucket.</p>
     */
    inline void SetBucketArn(Aws::String&& value) { m_bucketArnHasBeenSet = true; m_bucketArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the regional bucket.</p>
     */
    inline void SetBucketArn(const char* value) { m_bucketArnHasBeenSet = true; m_bucketArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the regional bucket.</p>
     */
    inline RegionalBucket& WithBucketArn(const Aws::String& value) { SetBucketArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the regional bucket.</p>
     */
    inline RegionalBucket& WithBucketArn(Aws::String&& value) { SetBucketArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the regional bucket.</p>
     */
    inline RegionalBucket& WithBucketArn(const char* value) { SetBucketArn(value); return *this;}


    /**
     * <p/>
     */
    inline bool GetPublicAccessBlockEnabled() const{ return m_publicAccessBlockEnabled; }

    /**
     * <p/>
     */
    inline bool PublicAccessBlockEnabledHasBeenSet() const { return m_publicAccessBlockEnabledHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetPublicAccessBlockEnabled(bool value) { m_publicAccessBlockEnabledHasBeenSet = true; m_publicAccessBlockEnabled = value; }

    /**
     * <p/>
     */
    inline RegionalBucket& WithPublicAccessBlockEnabled(bool value) { SetPublicAccessBlockEnabled(value); return *this;}


    /**
     * <p>The creation date of the regional bucket</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The creation date of the regional bucket</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The creation date of the regional bucket</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The creation date of the regional bucket</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The creation date of the regional bucket</p>
     */
    inline RegionalBucket& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The creation date of the regional bucket</p>
     */
    inline RegionalBucket& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The Outposts ID of the regional bucket.</p>
     */
    inline const Aws::String& GetOutpostId() const{ return m_outpostId; }

    /**
     * <p>The Outposts ID of the regional bucket.</p>
     */
    inline bool OutpostIdHasBeenSet() const { return m_outpostIdHasBeenSet; }

    /**
     * <p>The Outposts ID of the regional bucket.</p>
     */
    inline void SetOutpostId(const Aws::String& value) { m_outpostIdHasBeenSet = true; m_outpostId = value; }

    /**
     * <p>The Outposts ID of the regional bucket.</p>
     */
    inline void SetOutpostId(Aws::String&& value) { m_outpostIdHasBeenSet = true; m_outpostId = std::move(value); }

    /**
     * <p>The Outposts ID of the regional bucket.</p>
     */
    inline void SetOutpostId(const char* value) { m_outpostIdHasBeenSet = true; m_outpostId.assign(value); }

    /**
     * <p>The Outposts ID of the regional bucket.</p>
     */
    inline RegionalBucket& WithOutpostId(const Aws::String& value) { SetOutpostId(value); return *this;}

    /**
     * <p>The Outposts ID of the regional bucket.</p>
     */
    inline RegionalBucket& WithOutpostId(Aws::String&& value) { SetOutpostId(std::move(value)); return *this;}

    /**
     * <p>The Outposts ID of the regional bucket.</p>
     */
    inline RegionalBucket& WithOutpostId(const char* value) { SetOutpostId(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_bucketArn;
    bool m_bucketArnHasBeenSet = false;

    bool m_publicAccessBlockEnabled;
    bool m_publicAccessBlockEnabledHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_outpostId;
    bool m_outpostIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
