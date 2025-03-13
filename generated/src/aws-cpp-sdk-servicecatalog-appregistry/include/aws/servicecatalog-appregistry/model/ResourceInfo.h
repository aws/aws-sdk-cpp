/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog-appregistry/model/ResourceType.h>
#include <aws/servicecatalog-appregistry/model/ResourceDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog-appregistry/model/AssociationOption.h>
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
namespace AppRegistry
{
namespace Model
{

  /**
   * <p>The information about the resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/ResourceInfo">AWS
   * API Reference</a></p>
   */
  class ResourceInfo
  {
  public:
    AWS_APPREGISTRY_API ResourceInfo() = default;
    AWS_APPREGISTRY_API ResourceInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPREGISTRY_API ResourceInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPREGISTRY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ResourceInfo& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon resource name (ARN) that specifies the resource across
     * services.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ResourceInfo& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides information about the Service Catalog App Registry resource type.
     * </p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline ResourceInfo& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The details related to the resource. </p>
     */
    inline const ResourceDetails& GetResourceDetails() const { return m_resourceDetails; }
    inline bool ResourceDetailsHasBeenSet() const { return m_resourceDetailsHasBeenSet; }
    template<typename ResourceDetailsT = ResourceDetails>
    void SetResourceDetails(ResourceDetailsT&& value) { m_resourceDetailsHasBeenSet = true; m_resourceDetails = std::forward<ResourceDetailsT>(value); }
    template<typename ResourceDetailsT = ResourceDetails>
    ResourceInfo& WithResourceDetails(ResourceDetailsT&& value) { SetResourceDetails(std::forward<ResourceDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Determines whether an application tag is applied or skipped. </p>
     */
    inline const Aws::Vector<AssociationOption>& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = Aws::Vector<AssociationOption>>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = Aws::Vector<AssociationOption>>
    ResourceInfo& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    inline ResourceInfo& AddOptions(AssociationOption value) { m_optionsHasBeenSet = true; m_options.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    ResourceDetails m_resourceDetails;
    bool m_resourceDetailsHasBeenSet = false;

    Aws::Vector<AssociationOption> m_options;
    bool m_optionsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
