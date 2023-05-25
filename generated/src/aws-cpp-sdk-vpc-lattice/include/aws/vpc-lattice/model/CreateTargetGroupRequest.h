/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/VPCLatticeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/model/TargetGroupConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/vpc-lattice/model/TargetGroupType.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace VPCLattice
{
namespace Model
{

  /**
   */
  class CreateTargetGroupRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API CreateTargetGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTargetGroup"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you retry a request that completed successfully
     * using the same client token and parameters, the retry succeeds without
     * performing any actions. If the parameters aren't identical, the retry fails.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you retry a request that completed successfully
     * using the same client token and parameters, the retry succeeds without
     * performing any actions. If the parameters aren't identical, the retry fails.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you retry a request that completed successfully
     * using the same client token and parameters, the retry succeeds without
     * performing any actions. If the parameters aren't identical, the retry fails.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you retry a request that completed successfully
     * using the same client token and parameters, the retry succeeds without
     * performing any actions. If the parameters aren't identical, the retry fails.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you retry a request that completed successfully
     * using the same client token and parameters, the retry succeeds without
     * performing any actions. If the parameters aren't identical, the retry fails.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you retry a request that completed successfully
     * using the same client token and parameters, the retry succeeds without
     * performing any actions. If the parameters aren't identical, the retry fails.</p>
     */
    inline CreateTargetGroupRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you retry a request that completed successfully
     * using the same client token and parameters, the retry succeeds without
     * performing any actions. If the parameters aren't identical, the retry fails.</p>
     */
    inline CreateTargetGroupRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you retry a request that completed successfully
     * using the same client token and parameters, the retry succeeds without
     * performing any actions. If the parameters aren't identical, the retry fails.</p>
     */
    inline CreateTargetGroupRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The target group configuration. If <code>type</code> is set to
     * <code>LAMBDA</code>, this parameter doesn't apply.</p>
     */
    inline const TargetGroupConfig& GetConfig() const{ return m_config; }

    /**
     * <p>The target group configuration. If <code>type</code> is set to
     * <code>LAMBDA</code>, this parameter doesn't apply.</p>
     */
    inline bool ConfigHasBeenSet() const { return m_configHasBeenSet; }

    /**
     * <p>The target group configuration. If <code>type</code> is set to
     * <code>LAMBDA</code>, this parameter doesn't apply.</p>
     */
    inline void SetConfig(const TargetGroupConfig& value) { m_configHasBeenSet = true; m_config = value; }

    /**
     * <p>The target group configuration. If <code>type</code> is set to
     * <code>LAMBDA</code>, this parameter doesn't apply.</p>
     */
    inline void SetConfig(TargetGroupConfig&& value) { m_configHasBeenSet = true; m_config = std::move(value); }

    /**
     * <p>The target group configuration. If <code>type</code> is set to
     * <code>LAMBDA</code>, this parameter doesn't apply.</p>
     */
    inline CreateTargetGroupRequest& WithConfig(const TargetGroupConfig& value) { SetConfig(value); return *this;}

    /**
     * <p>The target group configuration. If <code>type</code> is set to
     * <code>LAMBDA</code>, this parameter doesn't apply.</p>
     */
    inline CreateTargetGroupRequest& WithConfig(TargetGroupConfig&& value) { SetConfig(std::move(value)); return *this;}


    /**
     * <p>The name of the target group. The name must be unique within the account. The
     * valid characters are a-z, 0-9, and hyphens (-). You can't use a hyphen as the
     * first or last character, or immediately after another hyphen.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the target group. The name must be unique within the account. The
     * valid characters are a-z, 0-9, and hyphens (-). You can't use a hyphen as the
     * first or last character, or immediately after another hyphen.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the target group. The name must be unique within the account. The
     * valid characters are a-z, 0-9, and hyphens (-). You can't use a hyphen as the
     * first or last character, or immediately after another hyphen.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the target group. The name must be unique within the account. The
     * valid characters are a-z, 0-9, and hyphens (-). You can't use a hyphen as the
     * first or last character, or immediately after another hyphen.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the target group. The name must be unique within the account. The
     * valid characters are a-z, 0-9, and hyphens (-). You can't use a hyphen as the
     * first or last character, or immediately after another hyphen.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the target group. The name must be unique within the account. The
     * valid characters are a-z, 0-9, and hyphens (-). You can't use a hyphen as the
     * first or last character, or immediately after another hyphen.</p>
     */
    inline CreateTargetGroupRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the target group. The name must be unique within the account. The
     * valid characters are a-z, 0-9, and hyphens (-). You can't use a hyphen as the
     * first or last character, or immediately after another hyphen.</p>
     */
    inline CreateTargetGroupRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the target group. The name must be unique within the account. The
     * valid characters are a-z, 0-9, and hyphens (-). You can't use a hyphen as the
     * first or last character, or immediately after another hyphen.</p>
     */
    inline CreateTargetGroupRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The tags for the target group.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the target group.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags for the target group.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for the target group.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags for the target group.</p>
     */
    inline CreateTargetGroupRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the target group.</p>
     */
    inline CreateTargetGroupRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the target group.</p>
     */
    inline CreateTargetGroupRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags for the target group.</p>
     */
    inline CreateTargetGroupRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags for the target group.</p>
     */
    inline CreateTargetGroupRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags for the target group.</p>
     */
    inline CreateTargetGroupRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags for the target group.</p>
     */
    inline CreateTargetGroupRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags for the target group.</p>
     */
    inline CreateTargetGroupRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags for the target group.</p>
     */
    inline CreateTargetGroupRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The type of target group.</p>
     */
    inline const TargetGroupType& GetType() const{ return m_type; }

    /**
     * <p>The type of target group.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of target group.</p>
     */
    inline void SetType(const TargetGroupType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of target group.</p>
     */
    inline void SetType(TargetGroupType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of target group.</p>
     */
    inline CreateTargetGroupRequest& WithType(const TargetGroupType& value) { SetType(value); return *this;}

    /**
     * <p>The type of target group.</p>
     */
    inline CreateTargetGroupRequest& WithType(TargetGroupType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    TargetGroupConfig m_config;
    bool m_configHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    TargetGroupType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
