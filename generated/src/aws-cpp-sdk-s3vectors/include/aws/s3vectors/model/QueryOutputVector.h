/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3vectors/model/VectorData.h>
#include <aws/core/utils/Document.h>
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
   * subject to change.</p>  <p>The attributes of a vector in the approximate
   * nearest neighbor search.</p></p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3vectors-2025-07-15/QueryOutputVector">AWS
   * API Reference</a></p>
   */
  class QueryOutputVector
  {
  public:
    AWS_S3VECTORS_API QueryOutputVector() = default;
    AWS_S3VECTORS_API QueryOutputVector(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3VECTORS_API QueryOutputVector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3VECTORS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key of the vector in the approximate nearest neighbor search.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    QueryOutputVector& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The vector data associated with the vector, if requested. </p>
     */
    inline const VectorData& GetData() const { return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    template<typename DataT = VectorData>
    void SetData(DataT&& value) { m_dataHasBeenSet = true; m_data = std::forward<DataT>(value); }
    template<typename DataT = VectorData>
    QueryOutputVector& WithData(DataT&& value) { SetData(std::forward<DataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata associated with the vector, if requested.</p>
     */
    inline Aws::Utils::DocumentView GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = Aws::Utils::Document>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = Aws::Utils::Document>
    QueryOutputVector& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The measure of similarity between the vector in the response and the query
     * vector.</p>
     */
    inline double GetDistance() const { return m_distance; }
    inline bool DistanceHasBeenSet() const { return m_distanceHasBeenSet; }
    inline void SetDistance(double value) { m_distanceHasBeenSet = true; m_distance = value; }
    inline QueryOutputVector& WithDistance(double value) { SetDistance(value); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    VectorData m_data;
    bool m_dataHasBeenSet = false;

    Aws::Utils::Document m_metadata;
    bool m_metadataHasBeenSet = false;

    double m_distance{0.0};
    bool m_distanceHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Vectors
} // namespace Aws
