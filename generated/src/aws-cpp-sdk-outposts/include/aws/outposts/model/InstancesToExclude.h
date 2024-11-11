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
    AWS_OUTPOSTS_API InstancesToExclude();
    AWS_OUTPOSTS_API InstancesToExclude(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API InstancesToExclude& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of user-specified instances that must not be stopped.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstances() const{ return m_instances; }
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }
    inline void SetInstances(const Aws::Vector<Aws::String>& value) { m_instancesHasBeenSet = true; m_instances = value; }
    inline void SetInstances(Aws::Vector<Aws::String>&& value) { m_instancesHasBeenSet = true; m_instances = std::move(value); }
    inline InstancesToExclude& WithInstances(const Aws::Vector<Aws::String>& value) { SetInstances(value); return *this;}
    inline InstancesToExclude& WithInstances(Aws::Vector<Aws::String>&& value) { SetInstances(std::move(value)); return *this;}
    inline InstancesToExclude& AddInstances(const Aws::String& value) { m_instancesHasBeenSet = true; m_instances.push_back(value); return *this; }
    inline InstancesToExclude& AddInstances(Aws::String&& value) { m_instancesHasBeenSet = true; m_instances.push_back(std::move(value)); return *this; }
    inline InstancesToExclude& AddInstances(const char* value) { m_instancesHasBeenSet = true; m_instances.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>IDs of the accounts that own each instance that must not be stopped.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }
    inline InstancesToExclude& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}
    inline InstancesToExclude& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}
    inline InstancesToExclude& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }
    inline InstancesToExclude& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }
    inline InstancesToExclude& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Names of the services that own each instance that must not be stopped in
     * order to free up the capacity needed to run the capacity task.</p>
     */
    inline const Aws::Vector<AWSServiceName>& GetServices() const{ return m_services; }
    inline bool ServicesHasBeenSet() const { return m_servicesHasBeenSet; }
    inline void SetServices(const Aws::Vector<AWSServiceName>& value) { m_servicesHasBeenSet = true; m_services = value; }
    inline void SetServices(Aws::Vector<AWSServiceName>&& value) { m_servicesHasBeenSet = true; m_services = std::move(value); }
    inline InstancesToExclude& WithServices(const Aws::Vector<AWSServiceName>& value) { SetServices(value); return *this;}
    inline InstancesToExclude& WithServices(Aws::Vector<AWSServiceName>&& value) { SetServices(std::move(value)); return *this;}
    inline InstancesToExclude& AddServices(const AWSServiceName& value) { m_servicesHasBeenSet = true; m_services.push_back(value); return *this; }
    inline InstancesToExclude& AddServices(AWSServiceName&& value) { m_servicesHasBeenSet = true; m_services.push_back(std::move(value)); return *this; }
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
