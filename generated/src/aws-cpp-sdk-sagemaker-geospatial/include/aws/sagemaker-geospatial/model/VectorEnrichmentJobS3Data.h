/**
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
   * <p>The Amazon S3 data for the Vector Enrichment job.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/VectorEnrichmentJobS3Data">AWS
   * API Reference</a></p>
   */
  class VectorEnrichmentJobS3Data
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API VectorEnrichmentJobS3Data() = default;
    AWS_SAGEMAKERGEOSPATIAL_API VectorEnrichmentJobS3Data(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API VectorEnrichmentJobS3Data& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Key Management Service key ID for server-side encryption.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    VectorEnrichmentJobS3Data& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to the Amazon S3 data for the Vector Enrichment job.</p>
     */
    inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    template<typename S3UriT = Aws::String>
    void SetS3Uri(S3UriT&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::forward<S3UriT>(value); }
    template<typename S3UriT = Aws::String>
    VectorEnrichmentJobS3Data& WithS3Uri(S3UriT&& value) { SetS3Uri(std::forward<S3UriT>(value)); return *this;}
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
