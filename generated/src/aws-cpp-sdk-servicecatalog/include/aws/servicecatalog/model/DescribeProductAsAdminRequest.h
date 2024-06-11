﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class DescribeProductAsAdminRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API DescribeProductAsAdminRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeProductAsAdmin"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The language code.</p> <ul> <li> <p> <code>jp</code> - Japanese</p> </li>
     * <li> <p> <code>zh</code> - Chinese</p> </li> </ul>
     */
    inline const Aws::String& GetAcceptLanguage() const{ return m_acceptLanguage; }
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }
    inline void SetAcceptLanguage(const Aws::String& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = value; }
    inline void SetAcceptLanguage(Aws::String&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::move(value); }
    inline void SetAcceptLanguage(const char* value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage.assign(value); }
    inline DescribeProductAsAdminRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}
    inline DescribeProductAsAdminRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}
    inline DescribeProductAsAdminRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product identifier.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline DescribeProductAsAdminRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DescribeProductAsAdminRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DescribeProductAsAdminRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DescribeProductAsAdminRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeProductAsAdminRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeProductAsAdminRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the shared portfolio that the specified product is
     * associated with.</p> <p>You can provide this parameter to retrieve the shared
     * TagOptions associated with the product. If this parameter is provided and if
     * TagOptions sharing is enabled in the portfolio share, the API returns both local
     * and shared TagOptions associated with the product. Otherwise only local
     * TagOptions will be returned. </p>
     */
    inline const Aws::String& GetSourcePortfolioId() const{ return m_sourcePortfolioId; }
    inline bool SourcePortfolioIdHasBeenSet() const { return m_sourcePortfolioIdHasBeenSet; }
    inline void SetSourcePortfolioId(const Aws::String& value) { m_sourcePortfolioIdHasBeenSet = true; m_sourcePortfolioId = value; }
    inline void SetSourcePortfolioId(Aws::String&& value) { m_sourcePortfolioIdHasBeenSet = true; m_sourcePortfolioId = std::move(value); }
    inline void SetSourcePortfolioId(const char* value) { m_sourcePortfolioIdHasBeenSet = true; m_sourcePortfolioId.assign(value); }
    inline DescribeProductAsAdminRequest& WithSourcePortfolioId(const Aws::String& value) { SetSourcePortfolioId(value); return *this;}
    inline DescribeProductAsAdminRequest& WithSourcePortfolioId(Aws::String&& value) { SetSourcePortfolioId(std::move(value)); return *this;}
    inline DescribeProductAsAdminRequest& WithSourcePortfolioId(const char* value) { SetSourcePortfolioId(value); return *this;}
    ///@}
  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_sourcePortfolioId;
    bool m_sourcePortfolioIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
