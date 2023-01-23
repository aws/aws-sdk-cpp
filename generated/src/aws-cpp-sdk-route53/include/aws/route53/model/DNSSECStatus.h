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
   * <p>A string repesenting the status of DNSSEC signing.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/DNSSECStatus">AWS
   * API Reference</a></p>
   */
  class DNSSECStatus
  {
  public:
    AWS_ROUTE53_API DNSSECStatus();
    AWS_ROUTE53_API DNSSECStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API DNSSECStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


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
    inline const Aws::String& GetServeSignature() const{ return m_serveSignature; }

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
    inline bool ServeSignatureHasBeenSet() const { return m_serveSignatureHasBeenSet; }

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
    inline void SetServeSignature(const Aws::String& value) { m_serveSignatureHasBeenSet = true; m_serveSignature = value; }

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
    inline void SetServeSignature(Aws::String&& value) { m_serveSignatureHasBeenSet = true; m_serveSignature = std::move(value); }

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
    inline void SetServeSignature(const char* value) { m_serveSignatureHasBeenSet = true; m_serveSignature.assign(value); }

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
    inline DNSSECStatus& WithServeSignature(const Aws::String& value) { SetServeSignature(value); return *this;}

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
    inline DNSSECStatus& WithServeSignature(Aws::String&& value) { SetServeSignature(std::move(value)); return *this;}

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
    inline DNSSECStatus& WithServeSignature(const char* value) { SetServeSignature(value); return *this;}


    /**
     * <p>The status message provided for the following DNSSEC signing status:
     * <code>INTERNAL_FAILURE</code>. The status message includes information about
     * what the problem might be and steps that you can take to correct the issue.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status message provided for the following DNSSEC signing status:
     * <code>INTERNAL_FAILURE</code>. The status message includes information about
     * what the problem might be and steps that you can take to correct the issue.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The status message provided for the following DNSSEC signing status:
     * <code>INTERNAL_FAILURE</code>. The status message includes information about
     * what the problem might be and steps that you can take to correct the issue.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The status message provided for the following DNSSEC signing status:
     * <code>INTERNAL_FAILURE</code>. The status message includes information about
     * what the problem might be and steps that you can take to correct the issue.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The status message provided for the following DNSSEC signing status:
     * <code>INTERNAL_FAILURE</code>. The status message includes information about
     * what the problem might be and steps that you can take to correct the issue.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The status message provided for the following DNSSEC signing status:
     * <code>INTERNAL_FAILURE</code>. The status message includes information about
     * what the problem might be and steps that you can take to correct the issue.</p>
     */
    inline DNSSECStatus& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status message provided for the following DNSSEC signing status:
     * <code>INTERNAL_FAILURE</code>. The status message includes information about
     * what the problem might be and steps that you can take to correct the issue.</p>
     */
    inline DNSSECStatus& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message provided for the following DNSSEC signing status:
     * <code>INTERNAL_FAILURE</code>. The status message includes information about
     * what the problem might be and steps that you can take to correct the issue.</p>
     */
    inline DNSSECStatus& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    Aws::String m_serveSignature;
    bool m_serveSignatureHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
