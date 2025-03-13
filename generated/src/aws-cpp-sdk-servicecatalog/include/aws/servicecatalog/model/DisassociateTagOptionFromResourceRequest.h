/**
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
    AWS_SERVICECATALOG_API DisassociateTagOptionFromResourceRequest() = default;

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
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    DisassociateTagOptionFromResourceRequest& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The TagOption identifier.</p>
     */
    inline const Aws::String& GetTagOptionId() const { return m_tagOptionId; }
    inline bool TagOptionIdHasBeenSet() const { return m_tagOptionIdHasBeenSet; }
    template<typename TagOptionIdT = Aws::String>
    void SetTagOptionId(TagOptionIdT&& value) { m_tagOptionIdHasBeenSet = true; m_tagOptionId = std::forward<TagOptionIdT>(value); }
    template<typename TagOptionIdT = Aws::String>
    DisassociateTagOptionFromResourceRequest& WithTagOptionId(TagOptionIdT&& value) { SetTagOptionId(std::forward<TagOptionIdT>(value)); return *this;}
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
