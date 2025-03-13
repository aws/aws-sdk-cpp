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
    AWS_S3CONTROL_API GeneratedManifestEncryption() = default;
    AWS_S3CONTROL_API GeneratedManifestEncryption(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API GeneratedManifestEncryption& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Specifies the use of SSE-S3 to encrypt generated manifest objects.</p>
     */
    inline const SSES3Encryption& GetSSES3() const { return m_sSES3; }
    inline bool SSES3HasBeenSet() const { return m_sSES3HasBeenSet; }
    template<typename SSES3T = SSES3Encryption>
    void SetSSES3(SSES3T&& value) { m_sSES3HasBeenSet = true; m_sSES3 = std::forward<SSES3T>(value); }
    template<typename SSES3T = SSES3Encryption>
    GeneratedManifestEncryption& WithSSES3(SSES3T&& value) { SetSSES3(std::forward<SSES3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration details on how SSE-KMS is used to encrypt generated manifest
     * objects.</p>
     */
    inline const SSEKMSEncryption& GetSSEKMS() const { return m_sSEKMS; }
    inline bool SSEKMSHasBeenSet() const { return m_sSEKMSHasBeenSet; }
    template<typename SSEKMST = SSEKMSEncryption>
    void SetSSEKMS(SSEKMST&& value) { m_sSEKMSHasBeenSet = true; m_sSEKMS = std::forward<SSEKMST>(value); }
    template<typename SSEKMST = SSEKMSEncryption>
    GeneratedManifestEncryption& WithSSEKMS(SSEKMST&& value) { SetSSEKMS(std::forward<SSEKMST>(value)); return *this;}
    ///@}
  private:

    SSES3Encryption m_sSES3;
    bool m_sSES3HasBeenSet = false;

    SSEKMSEncryption m_sSEKMS;
    bool m_sSEKMSHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
