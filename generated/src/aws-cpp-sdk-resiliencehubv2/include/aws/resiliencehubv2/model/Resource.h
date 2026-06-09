/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>Represents an AWS resource discovered by Resilience Hub.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/Resource">AWS
 * API Reference</a></p>
 */
class Resource {
 public:
  AWS_RESILIENCEHUBV2_API Resource() = default;
  AWS_RESILIENCEHUBV2_API Resource(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the resource.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  Resource& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Region where the resource is located.</p>
   */
  inline const Aws::String& GetAwsRegion() const { return m_awsRegion; }
  inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }
  template <typename AwsRegionT = Aws::String>
  void SetAwsRegion(AwsRegionT&& value) {
    m_awsRegionHasBeenSet = true;
    m_awsRegion = std::forward<AwsRegionT>(value);
  }
  template <typename AwsRegionT = Aws::String>
  Resource& WithAwsRegion(AwsRegionT&& value) {
    SetAwsRegion(std::forward<AwsRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS account ID that owns the resource.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  Resource& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the resource.</p>
   */
  inline const Aws::String& GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  template <typename ResourceTypeT = Aws::String>
  void SetResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = std::forward<ResourceTypeT>(value);
  }
  template <typename ResourceTypeT = Aws::String>
  Resource& WithResourceType(ResourceTypeT&& value) {
    SetResourceType(std::forward<ResourceTypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_identifier;

  Aws::String m_awsRegion;

  Aws::String m_awsAccountId;

  Aws::String m_resourceType;
  bool m_identifierHasBeenSet = false;
  bool m_awsRegionHasBeenSet = false;
  bool m_awsAccountIdHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
