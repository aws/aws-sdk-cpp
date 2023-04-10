/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/rekognition/model/S3Object.h>
#include <aws/rekognition/model/BoundingBox.h>
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
   * <p>An image that is picked from the Face Liveness video and returned for audit
   * trail purposes, returned as Base64-encoded bytes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/AuditImage">AWS
   * API Reference</a></p>
   */
  class AuditImage
  {
  public:
    AWS_REKOGNITION_API AuditImage();
    AWS_REKOGNITION_API AuditImage(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API AuditImage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Base64-encoded bytes representing an image selected from the Face
     * Liveness video and returned for audit purposes.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetBytes() const{ return m_bytes; }

    /**
     * <p>The Base64-encoded bytes representing an image selected from the Face
     * Liveness video and returned for audit purposes.</p>
     */
    inline bool BytesHasBeenSet() const { return m_bytesHasBeenSet; }

    /**
     * <p>The Base64-encoded bytes representing an image selected from the Face
     * Liveness video and returned for audit purposes.</p>
     */
    inline void SetBytes(const Aws::Utils::CryptoBuffer& value) { m_bytesHasBeenSet = true; m_bytes = value; }

    /**
     * <p>The Base64-encoded bytes representing an image selected from the Face
     * Liveness video and returned for audit purposes.</p>
     */
    inline void SetBytes(Aws::Utils::CryptoBuffer&& value) { m_bytesHasBeenSet = true; m_bytes = std::move(value); }

    /**
     * <p>The Base64-encoded bytes representing an image selected from the Face
     * Liveness video and returned for audit purposes.</p>
     */
    inline AuditImage& WithBytes(const Aws::Utils::CryptoBuffer& value) { SetBytes(value); return *this;}

    /**
     * <p>The Base64-encoded bytes representing an image selected from the Face
     * Liveness video and returned for audit purposes.</p>
     */
    inline AuditImage& WithBytes(Aws::Utils::CryptoBuffer&& value) { SetBytes(std::move(value)); return *this;}


    
    inline const S3Object& GetS3Object() const{ return m_s3Object; }

    
    inline bool S3ObjectHasBeenSet() const { return m_s3ObjectHasBeenSet; }

    
    inline void SetS3Object(const S3Object& value) { m_s3ObjectHasBeenSet = true; m_s3Object = value; }

    
    inline void SetS3Object(S3Object&& value) { m_s3ObjectHasBeenSet = true; m_s3Object = std::move(value); }

    
    inline AuditImage& WithS3Object(const S3Object& value) { SetS3Object(value); return *this;}

    
    inline AuditImage& WithS3Object(S3Object&& value) { SetS3Object(std::move(value)); return *this;}


    
    inline const BoundingBox& GetBoundingBox() const{ return m_boundingBox; }

    
    inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }

    
    inline void SetBoundingBox(const BoundingBox& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = value; }

    
    inline void SetBoundingBox(BoundingBox&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = std::move(value); }

    
    inline AuditImage& WithBoundingBox(const BoundingBox& value) { SetBoundingBox(value); return *this;}

    
    inline AuditImage& WithBoundingBox(BoundingBox&& value) { SetBoundingBox(std::move(value)); return *this;}

  private:

    Aws::Utils::CryptoBuffer m_bytes;
    bool m_bytesHasBeenSet = false;

    S3Object m_s3Object;
    bool m_s3ObjectHasBeenSet = false;

    BoundingBox m_boundingBox;
    bool m_boundingBoxHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
