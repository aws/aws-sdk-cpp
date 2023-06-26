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
    AWS_SECURITYHUB_API AwsDynamoDbTableKeySchema();
    AWS_SECURITYHUB_API AwsDynamoDbTableKeySchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsDynamoDbTableKeySchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the key schema attribute.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The name of the key schema attribute.</p>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p>The name of the key schema attribute.</p>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The name of the key schema attribute.</p>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p>The name of the key schema attribute.</p>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p>The name of the key schema attribute.</p>
     */
    inline AwsDynamoDbTableKeySchema& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The name of the key schema attribute.</p>
     */
    inline AwsDynamoDbTableKeySchema& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p>The name of the key schema attribute.</p>
     */
    inline AwsDynamoDbTableKeySchema& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}


    /**
     * <p>The type of key used for the key schema attribute. Valid values are
     * <code>HASH</code> or <code>RANGE</code>.</p>
     */
    inline const Aws::String& GetKeyType() const{ return m_keyType; }

    /**
     * <p>The type of key used for the key schema attribute. Valid values are
     * <code>HASH</code> or <code>RANGE</code>.</p>
     */
    inline bool KeyTypeHasBeenSet() const { return m_keyTypeHasBeenSet; }

    /**
     * <p>The type of key used for the key schema attribute. Valid values are
     * <code>HASH</code> or <code>RANGE</code>.</p>
     */
    inline void SetKeyType(const Aws::String& value) { m_keyTypeHasBeenSet = true; m_keyType = value; }

    /**
     * <p>The type of key used for the key schema attribute. Valid values are
     * <code>HASH</code> or <code>RANGE</code>.</p>
     */
    inline void SetKeyType(Aws::String&& value) { m_keyTypeHasBeenSet = true; m_keyType = std::move(value); }

    /**
     * <p>The type of key used for the key schema attribute. Valid values are
     * <code>HASH</code> or <code>RANGE</code>.</p>
     */
    inline void SetKeyType(const char* value) { m_keyTypeHasBeenSet = true; m_keyType.assign(value); }

    /**
     * <p>The type of key used for the key schema attribute. Valid values are
     * <code>HASH</code> or <code>RANGE</code>.</p>
     */
    inline AwsDynamoDbTableKeySchema& WithKeyType(const Aws::String& value) { SetKeyType(value); return *this;}

    /**
     * <p>The type of key used for the key schema attribute. Valid values are
     * <code>HASH</code> or <code>RANGE</code>.</p>
     */
    inline AwsDynamoDbTableKeySchema& WithKeyType(Aws::String&& value) { SetKeyType(std::move(value)); return *this;}

    /**
     * <p>The type of key used for the key schema attribute. Valid values are
     * <code>HASH</code> or <code>RANGE</code>.</p>
     */
    inline AwsDynamoDbTableKeySchema& WithKeyType(const char* value) { SetKeyType(value); return *this;}

  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    Aws::String m_keyType;
    bool m_keyTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
