/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class UpdateServiceSyncBlockerRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API UpdateServiceSyncBlockerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateServiceSyncBlocker"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the service sync blocker.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the service sync blocker.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the service sync blocker.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the service sync blocker.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the service sync blocker.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the service sync blocker.</p>
     */
    inline UpdateServiceSyncBlockerRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the service sync blocker.</p>
     */
    inline UpdateServiceSyncBlockerRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the service sync blocker.</p>
     */
    inline UpdateServiceSyncBlockerRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The reason the service sync blocker was resolved.</p>
     */
    inline const Aws::String& GetResolvedReason() const{ return m_resolvedReason; }

    /**
     * <p>The reason the service sync blocker was resolved.</p>
     */
    inline bool ResolvedReasonHasBeenSet() const { return m_resolvedReasonHasBeenSet; }

    /**
     * <p>The reason the service sync blocker was resolved.</p>
     */
    inline void SetResolvedReason(const Aws::String& value) { m_resolvedReasonHasBeenSet = true; m_resolvedReason = value; }

    /**
     * <p>The reason the service sync blocker was resolved.</p>
     */
    inline void SetResolvedReason(Aws::String&& value) { m_resolvedReasonHasBeenSet = true; m_resolvedReason = std::move(value); }

    /**
     * <p>The reason the service sync blocker was resolved.</p>
     */
    inline void SetResolvedReason(const char* value) { m_resolvedReasonHasBeenSet = true; m_resolvedReason.assign(value); }

    /**
     * <p>The reason the service sync blocker was resolved.</p>
     */
    inline UpdateServiceSyncBlockerRequest& WithResolvedReason(const Aws::String& value) { SetResolvedReason(value); return *this;}

    /**
     * <p>The reason the service sync blocker was resolved.</p>
     */
    inline UpdateServiceSyncBlockerRequest& WithResolvedReason(Aws::String&& value) { SetResolvedReason(std::move(value)); return *this;}

    /**
     * <p>The reason the service sync blocker was resolved.</p>
     */
    inline UpdateServiceSyncBlockerRequest& WithResolvedReason(const char* value) { SetResolvedReason(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_resolvedReason;
    bool m_resolvedReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
