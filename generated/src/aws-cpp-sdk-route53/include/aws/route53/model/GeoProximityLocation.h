/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/Coordinates.h>
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
   * <p> (Resource record sets only): A complex type that lets you specify where your
   * resources are located. Only one of <code>LocalZoneGroup</code>,
   * <code>Coordinates</code>, or <code>Amazon Web ServicesRegion</code> is allowed
   * per request at a time.</p> <p>For more information about geoproximity routing,
   * see <a
   * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/routing-policy-geoproximity.html">Geoproximity
   * routing</a> in the <i>Amazon Route 53 Developer Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GeoProximityLocation">AWS
   * API Reference</a></p>
   */
  class GeoProximityLocation
  {
  public:
    AWS_ROUTE53_API GeoProximityLocation();
    AWS_ROUTE53_API GeoProximityLocation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API GeoProximityLocation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p> The Amazon Web Services Region the resource you are directing DNS traffic
     * to, is in. </p>
     */
    inline const Aws::String& GetAWSRegion() const{ return m_aWSRegion; }

    /**
     * <p> The Amazon Web Services Region the resource you are directing DNS traffic
     * to, is in. </p>
     */
    inline bool AWSRegionHasBeenSet() const { return m_aWSRegionHasBeenSet; }

    /**
     * <p> The Amazon Web Services Region the resource you are directing DNS traffic
     * to, is in. </p>
     */
    inline void SetAWSRegion(const Aws::String& value) { m_aWSRegionHasBeenSet = true; m_aWSRegion = value; }

    /**
     * <p> The Amazon Web Services Region the resource you are directing DNS traffic
     * to, is in. </p>
     */
    inline void SetAWSRegion(Aws::String&& value) { m_aWSRegionHasBeenSet = true; m_aWSRegion = std::move(value); }

    /**
     * <p> The Amazon Web Services Region the resource you are directing DNS traffic
     * to, is in. </p>
     */
    inline void SetAWSRegion(const char* value) { m_aWSRegionHasBeenSet = true; m_aWSRegion.assign(value); }

    /**
     * <p> The Amazon Web Services Region the resource you are directing DNS traffic
     * to, is in. </p>
     */
    inline GeoProximityLocation& WithAWSRegion(const Aws::String& value) { SetAWSRegion(value); return *this;}

    /**
     * <p> The Amazon Web Services Region the resource you are directing DNS traffic
     * to, is in. </p>
     */
    inline GeoProximityLocation& WithAWSRegion(Aws::String&& value) { SetAWSRegion(std::move(value)); return *this;}

    /**
     * <p> The Amazon Web Services Region the resource you are directing DNS traffic
     * to, is in. </p>
     */
    inline GeoProximityLocation& WithAWSRegion(const char* value) { SetAWSRegion(value); return *this;}


    /**
     * <p> Specifies an Amazon Web Services Local Zone Group. </p> <p>A local Zone
     * Group is usually the Local Zone code without the ending character. For example,
     * if the Local Zone is <code>us-east-1-bue-1a</code> the Local Zone Group is
     * <code>us-east-1-bue-1</code>.</p> <p>You can identify the Local Zones Group for
     * a specific Local Zone by using the <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/ec2/describe-availability-zones.html">describe-availability-zones</a>
     * CLI command:</p> <p>This command returns: <code>"GroupName":
     * "us-west-2-den-1"</code>, specifying that the Local Zone
     * <code>us-west-2-den-1a</code> belongs to the Local Zone Group
     * <code>us-west-2-den-1</code>.</p>
     */
    inline const Aws::String& GetLocalZoneGroup() const{ return m_localZoneGroup; }

    /**
     * <p> Specifies an Amazon Web Services Local Zone Group. </p> <p>A local Zone
     * Group is usually the Local Zone code without the ending character. For example,
     * if the Local Zone is <code>us-east-1-bue-1a</code> the Local Zone Group is
     * <code>us-east-1-bue-1</code>.</p> <p>You can identify the Local Zones Group for
     * a specific Local Zone by using the <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/ec2/describe-availability-zones.html">describe-availability-zones</a>
     * CLI command:</p> <p>This command returns: <code>"GroupName":
     * "us-west-2-den-1"</code>, specifying that the Local Zone
     * <code>us-west-2-den-1a</code> belongs to the Local Zone Group
     * <code>us-west-2-den-1</code>.</p>
     */
    inline bool LocalZoneGroupHasBeenSet() const { return m_localZoneGroupHasBeenSet; }

    /**
     * <p> Specifies an Amazon Web Services Local Zone Group. </p> <p>A local Zone
     * Group is usually the Local Zone code without the ending character. For example,
     * if the Local Zone is <code>us-east-1-bue-1a</code> the Local Zone Group is
     * <code>us-east-1-bue-1</code>.</p> <p>You can identify the Local Zones Group for
     * a specific Local Zone by using the <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/ec2/describe-availability-zones.html">describe-availability-zones</a>
     * CLI command:</p> <p>This command returns: <code>"GroupName":
     * "us-west-2-den-1"</code>, specifying that the Local Zone
     * <code>us-west-2-den-1a</code> belongs to the Local Zone Group
     * <code>us-west-2-den-1</code>.</p>
     */
    inline void SetLocalZoneGroup(const Aws::String& value) { m_localZoneGroupHasBeenSet = true; m_localZoneGroup = value; }

    /**
     * <p> Specifies an Amazon Web Services Local Zone Group. </p> <p>A local Zone
     * Group is usually the Local Zone code without the ending character. For example,
     * if the Local Zone is <code>us-east-1-bue-1a</code> the Local Zone Group is
     * <code>us-east-1-bue-1</code>.</p> <p>You can identify the Local Zones Group for
     * a specific Local Zone by using the <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/ec2/describe-availability-zones.html">describe-availability-zones</a>
     * CLI command:</p> <p>This command returns: <code>"GroupName":
     * "us-west-2-den-1"</code>, specifying that the Local Zone
     * <code>us-west-2-den-1a</code> belongs to the Local Zone Group
     * <code>us-west-2-den-1</code>.</p>
     */
    inline void SetLocalZoneGroup(Aws::String&& value) { m_localZoneGroupHasBeenSet = true; m_localZoneGroup = std::move(value); }

    /**
     * <p> Specifies an Amazon Web Services Local Zone Group. </p> <p>A local Zone
     * Group is usually the Local Zone code without the ending character. For example,
     * if the Local Zone is <code>us-east-1-bue-1a</code> the Local Zone Group is
     * <code>us-east-1-bue-1</code>.</p> <p>You can identify the Local Zones Group for
     * a specific Local Zone by using the <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/ec2/describe-availability-zones.html">describe-availability-zones</a>
     * CLI command:</p> <p>This command returns: <code>"GroupName":
     * "us-west-2-den-1"</code>, specifying that the Local Zone
     * <code>us-west-2-den-1a</code> belongs to the Local Zone Group
     * <code>us-west-2-den-1</code>.</p>
     */
    inline void SetLocalZoneGroup(const char* value) { m_localZoneGroupHasBeenSet = true; m_localZoneGroup.assign(value); }

    /**
     * <p> Specifies an Amazon Web Services Local Zone Group. </p> <p>A local Zone
     * Group is usually the Local Zone code without the ending character. For example,
     * if the Local Zone is <code>us-east-1-bue-1a</code> the Local Zone Group is
     * <code>us-east-1-bue-1</code>.</p> <p>You can identify the Local Zones Group for
     * a specific Local Zone by using the <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/ec2/describe-availability-zones.html">describe-availability-zones</a>
     * CLI command:</p> <p>This command returns: <code>"GroupName":
     * "us-west-2-den-1"</code>, specifying that the Local Zone
     * <code>us-west-2-den-1a</code> belongs to the Local Zone Group
     * <code>us-west-2-den-1</code>.</p>
     */
    inline GeoProximityLocation& WithLocalZoneGroup(const Aws::String& value) { SetLocalZoneGroup(value); return *this;}

    /**
     * <p> Specifies an Amazon Web Services Local Zone Group. </p> <p>A local Zone
     * Group is usually the Local Zone code without the ending character. For example,
     * if the Local Zone is <code>us-east-1-bue-1a</code> the Local Zone Group is
     * <code>us-east-1-bue-1</code>.</p> <p>You can identify the Local Zones Group for
     * a specific Local Zone by using the <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/ec2/describe-availability-zones.html">describe-availability-zones</a>
     * CLI command:</p> <p>This command returns: <code>"GroupName":
     * "us-west-2-den-1"</code>, specifying that the Local Zone
     * <code>us-west-2-den-1a</code> belongs to the Local Zone Group
     * <code>us-west-2-den-1</code>.</p>
     */
    inline GeoProximityLocation& WithLocalZoneGroup(Aws::String&& value) { SetLocalZoneGroup(std::move(value)); return *this;}

    /**
     * <p> Specifies an Amazon Web Services Local Zone Group. </p> <p>A local Zone
     * Group is usually the Local Zone code without the ending character. For example,
     * if the Local Zone is <code>us-east-1-bue-1a</code> the Local Zone Group is
     * <code>us-east-1-bue-1</code>.</p> <p>You can identify the Local Zones Group for
     * a specific Local Zone by using the <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/ec2/describe-availability-zones.html">describe-availability-zones</a>
     * CLI command:</p> <p>This command returns: <code>"GroupName":
     * "us-west-2-den-1"</code>, specifying that the Local Zone
     * <code>us-west-2-den-1a</code> belongs to the Local Zone Group
     * <code>us-west-2-den-1</code>.</p>
     */
    inline GeoProximityLocation& WithLocalZoneGroup(const char* value) { SetLocalZoneGroup(value); return *this;}


    /**
     * <p> Contains the longitude and latitude for a geographic region. </p>
     */
    inline const Coordinates& GetCoordinates() const{ return m_coordinates; }

    /**
     * <p> Contains the longitude and latitude for a geographic region. </p>
     */
    inline bool CoordinatesHasBeenSet() const { return m_coordinatesHasBeenSet; }

    /**
     * <p> Contains the longitude and latitude for a geographic region. </p>
     */
    inline void SetCoordinates(const Coordinates& value) { m_coordinatesHasBeenSet = true; m_coordinates = value; }

    /**
     * <p> Contains the longitude and latitude for a geographic region. </p>
     */
    inline void SetCoordinates(Coordinates&& value) { m_coordinatesHasBeenSet = true; m_coordinates = std::move(value); }

    /**
     * <p> Contains the longitude and latitude for a geographic region. </p>
     */
    inline GeoProximityLocation& WithCoordinates(const Coordinates& value) { SetCoordinates(value); return *this;}

    /**
     * <p> Contains the longitude and latitude for a geographic region. </p>
     */
    inline GeoProximityLocation& WithCoordinates(Coordinates&& value) { SetCoordinates(std::move(value)); return *this;}


    /**
     * <p> The bias increases or decreases the size of the geographic region from which
     * Route 53 routes traffic to a resource. </p> <p>To use <code>Bias</code> to
     * change the size of the geographic region, specify the applicable value for the
     * bias:</p> <ul> <li> <p>To expand the size of the geographic region from which
     * Route 53 routes traffic to a resource, specify a positive integer from 1 to 99
     * for the bias. Route 53 shrinks the size of adjacent regions. </p> </li> <li>
     * <p>To shrink the size of the geographic region from which Route 53 routes
     * traffic to a resource, specify a negative bias of -1 to -99. Route 53 expands
     * the size of adjacent regions. </p> </li> </ul>
     */
    inline int GetBias() const{ return m_bias; }

    /**
     * <p> The bias increases or decreases the size of the geographic region from which
     * Route 53 routes traffic to a resource. </p> <p>To use <code>Bias</code> to
     * change the size of the geographic region, specify the applicable value for the
     * bias:</p> <ul> <li> <p>To expand the size of the geographic region from which
     * Route 53 routes traffic to a resource, specify a positive integer from 1 to 99
     * for the bias. Route 53 shrinks the size of adjacent regions. </p> </li> <li>
     * <p>To shrink the size of the geographic region from which Route 53 routes
     * traffic to a resource, specify a negative bias of -1 to -99. Route 53 expands
     * the size of adjacent regions. </p> </li> </ul>
     */
    inline bool BiasHasBeenSet() const { return m_biasHasBeenSet; }

    /**
     * <p> The bias increases or decreases the size of the geographic region from which
     * Route 53 routes traffic to a resource. </p> <p>To use <code>Bias</code> to
     * change the size of the geographic region, specify the applicable value for the
     * bias:</p> <ul> <li> <p>To expand the size of the geographic region from which
     * Route 53 routes traffic to a resource, specify a positive integer from 1 to 99
     * for the bias. Route 53 shrinks the size of adjacent regions. </p> </li> <li>
     * <p>To shrink the size of the geographic region from which Route 53 routes
     * traffic to a resource, specify a negative bias of -1 to -99. Route 53 expands
     * the size of adjacent regions. </p> </li> </ul>
     */
    inline void SetBias(int value) { m_biasHasBeenSet = true; m_bias = value; }

    /**
     * <p> The bias increases or decreases the size of the geographic region from which
     * Route 53 routes traffic to a resource. </p> <p>To use <code>Bias</code> to
     * change the size of the geographic region, specify the applicable value for the
     * bias:</p> <ul> <li> <p>To expand the size of the geographic region from which
     * Route 53 routes traffic to a resource, specify a positive integer from 1 to 99
     * for the bias. Route 53 shrinks the size of adjacent regions. </p> </li> <li>
     * <p>To shrink the size of the geographic region from which Route 53 routes
     * traffic to a resource, specify a negative bias of -1 to -99. Route 53 expands
     * the size of adjacent regions. </p> </li> </ul>
     */
    inline GeoProximityLocation& WithBias(int value) { SetBias(value); return *this;}

  private:

    Aws::String m_aWSRegion;
    bool m_aWSRegionHasBeenSet = false;

    Aws::String m_localZoneGroup;
    bool m_localZoneGroupHasBeenSet = false;

    Coordinates m_coordinates;
    bool m_coordinatesHasBeenSet = false;

    int m_bias;
    bool m_biasHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
