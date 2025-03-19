/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Route53
{
namespace Model
{

  /**
   * <p>A string representing the status of DNSSEC signing.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/DNSSECStatus">AWS
   * API Reference</a></p>
   */
  class DNSSECStatus
  {
  public:
    AWS_ROUTE53_API DNSSECStatus() = default;
    AWS_ROUTE53_API DNSSECStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API DNSSECStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A string that represents the current hosted zone signing status.</p>
     * <p>Status can have one of the following values:</p> <dl> <dt>SIGNING</dt> <dd>
     * <p>DNSSEC signing is enabled for the hosted zone.</p> </dd> <dt>NOT_SIGNING</dt>
     * <dd> <p>DNSSEC signing is not enabled for the hosted zone.</p> </dd>
     * <dt>DELETING</dt> <dd> <p>DNSSEC signing is in the process of being removed for
     * the hosted zone.</p> </dd> <dt>ACTION_NEEDED</dt> <dd> <p>There is a problem
     * with signing in the hosted zone that requires you to take action to resolve. For
     * example, the customer managed key might have been deleted, or the permissions
     * for the customer managed key might have been changed.</p> </dd>
     * <dt>INTERNAL_FAILURE</dt> <dd> <p>There was an error during a request. Before
     * you can continue to work with DNSSEC signing, including with key-signing keys
     * (KSKs), you must correct the problem by enabling or disabling DNSSEC signing for
     * the hosted zone.</p> </dd> </dl>
     */
    inline const Aws::String& GetServeSignature() const { return m_serveSignature; }
    inline bool ServeSignatureHasBeenSet() const { return m_serveSignatureHasBeenSet; }
    template<typename ServeSignatureT = Aws::String>
    void SetServeSignature(ServeSignatureT&& value) { m_serveSignatureHasBeenSet = true; m_serveSignature = std::forward<ServeSignatureT>(value); }
    template<typename ServeSignatureT = Aws::String>
    DNSSECStatus& WithServeSignature(ServeSignatureT&& value) { SetServeSignature(std::forward<ServeSignatureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message provided for the following DNSSEC signing status:
     * <code>INTERNAL_FAILURE</code>. The status message includes information about
     * what the problem might be and steps that you can take to correct the issue.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    DNSSECStatus& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serveSignature;
    bool m_serveSignatureHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
