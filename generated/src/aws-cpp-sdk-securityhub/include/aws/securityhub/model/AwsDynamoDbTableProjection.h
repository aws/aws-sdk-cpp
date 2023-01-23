/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>For global and local secondary indexes, identifies the attributes that are
   * copied from the table into the index.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsDynamoDbTableProjection">AWS
   * API Reference</a></p>
   */
  class AwsDynamoDbTableProjection
  {
  public:
    AWS_SECURITYHUB_API AwsDynamoDbTableProjection();
    AWS_SECURITYHUB_API AwsDynamoDbTableProjection(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsDynamoDbTableProjection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The nonkey attributes that are projected into the index. For each attribute,
     * provide the attribute name.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNonKeyAttributes() const{ return m_nonKeyAttributes; }

    /**
     * <p>The nonkey attributes that are projected into the index. For each attribute,
     * provide the attribute name.</p>
     */
    inline bool NonKeyAttributesHasBeenSet() const { return m_nonKeyAttributesHasBeenSet; }

    /**
     * <p>The nonkey attributes that are projected into the index. For each attribute,
     * provide the attribute name.</p>
     */
    inline void SetNonKeyAttributes(const Aws::Vector<Aws::String>& value) { m_nonKeyAttributesHasBeenSet = true; m_nonKeyAttributes = value; }

    /**
     * <p>The nonkey attributes that are projected into the index. For each attribute,
     * provide the attribute name.</p>
     */
    inline void SetNonKeyAttributes(Aws::Vector<Aws::String>&& value) { m_nonKeyAttributesHasBeenSet = true; m_nonKeyAttributes = std::move(value); }

    /**
     * <p>The nonkey attributes that are projected into the index. For each attribute,
     * provide the attribute name.</p>
     */
    inline AwsDynamoDbTableProjection& WithNonKeyAttributes(const Aws::Vector<Aws::String>& value) { SetNonKeyAttributes(value); return *this;}

    /**
     * <p>The nonkey attributes that are projected into the index. For each attribute,
     * provide the attribute name.</p>
     */
    inline AwsDynamoDbTableProjection& WithNonKeyAttributes(Aws::Vector<Aws::String>&& value) { SetNonKeyAttributes(std::move(value)); return *this;}

    /**
     * <p>The nonkey attributes that are projected into the index. For each attribute,
     * provide the attribute name.</p>
     */
    inline AwsDynamoDbTableProjection& AddNonKeyAttributes(const Aws::String& value) { m_nonKeyAttributesHasBeenSet = true; m_nonKeyAttributes.push_back(value); return *this; }

    /**
     * <p>The nonkey attributes that are projected into the index. For each attribute,
     * provide the attribute name.</p>
     */
    inline AwsDynamoDbTableProjection& AddNonKeyAttributes(Aws::String&& value) { m_nonKeyAttributesHasBeenSet = true; m_nonKeyAttributes.push_back(std::move(value)); return *this; }

    /**
     * <p>The nonkey attributes that are projected into the index. For each attribute,
     * provide the attribute name.</p>
     */
    inline AwsDynamoDbTableProjection& AddNonKeyAttributes(const char* value) { m_nonKeyAttributesHasBeenSet = true; m_nonKeyAttributes.push_back(value); return *this; }


    /**
     * <p>The types of attributes that are projected into the index. Valid values are
     * as follows:</p> <ul> <li> <p> <code>ALL</code> </p> </li> <li> <p>
     * <code>INCLUDE</code> </p> </li> <li> <p> <code>KEYS_ONLY</code> </p> </li> </ul>
     */
    inline const Aws::String& GetProjectionType() const{ return m_projectionType; }

    /**
     * <p>The types of attributes that are projected into the index. Valid values are
     * as follows:</p> <ul> <li> <p> <code>ALL</code> </p> </li> <li> <p>
     * <code>INCLUDE</code> </p> </li> <li> <p> <code>KEYS_ONLY</code> </p> </li> </ul>
     */
    inline bool ProjectionTypeHasBeenSet() const { return m_projectionTypeHasBeenSet; }

    /**
     * <p>The types of attributes that are projected into the index. Valid values are
     * as follows:</p> <ul> <li> <p> <code>ALL</code> </p> </li> <li> <p>
     * <code>INCLUDE</code> </p> </li> <li> <p> <code>KEYS_ONLY</code> </p> </li> </ul>
     */
    inline void SetProjectionType(const Aws::String& value) { m_projectionTypeHasBeenSet = true; m_projectionType = value; }

    /**
     * <p>The types of attributes that are projected into the index. Valid values are
     * as follows:</p> <ul> <li> <p> <code>ALL</code> </p> </li> <li> <p>
     * <code>INCLUDE</code> </p> </li> <li> <p> <code>KEYS_ONLY</code> </p> </li> </ul>
     */
    inline void SetProjectionType(Aws::String&& value) { m_projectionTypeHasBeenSet = true; m_projectionType = std::move(value); }

    /**
     * <p>The types of attributes that are projected into the index. Valid values are
     * as follows:</p> <ul> <li> <p> <code>ALL</code> </p> </li> <li> <p>
     * <code>INCLUDE</code> </p> </li> <li> <p> <code>KEYS_ONLY</code> </p> </li> </ul>
     */
    inline void SetProjectionType(const char* value) { m_projectionTypeHasBeenSet = true; m_projectionType.assign(value); }

    /**
     * <p>The types of attributes that are projected into the index. Valid values are
     * as follows:</p> <ul> <li> <p> <code>ALL</code> </p> </li> <li> <p>
     * <code>INCLUDE</code> </p> </li> <li> <p> <code>KEYS_ONLY</code> </p> </li> </ul>
     */
    inline AwsDynamoDbTableProjection& WithProjectionType(const Aws::String& value) { SetProjectionType(value); return *this;}

    /**
     * <p>The types of attributes that are projected into the index. Valid values are
     * as follows:</p> <ul> <li> <p> <code>ALL</code> </p> </li> <li> <p>
     * <code>INCLUDE</code> </p> </li> <li> <p> <code>KEYS_ONLY</code> </p> </li> </ul>
     */
    inline AwsDynamoDbTableProjection& WithProjectionType(Aws::String&& value) { SetProjectionType(std::move(value)); return *this;}

    /**
     * <p>The types of attributes that are projected into the index. Valid values are
     * as follows:</p> <ul> <li> <p> <code>ALL</code> </p> </li> <li> <p>
     * <code>INCLUDE</code> </p> </li> <li> <p> <code>KEYS_ONLY</code> </p> </li> </ul>
     */
    inline AwsDynamoDbTableProjection& WithProjectionType(const char* value) { SetProjectionType(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_nonKeyAttributes;
    bool m_nonKeyAttributesHasBeenSet = false;

    Aws::String m_projectionType;
    bool m_projectionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
