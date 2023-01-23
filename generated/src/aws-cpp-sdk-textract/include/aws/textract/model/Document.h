/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/textract/model/S3Object.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p>The input document, either as bytes or as an S3 object.</p> <p>You pass image
   * bytes to an Amazon Textract API operation by using the <code>Bytes</code>
   * property. For example, you would use the <code>Bytes</code> property to pass a
   * document loaded from a local file system. Image bytes passed by using the
   * <code>Bytes</code> property must be base64 encoded. Your code might not need to
   * encode document file bytes if you're using an AWS SDK to call Amazon Textract
   * API operations. </p> <p>You pass images stored in an S3 bucket to an Amazon
   * Textract API operation by using the <code>S3Object</code> property. Documents
   * stored in an S3 bucket don't need to be base64 encoded.</p> <p>The AWS Region
   * for the S3 bucket that contains the S3 object must match the AWS Region that you
   * use for Amazon Textract operations.</p> <p>If you use the AWS CLI to call Amazon
   * Textract operations, passing image bytes using the Bytes property isn't
   * supported. You must first upload the document to an Amazon S3 bucket, and then
   * call the operation using the S3Object property.</p> <p>For Amazon Textract to
   * process an S3 object, the user must have permission to access the S3 object.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/Document">AWS
   * API Reference</a></p>
   */
  class Document
  {
  public:
    AWS_TEXTRACT_API Document();
    AWS_TEXTRACT_API Document(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Document& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A blob of base64-encoded document bytes. The maximum size of a document
     * that's provided in a blob of bytes is 5 MB. The document bytes must be in PNG or
     * JPEG format.</p> <p>If you're using an AWS SDK to call Amazon Textract, you
     * might not need to base64-encode image bytes passed using the <code>Bytes</code>
     * field. </p>
     */
    inline const Aws::Utils::ByteBuffer& GetBytes() const{ return m_bytes; }

    /**
     * <p>A blob of base64-encoded document bytes. The maximum size of a document
     * that's provided in a blob of bytes is 5 MB. The document bytes must be in PNG or
     * JPEG format.</p> <p>If you're using an AWS SDK to call Amazon Textract, you
     * might not need to base64-encode image bytes passed using the <code>Bytes</code>
     * field. </p>
     */
    inline bool BytesHasBeenSet() const { return m_bytesHasBeenSet; }

    /**
     * <p>A blob of base64-encoded document bytes. The maximum size of a document
     * that's provided in a blob of bytes is 5 MB. The document bytes must be in PNG or
     * JPEG format.</p> <p>If you're using an AWS SDK to call Amazon Textract, you
     * might not need to base64-encode image bytes passed using the <code>Bytes</code>
     * field. </p>
     */
    inline void SetBytes(const Aws::Utils::ByteBuffer& value) { m_bytesHasBeenSet = true; m_bytes = value; }

    /**
     * <p>A blob of base64-encoded document bytes. The maximum size of a document
     * that's provided in a blob of bytes is 5 MB. The document bytes must be in PNG or
     * JPEG format.</p> <p>If you're using an AWS SDK to call Amazon Textract, you
     * might not need to base64-encode image bytes passed using the <code>Bytes</code>
     * field. </p>
     */
    inline void SetBytes(Aws::Utils::ByteBuffer&& value) { m_bytesHasBeenSet = true; m_bytes = std::move(value); }

    /**
     * <p>A blob of base64-encoded document bytes. The maximum size of a document
     * that's provided in a blob of bytes is 5 MB. The document bytes must be in PNG or
     * JPEG format.</p> <p>If you're using an AWS SDK to call Amazon Textract, you
     * might not need to base64-encode image bytes passed using the <code>Bytes</code>
     * field. </p>
     */
    inline Document& WithBytes(const Aws::Utils::ByteBuffer& value) { SetBytes(value); return *this;}

    /**
     * <p>A blob of base64-encoded document bytes. The maximum size of a document
     * that's provided in a blob of bytes is 5 MB. The document bytes must be in PNG or
     * JPEG format.</p> <p>If you're using an AWS SDK to call Amazon Textract, you
     * might not need to base64-encode image bytes passed using the <code>Bytes</code>
     * field. </p>
     */
    inline Document& WithBytes(Aws::Utils::ByteBuffer&& value) { SetBytes(std::move(value)); return *this;}


    /**
     * <p>Identifies an S3 object as the document source. The maximum size of a
     * document that's stored in an S3 bucket is 5 MB.</p>
     */
    inline const S3Object& GetS3Object() const{ return m_s3Object; }

    /**
     * <p>Identifies an S3 object as the document source. The maximum size of a
     * document that's stored in an S3 bucket is 5 MB.</p>
     */
    inline bool S3ObjectHasBeenSet() const { return m_s3ObjectHasBeenSet; }

    /**
     * <p>Identifies an S3 object as the document source. The maximum size of a
     * document that's stored in an S3 bucket is 5 MB.</p>
     */
    inline void SetS3Object(const S3Object& value) { m_s3ObjectHasBeenSet = true; m_s3Object = value; }

    /**
     * <p>Identifies an S3 object as the document source. The maximum size of a
     * document that's stored in an S3 bucket is 5 MB.</p>
     */
    inline void SetS3Object(S3Object&& value) { m_s3ObjectHasBeenSet = true; m_s3Object = std::move(value); }

    /**
     * <p>Identifies an S3 object as the document source. The maximum size of a
     * document that's stored in an S3 bucket is 5 MB.</p>
     */
    inline Document& WithS3Object(const S3Object& value) { SetS3Object(value); return *this;}

    /**
     * <p>Identifies an S3 object as the document source. The maximum size of a
     * document that's stored in an S3 bucket is 5 MB.</p>
     */
    inline Document& WithS3Object(S3Object&& value) { SetS3Object(std::move(value)); return *this;}

  private:

    Aws::Utils::ByteBuffer m_bytes;
    bool m_bytesHasBeenSet = false;

    S3Object m_s3Object;
    bool m_s3ObjectHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
