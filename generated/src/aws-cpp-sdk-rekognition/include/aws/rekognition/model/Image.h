/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/rekognition/model/S3Object.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Provides the input image either as bytes or an S3 object.</p> <p>You pass
   * image bytes to an Amazon Rekognition API operation by using the
   * <code>Bytes</code> property. For example, you would use the <code>Bytes</code>
   * property to pass an image loaded from a local file system. Image bytes passed by
   * using the <code>Bytes</code> property must be base64-encoded. Your code may not
   * need to encode image bytes if you are using an AWS SDK to call Amazon
   * Rekognition API operations. </p> <p>For more information, see Analyzing an Image
   * Loaded from a Local File System in the Amazon Rekognition Developer Guide.</p>
   * <p> You pass images stored in an S3 bucket to an Amazon Rekognition API
   * operation by using the <code>S3Object</code> property. Images stored in an S3
   * bucket do not need to be base64-encoded.</p> <p>The region for the S3 bucket
   * containing the S3 object must match the region you use for Amazon Rekognition
   * operations.</p> <p>If you use the AWS CLI to call Amazon Rekognition operations,
   * passing image bytes using the Bytes property is not supported. You must first
   * upload the image to an Amazon S3 bucket and then call the operation using the
   * S3Object property.</p> <p>For Amazon Rekognition to process an S3 object, the
   * user must have permission to access the S3 object. For more information, see How
   * Amazon Rekognition works with IAM in the Amazon Rekognition Developer Guide.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/Image">AWS
   * API Reference</a></p>
   */
  class Image
  {
  public:
    AWS_REKOGNITION_API Image() = default;
    AWS_REKOGNITION_API Image(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Image& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Blob of image bytes up to 5 MBs. Note that the maximum image size you can
     * pass to <code>DetectCustomLabels</code> is 4MB. </p>
     */
    inline const Aws::Utils::ByteBuffer& GetBytes() const { return m_bytes; }
    inline bool BytesHasBeenSet() const { return m_bytesHasBeenSet; }
    template<typename BytesT = Aws::Utils::ByteBuffer>
    void SetBytes(BytesT&& value) { m_bytesHasBeenSet = true; m_bytes = std::forward<BytesT>(value); }
    template<typename BytesT = Aws::Utils::ByteBuffer>
    Image& WithBytes(BytesT&& value) { SetBytes(std::forward<BytesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies an S3 object as the image source.</p>
     */
    inline const S3Object& GetS3Object() const { return m_s3Object; }
    inline bool S3ObjectHasBeenSet() const { return m_s3ObjectHasBeenSet; }
    template<typename S3ObjectT = S3Object>
    void SetS3Object(S3ObjectT&& value) { m_s3ObjectHasBeenSet = true; m_s3Object = std::forward<S3ObjectT>(value); }
    template<typename S3ObjectT = S3Object>
    Image& WithS3Object(S3ObjectT&& value) { SetS3Object(std::forward<S3ObjectT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_bytes{};
    bool m_bytesHasBeenSet = false;

    S3Object m_s3Object;
    bool m_s3ObjectHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
