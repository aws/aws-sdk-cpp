/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>A structure that contains information about a tenant associated with a
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ResourceTenantMetadata">AWS
   * API Reference</a></p>
   */
  class ResourceTenantMetadata
  {
  public:
    AWS_SESV2_API ResourceTenantMetadata() = default;
    AWS_SESV2_API ResourceTenantMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API ResourceTenantMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the tenant associated with the resource.</p>
     */
    inline const Aws::String& GetTenantName() const { return m_tenantName; }
    inline bool TenantNameHasBeenSet() const { return m_tenantNameHasBeenSet; }
    template<typename TenantNameT = Aws::String>
    void SetTenantName(TenantNameT&& value) { m_tenantNameHasBeenSet = true; m_tenantName = std::forward<TenantNameT>(value); }
    template<typename TenantNameT = Aws::String>
    ResourceTenantMetadata& WithTenantName(TenantNameT&& value) { SetTenantName(std::forward<TenantNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the tenant associated with the resource.</p>
     */
    inline const Aws::String& GetTenantId() const { return m_tenantId; }
    inline bool TenantIdHasBeenSet() const { return m_tenantIdHasBeenSet; }
    template<typename TenantIdT = Aws::String>
    void SetTenantId(TenantIdT&& value) { m_tenantIdHasBeenSet = true; m_tenantId = std::forward<TenantIdT>(value); }
    template<typename TenantIdT = Aws::String>
    ResourceTenantMetadata& WithTenantId(TenantIdT&& value) { SetTenantId(std::forward<TenantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    ResourceTenantMetadata& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the resource was associated with the tenant.</p>
     */
    inline const Aws::Utils::DateTime& GetAssociatedTimestamp() const { return m_associatedTimestamp; }
    inline bool AssociatedTimestampHasBeenSet() const { return m_associatedTimestampHasBeenSet; }
    template<typename AssociatedTimestampT = Aws::Utils::DateTime>
    void SetAssociatedTimestamp(AssociatedTimestampT&& value) { m_associatedTimestampHasBeenSet = true; m_associatedTimestamp = std::forward<AssociatedTimestampT>(value); }
    template<typename AssociatedTimestampT = Aws::Utils::DateTime>
    ResourceTenantMetadata& WithAssociatedTimestamp(AssociatedTimestampT&& value) { SetAssociatedTimestamp(std::forward<AssociatedTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tenantName;
    bool m_tenantNameHasBeenSet = false;

    Aws::String m_tenantId;
    bool m_tenantIdHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Utils::DateTime m_associatedTimestamp{};
    bool m_associatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
