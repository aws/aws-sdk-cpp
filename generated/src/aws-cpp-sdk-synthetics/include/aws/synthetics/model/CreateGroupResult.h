/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/model/Group.h>
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
namespace Synthetics
{
namespace Model
{
  class CreateGroupResult
  {
  public:
    AWS_SYNTHETICS_API CreateGroupResult();
    AWS_SYNTHETICS_API CreateGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SYNTHETICS_API CreateGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that contains information about the group that was just
     * created.</p>
     */
    inline const Group& GetGroup() const{ return m_group; }

    /**
     * <p>A structure that contains information about the group that was just
     * created.</p>
     */
    inline void SetGroup(const Group& value) { m_group = value; }

    /**
     * <p>A structure that contains information about the group that was just
     * created.</p>
     */
    inline void SetGroup(Group&& value) { m_group = std::move(value); }

    /**
     * <p>A structure that contains information about the group that was just
     * created.</p>
     */
    inline CreateGroupResult& WithGroup(const Group& value) { SetGroup(value); return *this;}

    /**
     * <p>A structure that contains information about the group that was just
     * created.</p>
     */
    inline CreateGroupResult& WithGroup(Group&& value) { SetGroup(std::move(value)); return *this;}

  private:

    Group m_group;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
