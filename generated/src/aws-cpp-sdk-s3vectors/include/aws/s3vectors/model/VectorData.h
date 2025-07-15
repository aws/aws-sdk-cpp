/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * subject to change.</p>  <p>The vector data in different
   * formats.</p></p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3vectors-2025-07-15/VectorData">AWS
   * API Reference</a></p>
   */
  class VectorData
  {
  public:
    AWS_S3VECTORS_API VectorData() = default;
    AWS_S3VECTORS_API VectorData(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3VECTORS_API VectorData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3VECTORS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The vector data as 32-bit floating point numbers. The number of elements in
     * this array must exactly match the dimension of the vector index where the
     * operation is being performed.</p>
     */
    inline const Aws::Vector<double>& GetFloat32() const { return m_float32; }
    inline bool Float32HasBeenSet() const { return m_float32HasBeenSet; }
    template<typename Float32T = Aws::Vector<double>>
    void SetFloat32(Float32T&& value) { m_float32HasBeenSet = true; m_float32 = std::forward<Float32T>(value); }
    template<typename Float32T = Aws::Vector<double>>
    VectorData& WithFloat32(Float32T&& value) { SetFloat32(std::forward<Float32T>(value)); return *this;}
    inline VectorData& AddFloat32(double value) { m_float32HasBeenSet = true; m_float32.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<double> m_float32;
    bool m_float32HasBeenSet = false;
  };

} // namespace Model
} // namespace S3Vectors
} // namespace Aws
