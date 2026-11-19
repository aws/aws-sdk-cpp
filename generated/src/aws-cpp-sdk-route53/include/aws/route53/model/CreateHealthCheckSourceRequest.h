/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53/Route53Request.h>
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/HealthCheckSourceConfig.h>
#include <aws/route53/model/Tag.h>

#include <utility>

namespace Aws {
namespace Route53 {
namespace Model {

/**
 * <p>Contains the virtual private cloud (VPC), subnets, and security groups that
 * are required to create a health check source, and a caller reference that
 * identifies the request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/CreateHealthCheckSourceRequest">AWS
 * API Reference</a></p>
 */
class CreateHealthCheckSourceRequest : public Route53Request {
 public:
  AWS_ROUTE53_API CreateHealthCheckSourceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateHealthCheckSource"; }

  AWS_ROUTE53_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that ensures that the operation completes
   * no more than one time. If you retry a <code>CreateHealthCheckSource</code>
   * request with the same <code>CallerReference</code> and the same settings as a
   * previous request, Route 53 returns the existing health check source without
   * creating a duplicate. If that health check source has a status of
   * <code>CREATE_FAILED</code>, Route 53 tries to create it again. To create a new
   * health check source after a failure, specify a new value for
   * <code>CallerReference</code>. If a health check source with the same
   * <code>CallerReference</code> already exists and the settings differ, Route 53
   * returns a <code>HealthCheckSourceAlreadyExists</code> error.</p>
   */
  inline const Aws::String& GetCallerReference() const { return m_callerReference; }
  inline bool CallerReferenceHasBeenSet() const { return m_callerReferenceHasBeenSet; }
  template <typename CallerReferenceT = Aws::String>
  void SetCallerReference(CallerReferenceT&& value) {
    m_callerReferenceHasBeenSet = true;
    m_callerReference = std::forward<CallerReferenceT>(value);
  }
  template <typename CallerReferenceT = Aws::String>
  CreateHealthCheckSourceRequest& WithCallerReference(CallerReferenceT&& value) {
    SetCallerReference(std::forward<CallerReferenceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A complex type that contains the virtual private cloud (VPC), subnets, and
   * security groups for the health check source.</p>
   */
  inline const HealthCheckSourceConfig& GetHealthCheckSourceConfig() const { return m_healthCheckSourceConfig; }
  inline bool HealthCheckSourceConfigHasBeenSet() const { return m_healthCheckSourceConfigHasBeenSet; }
  template <typename HealthCheckSourceConfigT = HealthCheckSourceConfig>
  void SetHealthCheckSourceConfig(HealthCheckSourceConfigT&& value) {
    m_healthCheckSourceConfigHasBeenSet = true;
    m_healthCheckSourceConfig = std::forward<HealthCheckSourceConfigT>(value);
  }
  template <typename HealthCheckSourceConfigT = HealthCheckSourceConfig>
  CreateHealthCheckSourceRequest& WithHealthCheckSourceConfig(HealthCheckSourceConfigT&& value) {
    SetHealthCheckSourceConfig(std::forward<HealthCheckSourceConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A complex type that contains a list of the tags that you want to apply to the
   * health check source when you create it.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateHealthCheckSourceRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateHealthCheckSourceRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_callerReference{Aws::Utils::UUID::PseudoRandomUUID()};

  HealthCheckSourceConfig m_healthCheckSourceConfig;

  Aws::Vector<Tag> m_tags;
  bool m_callerReferenceHasBeenSet = true;
  bool m_healthCheckSourceConfigHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
