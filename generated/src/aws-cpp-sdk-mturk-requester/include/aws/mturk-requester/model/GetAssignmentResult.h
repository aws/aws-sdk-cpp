/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/model/Assignment.h>
#include <aws/mturk-requester/model/HIT.h>
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
namespace MTurk
{
namespace Model
{
  class GetAssignmentResult
  {
  public:
    AWS_MTURK_API GetAssignmentResult();
    AWS_MTURK_API GetAssignmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MTURK_API GetAssignmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The assignment. The response includes one Assignment element. </p>
     */
    inline const Assignment& GetAssignment() const{ return m_assignment; }

    /**
     * <p> The assignment. The response includes one Assignment element. </p>
     */
    inline void SetAssignment(const Assignment& value) { m_assignment = value; }

    /**
     * <p> The assignment. The response includes one Assignment element. </p>
     */
    inline void SetAssignment(Assignment&& value) { m_assignment = std::move(value); }

    /**
     * <p> The assignment. The response includes one Assignment element. </p>
     */
    inline GetAssignmentResult& WithAssignment(const Assignment& value) { SetAssignment(value); return *this;}

    /**
     * <p> The assignment. The response includes one Assignment element. </p>
     */
    inline GetAssignmentResult& WithAssignment(Assignment&& value) { SetAssignment(std::move(value)); return *this;}


    /**
     * <p> The HIT associated with this assignment. The response includes one HIT
     * element.</p>
     */
    inline const HIT& GetHIT() const{ return m_hIT; }

    /**
     * <p> The HIT associated with this assignment. The response includes one HIT
     * element.</p>
     */
    inline void SetHIT(const HIT& value) { m_hIT = value; }

    /**
     * <p> The HIT associated with this assignment. The response includes one HIT
     * element.</p>
     */
    inline void SetHIT(HIT&& value) { m_hIT = std::move(value); }

    /**
     * <p> The HIT associated with this assignment. The response includes one HIT
     * element.</p>
     */
    inline GetAssignmentResult& WithHIT(const HIT& value) { SetHIT(value); return *this;}

    /**
     * <p> The HIT associated with this assignment. The response includes one HIT
     * element.</p>
     */
    inline GetAssignmentResult& WithHIT(HIT&& value) { SetHIT(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAssignmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAssignmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAssignmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Assignment m_assignment;

    HIT m_hIT;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
