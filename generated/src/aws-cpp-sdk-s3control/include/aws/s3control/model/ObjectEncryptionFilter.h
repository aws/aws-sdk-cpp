/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/SSES3Filter.h>
#include <aws/s3control/model/SSEKMSFilter.h>
#include <aws/s3control/model/DSSEKMSFilter.h>
#include <aws/s3control/model/SSECFilter.h>
#include <aws/s3control/model/NotSSEFilter.h>
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
   * <p>An optional filter for the <code>S3JobManifestGenerator</code> that
   * identifies the subset of objects by encryption type. This filter is used to
   * create an object list for S3 Batch Operations jobs. If provided, this filter
   * will generate an object list that only includes objects with the specified
   * encryption type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ObjectEncryptionFilter">AWS
   * API Reference</a></p>
   */
  class ObjectEncryptionFilter
  {
  public:
    AWS_S3CONTROL_API ObjectEncryptionFilter() = default;
    AWS_S3CONTROL_API ObjectEncryptionFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API ObjectEncryptionFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Filters for objects that are encrypted by server-side encryption with Amazon
     * S3 managed keys (SSE-S3).</p>
     */
    inline const SSES3Filter& GetSSES3() const { return m_sSES3; }
    inline bool SSES3HasBeenSet() const { return m_sSES3HasBeenSet; }
    template<typename SSES3T = SSES3Filter>
    void SetSSES3(SSES3T&& value) { m_sSES3HasBeenSet = true; m_sSES3 = std::forward<SSES3T>(value); }
    template<typename SSES3T = SSES3Filter>
    ObjectEncryptionFilter& WithSSES3(SSES3T&& value) { SetSSES3(std::forward<SSES3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters for objects that are encrypted by server-side encryption with Amazon
     * Web Services Key Management Service (KMS) keys (SSE-KMS).</p>
     */
    inline const SSEKMSFilter& GetSSEKMS() const { return m_sSEKMS; }
    inline bool SSEKMSHasBeenSet() const { return m_sSEKMSHasBeenSet; }
    template<typename SSEKMST = SSEKMSFilter>
    void SetSSEKMS(SSEKMST&& value) { m_sSEKMSHasBeenSet = true; m_sSEKMS = std::forward<SSEKMST>(value); }
    template<typename SSEKMST = SSEKMSFilter>
    ObjectEncryptionFilter& WithSSEKMS(SSEKMST&& value) { SetSSEKMS(std::forward<SSEKMST>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters for objects that are encrypted by dual-layer server-side encryption
     * with Amazon Web Services Key Management Service (KMS) keys (DSSE-KMS).</p>
     */
    inline const DSSEKMSFilter& GetDSSEKMS() const { return m_dSSEKMS; }
    inline bool DSSEKMSHasBeenSet() const { return m_dSSEKMSHasBeenSet; }
    template<typename DSSEKMST = DSSEKMSFilter>
    void SetDSSEKMS(DSSEKMST&& value) { m_dSSEKMSHasBeenSet = true; m_dSSEKMS = std::forward<DSSEKMST>(value); }
    template<typename DSSEKMST = DSSEKMSFilter>
    ObjectEncryptionFilter& WithDSSEKMS(DSSEKMST&& value) { SetDSSEKMS(std::forward<DSSEKMST>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters for objects that are encrypted by server-side encryption with
     * customer-provided keys (SSE-C).</p>
     */
    inline const SSECFilter& GetSSEC() const { return m_sSEC; }
    inline bool SSECHasBeenSet() const { return m_sSECHasBeenSet; }
    template<typename SSECT = SSECFilter>
    void SetSSEC(SSECT&& value) { m_sSECHasBeenSet = true; m_sSEC = std::forward<SSECT>(value); }
    template<typename SSECT = SSECFilter>
    ObjectEncryptionFilter& WithSSEC(SSECT&& value) { SetSSEC(std::forward<SSECT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters for objects that are not encrypted by server-side encryption. </p>
     */
    inline const NotSSEFilter& GetNOTSSE() const { return m_nOTSSE; }
    inline bool NOTSSEHasBeenSet() const { return m_nOTSSEHasBeenSet; }
    template<typename NOTSSET = NotSSEFilter>
    void SetNOTSSE(NOTSSET&& value) { m_nOTSSEHasBeenSet = true; m_nOTSSE = std::forward<NOTSSET>(value); }
    template<typename NOTSSET = NotSSEFilter>
    ObjectEncryptionFilter& WithNOTSSE(NOTSSET&& value) { SetNOTSSE(std::forward<NOTSSET>(value)); return *this;}
    ///@}
  private:

    SSES3Filter m_sSES3;
    bool m_sSES3HasBeenSet = false;

    SSEKMSFilter m_sSEKMS;
    bool m_sSEKMSHasBeenSet = false;

    DSSEKMSFilter m_dSSEKMS;
    bool m_dSSEKMSHasBeenSet = false;

    SSECFilter m_sSEC;
    bool m_sSECHasBeenSet = false;

    NotSSEFilter m_nOTSSE;
    bool m_nOTSSEHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
