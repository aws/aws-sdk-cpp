/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about an option group membership for a DB cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRdsDbClusterOptionGroupMembership">AWS
   * API Reference</a></p>
   */
  class AwsRdsDbClusterOptionGroupMembership
  {
  public:
    AWS_SECURITYHUB_API AwsRdsDbClusterOptionGroupMembership() = default;
    AWS_SECURITYHUB_API AwsRdsDbClusterOptionGroupMembership(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsDbClusterOptionGroupMembership& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the DB cluster option group.</p>
     */
    inline const Aws::String& GetDbClusterOptionGroupName() const { return m_dbClusterOptionGroupName; }
    inline bool DbClusterOptionGroupNameHasBeenSet() const { return m_dbClusterOptionGroupNameHasBeenSet; }
    template<typename DbClusterOptionGroupNameT = Aws::String>
    void SetDbClusterOptionGroupName(DbClusterOptionGroupNameT&& value) { m_dbClusterOptionGroupNameHasBeenSet = true; m_dbClusterOptionGroupName = std::forward<DbClusterOptionGroupNameT>(value); }
    template<typename DbClusterOptionGroupNameT = Aws::String>
    AwsRdsDbClusterOptionGroupMembership& WithDbClusterOptionGroupName(DbClusterOptionGroupNameT&& value) { SetDbClusterOptionGroupName(std::forward<DbClusterOptionGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the DB cluster option group.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    AwsRdsDbClusterOptionGroupMembership& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dbClusterOptionGroupName;
    bool m_dbClusterOptionGroupNameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
