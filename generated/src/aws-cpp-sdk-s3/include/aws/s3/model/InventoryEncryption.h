/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/SSES3.h>
#include <aws/s3/model/SSEKMS.h>
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
   * <p>Contains the type of server-side encryption used to encrypt the inventory
   * results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/InventoryEncryption">AWS
   * API Reference</a></p>
   */
  class InventoryEncryption
  {
  public:
    AWS_S3_API InventoryEncryption() = default;
    AWS_S3_API InventoryEncryption(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API InventoryEncryption& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Specifies the use of SSE-S3 to encrypt delivered inventory reports.</p>
     */
    inline const SSES3& GetSSES3() const { return m_sSES3; }
    inline bool SSES3HasBeenSet() const { return m_sSES3HasBeenSet; }
    template<typename SSES3T = SSES3>
    void SetSSES3(SSES3T&& value) { m_sSES3HasBeenSet = true; m_sSES3 = std::forward<SSES3T>(value); }
    template<typename SSES3T = SSES3>
    InventoryEncryption& WithSSES3(SSES3T&& value) { SetSSES3(std::forward<SSES3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the use of SSE-KMS to encrypt delivered inventory reports.</p>
     */
    inline const SSEKMS& GetSSEKMS() const { return m_sSEKMS; }
    inline bool SSEKMSHasBeenSet() const { return m_sSEKMSHasBeenSet; }
    template<typename SSEKMST = SSEKMS>
    void SetSSEKMS(SSEKMST&& value) { m_sSEKMSHasBeenSet = true; m_sSEKMS = std::forward<SSEKMST>(value); }
    template<typename SSEKMST = SSEKMS>
    InventoryEncryption& WithSSEKMS(SSEKMST&& value) { SetSSEKMS(std::forward<SSEKMST>(value)); return *this;}
    ///@}
  private:

    SSES3 m_sSES3;
    bool m_sSES3HasBeenSet = false;

    SSEKMS m_sSEKMS;
    bool m_sSEKMSHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
