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
   * <p>A component of the key schema for the DynamoDB table, a global secondary
   * index, or a local secondary index.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsDynamoDbTableKeySchema">AWS
   * API Reference</a></p>
   */
  class AwsDynamoDbTableKeySchema
  {
  public:
    AWS_SECURITYHUB_API AwsDynamoDbTableKeySchema() = default;
    AWS_SECURITYHUB_API AwsDynamoDbTableKeySchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsDynamoDbTableKeySchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the key schema attribute.</p>
     */
    inline const Aws::String& GetAttributeName() const { return m_attributeName; }
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
    template<typename AttributeNameT = Aws::String>
    void SetAttributeName(AttributeNameT&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::forward<AttributeNameT>(value); }
    template<typename AttributeNameT = Aws::String>
    AwsDynamoDbTableKeySchema& WithAttributeName(AttributeNameT&& value) { SetAttributeName(std::forward<AttributeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of key used for the key schema attribute. Valid values are
     * <code>HASH</code> or <code>RANGE</code>.</p>
     */
    inline const Aws::String& GetKeyType() const { return m_keyType; }
    inline bool KeyTypeHasBeenSet() const { return m_keyTypeHasBeenSet; }
    template<typename KeyTypeT = Aws::String>
    void SetKeyType(KeyTypeT&& value) { m_keyTypeHasBeenSet = true; m_keyType = std::forward<KeyTypeT>(value); }
    template<typename KeyTypeT = Aws::String>
    AwsDynamoDbTableKeySchema& WithKeyType(KeyTypeT&& value) { SetKeyType(std::forward<KeyTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    Aws::String m_keyType;
    bool m_keyTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
