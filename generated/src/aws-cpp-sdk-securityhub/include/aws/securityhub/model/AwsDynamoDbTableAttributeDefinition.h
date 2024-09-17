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
    AWS_SECURITYHUB_API AwsDynamoDbTableAttributeDefinition();
    AWS_SECURITYHUB_API AwsDynamoDbTableAttributeDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsDynamoDbTableAttributeDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the attribute.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }
    inline AwsDynamoDbTableAttributeDefinition& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}
    inline AwsDynamoDbTableAttributeDefinition& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}
    inline AwsDynamoDbTableAttributeDefinition& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the attribute.</p>
     */
    inline const Aws::String& GetAttributeType() const{ return m_attributeType; }
    inline bool AttributeTypeHasBeenSet() const { return m_attributeTypeHasBeenSet; }
    inline void SetAttributeType(const Aws::String& value) { m_attributeTypeHasBeenSet = true; m_attributeType = value; }
    inline void SetAttributeType(Aws::String&& value) { m_attributeTypeHasBeenSet = true; m_attributeType = std::move(value); }
    inline void SetAttributeType(const char* value) { m_attributeTypeHasBeenSet = true; m_attributeType.assign(value); }
    inline AwsDynamoDbTableAttributeDefinition& WithAttributeType(const Aws::String& value) { SetAttributeType(value); return *this;}
    inline AwsDynamoDbTableAttributeDefinition& WithAttributeType(Aws::String&& value) { SetAttributeType(std::move(value)); return *this;}
    inline AwsDynamoDbTableAttributeDefinition& WithAttributeType(const char* value) { SetAttributeType(value); return *this;}
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
