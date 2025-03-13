/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/model/GroupConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ResourceGroups
{
namespace Model
{
  class GetGroupConfigurationResult
  {
  public:
    AWS_RESOURCEGROUPS_API GetGroupConfigurationResult() = default;
    AWS_RESOURCEGROUPS_API GetGroupConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPS_API GetGroupConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure that describes the service configuration attached with the
     * specified group. For details about the service configuration syntax, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html">Service
     * configurations for Resource Groups</a>.</p>
     */
    inline const GroupConfiguration& GetGroupConfiguration() const { return m_groupConfiguration; }
    template<typename GroupConfigurationT = GroupConfiguration>
    void SetGroupConfiguration(GroupConfigurationT&& value) { m_groupConfigurationHasBeenSet = true; m_groupConfiguration = std::forward<GroupConfigurationT>(value); }
    template<typename GroupConfigurationT = GroupConfiguration>
    GetGroupConfigurationResult& WithGroupConfiguration(GroupConfigurationT&& value) { SetGroupConfiguration(std::forward<GroupConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetGroupConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    GroupConfiguration m_groupConfiguration;
    bool m_groupConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
