/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Contains a definition of an attribute for the table.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsDynamoDbTableAttributeDefinition">AWS
   * API Reference</a></p>
   */
  class AwsDynamoDbTableAttributeDefinition
  {
  public:
    AWS_SECURITYHUB_API AwsDynamoDbTableAttributeDefinition() = default;
    AWS_SECURITYHUB_API AwsDynamoDbTableAttributeDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsDynamoDbTableAttributeDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the attribute.</p>
     */
    inline const Aws::String& GetAttributeName() const { return m_attributeName; }
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
    template<typename AttributeNameT = Aws::String>
    void SetAttributeName(AttributeNameT&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::forward<AttributeNameT>(value); }
    template<typename AttributeNameT = Aws::String>
    AwsDynamoDbTableAttributeDefinition& WithAttributeName(AttributeNameT&& value) { SetAttributeName(std::forward<AttributeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the attribute.</p>
     */
    inline const Aws::String& GetAttributeType() const { return m_attributeType; }
    inline bool AttributeTypeHasBeenSet() const { return m_attributeTypeHasBeenSet; }
    template<typename AttributeTypeT = Aws::String>
    void SetAttributeType(AttributeTypeT&& value) { m_attributeTypeHasBeenSet = true; m_attributeType = std::forward<AttributeTypeT>(value); }
    template<typename AttributeTypeT = Aws::String>
    AwsDynamoDbTableAttributeDefinition& WithAttributeType(AttributeTypeT&& value) { SetAttributeType(std::forward<AttributeTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    Aws::String m_attributeType;
    bool m_attributeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
