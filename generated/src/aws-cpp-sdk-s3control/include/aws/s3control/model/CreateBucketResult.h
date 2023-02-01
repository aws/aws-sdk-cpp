/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{
  class CreateBucketResult
  {
  public:
    AWS_S3CONTROL_API CreateBucketResult();
    AWS_S3CONTROL_API CreateBucketResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API CreateBucketResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The location of the bucket.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The location of the bucket.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    /**
     * <p>The location of the bucket.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }

    /**
     * <p>The location of the bucket.</p>
     */
    inline void SetLocation(const char* value) { m_location.assign(value); }

    /**
     * <p>The location of the bucket.</p>
     */
    inline CreateBucketResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The location of the bucket.</p>
     */
    inline CreateBucketResult& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The location of the bucket.</p>
     */
    inline CreateBucketResult& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the bucket.</p> <p>For using this parameter
     * with Amazon S3 on Outposts with the REST API, you must specify the name and the
     * x-amz-outpost-id as well.</p> <p>For using this parameter with S3 on Outposts
     * with the Amazon Web Services SDK and CLI, you must specify the ARN of the bucket
     * accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline const Aws::String& GetBucketArn() const{ return m_bucketArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket.</p> <p>For using this parameter
     * with Amazon S3 on Outposts with the REST API, you must specify the name and the
     * x-amz-outpost-id as well.</p> <p>For using this parameter with S3 on Outposts
     * with the Amazon Web Services SDK and CLI, you must specify the ARN of the bucket
     * accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline void SetBucketArn(const Aws::String& value) { m_bucketArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket.</p> <p>For using this parameter
     * with Amazon S3 on Outposts with the REST API, you must specify the name and the
     * x-amz-outpost-id as well.</p> <p>For using this parameter with S3 on Outposts
     * with the Amazon Web Services SDK and CLI, you must specify the ARN of the bucket
     * accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline void SetBucketArn(Aws::String&& value) { m_bucketArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket.</p> <p>For using this parameter
     * with Amazon S3 on Outposts with the REST API, you must specify the name and the
     * x-amz-outpost-id as well.</p> <p>For using this parameter with S3 on Outposts
     * with the Amazon Web Services SDK and CLI, you must specify the ARN of the bucket
     * accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline void SetBucketArn(const char* value) { m_bucketArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket.</p> <p>For using this parameter
     * with Amazon S3 on Outposts with the REST API, you must specify the name and the
     * x-amz-outpost-id as well.</p> <p>For using this parameter with S3 on Outposts
     * with the Amazon Web Services SDK and CLI, you must specify the ARN of the bucket
     * accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline CreateBucketResult& WithBucketArn(const Aws::String& value) { SetBucketArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket.</p> <p>For using this parameter
     * with Amazon S3 on Outposts with the REST API, you must specify the name and the
     * x-amz-outpost-id as well.</p> <p>For using this parameter with S3 on Outposts
     * with the Amazon Web Services SDK and CLI, you must specify the ARN of the bucket
     * accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline CreateBucketResult& WithBucketArn(Aws::String&& value) { SetBucketArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket.</p> <p>For using this parameter
     * with Amazon S3 on Outposts with the REST API, you must specify the name and the
     * x-amz-outpost-id as well.</p> <p>For using this parameter with S3 on Outposts
     * with the Amazon Web Services SDK and CLI, you must specify the ARN of the bucket
     * accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline CreateBucketResult& WithBucketArn(const char* value) { SetBucketArn(value); return *this;}

  private:

    Aws::String m_location;

    Aws::String m_bucketArn;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
