﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
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
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   * <p>The structure containing the Amazon S3 path to export the Earth Observation
   * job output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/ExportS3DataInput">AWS
   * API Reference</a></p>
   */
  class ExportS3DataInput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API ExportS3DataInput();
    AWS_SAGEMAKERGEOSPATIAL_API ExportS3DataInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API ExportS3DataInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Key Management Service key ID for server-side encryption.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline ExportS3DataInput& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline ExportS3DataInput& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline ExportS3DataInput& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to the Amazon S3 data input.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }
    inline ExportS3DataInput& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}
    inline ExportS3DataInput& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}
    inline ExportS3DataInput& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}
    ///@}
  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
