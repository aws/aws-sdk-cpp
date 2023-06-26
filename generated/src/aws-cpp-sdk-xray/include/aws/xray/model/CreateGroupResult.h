/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/model/Group.h>
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
namespace XRay
{
namespace Model
{
  class CreateGroupResult
  {
  public:
    AWS_XRAY_API CreateGroupResult();
    AWS_XRAY_API CreateGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API CreateGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The group that was created. Contains the name of the group that was created,
     * the Amazon Resource Name (ARN) of the group that was generated based on the
     * group name, the filter expression, and the insight configuration that was
     * assigned to the group.</p>
     */
    inline const Group& GetGroup() const{ return m_group; }

    /**
     * <p>The group that was created. Contains the name of the group that was created,
     * the Amazon Resource Name (ARN) of the group that was generated based on the
     * group name, the filter expression, and the insight configuration that was
     * assigned to the group.</p>
     */
    inline void SetGroup(const Group& value) { m_group = value; }

    /**
     * <p>The group that was created. Contains the name of the group that was created,
     * the Amazon Resource Name (ARN) of the group that was generated based on the
     * group name, the filter expression, and the insight configuration that was
     * assigned to the group.</p>
     */
    inline void SetGroup(Group&& value) { m_group = std::move(value); }

    /**
     * <p>The group that was created. Contains the name of the group that was created,
     * the Amazon Resource Name (ARN) of the group that was generated based on the
     * group name, the filter expression, and the insight configuration that was
     * assigned to the group.</p>
     */
    inline CreateGroupResult& WithGroup(const Group& value) { SetGroup(value); return *this;}

    /**
     * <p>The group that was created. Contains the name of the group that was created,
     * the Amazon Resource Name (ARN) of the group that was generated based on the
     * group name, the filter expression, and the insight configuration that was
     * assigned to the group.</p>
     */
    inline CreateGroupResult& WithGroup(Group&& value) { SetGroup(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Group m_group;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
