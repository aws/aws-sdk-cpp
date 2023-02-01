/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/model/Assignment.h>
#include <aws/mturk-requester/model/HIT.h>
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

  private:

    Assignment m_assignment;

    HIT m_hIT;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
