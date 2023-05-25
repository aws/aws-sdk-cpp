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
   * is Amazon Web Services Service Catalog</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ServiceCatalogProvisioningUpdateDetails">AWS
   * API Reference</a></p>
   */
  class ServiceCatalogProvisioningUpdateDetails
  {
  public:
    AWS_SAGEMAKER_API ServiceCatalogProvisioningUpdateDetails();
    AWS_SAGEMAKER_API ServiceCatalogProvisioningUpdateDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ServiceCatalogProvisioningUpdateDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline ServiceCatalogProvisioningUpdateDetails& WithProvisioningArtifactId(const Aws::String& value) { SetProvisioningArtifactId(value); return *this;}

    /**
     * <p>The ID of the provisioning artifact.</p>
     */
    inline ServiceCatalogProvisioningUpdateDetails& WithProvisioningArtifactId(Aws::String&& value) { SetProvisioningArtifactId(std::move(value)); return *this;}

    /**
     * <p>The ID of the provisioning artifact.</p>
     */
    inline ServiceCatalogProvisioningUpdateDetails& WithProvisioningArtifactId(const char* value) { SetProvisioningArtifactId(value); return *this;}


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
    inline ServiceCatalogProvisioningUpdateDetails& WithProvisioningParameters(const Aws::Vector<ProvisioningParameter>& value) { SetProvisioningParameters(value); return *this;}

    /**
     * <p>A list of key value pairs that you specify when you provision a product.</p>
     */
    inline ServiceCatalogProvisioningUpdateDetails& WithProvisioningParameters(Aws::Vector<ProvisioningParameter>&& value) { SetProvisioningParameters(std::move(value)); return *this;}

    /**
     * <p>A list of key value pairs that you specify when you provision a product.</p>
     */
    inline ServiceCatalogProvisioningUpdateDetails& AddProvisioningParameters(const ProvisioningParameter& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters.push_back(value); return *this; }

    /**
     * <p>A list of key value pairs that you specify when you provision a product.</p>
     */
    inline ServiceCatalogProvisioningUpdateDetails& AddProvisioningParameters(ProvisioningParameter&& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_provisioningArtifactId;
    bool m_provisioningArtifactIdHasBeenSet = false;

    Aws::Vector<ProvisioningParameter> m_provisioningParameters;
    bool m_provisioningParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
