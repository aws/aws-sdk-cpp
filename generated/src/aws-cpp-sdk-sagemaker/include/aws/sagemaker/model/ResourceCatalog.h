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
    AWS_SAGEMAKER_API ResourceCatalog();
    AWS_SAGEMAKER_API ResourceCatalog(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ResourceCatalog& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) of the <code>ResourceCatalog</code>. </p>
     */
    inline const Aws::String& GetResourceCatalogArn() const{ return m_resourceCatalogArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the <code>ResourceCatalog</code>. </p>
     */
    inline bool ResourceCatalogArnHasBeenSet() const { return m_resourceCatalogArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the <code>ResourceCatalog</code>. </p>
     */
    inline void SetResourceCatalogArn(const Aws::String& value) { m_resourceCatalogArnHasBeenSet = true; m_resourceCatalogArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the <code>ResourceCatalog</code>. </p>
     */
    inline void SetResourceCatalogArn(Aws::String&& value) { m_resourceCatalogArnHasBeenSet = true; m_resourceCatalogArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the <code>ResourceCatalog</code>. </p>
     */
    inline void SetResourceCatalogArn(const char* value) { m_resourceCatalogArnHasBeenSet = true; m_resourceCatalogArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the <code>ResourceCatalog</code>. </p>
     */
    inline ResourceCatalog& WithResourceCatalogArn(const Aws::String& value) { SetResourceCatalogArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the <code>ResourceCatalog</code>. </p>
     */
    inline ResourceCatalog& WithResourceCatalogArn(Aws::String&& value) { SetResourceCatalogArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the <code>ResourceCatalog</code>. </p>
     */
    inline ResourceCatalog& WithResourceCatalogArn(const char* value) { SetResourceCatalogArn(value); return *this;}


    /**
     * <p> The name of the <code>ResourceCatalog</code>. </p>
     */
    inline const Aws::String& GetResourceCatalogName() const{ return m_resourceCatalogName; }

    /**
     * <p> The name of the <code>ResourceCatalog</code>. </p>
     */
    inline bool ResourceCatalogNameHasBeenSet() const { return m_resourceCatalogNameHasBeenSet; }

    /**
     * <p> The name of the <code>ResourceCatalog</code>. </p>
     */
    inline void SetResourceCatalogName(const Aws::String& value) { m_resourceCatalogNameHasBeenSet = true; m_resourceCatalogName = value; }

    /**
     * <p> The name of the <code>ResourceCatalog</code>. </p>
     */
    inline void SetResourceCatalogName(Aws::String&& value) { m_resourceCatalogNameHasBeenSet = true; m_resourceCatalogName = std::move(value); }

    /**
     * <p> The name of the <code>ResourceCatalog</code>. </p>
     */
    inline void SetResourceCatalogName(const char* value) { m_resourceCatalogNameHasBeenSet = true; m_resourceCatalogName.assign(value); }

    /**
     * <p> The name of the <code>ResourceCatalog</code>. </p>
     */
    inline ResourceCatalog& WithResourceCatalogName(const Aws::String& value) { SetResourceCatalogName(value); return *this;}

    /**
     * <p> The name of the <code>ResourceCatalog</code>. </p>
     */
    inline ResourceCatalog& WithResourceCatalogName(Aws::String&& value) { SetResourceCatalogName(std::move(value)); return *this;}

    /**
     * <p> The name of the <code>ResourceCatalog</code>. </p>
     */
    inline ResourceCatalog& WithResourceCatalogName(const char* value) { SetResourceCatalogName(value); return *this;}


    /**
     * <p> A free form description of the <code>ResourceCatalog</code>. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> A free form description of the <code>ResourceCatalog</code>. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> A free form description of the <code>ResourceCatalog</code>. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> A free form description of the <code>ResourceCatalog</code>. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> A free form description of the <code>ResourceCatalog</code>. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> A free form description of the <code>ResourceCatalog</code>. </p>
     */
    inline ResourceCatalog& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> A free form description of the <code>ResourceCatalog</code>. </p>
     */
    inline ResourceCatalog& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> A free form description of the <code>ResourceCatalog</code>. </p>
     */
    inline ResourceCatalog& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The time the <code>ResourceCatalog</code> was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p> The time the <code>ResourceCatalog</code> was created. </p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p> The time the <code>ResourceCatalog</code> was created. </p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p> The time the <code>ResourceCatalog</code> was created. </p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p> The time the <code>ResourceCatalog</code> was created. </p>
     */
    inline ResourceCatalog& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p> The time the <code>ResourceCatalog</code> was created. </p>
     */
    inline ResourceCatalog& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

  private:

    Aws::String m_resourceCatalogArn;
    bool m_resourceCatalogArnHasBeenSet = false;

    Aws::String m_resourceCatalogName;
    bool m_resourceCatalogNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
