/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p> A filter condition that specifies the object size range of included objects
   * in bytes. Only integers are supported. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/MatchObjectSize">AWS
   * API Reference</a></p>
   */
  class MatchObjectSize
  {
  public:
    AWS_S3CONTROL_API MatchObjectSize();
    AWS_S3CONTROL_API MatchObjectSize(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API MatchObjectSize& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p> Specifies the minimum object size in Bytes. The value must be a positive
     * number, greater than 0 and less than 5 TB. </p>
     */
    inline long long GetBytesGreaterThan() const{ return m_bytesGreaterThan; }

    /**
     * <p> Specifies the minimum object size in Bytes. The value must be a positive
     * number, greater than 0 and less than 5 TB. </p>
     */
    inline bool BytesGreaterThanHasBeenSet() const { return m_bytesGreaterThanHasBeenSet; }

    /**
     * <p> Specifies the minimum object size in Bytes. The value must be a positive
     * number, greater than 0 and less than 5 TB. </p>
     */
    inline void SetBytesGreaterThan(long long value) { m_bytesGreaterThanHasBeenSet = true; m_bytesGreaterThan = value; }

    /**
     * <p> Specifies the minimum object size in Bytes. The value must be a positive
     * number, greater than 0 and less than 5 TB. </p>
     */
    inline MatchObjectSize& WithBytesGreaterThan(long long value) { SetBytesGreaterThan(value); return *this;}


    /**
     * <p> Specifies the maximum object size in Bytes. The value must be a positive
     * number, greater than the minimum object size and less than 5 TB. </p>
     */
    inline long long GetBytesLessThan() const{ return m_bytesLessThan; }

    /**
     * <p> Specifies the maximum object size in Bytes. The value must be a positive
     * number, greater than the minimum object size and less than 5 TB. </p>
     */
    inline bool BytesLessThanHasBeenSet() const { return m_bytesLessThanHasBeenSet; }

    /**
     * <p> Specifies the maximum object size in Bytes. The value must be a positive
     * number, greater than the minimum object size and less than 5 TB. </p>
     */
    inline void SetBytesLessThan(long long value) { m_bytesLessThanHasBeenSet = true; m_bytesLessThan = value; }

    /**
     * <p> Specifies the maximum object size in Bytes. The value must be a positive
     * number, greater than the minimum object size and less than 5 TB. </p>
     */
    inline MatchObjectSize& WithBytesLessThan(long long value) { SetBytesLessThan(value); return *this;}

  private:

    long long m_bytesGreaterThan;
    bool m_bytesGreaterThanHasBeenSet = false;

    long long m_bytesLessThan;
    bool m_bytesLessThanHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
