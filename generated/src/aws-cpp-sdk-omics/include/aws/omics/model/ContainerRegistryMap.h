/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/omics/model/RegistryMapping.h>
#include <aws/omics/model/ImageMapping.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>Use a container registry map to specify mappings between the ECR private
   * repository and one or more upstream registries. For more information, see <a
   * href="https://docs.aws.amazon.com/omics/latest/dev/workflows-ecr.html">Container
   * images</a> in the <i>Amazon Web Services HealthOmics User Guide</i>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ContainerRegistryMap">AWS
   * API Reference</a></p>
   */
  class ContainerRegistryMap
  {
  public:
    AWS_OMICS_API ContainerRegistryMap() = default;
    AWS_OMICS_API ContainerRegistryMap(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ContainerRegistryMap& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Mapping that provides the ECR repository path where upstream container images
     * are pulled and synchronized.</p>
     */
    inline const Aws::Vector<RegistryMapping>& GetRegistryMappings() const { return m_registryMappings; }
    inline bool RegistryMappingsHasBeenSet() const { return m_registryMappingsHasBeenSet; }
    template<typename RegistryMappingsT = Aws::Vector<RegistryMapping>>
    void SetRegistryMappings(RegistryMappingsT&& value) { m_registryMappingsHasBeenSet = true; m_registryMappings = std::forward<RegistryMappingsT>(value); }
    template<typename RegistryMappingsT = Aws::Vector<RegistryMapping>>
    ContainerRegistryMap& WithRegistryMappings(RegistryMappingsT&& value) { SetRegistryMappings(std::forward<RegistryMappingsT>(value)); return *this;}
    template<typename RegistryMappingsT = RegistryMapping>
    ContainerRegistryMap& AddRegistryMappings(RegistryMappingsT&& value) { m_registryMappingsHasBeenSet = true; m_registryMappings.emplace_back(std::forward<RegistryMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Image mappings specify path mappings between the ECR private repository and
     * their corresponding external repositories.</p>
     */
    inline const Aws::Vector<ImageMapping>& GetImageMappings() const { return m_imageMappings; }
    inline bool ImageMappingsHasBeenSet() const { return m_imageMappingsHasBeenSet; }
    template<typename ImageMappingsT = Aws::Vector<ImageMapping>>
    void SetImageMappings(ImageMappingsT&& value) { m_imageMappingsHasBeenSet = true; m_imageMappings = std::forward<ImageMappingsT>(value); }
    template<typename ImageMappingsT = Aws::Vector<ImageMapping>>
    ContainerRegistryMap& WithImageMappings(ImageMappingsT&& value) { SetImageMappings(std::forward<ImageMappingsT>(value)); return *this;}
    template<typename ImageMappingsT = ImageMapping>
    ContainerRegistryMap& AddImageMappings(ImageMappingsT&& value) { m_imageMappingsHasBeenSet = true; m_imageMappings.emplace_back(std::forward<ImageMappingsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RegistryMapping> m_registryMappings;
    bool m_registryMappingsHasBeenSet = false;

    Aws::Vector<ImageMapping> m_imageMappings;
    bool m_imageMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
