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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBSecurityGroupMessage">AWS
   * API Reference</a></p>
   */
  class DeleteDBSecurityGroupRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DeleteDBSecurityGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDBSecurityGroup"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the DB security group to delete.</p>  <p>You can't delete
     * the default DB security group.</p>  <p>Constraints:</p> <ul> <li> <p>Must
     * be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> <li> <p>Must not be "Default"</p> </li> </ul>
     */
    inline const Aws::String& GetDBSecurityGroupName() const { return m_dBSecurityGroupName; }
    inline bool DBSecurityGroupNameHasBeenSet() const { return m_dBSecurityGroupNameHasBeenSet; }
    template<typename DBSecurityGroupNameT = Aws::String>
    void SetDBSecurityGroupName(DBSecurityGroupNameT&& value) { m_dBSecurityGroupNameHasBeenSet = true; m_dBSecurityGroupName = std::forward<DBSecurityGroupNameT>(value); }
    template<typename DBSecurityGroupNameT = Aws::String>
    DeleteDBSecurityGroupRequest& WithDBSecurityGroupName(DBSecurityGroupNameT&& value) { SetDBSecurityGroupName(std::forward<DBSecurityGroupNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dBSecurityGroupName;
    bool m_dBSecurityGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
