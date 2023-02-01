/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/SSES3Encryption.h>
#include <aws/s3control/model/SSEKMSEncryption.h>
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
   * <p>The encryption configuration to use when storing the generated
   * manifest.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GeneratedManifestEncryption">AWS
   * API Reference</a></p>
   */
  class GeneratedManifestEncryption
  {
  public:
    AWS_S3CONTROL_API GeneratedManifestEncryption();
    AWS_S3CONTROL_API GeneratedManifestEncryption(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API GeneratedManifestEncryption& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Specifies the use of SSE-S3 to encrypt generated manifest objects.</p>
     */
    inline const SSES3Encryption& GetSSES3() const{ return m_sSES3; }

    /**
     * <p>Specifies the use of SSE-S3 to encrypt generated manifest objects.</p>
     */
    inline bool SSES3HasBeenSet() const { return m_sSES3HasBeenSet; }

    /**
     * <p>Specifies the use of SSE-S3 to encrypt generated manifest objects.</p>
     */
    inline void SetSSES3(const SSES3Encryption& value) { m_sSES3HasBeenSet = true; m_sSES3 = value; }

    /**
     * <p>Specifies the use of SSE-S3 to encrypt generated manifest objects.</p>
     */
    inline void SetSSES3(SSES3Encryption&& value) { m_sSES3HasBeenSet = true; m_sSES3 = std::move(value); }

    /**
     * <p>Specifies the use of SSE-S3 to encrypt generated manifest objects.</p>
     */
    inline GeneratedManifestEncryption& WithSSES3(const SSES3Encryption& value) { SetSSES3(value); return *this;}

    /**
     * <p>Specifies the use of SSE-S3 to encrypt generated manifest objects.</p>
     */
    inline GeneratedManifestEncryption& WithSSES3(SSES3Encryption&& value) { SetSSES3(std::move(value)); return *this;}


    /**
     * <p>Configuration details on how SSE-KMS is used to encrypt generated manifest
     * objects.</p>
     */
    inline const SSEKMSEncryption& GetSSEKMS() const{ return m_sSEKMS; }

    /**
     * <p>Configuration details on how SSE-KMS is used to encrypt generated manifest
     * objects.</p>
     */
    inline bool SSEKMSHasBeenSet() const { return m_sSEKMSHasBeenSet; }

    /**
     * <p>Configuration details on how SSE-KMS is used to encrypt generated manifest
     * objects.</p>
     */
    inline void SetSSEKMS(const SSEKMSEncryption& value) { m_sSEKMSHasBeenSet = true; m_sSEKMS = value; }

    /**
     * <p>Configuration details on how SSE-KMS is used to encrypt generated manifest
     * objects.</p>
     */
    inline void SetSSEKMS(SSEKMSEncryption&& value) { m_sSEKMSHasBeenSet = true; m_sSEKMS = std::move(value); }

    /**
     * <p>Configuration details on how SSE-KMS is used to encrypt generated manifest
     * objects.</p>
     */
    inline GeneratedManifestEncryption& WithSSEKMS(const SSEKMSEncryption& value) { SetSSEKMS(value); return *this;}

    /**
     * <p>Configuration details on how SSE-KMS is used to encrypt generated manifest
     * objects.</p>
     */
    inline GeneratedManifestEncryption& WithSSEKMS(SSEKMSEncryption&& value) { SetSSEKMS(std::move(value)); return *this;}

  private:

    SSES3Encryption m_sSES3;
    bool m_sSES3HasBeenSet = false;

    SSEKMSEncryption m_sSEKMS;
    bool m_sSEKMSHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
