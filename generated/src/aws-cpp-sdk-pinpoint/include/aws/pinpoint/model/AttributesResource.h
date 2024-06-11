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
    AWS_PINPOINT_API AttributesResource();
    AWS_PINPOINT_API AttributesResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API AttributesResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline AttributesResource& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline AttributesResource& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline AttributesResource& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
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
    inline const Aws::String& GetAttributeType() const{ return m_attributeType; }
    inline bool AttributeTypeHasBeenSet() const { return m_attributeTypeHasBeenSet; }
    inline void SetAttributeType(const Aws::String& value) { m_attributeTypeHasBeenSet = true; m_attributeType = value; }
    inline void SetAttributeType(Aws::String&& value) { m_attributeTypeHasBeenSet = true; m_attributeType = std::move(value); }
    inline void SetAttributeType(const char* value) { m_attributeTypeHasBeenSet = true; m_attributeType.assign(value); }
    inline AttributesResource& WithAttributeType(const Aws::String& value) { SetAttributeType(value); return *this;}
    inline AttributesResource& WithAttributeType(Aws::String&& value) { SetAttributeType(std::move(value)); return *this;}
    inline AttributesResource& WithAttributeType(const char* value) { SetAttributeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array that specifies the names of the attributes that were removed from
     * the endpoints.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Vector<Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Vector<Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline AttributesResource& WithAttributes(const Aws::Vector<Aws::String>& value) { SetAttributes(value); return *this;}
    inline AttributesResource& WithAttributes(Aws::Vector<Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}
    inline AttributesResource& AddAttributes(const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }
    inline AttributesResource& AddAttributes(Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }
    inline AttributesResource& AddAttributes(const char* value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }
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
