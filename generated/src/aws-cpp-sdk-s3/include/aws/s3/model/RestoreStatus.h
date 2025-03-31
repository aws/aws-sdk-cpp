/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace S3
{
namespace Model
{

  /**
   * <p>Specifies the restoration status of an object. Objects in certain storage
   * classes must be restored before they can be retrieved. For more information
   * about these storage classes and how to work with archived objects, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/archived-objects.html">
   * Working with archived objects</a> in the <i>Amazon S3 User Guide</i>.</p> 
   * <p>This functionality is not supported for directory buckets. Directory buckets
   * only support <code>EXPRESS_ONEZONE</code> (the S3 Express One Zone storage
   * class) in Availability Zones and <code>ONEZONE_IA</code> (the S3 One
   * Zone-Infrequent Access storage class) in Dedicated Local Zones.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/RestoreStatus">AWS
   * API Reference</a></p>
   */
  class RestoreStatus
  {
  public:
    AWS_S3_API RestoreStatus() = default;
    AWS_S3_API RestoreStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API RestoreStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Specifies whether the object is currently being restored. If the object
     * restoration is in progress, the header returns the value <code>TRUE</code>. For
     * example:</p> <p> <code>x-amz-optional-object-attributes:
     * IsRestoreInProgress="true"</code> </p> <p>If the object restoration has
     * completed, the header returns the value <code>FALSE</code>. For example:</p> <p>
     * <code>x-amz-optional-object-attributes: IsRestoreInProgress="false",
     * RestoreExpiryDate="2012-12-21T00:00:00.000Z"</code> </p> <p>If the object hasn't
     * been restored, there is no header response.</p>
     */
    inline bool GetIsRestoreInProgress() const { return m_isRestoreInProgress; }
    inline bool IsRestoreInProgressHasBeenSet() const { return m_isRestoreInProgressHasBeenSet; }
    inline void SetIsRestoreInProgress(bool value) { m_isRestoreInProgressHasBeenSet = true; m_isRestoreInProgress = value; }
    inline RestoreStatus& WithIsRestoreInProgress(bool value) { SetIsRestoreInProgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the restored copy will expire. This value is populated only if
     * the object has already been restored. For example:</p> <p>
     * <code>x-amz-optional-object-attributes: IsRestoreInProgress="false",
     * RestoreExpiryDate="2012-12-21T00:00:00.000Z"</code> </p>
     */
    inline const Aws::Utils::DateTime& GetRestoreExpiryDate() const { return m_restoreExpiryDate; }
    inline bool RestoreExpiryDateHasBeenSet() const { return m_restoreExpiryDateHasBeenSet; }
    template<typename RestoreExpiryDateT = Aws::Utils::DateTime>
    void SetRestoreExpiryDate(RestoreExpiryDateT&& value) { m_restoreExpiryDateHasBeenSet = true; m_restoreExpiryDate = std::forward<RestoreExpiryDateT>(value); }
    template<typename RestoreExpiryDateT = Aws::Utils::DateTime>
    RestoreStatus& WithRestoreExpiryDate(RestoreExpiryDateT&& value) { SetRestoreExpiryDate(std::forward<RestoreExpiryDateT>(value)); return *this;}
    ///@}
  private:

    bool m_isRestoreInProgress{false};
    bool m_isRestoreInProgressHasBeenSet = false;

    Aws::Utils::DateTime m_restoreExpiryDate{};
    bool m_restoreExpiryDateHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
