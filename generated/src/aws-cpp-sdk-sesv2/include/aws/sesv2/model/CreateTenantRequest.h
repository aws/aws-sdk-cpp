/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>Represents a request to create a tenant.</p> <p> <i>Tenants</i> are logical
   * containers that group related SES resources together. Each tenant can have its
   * own set of resources like email identities, configuration sets, and templates,
   * along with reputation metrics and sending status. This helps isolate and manage
   * email sending for different customers or business units within your Amazon SES
   * API v2 account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateTenantRequest">AWS
   * API Reference</a></p>
   */
  class CreateTenantRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API CreateTenantRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTenant"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the tenant to create. The name can contain up to 64 alphanumeric
     * characters, including letters, numbers, hyphens (-) and underscores (_)
     * only.</p>
     */
    inline const Aws::String& GetTenantName() const { return m_tenantName; }
    inline bool TenantNameHasBeenSet() const { return m_tenantNameHasBeenSet; }
    template<typename TenantNameT = Aws::String>
    void SetTenantName(TenantNameT&& value) { m_tenantNameHasBeenSet = true; m_tenantName = std::forward<TenantNameT>(value); }
    template<typename TenantNameT = Aws::String>
    CreateTenantRequest& WithTenantName(TenantNameT&& value) { SetTenantName(std::forward<TenantNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that define the tags (keys and values) to associate with
     * the tenant</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateTenantRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateTenantRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_tenantName;
    bool m_tenantNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
