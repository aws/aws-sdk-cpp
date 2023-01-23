/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ResourceAttribute.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/RequiresRecreation.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Information about a change to a resource attribute.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ResourceTargetDefinition">AWS
   * API Reference</a></p>
   */
  class ResourceTargetDefinition
  {
  public:
    AWS_SERVICECATALOG_API ResourceTargetDefinition();
    AWS_SERVICECATALOG_API ResourceTargetDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ResourceTargetDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The attribute to be changed.</p>
     */
    inline const ResourceAttribute& GetAttribute() const{ return m_attribute; }

    /**
     * <p>The attribute to be changed.</p>
     */
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }

    /**
     * <p>The attribute to be changed.</p>
     */
    inline void SetAttribute(const ResourceAttribute& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>The attribute to be changed.</p>
     */
    inline void SetAttribute(ResourceAttribute&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    /**
     * <p>The attribute to be changed.</p>
     */
    inline ResourceTargetDefinition& WithAttribute(const ResourceAttribute& value) { SetAttribute(value); return *this;}

    /**
     * <p>The attribute to be changed.</p>
     */
    inline ResourceTargetDefinition& WithAttribute(ResourceAttribute&& value) { SetAttribute(std::move(value)); return *this;}


    /**
     * <p>If the attribute is <code>Properties</code>, the value is the name of the
     * property. Otherwise, the value is null.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>If the attribute is <code>Properties</code>, the value is the name of the
     * property. Otherwise, the value is null.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>If the attribute is <code>Properties</code>, the value is the name of the
     * property. Otherwise, the value is null.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>If the attribute is <code>Properties</code>, the value is the name of the
     * property. Otherwise, the value is null.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>If the attribute is <code>Properties</code>, the value is the name of the
     * property. Otherwise, the value is null.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>If the attribute is <code>Properties</code>, the value is the name of the
     * property. Otherwise, the value is null.</p>
     */
    inline ResourceTargetDefinition& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>If the attribute is <code>Properties</code>, the value is the name of the
     * property. Otherwise, the value is null.</p>
     */
    inline ResourceTargetDefinition& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>If the attribute is <code>Properties</code>, the value is the name of the
     * property. Otherwise, the value is null.</p>
     */
    inline ResourceTargetDefinition& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>If the attribute is <code>Properties</code>, indicates whether a change to
     * this property causes the resource to be re-created.</p>
     */
    inline const RequiresRecreation& GetRequiresRecreation() const{ return m_requiresRecreation; }

    /**
     * <p>If the attribute is <code>Properties</code>, indicates whether a change to
     * this property causes the resource to be re-created.</p>
     */
    inline bool RequiresRecreationHasBeenSet() const { return m_requiresRecreationHasBeenSet; }

    /**
     * <p>If the attribute is <code>Properties</code>, indicates whether a change to
     * this property causes the resource to be re-created.</p>
     */
    inline void SetRequiresRecreation(const RequiresRecreation& value) { m_requiresRecreationHasBeenSet = true; m_requiresRecreation = value; }

    /**
     * <p>If the attribute is <code>Properties</code>, indicates whether a change to
     * this property causes the resource to be re-created.</p>
     */
    inline void SetRequiresRecreation(RequiresRecreation&& value) { m_requiresRecreationHasBeenSet = true; m_requiresRecreation = std::move(value); }

    /**
     * <p>If the attribute is <code>Properties</code>, indicates whether a change to
     * this property causes the resource to be re-created.</p>
     */
    inline ResourceTargetDefinition& WithRequiresRecreation(const RequiresRecreation& value) { SetRequiresRecreation(value); return *this;}

    /**
     * <p>If the attribute is <code>Properties</code>, indicates whether a change to
     * this property causes the resource to be re-created.</p>
     */
    inline ResourceTargetDefinition& WithRequiresRecreation(RequiresRecreation&& value) { SetRequiresRecreation(std::move(value)); return *this;}

  private:

    ResourceAttribute m_attribute;
    bool m_attributeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RequiresRecreation m_requiresRecreation;
    bool m_requiresRecreationHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
