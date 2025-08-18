/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/ComputeObjectChecksumAlgorithm.h>
#include <aws/s3control/model/ComputeObjectChecksumType.h>
#include <utility>

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
   * <p>Directs the specified job to invoke the <code>ComputeObjectChecksum</code>
   * operation on every object listed in the job's manifest.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3ComputeObjectChecksumOperation">AWS
   * API Reference</a></p>
   */
  class S3ComputeObjectChecksumOperation
  {
  public:
    AWS_S3CONTROL_API S3ComputeObjectChecksumOperation() = default;
    AWS_S3CONTROL_API S3ComputeObjectChecksumOperation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API S3ComputeObjectChecksumOperation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Indicates the algorithm that you want Amazon S3 to use to create the
     * checksum. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
     * object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline ComputeObjectChecksumAlgorithm GetChecksumAlgorithm() const { return m_checksumAlgorithm; }
    inline bool ChecksumAlgorithmHasBeenSet() const { return m_checksumAlgorithmHasBeenSet; }
    inline void SetChecksumAlgorithm(ComputeObjectChecksumAlgorithm value) { m_checksumAlgorithmHasBeenSet = true; m_checksumAlgorithm = value; }
    inline S3ComputeObjectChecksumOperation& WithChecksumAlgorithm(ComputeObjectChecksumAlgorithm value) { SetChecksumAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the checksum type that you want Amazon S3 to use to calculate the
     * object’s checksum value. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
     * object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline ComputeObjectChecksumType GetChecksumType() const { return m_checksumType; }
    inline bool ChecksumTypeHasBeenSet() const { return m_checksumTypeHasBeenSet; }
    inline void SetChecksumType(ComputeObjectChecksumType value) { m_checksumTypeHasBeenSet = true; m_checksumType = value; }
    inline S3ComputeObjectChecksumOperation& WithChecksumType(ComputeObjectChecksumType value) { SetChecksumType(value); return *this;}
    ///@}
  private:

    ComputeObjectChecksumAlgorithm m_checksumAlgorithm{ComputeObjectChecksumAlgorithm::NOT_SET};
    bool m_checksumAlgorithmHasBeenSet = false;

    ComputeObjectChecksumType m_checksumType{ComputeObjectChecksumType::NOT_SET};
    bool m_checksumTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
