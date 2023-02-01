/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resource-explorer-2/model/ResourceProperty.h>
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
namespace ResourceExplorer2
{
namespace Model
{

  /**
   * <p>A resource in Amazon Web Services that Amazon Web Services Resource Explorer
   * has discovered, and for which it has stored information in the index of the
   * Amazon Web Services Region that contains the resource.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/Resource">AWS
   * API Reference</a></p>
   */
  class Resource
  {
  public:
    AWS_RESOURCEEXPLORER2_API Resource();
    AWS_RESOURCEEXPLORER2_API Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the resource.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the resource.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the resource.</p>
     */
    inline Resource& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the resource.</p>
     */
    inline Resource& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the resource.</p>
     */
    inline Resource& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date and time that Resource Explorer last queried this resource and
     * updated the index with the latest information about the resource.</p>
     */
    inline const Aws::Utils::DateTime& GetLastReportedAt() const{ return m_lastReportedAt; }

    /**
     * <p>The date and time that Resource Explorer last queried this resource and
     * updated the index with the latest information about the resource.</p>
     */
    inline bool LastReportedAtHasBeenSet() const { return m_lastReportedAtHasBeenSet; }

    /**
     * <p>The date and time that Resource Explorer last queried this resource and
     * updated the index with the latest information about the resource.</p>
     */
    inline void SetLastReportedAt(const Aws::Utils::DateTime& value) { m_lastReportedAtHasBeenSet = true; m_lastReportedAt = value; }

    /**
     * <p>The date and time that Resource Explorer last queried this resource and
     * updated the index with the latest information about the resource.</p>
     */
    inline void SetLastReportedAt(Aws::Utils::DateTime&& value) { m_lastReportedAtHasBeenSet = true; m_lastReportedAt = std::move(value); }

    /**
     * <p>The date and time that Resource Explorer last queried this resource and
     * updated the index with the latest information about the resource.</p>
     */
    inline Resource& WithLastReportedAt(const Aws::Utils::DateTime& value) { SetLastReportedAt(value); return *this;}

    /**
     * <p>The date and time that Resource Explorer last queried this resource and
     * updated the index with the latest information about the resource.</p>
     */
    inline Resource& WithLastReportedAt(Aws::Utils::DateTime&& value) { SetLastReportedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services account that owns the resource.</p>
     */
    inline const Aws::String& GetOwningAccountId() const{ return m_owningAccountId; }

    /**
     * <p>The Amazon Web Services account that owns the resource.</p>
     */
    inline bool OwningAccountIdHasBeenSet() const { return m_owningAccountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account that owns the resource.</p>
     */
    inline void SetOwningAccountId(const Aws::String& value) { m_owningAccountIdHasBeenSet = true; m_owningAccountId = value; }

    /**
     * <p>The Amazon Web Services account that owns the resource.</p>
     */
    inline void SetOwningAccountId(Aws::String&& value) { m_owningAccountIdHasBeenSet = true; m_owningAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account that owns the resource.</p>
     */
    inline void SetOwningAccountId(const char* value) { m_owningAccountIdHasBeenSet = true; m_owningAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account that owns the resource.</p>
     */
    inline Resource& WithOwningAccountId(const Aws::String& value) { SetOwningAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account that owns the resource.</p>
     */
    inline Resource& WithOwningAccountId(Aws::String&& value) { SetOwningAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account that owns the resource.</p>
     */
    inline Resource& WithOwningAccountId(const char* value) { SetOwningAccountId(value); return *this;}


    /**
     * <p>A structure with additional type-specific details about the resource. These
     * properties can be added by turning on integration between Resource Explorer and
     * other Amazon Web Services services.</p>
     */
    inline const Aws::Vector<ResourceProperty>& GetProperties() const{ return m_properties; }

    /**
     * <p>A structure with additional type-specific details about the resource. These
     * properties can be added by turning on integration between Resource Explorer and
     * other Amazon Web Services services.</p>
     */
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }

    /**
     * <p>A structure with additional type-specific details about the resource. These
     * properties can be added by turning on integration between Resource Explorer and
     * other Amazon Web Services services.</p>
     */
    inline void SetProperties(const Aws::Vector<ResourceProperty>& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    /**
     * <p>A structure with additional type-specific details about the resource. These
     * properties can be added by turning on integration between Resource Explorer and
     * other Amazon Web Services services.</p>
     */
    inline void SetProperties(Aws::Vector<ResourceProperty>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }

    /**
     * <p>A structure with additional type-specific details about the resource. These
     * properties can be added by turning on integration between Resource Explorer and
     * other Amazon Web Services services.</p>
     */
    inline Resource& WithProperties(const Aws::Vector<ResourceProperty>& value) { SetProperties(value); return *this;}

    /**
     * <p>A structure with additional type-specific details about the resource. These
     * properties can be added by turning on integration between Resource Explorer and
     * other Amazon Web Services services.</p>
     */
    inline Resource& WithProperties(Aws::Vector<ResourceProperty>&& value) { SetProperties(std::move(value)); return *this;}

    /**
     * <p>A structure with additional type-specific details about the resource. These
     * properties can be added by turning on integration between Resource Explorer and
     * other Amazon Web Services services.</p>
     */
    inline Resource& AddProperties(const ResourceProperty& value) { m_propertiesHasBeenSet = true; m_properties.push_back(value); return *this; }

    /**
     * <p>A structure with additional type-specific details about the resource. These
     * properties can be added by turning on integration between Resource Explorer and
     * other Amazon Web Services services.</p>
     */
    inline Resource& AddProperties(ResourceProperty&& value) { m_propertiesHasBeenSet = true; m_properties.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Web Services Region in which the resource was created and
     * exists.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The Amazon Web Services Region in which the resource was created and
     * exists.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region in which the resource was created and
     * exists.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The Amazon Web Services Region in which the resource was created and
     * exists.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The Amazon Web Services Region in which the resource was created and
     * exists.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The Amazon Web Services Region in which the resource was created and
     * exists.</p>
     */
    inline Resource& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region in which the resource was created and
     * exists.</p>
     */
    inline Resource& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region in which the resource was created and
     * exists.</p>
     */
    inline Resource& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The type of the resource.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of the resource.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of the resource.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of the resource.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of the resource.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of the resource.</p>
     */
    inline Resource& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of the resource.</p>
     */
    inline Resource& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of the resource.</p>
     */
    inline Resource& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The Amazon Web Service that owns the resource and is responsible for creating
     * and updating it.</p>
     */
    inline const Aws::String& GetService() const{ return m_service; }

    /**
     * <p>The Amazon Web Service that owns the resource and is responsible for creating
     * and updating it.</p>
     */
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }

    /**
     * <p>The Amazon Web Service that owns the resource and is responsible for creating
     * and updating it.</p>
     */
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }

    /**
     * <p>The Amazon Web Service that owns the resource and is responsible for creating
     * and updating it.</p>
     */
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }

    /**
     * <p>The Amazon Web Service that owns the resource and is responsible for creating
     * and updating it.</p>
     */
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }

    /**
     * <p>The Amazon Web Service that owns the resource and is responsible for creating
     * and updating it.</p>
     */
    inline Resource& WithService(const Aws::String& value) { SetService(value); return *this;}

    /**
     * <p>The Amazon Web Service that owns the resource and is responsible for creating
     * and updating it.</p>
     */
    inline Resource& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Service that owns the resource and is responsible for creating
     * and updating it.</p>
     */
    inline Resource& WithService(const char* value) { SetService(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_lastReportedAt;
    bool m_lastReportedAtHasBeenSet = false;

    Aws::String m_owningAccountId;
    bool m_owningAccountIdHasBeenSet = false;

    Aws::Vector<ResourceProperty> m_properties;
    bool m_propertiesHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
