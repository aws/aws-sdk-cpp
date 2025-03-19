/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p> A resource catalog containing all of the resources of a specific resource
   * type within a resource owner account. For an example on sharing the Amazon
   * SageMaker Feature Store <code>DefaultFeatureGroupCatalog</code>, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/feature-store-cross-account-discoverability-share-sagemaker-catalog.html">Share
   * Amazon SageMaker Catalog resource type</a> in the Amazon SageMaker Developer
   * Guide. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ResourceCatalog">AWS
   * API Reference</a></p>
   */
  class ResourceCatalog
  {
  public:
    AWS_SAGEMAKER_API ResourceCatalog() = default;
    AWS_SAGEMAKER_API ResourceCatalog(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ResourceCatalog& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the <code>ResourceCatalog</code>. </p>
     */
    inline const Aws::String& GetResourceCatalogArn() const { return m_resourceCatalogArn; }
    inline bool ResourceCatalogArnHasBeenSet() const { return m_resourceCatalogArnHasBeenSet; }
    template<typename ResourceCatalogArnT = Aws::String>
    void SetResourceCatalogArn(ResourceCatalogArnT&& value) { m_resourceCatalogArnHasBeenSet = true; m_resourceCatalogArn = std::forward<ResourceCatalogArnT>(value); }
    template<typename ResourceCatalogArnT = Aws::String>
    ResourceCatalog& WithResourceCatalogArn(ResourceCatalogArnT&& value) { SetResourceCatalogArn(std::forward<ResourceCatalogArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the <code>ResourceCatalog</code>. </p>
     */
    inline const Aws::String& GetResourceCatalogName() const { return m_resourceCatalogName; }
    inline bool ResourceCatalogNameHasBeenSet() const { return m_resourceCatalogNameHasBeenSet; }
    template<typename ResourceCatalogNameT = Aws::String>
    void SetResourceCatalogName(ResourceCatalogNameT&& value) { m_resourceCatalogNameHasBeenSet = true; m_resourceCatalogName = std::forward<ResourceCatalogNameT>(value); }
    template<typename ResourceCatalogNameT = Aws::String>
    ResourceCatalog& WithResourceCatalogName(ResourceCatalogNameT&& value) { SetResourceCatalogName(std::forward<ResourceCatalogNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A free form description of the <code>ResourceCatalog</code>. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ResourceCatalog& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time the <code>ResourceCatalog</code> was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ResourceCatalog& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceCatalogArn;
    bool m_resourceCatalogArnHasBeenSet = false;

    Aws::String m_resourceCatalogName;
    bool m_resourceCatalogNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
