/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/AWSServiceName.h>
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
namespace Outposts
{
namespace Model
{

  /**
   * <p>User-specified instances that must not be stopped. These instances will not
   * appear in the list of instances that Amazon Web Services recommends to stop in
   * order to free up capacity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/InstancesToExclude">AWS
   * API Reference</a></p>
   */
  class InstancesToExclude
  {
  public:
    AWS_OUTPOSTS_API InstancesToExclude() = default;
    AWS_OUTPOSTS_API InstancesToExclude(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API InstancesToExclude& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of user-specified instances that must not be stopped.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstances() const { return m_instances; }
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }
    template<typename InstancesT = Aws::Vector<Aws::String>>
    void SetInstances(InstancesT&& value) { m_instancesHasBeenSet = true; m_instances = std::forward<InstancesT>(value); }
    template<typename InstancesT = Aws::Vector<Aws::String>>
    InstancesToExclude& WithInstances(InstancesT&& value) { SetInstances(std::forward<InstancesT>(value)); return *this;}
    template<typename InstancesT = Aws::String>
    InstancesToExclude& AddInstances(InstancesT&& value) { m_instancesHasBeenSet = true; m_instances.emplace_back(std::forward<InstancesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>IDs of the accounts that own each instance that must not be stopped.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const { return m_accountIds; }
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    void SetAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::forward<AccountIdsT>(value); }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    InstancesToExclude& WithAccountIds(AccountIdsT&& value) { SetAccountIds(std::forward<AccountIdsT>(value)); return *this;}
    template<typename AccountIdsT = Aws::String>
    InstancesToExclude& AddAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds.emplace_back(std::forward<AccountIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Names of the services that own each instance that must not be stopped in
     * order to free up the capacity needed to run the capacity task.</p>
     */
    inline const Aws::Vector<AWSServiceName>& GetServices() const { return m_services; }
    inline bool ServicesHasBeenSet() const { return m_servicesHasBeenSet; }
    template<typename ServicesT = Aws::Vector<AWSServiceName>>
    void SetServices(ServicesT&& value) { m_servicesHasBeenSet = true; m_services = std::forward<ServicesT>(value); }
    template<typename ServicesT = Aws::Vector<AWSServiceName>>
    InstancesToExclude& WithServices(ServicesT&& value) { SetServices(std::forward<ServicesT>(value)); return *this;}
    inline InstancesToExclude& AddServices(AWSServiceName value) { m_servicesHasBeenSet = true; m_services.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_instances;
    bool m_instancesHasBeenSet = false;

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    Aws::Vector<AWSServiceName> m_services;
    bool m_servicesHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
