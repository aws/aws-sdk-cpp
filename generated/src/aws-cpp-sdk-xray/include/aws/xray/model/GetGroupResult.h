/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/model/Group.h>
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
namespace XRay
{
namespace Model
{
  class GetGroupResult
  {
  public:
    AWS_XRAY_API GetGroupResult();
    AWS_XRAY_API GetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API GetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The group that was requested. Contains the name of the group, the ARN of the
     * group, the filter expression, and the insight configuration assigned to the
     * group.</p>
     */
    inline const Group& GetGroup() const{ return m_group; }

    /**
     * <p>The group that was requested. Contains the name of the group, the ARN of the
     * group, the filter expression, and the insight configuration assigned to the
     * group.</p>
     */
    inline void SetGroup(const Group& value) { m_group = value; }

    /**
     * <p>The group that was requested. Contains the name of the group, the ARN of the
     * group, the filter expression, and the insight configuration assigned to the
     * group.</p>
     */
    inline void SetGroup(Group&& value) { m_group = std::move(value); }

    /**
     * <p>The group that was requested. Contains the name of the group, the ARN of the
     * group, the filter expression, and the insight configuration assigned to the
     * group.</p>
     */
    inline GetGroupResult& WithGroup(const Group& value) { SetGroup(value); return *this;}

    /**
     * <p>The group that was requested. Contains the name of the group, the ARN of the
     * group, the filter expression, and the insight configuration assigned to the
     * group.</p>
     */
    inline GetGroupResult& WithGroup(Group&& value) { SetGroup(std::move(value)); return *this;}

  private:

    Group m_group;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
