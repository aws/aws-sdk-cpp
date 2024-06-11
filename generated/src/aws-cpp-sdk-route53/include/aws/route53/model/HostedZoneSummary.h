/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/HostedZoneOwner.h>
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
   * <p>In the response to a <code>ListHostedZonesByVPC</code> request, the
   * <code>HostedZoneSummaries</code> element contains one
   * <code>HostedZoneSummary</code> element for each hosted zone that the specified
   * Amazon VPC is associated with. Each <code>HostedZoneSummary</code> element
   * contains the hosted zone name and ID, and information about who owns the hosted
   * zone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/HostedZoneSummary">AWS
   * API Reference</a></p>
   */
  class HostedZoneSummary
  {
  public:
    AWS_ROUTE53_API HostedZoneSummary();
    AWS_ROUTE53_API HostedZoneSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API HostedZoneSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The Route 53 hosted zone ID of a private hosted zone that the specified VPC
     * is associated with.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::move(value); }
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }
    inline HostedZoneSummary& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}
    inline HostedZoneSummary& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(std::move(value)); return *this;}
    inline HostedZoneSummary& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the private hosted zone, such as <code>example.com</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline HostedZoneSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline HostedZoneSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline HostedZoneSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of a private hosted zone that the specified VPC is associated with.
     * The owner can be either an Amazon Web Services account or an Amazon Web Services
     * service.</p>
     */
    inline const HostedZoneOwner& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const HostedZoneOwner& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(HostedZoneOwner&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline HostedZoneSummary& WithOwner(const HostedZoneOwner& value) { SetOwner(value); return *this;}
    inline HostedZoneSummary& WithOwner(HostedZoneOwner&& value) { SetOwner(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    HostedZoneOwner m_owner;
    bool m_ownerHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
