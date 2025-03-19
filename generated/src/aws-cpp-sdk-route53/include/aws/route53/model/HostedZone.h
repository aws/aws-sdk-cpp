/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/HostedZoneConfig.h>
#include <aws/route53/model/LinkedService.h>
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
   * <p>A complex type that contains general information about the hosted
   * zone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/HostedZone">AWS
   * API Reference</a></p>
   */
  class HostedZone
  {
  public:
    AWS_ROUTE53_API HostedZone() = default;
    AWS_ROUTE53_API HostedZone(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API HostedZone& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The ID that Amazon Route 53 assigned to the hosted zone when you created
     * it.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    HostedZone& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the domain. For public hosted zones, this is the name that you
     * have registered with your DNS registrar.</p> <p>For information about how to
     * specify characters other than <code>a-z</code>, <code>0-9</code>, and
     * <code>-</code> (hyphen) and how to specify internationalized domain names, see
     * <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_CreateHostedZone.html">CreateHostedZone</a>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    HostedZone& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that you specified for <code>CallerReference</code> when you
     * created the hosted zone.</p>
     */
    inline const Aws::String& GetCallerReference() const { return m_callerReference; }
    inline bool CallerReferenceHasBeenSet() const { return m_callerReferenceHasBeenSet; }
    template<typename CallerReferenceT = Aws::String>
    void SetCallerReference(CallerReferenceT&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = std::forward<CallerReferenceT>(value); }
    template<typename CallerReferenceT = Aws::String>
    HostedZone& WithCallerReference(CallerReferenceT&& value) { SetCallerReference(std::forward<CallerReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that includes the <code>Comment</code> and
     * <code>PrivateZone</code> elements. If you omitted the
     * <code>HostedZoneConfig</code> and <code>Comment</code> elements from the
     * request, the <code>Config</code> and <code>Comment</code> elements don't appear
     * in the response.</p>
     */
    inline const HostedZoneConfig& GetConfig() const { return m_config; }
    inline bool ConfigHasBeenSet() const { return m_configHasBeenSet; }
    template<typename ConfigT = HostedZoneConfig>
    void SetConfig(ConfigT&& value) { m_configHasBeenSet = true; m_config = std::forward<ConfigT>(value); }
    template<typename ConfigT = HostedZoneConfig>
    HostedZone& WithConfig(ConfigT&& value) { SetConfig(std::forward<ConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of resource record sets in the hosted zone.</p>
     */
    inline long long GetResourceRecordSetCount() const { return m_resourceRecordSetCount; }
    inline bool ResourceRecordSetCountHasBeenSet() const { return m_resourceRecordSetCountHasBeenSet; }
    inline void SetResourceRecordSetCount(long long value) { m_resourceRecordSetCountHasBeenSet = true; m_resourceRecordSetCount = value; }
    inline HostedZone& WithResourceRecordSetCount(long long value) { SetResourceRecordSetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the hosted zone was created by another service, the service that created
     * the hosted zone. When a hosted zone is created by another service, you can't
     * edit or delete it using Route 53. </p>
     */
    inline const LinkedService& GetLinkedService() const { return m_linkedService; }
    inline bool LinkedServiceHasBeenSet() const { return m_linkedServiceHasBeenSet; }
    template<typename LinkedServiceT = LinkedService>
    void SetLinkedService(LinkedServiceT&& value) { m_linkedServiceHasBeenSet = true; m_linkedService = std::forward<LinkedServiceT>(value); }
    template<typename LinkedServiceT = LinkedService>
    HostedZone& WithLinkedService(LinkedServiceT&& value) { SetLinkedService(std::forward<LinkedServiceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_callerReference;
    bool m_callerReferenceHasBeenSet = false;

    HostedZoneConfig m_config;
    bool m_configHasBeenSet = false;

    long long m_resourceRecordSetCount{0};
    bool m_resourceRecordSetCountHasBeenSet = false;

    LinkedService m_linkedService;
    bool m_linkedServiceHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
