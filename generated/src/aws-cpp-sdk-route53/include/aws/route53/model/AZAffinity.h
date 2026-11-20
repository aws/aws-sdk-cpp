/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/AZAffinityLocationType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace Route53 {
namespace Model {

/**
 * <p>Specifies the location that an AZ-affinity resource record set answers DNS
 * queries from. For the location types, from most to least specific, see
 * <code>LocationType</code>. A query matches a location when Route 53 VPC Resolver
 * reports that the query came from an Availability Zone (AZ) in that location. If
 * Route 53 doesn't know which AZ a query came from, the query matches only the
 * record for the <code>Global</code> location type. AZ-affinity routing chooses
 * which record to return. It doesn't restrict which clients can get a record. You
 * must specify both <code>LocationType</code> and <code>LocationId</code>.</p>
 * <p>To have Route 53 fall back to a less specific location when a resource is
 * unhealthy, associate a health check with each record, or set
 * <code>EvaluateTargetHealth</code> to <code>true</code> for alias records. If
 * every record that matches a query is unhealthy, Route 53 responds with the most
 * specific one.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/AZAffinity">AWS
 * API Reference</a></p>
 */
class AZAffinity {
 public:
  AWS_ROUTE53_API AZAffinity() = default;
  AWS_ROUTE53_API AZAffinity(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ROUTE53_API AZAffinity& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>The level of the location that <code>LocationId</code> identifies. Valid
   * values, from most to least specific:</p> <ul> <li> <p>
   * <code>AvailabilityZone</code>: A single Availability Zone.</p> </li> <li> <p>
   * <code>AvailabilityZoneGroup</code>: A Zone Group, which is a group of
   * Availability Zones in an Amazon Web Services Region.</p> </li> <li> <p>
   * <code>Region</code>: An entire Amazon Web Services Region.</p> </li> <li> <p>
   * <code>Partition</code>: An entire Amazon Web Services partition.</p> </li> <li>
   * <p> <code>Global</code>: All locations.</p> </li> </ul> <p>We recommend that you
   * create a record for the <code>Global</code> location type so that every query
   * gets an answer. Route 53 responds with it when a query matches no more specific
   * record, or when it's the only healthy record that matches. Without a
   * <code>Global</code> record, Route 53 returns a "no answer" response to queries
   * that don't match any other record.</p>
   */
  inline AZAffinityLocationType GetLocationType() const { return m_locationType; }
  inline bool LocationTypeHasBeenSet() const { return m_locationTypeHasBeenSet; }
  inline void SetLocationType(AZAffinityLocationType value) {
    m_locationTypeHasBeenSet = true;
    m_locationType = value;
  }
  inline AZAffinity& WithLocationType(AZAffinityLocationType value) {
    SetLocationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the location. You can specify only generally available Availability
   * Zones and Zone Groups. Zone Group, Region, and partition IDs must belong to a
   * partition that you can use. Specify the ID in lowercase, in the format that
   * corresponds to <code>LocationType</code>:</p> <ul> <li> <p>For
   * <code>AvailabilityZone</code>, the Availability Zone ID (not the Availability
   * Zone name or a Local Zone ID), such as <code>use1-az1</code>.</p> </li> <li>
   * <p>For <code>AvailabilityZoneGroup</code>, the Zone Group that an Availability
   * Zone belongs to (not a Local Zone group), such as
   * <code>us-east-1-zg-1</code>.</p> </li> <li> <p>For <code>Region</code>, the
   * Region code, such as <code>us-east-1</code>.</p> </li> <li> <p>For
   * <code>Partition</code>, the partition name, such as <code>aws</code>.</p> </li>
   * <li> <p>For <code>Global</code>, the value <code>global</code>.</p> </li> </ul>
   */
  inline const Aws::String& GetLocationId() const { return m_locationId; }
  inline bool LocationIdHasBeenSet() const { return m_locationIdHasBeenSet; }
  template <typename LocationIdT = Aws::String>
  void SetLocationId(LocationIdT&& value) {
    m_locationIdHasBeenSet = true;
    m_locationId = std::forward<LocationIdT>(value);
  }
  template <typename LocationIdT = Aws::String>
  AZAffinity& WithLocationId(LocationIdT&& value) {
    SetLocationId(std::forward<LocationIdT>(value));
    return *this;
  }
  ///@}
 private:
  AZAffinityLocationType m_locationType{AZAffinityLocationType::NOT_SET};

  Aws::String m_locationId;
  bool m_locationTypeHasBeenSet = false;
  bool m_locationIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
