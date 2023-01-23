/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/model/Group.h>
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
  class DeleteGroupResult
  {
  public:
    AWS_RESOURCEGROUPS_API DeleteGroupResult();
    AWS_RESOURCEGROUPS_API DeleteGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPS_API DeleteGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A full description of the deleted resource group.</p>
     */
    inline const Group& GetGroup() const{ return m_group; }

    /**
     * <p>A full description of the deleted resource group.</p>
     */
    inline void SetGroup(const Group& value) { m_group = value; }

    /**
     * <p>A full description of the deleted resource group.</p>
     */
    inline void SetGroup(Group&& value) { m_group = std::move(value); }

    /**
     * <p>A full description of the deleted resource group.</p>
     */
    inline DeleteGroupResult& WithGroup(const Group& value) { SetGroup(value); return *this;}

    /**
     * <p>A full description of the deleted resource group.</p>
     */
    inline DeleteGroupResult& WithGroup(Group&& value) { SetGroup(std::move(value)); return *this;}

  private:

    Group m_group;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
