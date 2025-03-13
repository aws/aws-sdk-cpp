/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/S3ObjectLockLegalHold.h>
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
   * <p>Contains the configuration for an S3 Object Lock legal hold operation that an
   * S3 Batch Operations job passes to every object to the underlying
   * <code>PutObjectLegalHold</code> API operation. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-legal-hold.html">Using
   * S3 Object Lock legal hold with S3 Batch Operations</a> in the <i>Amazon S3 User
   * Guide</i>.</p>  <p>This functionality is not supported by directory
   * buckets.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3SetObjectLegalHoldOperation">AWS
   * API Reference</a></p>
   */
  class S3SetObjectLegalHoldOperation
  {
  public:
    AWS_S3CONTROL_API S3SetObjectLegalHoldOperation() = default;
    AWS_S3CONTROL_API S3SetObjectLegalHoldOperation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API S3SetObjectLegalHoldOperation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Contains the Object Lock legal hold status to be applied to all objects in
     * the Batch Operations job.</p>
     */
    inline const S3ObjectLockLegalHold& GetLegalHold() const { return m_legalHold; }
    inline bool LegalHoldHasBeenSet() const { return m_legalHoldHasBeenSet; }
    template<typename LegalHoldT = S3ObjectLockLegalHold>
    void SetLegalHold(LegalHoldT&& value) { m_legalHoldHasBeenSet = true; m_legalHold = std::forward<LegalHoldT>(value); }
    template<typename LegalHoldT = S3ObjectLockLegalHold>
    S3SetObjectLegalHoldOperation& WithLegalHold(LegalHoldT&& value) { SetLegalHold(std::forward<LegalHoldT>(value)); return *this;}
    ///@}
  private:

    S3ObjectLockLegalHold m_legalHold;
    bool m_legalHoldHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
