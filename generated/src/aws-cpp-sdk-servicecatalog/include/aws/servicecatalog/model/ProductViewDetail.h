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
    AWS_SERVICECATALOG_API ProductViewDetail() = default;
    AWS_SERVICECATALOG_API ProductViewDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ProductViewDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Summary information about the product view.</p>
     */
    inline const ProductViewSummary& GetProductViewSummary() const { return m_productViewSummary; }
    inline bool ProductViewSummaryHasBeenSet() const { return m_productViewSummaryHasBeenSet; }
    template<typename ProductViewSummaryT = ProductViewSummary>
    void SetProductViewSummary(ProductViewSummaryT&& value) { m_productViewSummaryHasBeenSet = true; m_productViewSummary = std::forward<ProductViewSummaryT>(value); }
    template<typename ProductViewSummaryT = ProductViewSummary>
    ProductViewDetail& WithProductViewSummary(ProductViewSummaryT&& value) { SetProductViewSummary(std::forward<ProductViewSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the product.</p> <ul> <li> <p> <code>AVAILABLE</code> - The
     * product is ready for use.</p> </li> <li> <p> <code>CREATING</code> - Product
     * creation has started; the product is not ready for use.</p> </li> <li> <p>
     * <code>FAILED</code> - An action failed.</p> </li> </ul>
     */
    inline Status GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline ProductViewDetail& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the product.</p>
     */
    inline const Aws::String& GetProductARN() const { return m_productARN; }
    inline bool ProductARNHasBeenSet() const { return m_productARNHasBeenSet; }
    template<typename ProductARNT = Aws::String>
    void SetProductARN(ProductARNT&& value) { m_productARNHasBeenSet = true; m_productARN = std::forward<ProductARNT>(value); }
    template<typename ProductARNT = Aws::String>
    ProductViewDetail& WithProductARN(ProductARNT&& value) { SetProductARN(std::forward<ProductARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    ProductViewDetail& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A top level <code>ProductViewDetail</code> response containing details about
     * the product’s connection. Service Catalog returns this field for the
     * <code>CreateProduct</code>, <code>UpdateProduct</code>,
     * <code>DescribeProductAsAdmin</code>, and <code>SearchProductAsAdmin</code> APIs.
     * This response contains the same fields as the <code>ConnectionParameters</code>
     * request, with the addition of the <code>LastSync</code> response.</p>
     */
    inline const SourceConnectionDetail& GetSourceConnection() const { return m_sourceConnection; }
    inline bool SourceConnectionHasBeenSet() const { return m_sourceConnectionHasBeenSet; }
    template<typename SourceConnectionT = SourceConnectionDetail>
    void SetSourceConnection(SourceConnectionT&& value) { m_sourceConnectionHasBeenSet = true; m_sourceConnection = std::forward<SourceConnectionT>(value); }
    template<typename SourceConnectionT = SourceConnectionDetail>
    ProductViewDetail& WithSourceConnection(SourceConnectionT&& value) { SetSourceConnection(std::forward<SourceConnectionT>(value)); return *this;}
    ///@}
  private:

    ProductViewSummary m_productViewSummary;
    bool m_productViewSummaryHasBeenSet = false;

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_productARN;
    bool m_productARNHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    SourceConnectionDetail m_sourceConnection;
    bool m_sourceConnectionHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
