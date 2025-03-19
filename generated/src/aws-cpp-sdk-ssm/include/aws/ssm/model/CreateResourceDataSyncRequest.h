/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ResourceDataSyncS3Destination.h>
#include <aws/ssm/model/ResourceDataSyncSource.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class CreateResourceDataSyncRequest : public SSMRequest
  {
  public:
    AWS_SSM_API CreateResourceDataSyncRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateResourceDataSync"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A name for the configuration.</p>
     */
    inline const Aws::String& GetSyncName() const { return m_syncName; }
    inline bool SyncNameHasBeenSet() const { return m_syncNameHasBeenSet; }
    template<typename SyncNameT = Aws::String>
    void SetSyncName(SyncNameT&& value) { m_syncNameHasBeenSet = true; m_syncName = std::forward<SyncNameT>(value); }
    template<typename SyncNameT = Aws::String>
    CreateResourceDataSyncRequest& WithSyncName(SyncNameT&& value) { SetSyncName(std::forward<SyncNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon S3 configuration details for the sync. This parameter is required if
     * the <code>SyncType</code> value is SyncToDestination.</p>
     */
    inline const ResourceDataSyncS3Destination& GetS3Destination() const { return m_s3Destination; }
    inline bool S3DestinationHasBeenSet() const { return m_s3DestinationHasBeenSet; }
    template<typename S3DestinationT = ResourceDataSyncS3Destination>
    void SetS3Destination(S3DestinationT&& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = std::forward<S3DestinationT>(value); }
    template<typename S3DestinationT = ResourceDataSyncS3Destination>
    CreateResourceDataSyncRequest& WithS3Destination(S3DestinationT&& value) { SetS3Destination(std::forward<S3DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify <code>SyncToDestination</code> to create a resource data sync that
     * synchronizes data to an S3 bucket for Inventory. If you specify
     * <code>SyncToDestination</code>, you must provide a value for
     * <code>S3Destination</code>. Specify <code>SyncFromSource</code> to synchronize
     * data from a single account and multiple Regions, or multiple Amazon Web Services
     * accounts and Amazon Web Services Regions, as listed in Organizations for
     * Explorer. If you specify <code>SyncFromSource</code>, you must provide a value
     * for <code>SyncSource</code>. The default value is
     * <code>SyncToDestination</code>.</p>
     */
    inline const Aws::String& GetSyncType() const { return m_syncType; }
    inline bool SyncTypeHasBeenSet() const { return m_syncTypeHasBeenSet; }
    template<typename SyncTypeT = Aws::String>
    void SetSyncType(SyncTypeT&& value) { m_syncTypeHasBeenSet = true; m_syncType = std::forward<SyncTypeT>(value); }
    template<typename SyncTypeT = Aws::String>
    CreateResourceDataSyncRequest& WithSyncType(SyncTypeT&& value) { SetSyncType(std::forward<SyncTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify information about the data sources to synchronize. This parameter is
     * required if the <code>SyncType</code> value is SyncFromSource.</p>
     */
    inline const ResourceDataSyncSource& GetSyncSource() const { return m_syncSource; }
    inline bool SyncSourceHasBeenSet() const { return m_syncSourceHasBeenSet; }
    template<typename SyncSourceT = ResourceDataSyncSource>
    void SetSyncSource(SyncSourceT&& value) { m_syncSourceHasBeenSet = true; m_syncSource = std::forward<SyncSourceT>(value); }
    template<typename SyncSourceT = ResourceDataSyncSource>
    CreateResourceDataSyncRequest& WithSyncSource(SyncSourceT&& value) { SetSyncSource(std::forward<SyncSourceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_syncName;
    bool m_syncNameHasBeenSet = false;

    ResourceDataSyncS3Destination m_s3Destination;
    bool m_s3DestinationHasBeenSet = false;

    Aws::String m_syncType;
    bool m_syncTypeHasBeenSet = false;

    ResourceDataSyncSource m_syncSource;
    bool m_syncSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
