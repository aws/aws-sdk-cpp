/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/RedshiftServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

  /**
   */
  class DeleteSnapshotCopyConfigurationRequest : public RedshiftServerlessRequest
  {
  public:
    AWS_REDSHIFTSERVERLESS_API DeleteSnapshotCopyConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSnapshotCopyConfiguration"; }

    AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the snapshot copy configuration to delete.</p>
     */
    inline const Aws::String& GetSnapshotCopyConfigurationId() const { return m_snapshotCopyConfigurationId; }
    inline bool SnapshotCopyConfigurationIdHasBeenSet() const { return m_snapshotCopyConfigurationIdHasBeenSet; }
    template<typename SnapshotCopyConfigurationIdT = Aws::String>
    void SetSnapshotCopyConfigurationId(SnapshotCopyConfigurationIdT&& value) { m_snapshotCopyConfigurationIdHasBeenSet = true; m_snapshotCopyConfigurationId = std::forward<SnapshotCopyConfigurationIdT>(value); }
    template<typename SnapshotCopyConfigurationIdT = Aws::String>
    DeleteSnapshotCopyConfigurationRequest& WithSnapshotCopyConfigurationId(SnapshotCopyConfigurationIdT&& value) { SetSnapshotCopyConfigurationId(std::forward<SnapshotCopyConfigurationIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_snapshotCopyConfigurationId;
    bool m_snapshotCopyConfigurationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
