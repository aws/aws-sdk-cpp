/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/SMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SMS
{
namespace Model
{

  /**
   */
  class StartOnDemandReplicationRunRequest : public SMSRequest
  {
  public:
    AWS_SMS_API StartOnDemandReplicationRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartOnDemandReplicationRun"; }

    AWS_SMS_API Aws::String SerializePayload() const override;

    AWS_SMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the replication job.</p>
     */
    inline const Aws::String& GetReplicationJobId() const{ return m_replicationJobId; }

    /**
     * <p>The ID of the replication job.</p>
     */
    inline bool ReplicationJobIdHasBeenSet() const { return m_replicationJobIdHasBeenSet; }

    /**
     * <p>The ID of the replication job.</p>
     */
    inline void SetReplicationJobId(const Aws::String& value) { m_replicationJobIdHasBeenSet = true; m_replicationJobId = value; }

    /**
     * <p>The ID of the replication job.</p>
     */
    inline void SetReplicationJobId(Aws::String&& value) { m_replicationJobIdHasBeenSet = true; m_replicationJobId = std::move(value); }

    /**
     * <p>The ID of the replication job.</p>
     */
    inline void SetReplicationJobId(const char* value) { m_replicationJobIdHasBeenSet = true; m_replicationJobId.assign(value); }

    /**
     * <p>The ID of the replication job.</p>
     */
    inline StartOnDemandReplicationRunRequest& WithReplicationJobId(const Aws::String& value) { SetReplicationJobId(value); return *this;}

    /**
     * <p>The ID of the replication job.</p>
     */
    inline StartOnDemandReplicationRunRequest& WithReplicationJobId(Aws::String&& value) { SetReplicationJobId(std::move(value)); return *this;}

    /**
     * <p>The ID of the replication job.</p>
     */
    inline StartOnDemandReplicationRunRequest& WithReplicationJobId(const char* value) { SetReplicationJobId(value); return *this;}


    /**
     * <p>The description of the replication run.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the replication run.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the replication run.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the replication run.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the replication run.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the replication run.</p>
     */
    inline StartOnDemandReplicationRunRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the replication run.</p>
     */
    inline StartOnDemandReplicationRunRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the replication run.</p>
     */
    inline StartOnDemandReplicationRunRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_replicationJobId;
    bool m_replicationJobIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
