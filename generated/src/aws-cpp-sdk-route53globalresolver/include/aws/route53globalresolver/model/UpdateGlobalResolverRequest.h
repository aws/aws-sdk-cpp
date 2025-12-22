/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53globalresolver/Route53GlobalResolverRequest.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {

/**
 */
class UpdateGlobalResolverRequest : public Route53GlobalResolverRequest {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API UpdateGlobalResolverRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateGlobalResolver"; }

  AWS_ROUTE53GLOBALRESOLVER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Global Resolver.</p>
   */
  inline const Aws::String& GetGlobalResolverId() const { return m_globalResolverId; }
  inline bool GlobalResolverIdHasBeenSet() const { return m_globalResolverIdHasBeenSet; }
  template <typename GlobalResolverIdT = Aws::String>
  void SetGlobalResolverId(GlobalResolverIdT&& value) {
    m_globalResolverIdHasBeenSet = true;
    m_globalResolverId = std::forward<GlobalResolverIdT>(value);
  }
  template <typename GlobalResolverIdT = Aws::String>
  UpdateGlobalResolverRequest& WithGlobalResolverId(GlobalResolverIdT&& value) {
    SetGlobalResolverId(std::forward<GlobalResolverIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Global Resolver.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateGlobalResolverRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Regions in which the users' Global Resolver query resolution logs
   * will be propagated.</p>
   */
  inline const Aws::String& GetObservabilityRegion() const { return m_observabilityRegion; }
  inline bool ObservabilityRegionHasBeenSet() const { return m_observabilityRegionHasBeenSet; }
  template <typename ObservabilityRegionT = Aws::String>
  void SetObservabilityRegion(ObservabilityRegionT&& value) {
    m_observabilityRegionHasBeenSet = true;
    m_observabilityRegion = std::forward<ObservabilityRegionT>(value);
  }
  template <typename ObservabilityRegionT = Aws::String>
  UpdateGlobalResolverRequest& WithObservabilityRegion(ObservabilityRegionT&& value) {
    SetObservabilityRegion(std::forward<ObservabilityRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the Global Resolver.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateGlobalResolverRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_globalResolverId;

  Aws::String m_name;

  Aws::String m_observabilityRegion;

  Aws::String m_description;
  bool m_globalResolverIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_observabilityRegionHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
