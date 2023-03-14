/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/model/ProtectionGroup.h>
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
namespace Shield
{
namespace Model
{
  class DescribeProtectionGroupResult
  {
  public:
    AWS_SHIELD_API DescribeProtectionGroupResult();
    AWS_SHIELD_API DescribeProtectionGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SHIELD_API DescribeProtectionGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A grouping of protected resources that you and Shield Advanced can monitor as
     * a collective. This resource grouping improves the accuracy of detection and
     * reduces false positives. </p>
     */
    inline const ProtectionGroup& GetProtectionGroup() const{ return m_protectionGroup; }

    /**
     * <p>A grouping of protected resources that you and Shield Advanced can monitor as
     * a collective. This resource grouping improves the accuracy of detection and
     * reduces false positives. </p>
     */
    inline void SetProtectionGroup(const ProtectionGroup& value) { m_protectionGroup = value; }

    /**
     * <p>A grouping of protected resources that you and Shield Advanced can monitor as
     * a collective. This resource grouping improves the accuracy of detection and
     * reduces false positives. </p>
     */
    inline void SetProtectionGroup(ProtectionGroup&& value) { m_protectionGroup = std::move(value); }

    /**
     * <p>A grouping of protected resources that you and Shield Advanced can monitor as
     * a collective. This resource grouping improves the accuracy of detection and
     * reduces false positives. </p>
     */
    inline DescribeProtectionGroupResult& WithProtectionGroup(const ProtectionGroup& value) { SetProtectionGroup(value); return *this;}

    /**
     * <p>A grouping of protected resources that you and Shield Advanced can monitor as
     * a collective. This resource grouping improves the accuracy of detection and
     * reduces false positives. </p>
     */
    inline DescribeProtectionGroupResult& WithProtectionGroup(ProtectionGroup&& value) { SetProtectionGroup(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeProtectionGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeProtectionGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeProtectionGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ProtectionGroup m_protectionGroup;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
