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
    AWS_SMS_API StartOnDemandReplicationRunRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartOnDemandReplicationRun"; }

    AWS_SMS_API Aws::String SerializePayload() const override;

    AWS_SMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the replication job.</p>
     */
    inline const Aws::String& GetReplicationJobId() const { return m_replicationJobId; }
    inline bool ReplicationJobIdHasBeenSet() const { return m_replicationJobIdHasBeenSet; }
    template<typename ReplicationJobIdT = Aws::String>
    void SetReplicationJobId(ReplicationJobIdT&& value) { m_replicationJobIdHasBeenSet = true; m_replicationJobId = std::forward<ReplicationJobIdT>(value); }
    template<typename ReplicationJobIdT = Aws::String>
    StartOnDemandReplicationRunRequest& WithReplicationJobId(ReplicationJobIdT&& value) { SetReplicationJobId(std::forward<ReplicationJobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the replication run.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    StartOnDemandReplicationRunRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_replicationJobId;
    bool m_replicationJobIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
