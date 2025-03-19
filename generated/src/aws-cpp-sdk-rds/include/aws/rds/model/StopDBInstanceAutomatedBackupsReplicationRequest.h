/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class StopDBInstanceAutomatedBackupsReplicationRequest : public RDSRequest
  {
  public:
    AWS_RDS_API StopDBInstanceAutomatedBackupsReplicationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopDBInstanceAutomatedBackupsReplication"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the source DB instance for which to stop
     * replicating automate backups, for example,
     * <code>arn:aws:rds:us-west-2:123456789012:db:mydatabase</code>.</p>
     */
    inline const Aws::String& GetSourceDBInstanceArn() const { return m_sourceDBInstanceArn; }
    inline bool SourceDBInstanceArnHasBeenSet() const { return m_sourceDBInstanceArnHasBeenSet; }
    template<typename SourceDBInstanceArnT = Aws::String>
    void SetSourceDBInstanceArn(SourceDBInstanceArnT&& value) { m_sourceDBInstanceArnHasBeenSet = true; m_sourceDBInstanceArn = std::forward<SourceDBInstanceArnT>(value); }
    template<typename SourceDBInstanceArnT = Aws::String>
    StopDBInstanceAutomatedBackupsReplicationRequest& WithSourceDBInstanceArn(SourceDBInstanceArnT&& value) { SetSourceDBInstanceArn(std::forward<SourceDBInstanceArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceDBInstanceArn;
    bool m_sourceDBInstanceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
