/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/EksSource.h>
#include <aws/resiliencehubv2/model/ResourceTag.h>

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
 * <p>Resource configuration for an input source. Provide exactly one
 * field.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ResourceConfiguration">AWS
 * API Reference</a></p>
 */
class ResourceConfiguration {
 public:
  AWS_RESILIENCEHUBV2_API ResourceConfiguration() = default;
  AWS_RESILIENCEHUBV2_API ResourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API ResourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The resource tags for tag-based resource discovery.</p>
   */
  inline const Aws::Vector<ResourceTag>& GetResourceTags() const { return m_resourceTags; }
  inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
  template <typename ResourceTagsT = Aws::Vector<ResourceTag>>
  void SetResourceTags(ResourceTagsT&& value) {
    m_resourceTagsHasBeenSet = true;
    m_resourceTags = std::forward<ResourceTagsT>(value);
  }
  template <typename ResourceTagsT = Aws::Vector<ResourceTag>>
  ResourceConfiguration& WithResourceTags(ResourceTagsT&& value) {
    SetResourceTags(std::forward<ResourceTagsT>(value));
    return *this;
  }
  template <typename ResourceTagsT = ResourceTag>
  ResourceConfiguration& AddResourceTags(ResourceTagsT&& value) {
    m_resourceTagsHasBeenSet = true;
    m_resourceTags.emplace_back(std::forward<ResourceTagsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetCfnStackArn() const { return m_cfnStackArn; }
  inline bool CfnStackArnHasBeenSet() const { return m_cfnStackArnHasBeenSet; }
  template <typename CfnStackArnT = Aws::String>
  void SetCfnStackArn(CfnStackArnT&& value) {
    m_cfnStackArnHasBeenSet = true;
    m_cfnStackArn = std::forward<CfnStackArnT>(value);
  }
  template <typename CfnStackArnT = Aws::String>
  ResourceConfiguration& WithCfnStackArn(CfnStackArnT&& value) {
    SetCfnStackArn(std::forward<CfnStackArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetTfStateFileUrl() const { return m_tfStateFileUrl; }
  inline bool TfStateFileUrlHasBeenSet() const { return m_tfStateFileUrlHasBeenSet; }
  template <typename TfStateFileUrlT = Aws::String>
  void SetTfStateFileUrl(TfStateFileUrlT&& value) {
    m_tfStateFileUrlHasBeenSet = true;
    m_tfStateFileUrl = std::forward<TfStateFileUrlT>(value);
  }
  template <typename TfStateFileUrlT = Aws::String>
  ResourceConfiguration& WithTfStateFileUrl(TfStateFileUrlT&& value) {
    SetTfStateFileUrl(std::forward<TfStateFileUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon EKS configuration for resource discovery.</p>
   */
  inline const EksSource& GetEks() const { return m_eks; }
  inline bool EksHasBeenSet() const { return m_eksHasBeenSet; }
  template <typename EksT = EksSource>
  void SetEks(EksT&& value) {
    m_eksHasBeenSet = true;
    m_eks = std::forward<EksT>(value);
  }
  template <typename EksT = EksSource>
  ResourceConfiguration& WithEks(EksT&& value) {
    SetEks(std::forward<EksT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetDesignFileS3Url() const { return m_designFileS3Url; }
  inline bool DesignFileS3UrlHasBeenSet() const { return m_designFileS3UrlHasBeenSet; }
  template <typename DesignFileS3UrlT = Aws::String>
  void SetDesignFileS3Url(DesignFileS3UrlT&& value) {
    m_designFileS3UrlHasBeenSet = true;
    m_designFileS3Url = std::forward<DesignFileS3UrlT>(value);
  }
  template <typename DesignFileS3UrlT = Aws::String>
  ResourceConfiguration& WithDesignFileS3Url(DesignFileS3UrlT&& value) {
    SetDesignFileS3Url(std::forward<DesignFileS3UrlT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ResourceTag> m_resourceTags;

  Aws::String m_cfnStackArn;

  Aws::String m_tfStateFileUrl;

  EksSource m_eks;

  Aws::String m_designFileS3Url;
  bool m_resourceTagsHasBeenSet = false;
  bool m_cfnStackArnHasBeenSet = false;
  bool m_tfStateFileUrlHasBeenSet = false;
  bool m_eksHasBeenSet = false;
  bool m_designFileS3UrlHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
