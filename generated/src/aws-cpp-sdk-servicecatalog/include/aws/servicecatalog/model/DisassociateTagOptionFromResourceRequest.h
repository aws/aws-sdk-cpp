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
  class DisassociateTagOptionFromResourceRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API DisassociateTagOptionFromResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateTagOptionFromResource"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The resource identifier.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline DisassociateTagOptionFromResourceRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline DisassociateTagOptionFromResourceRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline DisassociateTagOptionFromResourceRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The TagOption identifier.</p>
     */
    inline const Aws::String& GetTagOptionId() const{ return m_tagOptionId; }
    inline bool TagOptionIdHasBeenSet() const { return m_tagOptionIdHasBeenSet; }
    inline void SetTagOptionId(const Aws::String& value) { m_tagOptionIdHasBeenSet = true; m_tagOptionId = value; }
    inline void SetTagOptionId(Aws::String&& value) { m_tagOptionIdHasBeenSet = true; m_tagOptionId = std::move(value); }
    inline void SetTagOptionId(const char* value) { m_tagOptionIdHasBeenSet = true; m_tagOptionId.assign(value); }
    inline DisassociateTagOptionFromResourceRequest& WithTagOptionId(const Aws::String& value) { SetTagOptionId(value); return *this;}
    inline DisassociateTagOptionFromResourceRequest& WithTagOptionId(Aws::String&& value) { SetTagOptionId(std::move(value)); return *this;}
    inline DisassociateTagOptionFromResourceRequest& WithTagOptionId(const char* value) { SetTagOptionId(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_tagOptionId;
    bool m_tagOptionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
