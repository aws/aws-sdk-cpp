/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-runtime/SageMakerRuntime_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace SageMakerRuntime
{
namespace Model
{
  /**
   * <p>A wrapper for pieces of the payload that's returned in response to a
   * streaming inference request. A streaming inference response consists of one or
   * more payload parts. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.sagemaker-2017-05-13/PayloadPart">AWS
   * API Reference</a></p>
   */
  class PayloadPart
  {
  public:
    AWS_SAGEMAKERRUNTIME_API PayloadPart() = default;
    AWS_SAGEMAKERRUNTIME_API PayloadPart(Aws::Vector<unsigned char>&& value) { m_bytes = std::move(value); }

    /**
     * <p>A blob that contains part of the response for your streaming inference
     * request.</p>
     */
    inline const Aws::Vector<unsigned char>& GetBytes() const { return m_bytes; }

    /**
     * <p>A blob that contains part of the response for your streaming inference
     * request.</p>
     */
    inline Aws::Vector<unsigned char>&& GetBytesWithOwnership() { return std::move(m_bytes); }

    /**
     * <p>A blob that contains part of the response for your streaming inference
     * request.</p>
     */
    inline void SetBytes(const Aws::Vector<unsigned char>& value) { m_bytesHasBeenSet = true; m_bytes = value; }

    /**
     * <p>A blob that contains part of the response for your streaming inference
     * request.</p>
     */
    inline void SetBytes(Aws::Vector<unsigned char>&& value) { m_bytesHasBeenSet = true; m_bytes = std::move(value); }

    /**
     * <p>A blob that contains part of the response for your streaming inference
     * request.</p>
     */
    inline PayloadPart& WithBytes(const Aws::Vector<unsigned char>& value) { SetBytes(value); return *this;}

    /**
     * <p>A blob that contains part of the response for your streaming inference
     * request.</p>
     */
    inline PayloadPart& WithBytes(Aws::Vector<unsigned char>&& value) { SetBytes(std::move(value)); return *this;}

  private:

    Aws::Vector<unsigned char> m_bytes;
    bool m_bytesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerRuntime
} // namespace Aws
