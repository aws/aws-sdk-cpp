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
   * <p>A complex type that identifies a hosted zone that a specified Amazon VPC is
   * associated with and the owner of the hosted zone. If there is a value for
   * <code>OwningAccount</code>, there is no value for <code>OwningService</code>,
   * and vice versa. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/HostedZoneOwner">AWS
   * API Reference</a></p>
   */
  class HostedZoneOwner
  {
  public:
    AWS_ROUTE53_API HostedZoneOwner();
    AWS_ROUTE53_API HostedZoneOwner(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API HostedZoneOwner& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>If the hosted zone was created by an Amazon Web Services account, or was
     * created by an Amazon Web Services service that creates hosted zones using the
     * current account, <code>OwningAccount</code> contains the account ID of that
     * account. For example, when you use Cloud Map to create a hosted zone, Cloud Map
     * creates the hosted zone using the current Amazon Web Services account. </p>
     */
    inline const Aws::String& GetOwningAccount() const{ return m_owningAccount; }

    /**
     * <p>If the hosted zone was created by an Amazon Web Services account, or was
     * created by an Amazon Web Services service that creates hosted zones using the
     * current account, <code>OwningAccount</code> contains the account ID of that
     * account. For example, when you use Cloud Map to create a hosted zone, Cloud Map
     * creates the hosted zone using the current Amazon Web Services account. </p>
     */
    inline bool OwningAccountHasBeenSet() const { return m_owningAccountHasBeenSet; }

    /**
     * <p>If the hosted zone was created by an Amazon Web Services account, or was
     * created by an Amazon Web Services service that creates hosted zones using the
     * current account, <code>OwningAccount</code> contains the account ID of that
     * account. For example, when you use Cloud Map to create a hosted zone, Cloud Map
     * creates the hosted zone using the current Amazon Web Services account. </p>
     */
    inline void SetOwningAccount(const Aws::String& value) { m_owningAccountHasBeenSet = true; m_owningAccount = value; }

    /**
     * <p>If the hosted zone was created by an Amazon Web Services account, or was
     * created by an Amazon Web Services service that creates hosted zones using the
     * current account, <code>OwningAccount</code> contains the account ID of that
     * account. For example, when you use Cloud Map to create a hosted zone, Cloud Map
     * creates the hosted zone using the current Amazon Web Services account. </p>
     */
    inline void SetOwningAccount(Aws::String&& value) { m_owningAccountHasBeenSet = true; m_owningAccount = std::move(value); }

    /**
     * <p>If the hosted zone was created by an Amazon Web Services account, or was
     * created by an Amazon Web Services service that creates hosted zones using the
     * current account, <code>OwningAccount</code> contains the account ID of that
     * account. For example, when you use Cloud Map to create a hosted zone, Cloud Map
     * creates the hosted zone using the current Amazon Web Services account. </p>
     */
    inline void SetOwningAccount(const char* value) { m_owningAccountHasBeenSet = true; m_owningAccount.assign(value); }

    /**
     * <p>If the hosted zone was created by an Amazon Web Services account, or was
     * created by an Amazon Web Services service that creates hosted zones using the
     * current account, <code>OwningAccount</code> contains the account ID of that
     * account. For example, when you use Cloud Map to create a hosted zone, Cloud Map
     * creates the hosted zone using the current Amazon Web Services account. </p>
     */
    inline HostedZoneOwner& WithOwningAccount(const Aws::String& value) { SetOwningAccount(value); return *this;}

    /**
     * <p>If the hosted zone was created by an Amazon Web Services account, or was
     * created by an Amazon Web Services service that creates hosted zones using the
     * current account, <code>OwningAccount</code> contains the account ID of that
     * account. For example, when you use Cloud Map to create a hosted zone, Cloud Map
     * creates the hosted zone using the current Amazon Web Services account. </p>
     */
    inline HostedZoneOwner& WithOwningAccount(Aws::String&& value) { SetOwningAccount(std::move(value)); return *this;}

    /**
     * <p>If the hosted zone was created by an Amazon Web Services account, or was
     * created by an Amazon Web Services service that creates hosted zones using the
     * current account, <code>OwningAccount</code> contains the account ID of that
     * account. For example, when you use Cloud Map to create a hosted zone, Cloud Map
     * creates the hosted zone using the current Amazon Web Services account. </p>
     */
    inline HostedZoneOwner& WithOwningAccount(const char* value) { SetOwningAccount(value); return *this;}


    /**
     * <p>If an Amazon Web Services service uses its own account to create a hosted
     * zone and associate the specified VPC with that hosted zone,
     * <code>OwningService</code> contains an abbreviation that identifies the service.
     * For example, if Amazon Elastic File System (Amazon EFS) created a hosted zone
     * and associated a VPC with the hosted zone, the value of
     * <code>OwningService</code> is <code>efs.amazonaws.com</code>.</p>
     */
    inline const Aws::String& GetOwningService() const{ return m_owningService; }

    /**
     * <p>If an Amazon Web Services service uses its own account to create a hosted
     * zone and associate the specified VPC with that hosted zone,
     * <code>OwningService</code> contains an abbreviation that identifies the service.
     * For example, if Amazon Elastic File System (Amazon EFS) created a hosted zone
     * and associated a VPC with the hosted zone, the value of
     * <code>OwningService</code> is <code>efs.amazonaws.com</code>.</p>
     */
    inline bool OwningServiceHasBeenSet() const { return m_owningServiceHasBeenSet; }

    /**
     * <p>If an Amazon Web Services service uses its own account to create a hosted
     * zone and associate the specified VPC with that hosted zone,
     * <code>OwningService</code> contains an abbreviation that identifies the service.
     * For example, if Amazon Elastic File System (Amazon EFS) created a hosted zone
     * and associated a VPC with the hosted zone, the value of
     * <code>OwningService</code> is <code>efs.amazonaws.com</code>.</p>
     */
    inline void SetOwningService(const Aws::String& value) { m_owningServiceHasBeenSet = true; m_owningService = value; }

    /**
     * <p>If an Amazon Web Services service uses its own account to create a hosted
     * zone and associate the specified VPC with that hosted zone,
     * <code>OwningService</code> contains an abbreviation that identifies the service.
     * For example, if Amazon Elastic File System (Amazon EFS) created a hosted zone
     * and associated a VPC with the hosted zone, the value of
     * <code>OwningService</code> is <code>efs.amazonaws.com</code>.</p>
     */
    inline void SetOwningService(Aws::String&& value) { m_owningServiceHasBeenSet = true; m_owningService = std::move(value); }

    /**
     * <p>If an Amazon Web Services service uses its own account to create a hosted
     * zone and associate the specified VPC with that hosted zone,
     * <code>OwningService</code> contains an abbreviation that identifies the service.
     * For example, if Amazon Elastic File System (Amazon EFS) created a hosted zone
     * and associated a VPC with the hosted zone, the value of
     * <code>OwningService</code> is <code>efs.amazonaws.com</code>.</p>
     */
    inline void SetOwningService(const char* value) { m_owningServiceHasBeenSet = true; m_owningService.assign(value); }

    /**
     * <p>If an Amazon Web Services service uses its own account to create a hosted
     * zone and associate the specified VPC with that hosted zone,
     * <code>OwningService</code> contains an abbreviation that identifies the service.
     * For example, if Amazon Elastic File System (Amazon EFS) created a hosted zone
     * and associated a VPC with the hosted zone, the value of
     * <code>OwningService</code> is <code>efs.amazonaws.com</code>.</p>
     */
    inline HostedZoneOwner& WithOwningService(const Aws::String& value) { SetOwningService(value); return *this;}

    /**
     * <p>If an Amazon Web Services service uses its own account to create a hosted
     * zone and associate the specified VPC with that hosted zone,
     * <code>OwningService</code> contains an abbreviation that identifies the service.
     * For example, if Amazon Elastic File System (Amazon EFS) created a hosted zone
     * and associated a VPC with the hosted zone, the value of
     * <code>OwningService</code> is <code>efs.amazonaws.com</code>.</p>
     */
    inline HostedZoneOwner& WithOwningService(Aws::String&& value) { SetOwningService(std::move(value)); return *this;}

    /**
     * <p>If an Amazon Web Services service uses its own account to create a hosted
     * zone and associate the specified VPC with that hosted zone,
     * <code>OwningService</code> contains an abbreviation that identifies the service.
     * For example, if Amazon Elastic File System (Amazon EFS) created a hosted zone
     * and associated a VPC with the hosted zone, the value of
     * <code>OwningService</code> is <code>efs.amazonaws.com</code>.</p>
     */
    inline HostedZoneOwner& WithOwningService(const char* value) { SetOwningService(value); return *this;}

  private:

    Aws::String m_owningAccount;
    bool m_owningAccountHasBeenSet = false;

    Aws::String m_owningService;
    bool m_owningServiceHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
