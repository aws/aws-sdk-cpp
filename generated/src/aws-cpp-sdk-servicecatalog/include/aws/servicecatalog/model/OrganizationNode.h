/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/OrganizationNodeType.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Information about the organization node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/OrganizationNode">AWS
   * API Reference</a></p>
   */
  class OrganizationNode
  {
  public:
    AWS_SERVICECATALOG_API OrganizationNode();
    AWS_SERVICECATALOG_API OrganizationNode(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API OrganizationNode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The organization node type.</p>
     */
    inline const OrganizationNodeType& GetType() const{ return m_type; }

    /**
     * <p>The organization node type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The organization node type.</p>
     */
    inline void SetType(const OrganizationNodeType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The organization node type.</p>
     */
    inline void SetType(OrganizationNodeType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The organization node type.</p>
     */
    inline OrganizationNode& WithType(const OrganizationNodeType& value) { SetType(value); return *this;}

    /**
     * <p>The organization node type.</p>
     */
    inline OrganizationNode& WithType(OrganizationNodeType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The identifier of the organization node.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The identifier of the organization node.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The identifier of the organization node.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The identifier of the organization node.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The identifier of the organization node.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The identifier of the organization node.</p>
     */
    inline OrganizationNode& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The identifier of the organization node.</p>
     */
    inline OrganizationNode& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The identifier of the organization node.</p>
     */
    inline OrganizationNode& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    OrganizationNodeType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
