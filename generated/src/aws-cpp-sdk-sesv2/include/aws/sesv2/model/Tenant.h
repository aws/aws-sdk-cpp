/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/SendingStatus.h>
#include <aws/sesv2/model/Tag.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>A structure that contains details about a tenant.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/Tenant">AWS API
   * Reference</a></p>
   */
  class Tenant
  {
  public:
    AWS_SESV2_API Tenant() = default;
    AWS_SESV2_API Tenant(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Tenant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the tenant.</p>
     */
    inline const Aws::String& GetTenantName() const { return m_tenantName; }
    inline bool TenantNameHasBeenSet() const { return m_tenantNameHasBeenSet; }
    template<typename TenantNameT = Aws::String>
    void SetTenantName(TenantNameT&& value) { m_tenantNameHasBeenSet = true; m_tenantName = std::forward<TenantNameT>(value); }
    template<typename TenantNameT = Aws::String>
    Tenant& WithTenantName(TenantNameT&& value) { SetTenantName(std::forward<TenantNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the tenant.</p>
     */
    inline const Aws::String& GetTenantId() const { return m_tenantId; }
    inline bool TenantIdHasBeenSet() const { return m_tenantIdHasBeenSet; }
    template<typename TenantIdT = Aws::String>
    void SetTenantId(TenantIdT&& value) { m_tenantIdHasBeenSet = true; m_tenantId = std::forward<TenantIdT>(value); }
    template<typename TenantIdT = Aws::String>
    Tenant& WithTenantId(TenantIdT&& value) { SetTenantId(std::forward<TenantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the tenant.</p>
     */
    inline const Aws::String& GetTenantArn() const { return m_tenantArn; }
    inline bool TenantArnHasBeenSet() const { return m_tenantArnHasBeenSet; }
    template<typename TenantArnT = Aws::String>
    void SetTenantArn(TenantArnT&& value) { m_tenantArnHasBeenSet = true; m_tenantArn = std::forward<TenantArnT>(value); }
    template<typename TenantArnT = Aws::String>
    Tenant& WithTenantArn(TenantArnT&& value) { SetTenantArn(std::forward<TenantArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the tenant was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    Tenant& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that define the tags (keys and values) associated with
     * the tenant.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    Tenant& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Tenant& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of sending capability for the tenant.</p>
     */
    inline SendingStatus GetSendingStatus() const { return m_sendingStatus; }
    inline bool SendingStatusHasBeenSet() const { return m_sendingStatusHasBeenSet; }
    inline void SetSendingStatus(SendingStatus value) { m_sendingStatusHasBeenSet = true; m_sendingStatus = value; }
    inline Tenant& WithSendingStatus(SendingStatus value) { SetSendingStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_tenantName;
    bool m_tenantNameHasBeenSet = false;

    Aws::String m_tenantId;
    bool m_tenantIdHasBeenSet = false;

    Aws::String m_tenantArn;
    bool m_tenantArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    SendingStatus m_sendingStatus{SendingStatus::NOT_SET};
    bool m_sendingStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
