/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/SSES3.h>
#include <aws/s3control/model/SSEKMS.h>
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
   * <p>A container for the encryption of the S3 Storage Lens metrics
   * exports.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/StorageLensDataExportEncryption">AWS
   * API Reference</a></p>
   */
  class StorageLensDataExportEncryption
  {
  public:
    AWS_S3CONTROL_API StorageLensDataExportEncryption();
    AWS_S3CONTROL_API StorageLensDataExportEncryption(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API StorageLensDataExportEncryption& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p/>
     */
    inline const SSES3& GetSSES3() const{ return m_sSES3; }

    /**
     * <p/>
     */
    inline bool SSES3HasBeenSet() const { return m_sSES3HasBeenSet; }

    /**
     * <p/>
     */
    inline void SetSSES3(const SSES3& value) { m_sSES3HasBeenSet = true; m_sSES3 = value; }

    /**
     * <p/>
     */
    inline void SetSSES3(SSES3&& value) { m_sSES3HasBeenSet = true; m_sSES3 = std::move(value); }

    /**
     * <p/>
     */
    inline StorageLensDataExportEncryption& WithSSES3(const SSES3& value) { SetSSES3(value); return *this;}

    /**
     * <p/>
     */
    inline StorageLensDataExportEncryption& WithSSES3(SSES3&& value) { SetSSES3(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const SSEKMS& GetSSEKMS() const{ return m_sSEKMS; }

    /**
     * <p/>
     */
    inline bool SSEKMSHasBeenSet() const { return m_sSEKMSHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetSSEKMS(const SSEKMS& value) { m_sSEKMSHasBeenSet = true; m_sSEKMS = value; }

    /**
     * <p/>
     */
    inline void SetSSEKMS(SSEKMS&& value) { m_sSEKMSHasBeenSet = true; m_sSEKMS = std::move(value); }

    /**
     * <p/>
     */
    inline StorageLensDataExportEncryption& WithSSEKMS(const SSEKMS& value) { SetSSEKMS(value); return *this;}

    /**
     * <p/>
     */
    inline StorageLensDataExportEncryption& WithSSEKMS(SSEKMS&& value) { SetSSEKMS(std::move(value)); return *this;}

  private:

    SSES3 m_sSES3;
    bool m_sSES3HasBeenSet = false;

    SSEKMS m_sSEKMS;
    bool m_sSEKMSHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
