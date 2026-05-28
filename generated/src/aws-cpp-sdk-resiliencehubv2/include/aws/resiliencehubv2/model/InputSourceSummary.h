/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/EksSource.h>
#include <aws/resiliencehubv2/model/InputSourceType.h>
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
 * <p>Contains summary information about an input source for a
 * service.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/InputSourceSummary">AWS
 * API Reference</a></p>
 */
class InputSourceSummary {
 public:
  AWS_RESILIENCEHUBV2_API InputSourceSummary() = default;
  AWS_RESILIENCEHUBV2_API InputSourceSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API InputSourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the input source.</p>
   */
  inline const Aws::String& GetInputSourceId() const { return m_inputSourceId; }
  inline bool InputSourceIdHasBeenSet() const { return m_inputSourceIdHasBeenSet; }
  template <typename InputSourceIdT = Aws::String>
  void SetInputSourceId(InputSourceIdT&& value) {
    m_inputSourceIdHasBeenSet = true;
    m_inputSourceId = std::forward<InputSourceIdT>(value);
  }
  template <typename InputSourceIdT = Aws::String>
  InputSourceSummary& WithInputSourceId(InputSourceIdT&& value) {
    SetInputSourceId(std::forward<InputSourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the input source.</p>
   */
  inline InputSourceType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(InputSourceType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline InputSourceSummary& WithType(InputSourceType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource tags used for discovery, if this input source uses tags.</p>
   */
  inline const Aws::Vector<ResourceTag>& GetResourceTags() const { return m_resourceTags; }
  inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
  template <typename ResourceTagsT = Aws::Vector<ResourceTag>>
  void SetResourceTags(ResourceTagsT&& value) {
    m_resourceTagsHasBeenSet = true;
    m_resourceTags = std::forward<ResourceTagsT>(value);
  }
  template <typename ResourceTagsT = Aws::Vector<ResourceTag>>
  InputSourceSummary& WithResourceTags(ResourceTagsT&& value) {
    SetResourceTags(std::forward<ResourceTagsT>(value));
    return *this;
  }
  template <typename ResourceTagsT = ResourceTag>
  InputSourceSummary& AddResourceTags(ResourceTagsT&& value) {
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
  InputSourceSummary& WithCfnStackArn(CfnStackArnT&& value) {
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
  InputSourceSummary& WithTfStateFileUrl(TfStateFileUrlT&& value) {
    SetTfStateFileUrl(std::forward<TfStateFileUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon EKS configuration, if this input source uses EKS.</p>
   */
  inline const EksSource& GetEks() const { return m_eks; }
  inline bool EksHasBeenSet() const { return m_eksHasBeenSet; }
  template <typename EksT = EksSource>
  void SetEks(EksT&& value) {
    m_eksHasBeenSet = true;
    m_eks = std::forward<EksT>(value);
  }
  template <typename EksT = EksSource>
  InputSourceSummary& WithEks(EksT&& value) {
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
  InputSourceSummary& WithDesignFileS3Url(DesignFileS3UrlT&& value) {
    SetDesignFileS3Url(std::forward<DesignFileS3UrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the input source was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  InputSourceSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_inputSourceId;

  InputSourceType m_type{InputSourceType::NOT_SET};

  Aws::Vector<ResourceTag> m_resourceTags;

  Aws::String m_cfnStackArn;

  Aws::String m_tfStateFileUrl;

  EksSource m_eks;

  Aws::String m_designFileS3Url;

  Aws::Utils::DateTime m_createdAt{};
  bool m_inputSourceIdHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_resourceTagsHasBeenSet = false;
  bool m_cfnStackArnHasBeenSet = false;
  bool m_tfStateFileUrlHasBeenSet = false;
  bool m_eksHasBeenSet = false;
  bool m_designFileS3UrlHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
