/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/resource-explorer-2/model/AWSServiceAccessStatus.h>
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
namespace ResourceExplorer2
{
namespace Model
{

  /**
   * <p>This is a structure that contains the status of Amazon Web Services service
   * access, and whether you have a valid service-linked role to enable multi-account
   * search for your organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/OrgConfiguration">AWS
   * API Reference</a></p>
   */
  class OrgConfiguration
  {
  public:
    AWS_RESOURCEEXPLORER2_API OrgConfiguration() = default;
    AWS_RESOURCEEXPLORER2_API OrgConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API OrgConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This value displays whether your Amazon Web Services service access is
     * <code>ENABLED</code> or <code>DISABLED</code>.</p>
     */
    inline AWSServiceAccessStatus GetAWSServiceAccessStatus() const { return m_aWSServiceAccessStatus; }
    inline bool AWSServiceAccessStatusHasBeenSet() const { return m_aWSServiceAccessStatusHasBeenSet; }
    inline void SetAWSServiceAccessStatus(AWSServiceAccessStatus value) { m_aWSServiceAccessStatusHasBeenSet = true; m_aWSServiceAccessStatus = value; }
    inline OrgConfiguration& WithAWSServiceAccessStatus(AWSServiceAccessStatus value) { SetAWSServiceAccessStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This value shows whether or not you have a valid a service-linked role
     * required to start the multi-account search feature.</p>
     */
    inline const Aws::String& GetServiceLinkedRole() const { return m_serviceLinkedRole; }
    inline bool ServiceLinkedRoleHasBeenSet() const { return m_serviceLinkedRoleHasBeenSet; }
    template<typename ServiceLinkedRoleT = Aws::String>
    void SetServiceLinkedRole(ServiceLinkedRoleT&& value) { m_serviceLinkedRoleHasBeenSet = true; m_serviceLinkedRole = std::forward<ServiceLinkedRoleT>(value); }
    template<typename ServiceLinkedRoleT = Aws::String>
    OrgConfiguration& WithServiceLinkedRole(ServiceLinkedRoleT&& value) { SetServiceLinkedRole(std::forward<ServiceLinkedRoleT>(value)); return *this;}
    ///@}
  private:

    AWSServiceAccessStatus m_aWSServiceAccessStatus{AWSServiceAccessStatus::NOT_SET};
    bool m_aWSServiceAccessStatusHasBeenSet = false;

    Aws::String m_serviceLinkedRole;
    bool m_serviceLinkedRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
