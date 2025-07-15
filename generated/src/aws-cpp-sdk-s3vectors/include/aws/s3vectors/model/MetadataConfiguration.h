/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace S3Vectors
{
namespace Model
{

  /**
   * <p> <p>Amazon S3 Vectors is in preview release for Amazon S3 and is
   * subject to change.</p>  <p>The metadata configuration for a vector
   * index.</p></p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3vectors-2025-07-15/MetadataConfiguration">AWS
   * API Reference</a></p>
   */
  class MetadataConfiguration
  {
  public:
    AWS_S3VECTORS_API MetadataConfiguration() = default;
    AWS_S3VECTORS_API MetadataConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3VECTORS_API MetadataConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3VECTORS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Non-filterable metadata keys allow you to enrich vectors with additional
     * context during storage and retrieval. Unlike default metadata keys, these keys
     * can’t be used as query filters. Non-filterable metadata keys can be retrieved
     * but can’t be searched, queried, or filtered. You can access non-filterable
     * metadata keys of your vectors after finding the vectors. For more information
     * about non-filterable metadata keys, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-vectors-vectors.html">Vectors</a>
     * and <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-vectors-limitations.html">Limitations
     * and restrictions</a> in the <i>Amazon S3 User Guide</i>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetNonFilterableMetadataKeys() const { return m_nonFilterableMetadataKeys; }
    inline bool NonFilterableMetadataKeysHasBeenSet() const { return m_nonFilterableMetadataKeysHasBeenSet; }
    template<typename NonFilterableMetadataKeysT = Aws::Vector<Aws::String>>
    void SetNonFilterableMetadataKeys(NonFilterableMetadataKeysT&& value) { m_nonFilterableMetadataKeysHasBeenSet = true; m_nonFilterableMetadataKeys = std::forward<NonFilterableMetadataKeysT>(value); }
    template<typename NonFilterableMetadataKeysT = Aws::Vector<Aws::String>>
    MetadataConfiguration& WithNonFilterableMetadataKeys(NonFilterableMetadataKeysT&& value) { SetNonFilterableMetadataKeys(std::forward<NonFilterableMetadataKeysT>(value)); return *this;}
    template<typename NonFilterableMetadataKeysT = Aws::String>
    MetadataConfiguration& AddNonFilterableMetadataKeys(NonFilterableMetadataKeysT&& value) { m_nonFilterableMetadataKeysHasBeenSet = true; m_nonFilterableMetadataKeys.emplace_back(std::forward<NonFilterableMetadataKeysT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_nonFilterableMetadataKeys;
    bool m_nonFilterableMetadataKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Vectors
} // namespace Aws
