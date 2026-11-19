/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/HealthCheckSourceConfig.h>
#include <aws/route53/model/HealthCheckSourceStatus.h>
#include <aws/route53/model/HealthCheckSourceStatusReasonCode.h>

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
 * <p>A complex type that contains information about a health check source: its ID,
 * its status, and the virtual private cloud (VPC), subnets, and security groups
 * from which Route 53 sends health check requests to private
 * endpoints.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/HealthCheckSource">AWS
 * API Reference</a></p>
 */
class HealthCheckSource {
 public:
  AWS_ROUTE53_API HealthCheckSource() = default;
  AWS_ROUTE53_API HealthCheckSource(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ROUTE53_API HealthCheckSource& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>The ID of the health check source. Route 53 assigns this ID when it creates
   * the source.</p>
   */
  inline const Aws::String& GetHealthCheckSourceId() const { return m_healthCheckSourceId; }
  inline bool HealthCheckSourceIdHasBeenSet() const { return m_healthCheckSourceIdHasBeenSet; }
  template <typename HealthCheckSourceIdT = Aws::String>
  void SetHealthCheckSourceId(HealthCheckSourceIdT&& value) {
    m_healthCheckSourceIdHasBeenSet = true;
    m_healthCheckSourceId = std::forward<HealthCheckSourceIdT>(value);
  }
  template <typename HealthCheckSourceIdT = Aws::String>
  HealthCheckSource& WithHealthCheckSourceId(HealthCheckSourceIdT&& value) {
    SetHealthCheckSourceId(std::forward<HealthCheckSourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the health check source. The health check source status
   * can have one of the following values:</p> <ul> <li> <p>
   * <code>CREATE_PENDING</code> - Route 53 accepted the request to create the source
   * and hasn't started creating it. You can't use the source in a health check until
   * its status is <code>CREATE_COMPLETED</code>.</p> </li> <li> <p>
   * <code>CREATE_IN_PROGRESS</code> - Route 53 is creating the source. You can't use
   * the source in a health check until its status is
   * <code>CREATE_COMPLETED</code>.</p> </li> <li> <p> <code>CREATE_COMPLETED</code>
   * - The source is ready to use.</p> </li> <li> <p> <code>CREATE_FAILED</code> -
   * Route 53 couldn't create the source. <code>StatusReasonCode</code> and
   * <code>StatusReason</code> explain why.</p> </li> <li> <p>
   * <code>DELETE_PENDING</code> - Route 53 accepted the request to delete the source
   * and hasn't started deleting it.</p> </li> <li> <p>
   * <code>DELETE_IN_PROGRESS</code> - Route 53 is deleting the source.</p> </li>
   * <li> <p> <code>DELETE_COMPLETED</code> - Route 53 has deleted the source. You
   * can't retrieve a health check source in this status:
   * <code>GetHealthCheckSource</code> returns
   * <code>NoSuchHealthCheckSource</code>.</p> </li> <li> <p>
   * <code>DELETE_FAILED</code> - Route 53 couldn't delete the source.
   * <code>StatusReasonCode</code> and <code>StatusReason</code> explain why.</p>
   * </li> </ul> <p>If the status is <code>CREATE_FAILED</code>, fix the cause that
   * <code>StatusReasonCode</code> indicates, and then either retry
   * <code>CreateHealthCheckSource</code> with the same <code>CallerReference</code>
   * and settings, or delete the source and create a new one. If the status is
   * <code>DELETE_FAILED</code>, retry the <code>DeleteHealthCheckSource</code>
   * request.</p>
   */
  inline HealthCheckSourceStatus GetHealthCheckSourceStatus() const { return m_healthCheckSourceStatus; }
  inline bool HealthCheckSourceStatusHasBeenSet() const { return m_healthCheckSourceStatusHasBeenSet; }
  inline void SetHealthCheckSourceStatus(HealthCheckSourceStatus value) {
    m_healthCheckSourceStatusHasBeenSet = true;
    m_healthCheckSourceStatus = value;
  }
  inline HealthCheckSource& WithHealthCheckSourceStatus(HealthCheckSourceStatus value) {
    SetHealthCheckSourceStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The virtual private cloud (VPC), subnets, and security groups for the health
   * check source.</p>
   */
  inline const HealthCheckSourceConfig& GetHealthCheckSourceConfig() const { return m_healthCheckSourceConfig; }
  inline bool HealthCheckSourceConfigHasBeenSet() const { return m_healthCheckSourceConfigHasBeenSet; }
  template <typename HealthCheckSourceConfigT = HealthCheckSourceConfig>
  void SetHealthCheckSourceConfig(HealthCheckSourceConfigT&& value) {
    m_healthCheckSourceConfigHasBeenSet = true;
    m_healthCheckSourceConfig = std::forward<HealthCheckSourceConfigT>(value);
  }
  template <typename HealthCheckSourceConfigT = HealthCheckSourceConfig>
  HealthCheckSource& WithHealthCheckSourceConfig(HealthCheckSourceConfigT&& value) {
    SetHealthCheckSourceConfig(std::forward<HealthCheckSourceConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A code that indicates why the health check source has a status of
   * <code>CREATE_FAILED</code> or <code>DELETE_FAILED</code>. Route 53 returns this
   * member only when the status is one of those values. The code can have one of the
   * following values:</p> <ul> <li> <p> <code>INSUFFICIENT_SUBNET_IPS</code> - One
   * of the specified subnets doesn't have enough free private IP addresses. Check
   * the available IP addresses in each subnet, and delete network interfaces that
   * you don't need.</p> </li> <li> <p> <code>EC2_LIMIT_EXCEEDED</code> - Your
   * account reached an Amazon virtual private cloud (VPC) quota for network
   * interfaces or security groups. Delete network interfaces that you don't need,
   * specify fewer security groups, or request a quota increase.</p> </li> <li> <p>
   * <code>INVALID_SUBNET</code> - One of the specified subnets doesn't exist or
   * isn't valid, or an <code>AvailabilityZoneId</code> doesn't match the
   * Availability Zone of its subnet. Check that each subnet ID is correct, that the
   * subnet exists, and that each <code>AvailabilityZoneId</code> matches its
   * subnet.</p> </li> <li> <p> <code>INVALID_SECURITY_GROUP</code> - One of the
   * specified security groups doesn't exist or isn't valid. Check that each security
   * group ID is correct and that the security group exists.</p> </li> <li> <p>
   * <code>INVALID_CONFIGURATION</code> - The combination of VPC, subnets, and
   * security groups isn't valid. Check that <code>VpcId</code> is correct and
   * exists, that each subnet is in that VPC, and that the security groups for each
   * subnet are in the same VPC as that subnet.</p> </li> <li> <p>
   * <code>SLR_MISSING_OR_NOT_ASSUMABLE</code> - Route 53 couldn't assume its
   * service-linked role in your account. In IAM, check that the service-linked role
   * for Route 53 private endpoint health checks exists and that no deletion task for
   * it is in progress.</p> </li> <li> <p> <code>INTERNAL_ERROR</code> - Route 53
   * encountered an internal error. Contact Amazon Web Services Support and provide
   * the health check source ID.</p> </li> </ul>
   */
  inline HealthCheckSourceStatusReasonCode GetStatusReasonCode() const { return m_statusReasonCode; }
  inline bool StatusReasonCodeHasBeenSet() const { return m_statusReasonCodeHasBeenSet; }
  inline void SetStatusReasonCode(HealthCheckSourceStatusReasonCode value) {
    m_statusReasonCodeHasBeenSet = true;
    m_statusReasonCode = value;
  }
  inline HealthCheckSource& WithStatusReasonCode(HealthCheckSourceStatusReasonCode value) {
    SetStatusReasonCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of why the health check source has a status of
   * <code>CREATE_FAILED</code> or <code>DELETE_FAILED</code>, and what you can do
   * about it. The text corresponds to the value of <code>StatusReasonCode</code>.
   * Route 53 returns this member only when <code>StatusReasonCode</code> is
   * present.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  HealthCheckSource& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_healthCheckSourceId;

  HealthCheckSourceStatus m_healthCheckSourceStatus{HealthCheckSourceStatus::NOT_SET};

  HealthCheckSourceConfig m_healthCheckSourceConfig;

  HealthCheckSourceStatusReasonCode m_statusReasonCode{HealthCheckSourceStatusReasonCode::NOT_SET};

  Aws::String m_statusReason;
  bool m_healthCheckSourceIdHasBeenSet = false;
  bool m_healthCheckSourceStatusHasBeenSet = false;
  bool m_healthCheckSourceConfigHasBeenSet = false;
  bool m_statusReasonCodeHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
