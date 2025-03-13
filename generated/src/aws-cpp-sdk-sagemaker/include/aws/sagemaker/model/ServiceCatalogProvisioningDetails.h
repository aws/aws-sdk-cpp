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
    AWS_SAGEMAKER_API ServiceCatalogProvisioningDetails() = default;
    AWS_SAGEMAKER_API ServiceCatalogProvisioningDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ServiceCatalogProvisioningDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the product to provision.</p>
     */
    inline const Aws::String& GetProductId() const { return m_productId; }
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
    template<typename ProductIdT = Aws::String>
    void SetProductId(ProductIdT&& value) { m_productIdHasBeenSet = true; m_productId = std::forward<ProductIdT>(value); }
    template<typename ProductIdT = Aws::String>
    ServiceCatalogProvisioningDetails& WithProductId(ProductIdT&& value) { SetProductId(std::forward<ProductIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the provisioning artifact.</p>
     */
    inline const Aws::String& GetProvisioningArtifactId() const { return m_provisioningArtifactId; }
    inline bool ProvisioningArtifactIdHasBeenSet() const { return m_provisioningArtifactIdHasBeenSet; }
    template<typename ProvisioningArtifactIdT = Aws::String>
    void SetProvisioningArtifactId(ProvisioningArtifactIdT&& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = std::forward<ProvisioningArtifactIdT>(value); }
    template<typename ProvisioningArtifactIdT = Aws::String>
    ServiceCatalogProvisioningDetails& WithProvisioningArtifactId(ProvisioningArtifactIdT&& value) { SetProvisioningArtifactId(std::forward<ProvisioningArtifactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. </p>
     */
    inline const Aws::String& GetPathId() const { return m_pathId; }
    inline bool PathIdHasBeenSet() const { return m_pathIdHasBeenSet; }
    template<typename PathIdT = Aws::String>
    void SetPathId(PathIdT&& value) { m_pathIdHasBeenSet = true; m_pathId = std::forward<PathIdT>(value); }
    template<typename PathIdT = Aws::String>
    ServiceCatalogProvisioningDetails& WithPathId(PathIdT&& value) { SetPathId(std::forward<PathIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key value pairs that you specify when you provision a product.</p>
     */
    inline const Aws::Vector<ProvisioningParameter>& GetProvisioningParameters() const { return m_provisioningParameters; }
    inline bool ProvisioningParametersHasBeenSet() const { return m_provisioningParametersHasBeenSet; }
    template<typename ProvisioningParametersT = Aws::Vector<ProvisioningParameter>>
    void SetProvisioningParameters(ProvisioningParametersT&& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters = std::forward<ProvisioningParametersT>(value); }
    template<typename ProvisioningParametersT = Aws::Vector<ProvisioningParameter>>
    ServiceCatalogProvisioningDetails& WithProvisioningParameters(ProvisioningParametersT&& value) { SetProvisioningParameters(std::forward<ProvisioningParametersT>(value)); return *this;}
    template<typename ProvisioningParametersT = ProvisioningParameter>
    ServiceCatalogProvisioningDetails& AddProvisioningParameters(ProvisioningParametersT&& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters.emplace_back(std::forward<ProvisioningParametersT>(value)); return *this; }
    ///@}
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
