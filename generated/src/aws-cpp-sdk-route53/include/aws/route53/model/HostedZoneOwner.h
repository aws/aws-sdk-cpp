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
    AWS_ROUTE53_API HostedZoneOwner() = default;
    AWS_ROUTE53_API HostedZoneOwner(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API HostedZoneOwner& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>If the hosted zone was created by an Amazon Web Services account, or was
     * created by an Amazon Web Services service that creates hosted zones using the
     * current account, <code>OwningAccount</code> contains the account ID of that
     * account. For example, when you use Cloud Map to create a hosted zone, Cloud Map
     * creates the hosted zone using the current Amazon Web Services account. </p>
     */
    inline const Aws::String& GetOwningAccount() const { return m_owningAccount; }
    inline bool OwningAccountHasBeenSet() const { return m_owningAccountHasBeenSet; }
    template<typename OwningAccountT = Aws::String>
    void SetOwningAccount(OwningAccountT&& value) { m_owningAccountHasBeenSet = true; m_owningAccount = std::forward<OwningAccountT>(value); }
    template<typename OwningAccountT = Aws::String>
    HostedZoneOwner& WithOwningAccount(OwningAccountT&& value) { SetOwningAccount(std::forward<OwningAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an Amazon Web Services service uses its own account to create a hosted
     * zone and associate the specified VPC with that hosted zone,
     * <code>OwningService</code> contains an abbreviation that identifies the service.
     * For example, if Amazon Elastic File System (Amazon EFS) created a hosted zone
     * and associated a VPC with the hosted zone, the value of
     * <code>OwningService</code> is <code>efs.amazonaws.com</code>.</p>
     */
    inline const Aws::String& GetOwningService() const { return m_owningService; }
    inline bool OwningServiceHasBeenSet() const { return m_owningServiceHasBeenSet; }
    template<typename OwningServiceT = Aws::String>
    void SetOwningService(OwningServiceT&& value) { m_owningServiceHasBeenSet = true; m_owningService = std::forward<OwningServiceT>(value); }
    template<typename OwningServiceT = Aws::String>
    HostedZoneOwner& WithOwningService(OwningServiceT&& value) { SetOwningService(std::forward<OwningServiceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_owningAccount;
    bool m_owningAccountHasBeenSet = false;

    Aws::String m_owningService;
    bool m_owningServiceHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
