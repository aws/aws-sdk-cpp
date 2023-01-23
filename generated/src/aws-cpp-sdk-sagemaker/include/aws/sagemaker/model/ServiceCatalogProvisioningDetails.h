/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ProvisioningParameter.h>
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
   * <p>Details that you specify to provision a service catalog product. For
   * information about service catalog, see <a
   * href="https://docs.aws.amazon.com/servicecatalog/latest/adminguide/introduction.html">What
   * is Amazon Web Services Service Catalog</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ServiceCatalogProvisioningDetails">AWS
   * API Reference</a></p>
   */
  class ServiceCatalogProvisioningDetails
  {
  public:
    AWS_SAGEMAKER_API ServiceCatalogProvisioningDetails();
    AWS_SAGEMAKER_API ServiceCatalogProvisioningDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ServiceCatalogProvisioningDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the product to provision.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }

    /**
     * <p>The ID of the product to provision.</p>
     */
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }

    /**
     * <p>The ID of the product to provision.</p>
     */
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }

    /**
     * <p>The ID of the product to provision.</p>
     */
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }

    /**
     * <p>The ID of the product to provision.</p>
     */
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }

    /**
     * <p>The ID of the product to provision.</p>
     */
    inline ServiceCatalogProvisioningDetails& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}

    /**
     * <p>The ID of the product to provision.</p>
     */
    inline ServiceCatalogProvisioningDetails& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}

    /**
     * <p>The ID of the product to provision.</p>
     */
    inline ServiceCatalogProvisioningDetails& WithProductId(const char* value) { SetProductId(value); return *this;}


    /**
     * <p>The ID of the provisioning artifact.</p>
     */
    inline const Aws::String& GetProvisioningArtifactId() const{ return m_provisioningArtifactId; }

    /**
     * <p>The ID of the provisioning artifact.</p>
     */
    inline bool ProvisioningArtifactIdHasBeenSet() const { return m_provisioningArtifactIdHasBeenSet; }

    /**
     * <p>The ID of the provisioning artifact.</p>
     */
    inline void SetProvisioningArtifactId(const Aws::String& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = value; }

    /**
     * <p>The ID of the provisioning artifact.</p>
     */
    inline void SetProvisioningArtifactId(Aws::String&& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = std::move(value); }

    /**
     * <p>The ID of the provisioning artifact.</p>
     */
    inline void SetProvisioningArtifactId(const char* value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId.assign(value); }

    /**
     * <p>The ID of the provisioning artifact.</p>
     */
    inline ServiceCatalogProvisioningDetails& WithProvisioningArtifactId(const Aws::String& value) { SetProvisioningArtifactId(value); return *this;}

    /**
     * <p>The ID of the provisioning artifact.</p>
     */
    inline ServiceCatalogProvisioningDetails& WithProvisioningArtifactId(Aws::String&& value) { SetProvisioningArtifactId(std::move(value)); return *this;}

    /**
     * <p>The ID of the provisioning artifact.</p>
     */
    inline ServiceCatalogProvisioningDetails& WithProvisioningArtifactId(const char* value) { SetProvisioningArtifactId(value); return *this;}


    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. </p>
     */
    inline const Aws::String& GetPathId() const{ return m_pathId; }

    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. </p>
     */
    inline bool PathIdHasBeenSet() const { return m_pathIdHasBeenSet; }

    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. </p>
     */
    inline void SetPathId(const Aws::String& value) { m_pathIdHasBeenSet = true; m_pathId = value; }

    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. </p>
     */
    inline void SetPathId(Aws::String&& value) { m_pathIdHasBeenSet = true; m_pathId = std::move(value); }

    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. </p>
     */
    inline void SetPathId(const char* value) { m_pathIdHasBeenSet = true; m_pathId.assign(value); }

    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. </p>
     */
    inline ServiceCatalogProvisioningDetails& WithPathId(const Aws::String& value) { SetPathId(value); return *this;}

    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. </p>
     */
    inline ServiceCatalogProvisioningDetails& WithPathId(Aws::String&& value) { SetPathId(std::move(value)); return *this;}

    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. </p>
     */
    inline ServiceCatalogProvisioningDetails& WithPathId(const char* value) { SetPathId(value); return *this;}


    /**
     * <p>A list of key value pairs that you specify when you provision a product.</p>
     */
    inline const Aws::Vector<ProvisioningParameter>& GetProvisioningParameters() const{ return m_provisioningParameters; }

    /**
     * <p>A list of key value pairs that you specify when you provision a product.</p>
     */
    inline bool ProvisioningParametersHasBeenSet() const { return m_provisioningParametersHasBeenSet; }

    /**
     * <p>A list of key value pairs that you specify when you provision a product.</p>
     */
    inline void SetProvisioningParameters(const Aws::Vector<ProvisioningParameter>& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters = value; }

    /**
     * <p>A list of key value pairs that you specify when you provision a product.</p>
     */
    inline void SetProvisioningParameters(Aws::Vector<ProvisioningParameter>&& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters = std::move(value); }

    /**
     * <p>A list of key value pairs that you specify when you provision a product.</p>
     */
    inline ServiceCatalogProvisioningDetails& WithProvisioningParameters(const Aws::Vector<ProvisioningParameter>& value) { SetProvisioningParameters(value); return *this;}

    /**
     * <p>A list of key value pairs that you specify when you provision a product.</p>
     */
    inline ServiceCatalogProvisioningDetails& WithProvisioningParameters(Aws::Vector<ProvisioningParameter>&& value) { SetProvisioningParameters(std::move(value)); return *this;}

    /**
     * <p>A list of key value pairs that you specify when you provision a product.</p>
     */
    inline ServiceCatalogProvisioningDetails& AddProvisioningParameters(const ProvisioningParameter& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters.push_back(value); return *this; }

    /**
     * <p>A list of key value pairs that you specify when you provision a product.</p>
     */
    inline ServiceCatalogProvisioningDetails& AddProvisioningParameters(ProvisioningParameter&& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_productId;
    bool m_productIdHasBeenSet = false;

    Aws::String m_provisioningArtifactId;
    bool m_provisioningArtifactIdHasBeenSet = false;

    Aws::String m_pathId;
    bool m_pathIdHasBeenSet = false;

    Aws::Vector<ProvisioningParameter> m_provisioningParameters;
    bool m_provisioningParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
