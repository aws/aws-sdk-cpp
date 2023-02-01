/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/SourceType.h>
#include <aws/servicecatalog/model/SourceConnectionParameters.h>
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
   * <p>A top level <code>ProductViewDetail</code> response containing details about
   * the product’s connection. Service Catalog returns this field for the
   * <code>CreateProduct</code>, <code>UpdateProduct</code>,
   * <code>DescribeProductAsAdmin</code>, and <code>SearchProductAsAdmin</code> APIs.
   * This response contains the same fields as the <code>ConnectionParameters</code>
   * request, with the addition of the <code>LastSync</code> response.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/SourceConnection">AWS
   * API Reference</a></p>
   */
  class SourceConnection
  {
  public:
    AWS_SERVICECATALOG_API SourceConnection();
    AWS_SERVICECATALOG_API SourceConnection(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API SourceConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The only supported <code>SourceConnection</code> type is Codestar. </p>
     */
    inline const SourceType& GetType() const{ return m_type; }

    /**
     * <p>The only supported <code>SourceConnection</code> type is Codestar. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The only supported <code>SourceConnection</code> type is Codestar. </p>
     */
    inline void SetType(const SourceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The only supported <code>SourceConnection</code> type is Codestar. </p>
     */
    inline void SetType(SourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The only supported <code>SourceConnection</code> type is Codestar. </p>
     */
    inline SourceConnection& WithType(const SourceType& value) { SetType(value); return *this;}

    /**
     * <p>The only supported <code>SourceConnection</code> type is Codestar. </p>
     */
    inline SourceConnection& WithType(SourceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The connection details based on the connection <code>Type</code>. </p>
     */
    inline const SourceConnectionParameters& GetConnectionParameters() const{ return m_connectionParameters; }

    /**
     * <p>The connection details based on the connection <code>Type</code>. </p>
     */
    inline bool ConnectionParametersHasBeenSet() const { return m_connectionParametersHasBeenSet; }

    /**
     * <p>The connection details based on the connection <code>Type</code>. </p>
     */
    inline void SetConnectionParameters(const SourceConnectionParameters& value) { m_connectionParametersHasBeenSet = true; m_connectionParameters = value; }

    /**
     * <p>The connection details based on the connection <code>Type</code>. </p>
     */
    inline void SetConnectionParameters(SourceConnectionParameters&& value) { m_connectionParametersHasBeenSet = true; m_connectionParameters = std::move(value); }

    /**
     * <p>The connection details based on the connection <code>Type</code>. </p>
     */
    inline SourceConnection& WithConnectionParameters(const SourceConnectionParameters& value) { SetConnectionParameters(value); return *this;}

    /**
     * <p>The connection details based on the connection <code>Type</code>. </p>
     */
    inline SourceConnection& WithConnectionParameters(SourceConnectionParameters&& value) { SetConnectionParameters(std::move(value)); return *this;}

  private:

    SourceType m_type;
    bool m_typeHasBeenSet = false;

    SourceConnectionParameters m_connectionParameters;
    bool m_connectionParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
