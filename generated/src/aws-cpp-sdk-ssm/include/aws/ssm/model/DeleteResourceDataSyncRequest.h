/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class DeleteResourceDataSyncRequest : public SSMRequest
  {
  public:
    AWS_SSM_API DeleteResourceDataSyncRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteResourceDataSync"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the configuration to delete.</p>
     */
    inline const Aws::String& GetSyncName() const{ return m_syncName; }

    /**
     * <p>The name of the configuration to delete.</p>
     */
    inline bool SyncNameHasBeenSet() const { return m_syncNameHasBeenSet; }

    /**
     * <p>The name of the configuration to delete.</p>
     */
    inline void SetSyncName(const Aws::String& value) { m_syncNameHasBeenSet = true; m_syncName = value; }

    /**
     * <p>The name of the configuration to delete.</p>
     */
    inline void SetSyncName(Aws::String&& value) { m_syncNameHasBeenSet = true; m_syncName = std::move(value); }

    /**
     * <p>The name of the configuration to delete.</p>
     */
    inline void SetSyncName(const char* value) { m_syncNameHasBeenSet = true; m_syncName.assign(value); }

    /**
     * <p>The name of the configuration to delete.</p>
     */
    inline DeleteResourceDataSyncRequest& WithSyncName(const Aws::String& value) { SetSyncName(value); return *this;}

    /**
     * <p>The name of the configuration to delete.</p>
     */
    inline DeleteResourceDataSyncRequest& WithSyncName(Aws::String&& value) { SetSyncName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration to delete.</p>
     */
    inline DeleteResourceDataSyncRequest& WithSyncName(const char* value) { SetSyncName(value); return *this;}


    /**
     * <p>Specify the type of resource data sync to delete.</p>
     */
    inline const Aws::String& GetSyncType() const{ return m_syncType; }

    /**
     * <p>Specify the type of resource data sync to delete.</p>
     */
    inline bool SyncTypeHasBeenSet() const { return m_syncTypeHasBeenSet; }

    /**
     * <p>Specify the type of resource data sync to delete.</p>
     */
    inline void SetSyncType(const Aws::String& value) { m_syncTypeHasBeenSet = true; m_syncType = value; }

    /**
     * <p>Specify the type of resource data sync to delete.</p>
     */
    inline void SetSyncType(Aws::String&& value) { m_syncTypeHasBeenSet = true; m_syncType = std::move(value); }

    /**
     * <p>Specify the type of resource data sync to delete.</p>
     */
    inline void SetSyncType(const char* value) { m_syncTypeHasBeenSet = true; m_syncType.assign(value); }

    /**
     * <p>Specify the type of resource data sync to delete.</p>
     */
    inline DeleteResourceDataSyncRequest& WithSyncType(const Aws::String& value) { SetSyncType(value); return *this;}

    /**
     * <p>Specify the type of resource data sync to delete.</p>
     */
    inline DeleteResourceDataSyncRequest& WithSyncType(Aws::String&& value) { SetSyncType(std::move(value)); return *this;}

    /**
     * <p>Specify the type of resource data sync to delete.</p>
     */
    inline DeleteResourceDataSyncRequest& WithSyncType(const char* value) { SetSyncType(value); return *this;}

  private:

    Aws::String m_syncName;
    bool m_syncNameHasBeenSet = false;

    Aws::String m_syncType;
    bool m_syncTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
