/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceDiscovery {
namespace Model {

/**
 * <p>Describes a data artifact within a Data Exchange fulfillment
 * option.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/DataArtifact">AWS
 * API Reference</a></p>
 */
class DataArtifact {
 public:
  AWS_MARKETPLACEDISCOVERY_API DataArtifact() = default;
  AWS_MARKETPLACEDISCOVERY_API DataArtifact(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API DataArtifact& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A description of the data artifact.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  DataArtifact& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the data artifact.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  DataArtifact& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the data artifact resource.</p>
   */
  inline const Aws::String& GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  template <typename ResourceTypeT = Aws::String>
  void SetResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = std::forward<ResourceTypeT>(value);
  }
  template <typename ResourceTypeT = Aws::String>
  DataArtifact& WithResourceType(ResourceTypeT&& value) {
    SetResourceType(std::forward<ResourceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The classification of sensitive data contained in the dataset.</p>
   */
  inline const Aws::String& GetDataClassification() const { return m_dataClassification; }
  inline bool DataClassificationHasBeenSet() const { return m_dataClassificationHasBeenSet; }
  template <typename DataClassificationT = Aws::String>
  void SetDataClassification(DataClassificationT&& value) {
    m_dataClassificationHasBeenSet = true;
    m_dataClassification = std::forward<DataClassificationT>(value);
  }
  template <typename DataClassificationT = Aws::String>
  DataArtifact& WithDataClassification(DataClassificationT&& value) {
    SetDataClassification(std::forward<DataClassificationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_description;

  Aws::String m_resourceArn;

  Aws::String m_resourceType;

  Aws::String m_dataClassification;
  bool m_descriptionHasBeenSet = false;
  bool m_resourceArnHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
  bool m_dataClassificationHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
