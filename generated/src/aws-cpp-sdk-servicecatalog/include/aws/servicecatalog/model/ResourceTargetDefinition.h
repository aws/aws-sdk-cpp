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
    AWS_SERVICECATALOG_API ResourceTargetDefinition() = default;
    AWS_SERVICECATALOG_API ResourceTargetDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ResourceTargetDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The attribute to be changed.</p>
     */
    inline ResourceAttribute GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(ResourceAttribute value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline ResourceTargetDefinition& WithAttribute(ResourceAttribute value) { SetAttribute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the attribute is <code>Properties</code>, the value is the name of the
     * property. Otherwise, the value is null.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ResourceTargetDefinition& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the attribute is <code>Properties</code>, indicates whether a change to
     * this property causes the resource to be re-created.</p>
     */
    inline RequiresRecreation GetRequiresRecreation() const { return m_requiresRecreation; }
    inline bool RequiresRecreationHasBeenSet() const { return m_requiresRecreationHasBeenSet; }
    inline void SetRequiresRecreation(RequiresRecreation value) { m_requiresRecreationHasBeenSet = true; m_requiresRecreation = value; }
    inline ResourceTargetDefinition& WithRequiresRecreation(RequiresRecreation value) { SetRequiresRecreation(value); return *this;}
    ///@}
  private:

    ResourceAttribute m_attribute{ResourceAttribute::NOT_SET};
    bool m_attributeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RequiresRecreation m_requiresRecreation{RequiresRecreation::NOT_SET};
    bool m_requiresRecreationHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
