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
    AWS_SECURITYHUB_API AwsDynamoDbTableProjection() = default;
    AWS_SECURITYHUB_API AwsDynamoDbTableProjection(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsDynamoDbTableProjection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The nonkey attributes that are projected into the index. For each attribute,
     * provide the attribute name.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNonKeyAttributes() const { return m_nonKeyAttributes; }
    inline bool NonKeyAttributesHasBeenSet() const { return m_nonKeyAttributesHasBeenSet; }
    template<typename NonKeyAttributesT = Aws::Vector<Aws::String>>
    void SetNonKeyAttributes(NonKeyAttributesT&& value) { m_nonKeyAttributesHasBeenSet = true; m_nonKeyAttributes = std::forward<NonKeyAttributesT>(value); }
    template<typename NonKeyAttributesT = Aws::Vector<Aws::String>>
    AwsDynamoDbTableProjection& WithNonKeyAttributes(NonKeyAttributesT&& value) { SetNonKeyAttributes(std::forward<NonKeyAttributesT>(value)); return *this;}
    template<typename NonKeyAttributesT = Aws::String>
    AwsDynamoDbTableProjection& AddNonKeyAttributes(NonKeyAttributesT&& value) { m_nonKeyAttributesHasBeenSet = true; m_nonKeyAttributes.emplace_back(std::forward<NonKeyAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The types of attributes that are projected into the index. Valid values are
     * as follows:</p> <ul> <li> <p> <code>ALL</code> </p> </li> <li> <p>
     * <code>INCLUDE</code> </p> </li> <li> <p> <code>KEYS_ONLY</code> </p> </li> </ul>
     */
    inline const Aws::String& GetProjectionType() const { return m_projectionType; }
    inline bool ProjectionTypeHasBeenSet() const { return m_projectionTypeHasBeenSet; }
    template<typename ProjectionTypeT = Aws::String>
    void SetProjectionType(ProjectionTypeT&& value) { m_projectionTypeHasBeenSet = true; m_projectionType = std::forward<ProjectionTypeT>(value); }
    template<typename ProjectionTypeT = Aws::String>
    AwsDynamoDbTableProjection& WithProjectionType(ProjectionTypeT&& value) { SetProjectionType(std::forward<ProjectionTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_nonKeyAttributes;
    bool m_nonKeyAttributesHasBeenSet = false;

    Aws::String m_projectionType;
    bool m_projectionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
