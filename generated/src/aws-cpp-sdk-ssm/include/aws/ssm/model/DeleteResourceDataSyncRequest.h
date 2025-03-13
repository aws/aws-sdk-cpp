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
    AWS_SSM_API DeleteResourceDataSyncRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteResourceDataSync"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the configuration to delete.</p>
     */
    inline const Aws::String& GetSyncName() const { return m_syncName; }
    inline bool SyncNameHasBeenSet() const { return m_syncNameHasBeenSet; }
    template<typename SyncNameT = Aws::String>
    void SetSyncName(SyncNameT&& value) { m_syncNameHasBeenSet = true; m_syncName = std::forward<SyncNameT>(value); }
    template<typename SyncNameT = Aws::String>
    DeleteResourceDataSyncRequest& WithSyncName(SyncNameT&& value) { SetSyncName(std::forward<SyncNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the type of resource data sync to delete.</p>
     */
    inline const Aws::String& GetSyncType() const { return m_syncType; }
    inline bool SyncTypeHasBeenSet() const { return m_syncTypeHasBeenSet; }
    template<typename SyncTypeT = Aws::String>
    void SetSyncType(SyncTypeT&& value) { m_syncTypeHasBeenSet = true; m_syncType = std::forward<SyncTypeT>(value); }
    template<typename SyncTypeT = Aws::String>
    DeleteResourceDataSyncRequest& WithSyncType(SyncTypeT&& value) { SetSyncType(std::forward<SyncTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_syncName;
    bool m_syncNameHasBeenSet = false;

    Aws::String m_syncType;
    bool m_syncTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
