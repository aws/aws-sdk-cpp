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
    AWS_APPREGISTRY_API ResourceInfo();
    AWS_APPREGISTRY_API ResourceInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPREGISTRY_API ResourceInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPREGISTRY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ResourceInfo& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ResourceInfo& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ResourceInfo& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon resource name (ARN) that specifies the resource across
     * services.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ResourceInfo& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ResourceInfo& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ResourceInfo& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides information about the Service Catalog App Registry resource type.
     * </p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline ResourceInfo& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline ResourceInfo& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The details related to the resource. </p>
     */
    inline const ResourceDetails& GetResourceDetails() const{ return m_resourceDetails; }
    inline bool ResourceDetailsHasBeenSet() const { return m_resourceDetailsHasBeenSet; }
    inline void SetResourceDetails(const ResourceDetails& value) { m_resourceDetailsHasBeenSet = true; m_resourceDetails = value; }
    inline void SetResourceDetails(ResourceDetails&& value) { m_resourceDetailsHasBeenSet = true; m_resourceDetails = std::move(value); }
    inline ResourceInfo& WithResourceDetails(const ResourceDetails& value) { SetResourceDetails(value); return *this;}
    inline ResourceInfo& WithResourceDetails(ResourceDetails&& value) { SetResourceDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Determines whether an application tag is applied or skipped. </p>
     */
    inline const Aws::Vector<AssociationOption>& GetOptions() const{ return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    inline void SetOptions(const Aws::Vector<AssociationOption>& value) { m_optionsHasBeenSet = true; m_options = value; }
    inline void SetOptions(Aws::Vector<AssociationOption>&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }
    inline ResourceInfo& WithOptions(const Aws::Vector<AssociationOption>& value) { SetOptions(value); return *this;}
    inline ResourceInfo& WithOptions(Aws::Vector<AssociationOption>&& value) { SetOptions(std::move(value)); return *this;}
    inline ResourceInfo& AddOptions(const AssociationOption& value) { m_optionsHasBeenSet = true; m_options.push_back(value); return *this; }
    inline ResourceInfo& AddOptions(AssociationOption&& value) { m_optionsHasBeenSet = true; m_options.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    ResourceDetails m_resourceDetails;
    bool m_resourceDetailsHasBeenSet = false;

    Aws::Vector<AssociationOption> m_options;
    bool m_optionsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
