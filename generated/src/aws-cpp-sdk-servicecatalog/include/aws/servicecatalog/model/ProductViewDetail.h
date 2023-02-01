/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ProductViewSummary.h>
#include <aws/servicecatalog/model/Status.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/servicecatalog/model/SourceConnectionDetail.h>
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
   * <p>Information about a product view.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ProductViewDetail">AWS
   * API Reference</a></p>
   */
  class ProductViewDetail
  {
  public:
    AWS_SERVICECATALOG_API ProductViewDetail();
    AWS_SERVICECATALOG_API ProductViewDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ProductViewDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Summary information about the product view.</p>
     */
    inline const ProductViewSummary& GetProductViewSummary() const{ return m_productViewSummary; }

    /**
     * <p>Summary information about the product view.</p>
     */
    inline bool ProductViewSummaryHasBeenSet() const { return m_productViewSummaryHasBeenSet; }

    /**
     * <p>Summary information about the product view.</p>
     */
    inline void SetProductViewSummary(const ProductViewSummary& value) { m_productViewSummaryHasBeenSet = true; m_productViewSummary = value; }

    /**
     * <p>Summary information about the product view.</p>
     */
    inline void SetProductViewSummary(ProductViewSummary&& value) { m_productViewSummaryHasBeenSet = true; m_productViewSummary = std::move(value); }

    /**
     * <p>Summary information about the product view.</p>
     */
    inline ProductViewDetail& WithProductViewSummary(const ProductViewSummary& value) { SetProductViewSummary(value); return *this;}

    /**
     * <p>Summary information about the product view.</p>
     */
    inline ProductViewDetail& WithProductViewSummary(ProductViewSummary&& value) { SetProductViewSummary(std::move(value)); return *this;}


    /**
     * <p>The status of the product.</p> <ul> <li> <p> <code>AVAILABLE</code> - The
     * product is ready for use.</p> </li> <li> <p> <code>CREATING</code> - Product
     * creation has started; the product is not ready for use.</p> </li> <li> <p>
     * <code>FAILED</code> - An action failed.</p> </li> </ul>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the product.</p> <ul> <li> <p> <code>AVAILABLE</code> - The
     * product is ready for use.</p> </li> <li> <p> <code>CREATING</code> - Product
     * creation has started; the product is not ready for use.</p> </li> <li> <p>
     * <code>FAILED</code> - An action failed.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the product.</p> <ul> <li> <p> <code>AVAILABLE</code> - The
     * product is ready for use.</p> </li> <li> <p> <code>CREATING</code> - Product
     * creation has started; the product is not ready for use.</p> </li> <li> <p>
     * <code>FAILED</code> - An action failed.</p> </li> </ul>
     */
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the product.</p> <ul> <li> <p> <code>AVAILABLE</code> - The
     * product is ready for use.</p> </li> <li> <p> <code>CREATING</code> - Product
     * creation has started; the product is not ready for use.</p> </li> <li> <p>
     * <code>FAILED</code> - An action failed.</p> </li> </ul>
     */
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the product.</p> <ul> <li> <p> <code>AVAILABLE</code> - The
     * product is ready for use.</p> </li> <li> <p> <code>CREATING</code> - Product
     * creation has started; the product is not ready for use.</p> </li> <li> <p>
     * <code>FAILED</code> - An action failed.</p> </li> </ul>
     */
    inline ProductViewDetail& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the product.</p> <ul> <li> <p> <code>AVAILABLE</code> - The
     * product is ready for use.</p> </li> <li> <p> <code>CREATING</code> - Product
     * creation has started; the product is not ready for use.</p> </li> <li> <p>
     * <code>FAILED</code> - An action failed.</p> </li> </ul>
     */
    inline ProductViewDetail& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The ARN of the product.</p>
     */
    inline const Aws::String& GetProductARN() const{ return m_productARN; }

    /**
     * <p>The ARN of the product.</p>
     */
    inline bool ProductARNHasBeenSet() const { return m_productARNHasBeenSet; }

    /**
     * <p>The ARN of the product.</p>
     */
    inline void SetProductARN(const Aws::String& value) { m_productARNHasBeenSet = true; m_productARN = value; }

    /**
     * <p>The ARN of the product.</p>
     */
    inline void SetProductARN(Aws::String&& value) { m_productARNHasBeenSet = true; m_productARN = std::move(value); }

    /**
     * <p>The ARN of the product.</p>
     */
    inline void SetProductARN(const char* value) { m_productARNHasBeenSet = true; m_productARN.assign(value); }

    /**
     * <p>The ARN of the product.</p>
     */
    inline ProductViewDetail& WithProductARN(const Aws::String& value) { SetProductARN(value); return *this;}

    /**
     * <p>The ARN of the product.</p>
     */
    inline ProductViewDetail& WithProductARN(Aws::String&& value) { SetProductARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the product.</p>
     */
    inline ProductViewDetail& WithProductARN(const char* value) { SetProductARN(value); return *this;}


    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline ProductViewDetail& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline ProductViewDetail& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>A top level <code>ProductViewDetail</code> response containing details about
     * the product’s connection. Service Catalog returns this field for the
     * <code>CreateProduct</code>, <code>UpdateProduct</code>,
     * <code>DescribeProductAsAdmin</code>, and <code>SearchProductAsAdmin</code> APIs.
     * This response contains the same fields as the <code>ConnectionParameters</code>
     * request, with the addition of the <code>LastSync</code> response.</p>
     */
    inline const SourceConnectionDetail& GetSourceConnection() const{ return m_sourceConnection; }

    /**
     * <p>A top level <code>ProductViewDetail</code> response containing details about
     * the product’s connection. Service Catalog returns this field for the
     * <code>CreateProduct</code>, <code>UpdateProduct</code>,
     * <code>DescribeProductAsAdmin</code>, and <code>SearchProductAsAdmin</code> APIs.
     * This response contains the same fields as the <code>ConnectionParameters</code>
     * request, with the addition of the <code>LastSync</code> response.</p>
     */
    inline bool SourceConnectionHasBeenSet() const { return m_sourceConnectionHasBeenSet; }

    /**
     * <p>A top level <code>ProductViewDetail</code> response containing details about
     * the product’s connection. Service Catalog returns this field for the
     * <code>CreateProduct</code>, <code>UpdateProduct</code>,
     * <code>DescribeProductAsAdmin</code>, and <code>SearchProductAsAdmin</code> APIs.
     * This response contains the same fields as the <code>ConnectionParameters</code>
     * request, with the addition of the <code>LastSync</code> response.</p>
     */
    inline void SetSourceConnection(const SourceConnectionDetail& value) { m_sourceConnectionHasBeenSet = true; m_sourceConnection = value; }

    /**
     * <p>A top level <code>ProductViewDetail</code> response containing details about
     * the product’s connection. Service Catalog returns this field for the
     * <code>CreateProduct</code>, <code>UpdateProduct</code>,
     * <code>DescribeProductAsAdmin</code>, and <code>SearchProductAsAdmin</code> APIs.
     * This response contains the same fields as the <code>ConnectionParameters</code>
     * request, with the addition of the <code>LastSync</code> response.</p>
     */
    inline void SetSourceConnection(SourceConnectionDetail&& value) { m_sourceConnectionHasBeenSet = true; m_sourceConnection = std::move(value); }

    /**
     * <p>A top level <code>ProductViewDetail</code> response containing details about
     * the product’s connection. Service Catalog returns this field for the
     * <code>CreateProduct</code>, <code>UpdateProduct</code>,
     * <code>DescribeProductAsAdmin</code>, and <code>SearchProductAsAdmin</code> APIs.
     * This response contains the same fields as the <code>ConnectionParameters</code>
     * request, with the addition of the <code>LastSync</code> response.</p>
     */
    inline ProductViewDetail& WithSourceConnection(const SourceConnectionDetail& value) { SetSourceConnection(value); return *this;}

    /**
     * <p>A top level <code>ProductViewDetail</code> response containing details about
     * the product’s connection. Service Catalog returns this field for the
     * <code>CreateProduct</code>, <code>UpdateProduct</code>,
     * <code>DescribeProductAsAdmin</code>, and <code>SearchProductAsAdmin</code> APIs.
     * This response contains the same fields as the <code>ConnectionParameters</code>
     * request, with the addition of the <code>LastSync</code> response.</p>
     */
    inline ProductViewDetail& WithSourceConnection(SourceConnectionDetail&& value) { SetSourceConnection(std::move(value)); return *this;}

  private:

    ProductViewSummary m_productViewSummary;
    bool m_productViewSummaryHasBeenSet = false;

    Status m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_productARN;
    bool m_productARNHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    SourceConnectionDetail m_sourceConnection;
    bool m_sourceConnectionHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
