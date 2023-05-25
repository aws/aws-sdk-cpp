/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/model/Qualification.h>
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
  class GetQualificationScoreResult
  {
  public:
    AWS_MTURK_API GetQualificationScoreResult();
    AWS_MTURK_API GetQualificationScoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MTURK_API GetQualificationScoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The Qualification data structure of the Qualification assigned to a user,
     * including the Qualification type and the value (score). </p>
     */
    inline const Qualification& GetQualification() const{ return m_qualification; }

    /**
     * <p> The Qualification data structure of the Qualification assigned to a user,
     * including the Qualification type and the value (score). </p>
     */
    inline void SetQualification(const Qualification& value) { m_qualification = value; }

    /**
     * <p> The Qualification data structure of the Qualification assigned to a user,
     * including the Qualification type and the value (score). </p>
     */
    inline void SetQualification(Qualification&& value) { m_qualification = std::move(value); }

    /**
     * <p> The Qualification data structure of the Qualification assigned to a user,
     * including the Qualification type and the value (score). </p>
     */
    inline GetQualificationScoreResult& WithQualification(const Qualification& value) { SetQualification(value); return *this;}

    /**
     * <p> The Qualification data structure of the Qualification assigned to a user,
     * including the Qualification type and the value (score). </p>
     */
    inline GetQualificationScoreResult& WithQualification(Qualification&& value) { SetQualification(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetQualificationScoreResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetQualificationScoreResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetQualificationScoreResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Qualification m_qualification;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
