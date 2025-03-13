/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides information about the type and the names of attributes that were
   * removed from all the endpoints that are associated with an
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/AttributesResource">AWS
   * API Reference</a></p>
   */
  class AttributesResource
  {
  public:
    AWS_PINPOINT_API AttributesResource() = default;
    AWS_PINPOINT_API AttributesResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API AttributesResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the application.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    AttributesResource& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of attribute or attributes that were removed from the endpoints.
     * Valid values are:</p> <ul><li><p>endpoint-custom-attributes - Custom attributes
     * that describe endpoints.</p></li> <li><p>endpoint-metric-attributes - Custom
     * metrics that your app reports to Amazon Pinpoint for endpoints.</p></li>
     * <li><p>endpoint-user-attributes - Custom attributes that describe
     * users.</p></li></ul>
     */
    inline const Aws::String& GetAttributeType() const { return m_attributeType; }
    inline bool AttributeTypeHasBeenSet() const { return m_attributeTypeHasBeenSet; }
    template<typename AttributeTypeT = Aws::String>
    void SetAttributeType(AttributeTypeT&& value) { m_attributeTypeHasBeenSet = true; m_attributeType = std::forward<AttributeTypeT>(value); }
    template<typename AttributeTypeT = Aws::String>
    AttributesResource& WithAttributeType(AttributeTypeT&& value) { SetAttributeType(std::forward<AttributeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array that specifies the names of the attributes that were removed from
     * the endpoints.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Vector<Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Vector<Aws::String>>
    AttributesResource& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesT = Aws::String>
    AttributesResource& AddAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes.emplace_back(std::forward<AttributesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_attributeType;
    bool m_attributeTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
