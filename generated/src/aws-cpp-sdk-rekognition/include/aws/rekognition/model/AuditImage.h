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
    AWS_REKOGNITION_API AuditImage() = default;
    AWS_REKOGNITION_API AuditImage(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API AuditImage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Base64-encoded bytes representing an image selected from the Face
     * Liveness video and returned for audit purposes.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetBytes() const { return m_bytes; }
    inline bool BytesHasBeenSet() const { return m_bytesHasBeenSet; }
    template<typename BytesT = Aws::Utils::CryptoBuffer>
    void SetBytes(BytesT&& value) { m_bytesHasBeenSet = true; m_bytes = std::forward<BytesT>(value); }
    template<typename BytesT = Aws::Utils::CryptoBuffer>
    AuditImage& WithBytes(BytesT&& value) { SetBytes(std::forward<BytesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const S3Object& GetS3Object() const { return m_s3Object; }
    inline bool S3ObjectHasBeenSet() const { return m_s3ObjectHasBeenSet; }
    template<typename S3ObjectT = S3Object>
    void SetS3Object(S3ObjectT&& value) { m_s3ObjectHasBeenSet = true; m_s3Object = std::forward<S3ObjectT>(value); }
    template<typename S3ObjectT = S3Object>
    AuditImage& WithS3Object(S3ObjectT&& value) { SetS3Object(std::forward<S3ObjectT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const BoundingBox& GetBoundingBox() const { return m_boundingBox; }
    inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }
    template<typename BoundingBoxT = BoundingBox>
    void SetBoundingBox(BoundingBoxT&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = std::forward<BoundingBoxT>(value); }
    template<typename BoundingBoxT = BoundingBox>
    AuditImage& WithBoundingBox(BoundingBoxT&& value) { SetBoundingBox(std::forward<BoundingBoxT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::CryptoBuffer m_bytes{};
    bool m_bytesHasBeenSet = false;

    S3Object m_s3Object;
    bool m_s3ObjectHasBeenSet = false;

    BoundingBox m_boundingBox;
    bool m_boundingBoxHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
